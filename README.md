# meta-amanda
OpenEmbedded layer demonstrating AMANDA

Add these lines to local.conf:

```
CORE_IMAGE_EXTRA_INSTALL_append = "amanda amanda-demo backup-setup"
IMAGE_FEATURES_append = " ssh-server-openssh"

# Choose version of perl
#PREFERRED_VERSION_perl = "5.20.0"
#PREFERRED_VERSION_perl-native = "5.20.0"
PREFERRED_VERSION_perl = "5.22.1"
PREFERRED_VERSION_perl-native = "5.22.1"

# perl doesn't seem to play nice with GCC 5.x
GCCVERSION ?= "4.9%"
```

To test **amanda**, build a minimal image, e.g. **core-image-base**.

```
my-target login: root
root@my-target:~# su -l amandabackup
my-target:~$ export PATH=$PATH:/usr/sbin
my-target:~$ amcheck demo
Amanda Tape Server Host Check
-----------------------------
Holding disk /var/backups/amanda/demo/holding: 3342336 kB disk space available, using 51200 kB as requested
slot 1: contains an empty volume
Will write label 'MyData01' to new volume in slot 1.
NOTE: skipping tape-writable test
NOTE: host info dir /var/backups/amanda/demo/state/curinfo/localhost does not exist
NOTE: it will be created on the next run.
NOTE: index dir /var/backups/amanda/demo/state/index/localhost does not exist
NOTE: it will be created on the next run.
Server check took 1.271 seconds

Amanda Backup Client Hosts Check
--------------------------------
Client check: 1 host checked in 1.143 seconds.  0 problems found.

(brought to you by Amanda 3.3.9)
my-target:~$ amdump demo
my-target:~$ amstatus demo
Using /var/backups/amanda/demo/state/log/amdump.1
From Sun Mar 13 05:19:13 UTC 2016

localhost:/etc 0      5950k finished (5:19:16)

SUMMARY          part      real  estimated
                           size       size
partition       :   1
estimated       :   1                 5950k
flush           :   0         0k
failed          :   0                    0k           (  0.00%)
wait for dumping:   0                    0k           (  0.00%)
dumping to tape :   0                    0sunit           (  0.00%)
dumping         :   0         0k         0k (  0.00%) (  0.00%)
dumped          :   1      5950k      5950k (100.00%) (100.00%)
wait for writing:   0         0k         0k (  0.00%) (  0.00%)
wait to flush   :   0         0k         0k (100.00%) (  0.00%)
writing to tape :   0         0k         0k (  0.00%) (  0.00%)
failed to tape  :   0         0k         0k (  0.00%) (  0.00%)
taped           :   1      5950k      5950k (100.00%) (100.00%)
  tape 1        :   1      5950k      5950k (  5.81%) MyData01 (1 chunks)
10 dumpers idle : 0
taper 0 status: Idle
taper qlen: 0
network free kps:     80000
holding space   :     51200k (100.00%)
chunker0 busy   :  0:00:01  ( 50.34%)
 dumper0 busy   :  0:00:01  ( 49.06%)
   taper busy   :  0:00:00  (  4.40%)
 0 dumpers busy :  0:00:01  ( 50.64%)                   0:  0:00:01  (100.00%)
 1 dumper busy  :  0:00:01  ( 49.13%)                   0:  0:00:01  (100.00%)
my-target:~$ exit
logout
root@my-target:~# find /var/backups/ | sort
/var/backups/
/var/backups/amanda
/var/backups/amanda/demo
/var/backups/amanda/demo/holding
/var/backups/amanda/demo/state
/var/backups/amanda/demo/state/curinfo
/var/backups/amanda/demo/state/curinfo/localhost
/var/backups/amanda/demo/state/curinfo/localhost/_etc
/var/backups/amanda/demo/state/curinfo/localhost/_etc/info
/var/backups/amanda/demo/state/index
/var/backups/amanda/demo/state/index/localhost
/var/backups/amanda/demo/state/index/localhost/_etc
/var/backups/amanda/demo/state/index/localhost/_etc/20160313051913_0.gz
/var/backups/amanda/demo/state/index/localhost/_etc/20160313051913_0.header
/var/backups/amanda/demo/state/log
/var/backups/amanda/demo/state/log/amdump.1
/var/backups/amanda/demo/state/log/amdump.20160313051913
/var/backups/amanda/demo/state/log/log.20160313051913.0
/var/backups/amanda/demo/state/log/oldlog
/var/backups/amanda/demo/vtapes
/var/backups/amanda/demo/vtapes/data
/var/backups/amanda/demo/vtapes/slot1
/var/backups/amanda/demo/vtapes/slot1/00000.MyData01
/var/backups/amanda/demo/vtapes/slot1/00001.localhost._etc.0
/var/backups/amanda/demo/vtapes/slot2
/var/backups/amanda/demo/vtapes/slot3
/var/backups/amanda/demo/vtapes/slot4
root@my-target:~# mkdir test_etc
root@my-target:~# dd if=/var/backups/amanda/demo/vtapes/slot1/00001.localhost._etc.0 bs=32k skip=1 conv=notrunc | tar -xf - -C test_etc
root@my-target:~# diff -ur /etc test_etc
--- /etc/amanda/demo/changer
+++ test_etc/amanda/demo/changer
@@ -1,6 +1,7 @@
 $STATE = {
            'drives' => {
-                         '/var/backups/amanda/demo/vtapes/drive0' => {}
-                       },
-           'meta' => undef
+                         '/var/backups/amanda/demo/vtapes/drive0' => {
+                                                                       'pid' => 957
+                                                                     }
+                       }
          };
--- /etc/amanda/demo/tapelist
+++ test_etc/amanda/demo/tapelist
@@ -1 +0,0 @@
-20160313051913 MyData01 reuse BLOCKSIZE:32
Only in /etc: amanda/demo/tapelist.lock

```

## Test results

Sadly, at many targets, **perl** and/or **amanda** fail to run properly.
This was tested using **amanda-3.3.9** (the latest available) and either
**perl-5.20.0** (poky/2015-04-20) or **perl-5.22.1** (poky/2016-03-10).

| target | **perl-5.20.0** | **perl-5.22.1** |
|--------|-----------------|-----------------|
| mips   | **OK** **OK**   | **FAIL**  **OK** |
| mips64 | **FAIL** **FAIL**   | **FAIL**  **OK** |

## Bug?  Where/how to file?

Should I file a bug on this?

| First Header  | Second Header |
| ------------- | ------------- |
| Content Cell  | Content Cell  |
| Content Cell  | Content Cell  |

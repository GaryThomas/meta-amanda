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

Sadly, on many targets, **perl** and/or **amanda** fail to run properly.
This was tested using **amanda-3.3.9** (the latest available) and either
**perl-5.20.0** (poky/2015-04-20) or **perl-5.22.1** (poky/2016-03-10).

| target | **amanda** | **perl-5.20.0 -V** | **amanda** | **perl-5.22.1 -V** |
|--------|------------|--------------------|------------|--------------------|
| qemumips   | **OK**     | **OK**             | **FAIL/SV**   | **OK**             |
| qemumips64 | **FAIL/Short Data**   | **FAIL/SV**           | **FAIL/Short Data**   | **OK**             |
| qemux86    | **FAIL/SV**   | **FAIL/SV**           | **FAIL/SV**   | **OK**             |
| qemux86-64 | **FAIL/SV**   | **FAIL/SV**           | **OK**     | **OK**             |
| qemuarm    | **FAIL/SV**   | **FAIL/SV**           | **FAIL/SV**   | **OK**             |
| qemuarm64  | **FAIL/Short Data**   | **OK**             | **FAIL/Short Data**   | **OK**             |
| qemuppc    | **FAIL/SV**   | **OK**             | **FAIL/??**   | **OK**             |
| genericx86    | **FAIL/SV**   | **FAIL/SV**           | **FAIL/SV**   | **OK**             |
| genericx86-64    | **FAIL/SV**   | **FAIL/SV**           | **OK**   | **OK**             |
| i.MX6    | **OK**   | **OK**           | **FAIL/SV**   | **OK**             |
| p1022ds    | **OK**   | **OK**             | **FAIL/SV**   | **OK**             |
| beaglebone    | **OK**   | **OK**             | **FAIL/SV**   | **OK**             |

+ **OK** means the activity was 100% correct
+ **FAIL/SV** means activity failed because of segmentation violation
+ **FAIL/Short Data** means `amdump demo` seemed to run correctly, but not all of the data made it into the final dump.  In this case, there will be some files left over in `/var/backups/amanda/demo/holding` and the `tar` restore will fail.


## Bug?  Where/how to file?

Should I file a bug on this?

The interesting thing is that these programs (**amanda** and **perl**) are widely used and available in many distributions.  I have tested these combinations on my desktop as well as on my target hardware running **Debian** (**ARM**) or **Ubuntu**
(**X86-64**) and they always work correctly, with either version of **perl**.  The **OpenEmbedded** versions of these programs are built without any special patches and are patched to the same condition as **Debian** as far as I can tell (i.e. there are no *important* patches missing from the **OE** builds)

I have built **amanda-3.3.9** and **perl-5.22.0** 100% from scratch natively on my i.MX6 target and it works perfectly.  This was using **amanda-3.3.9** unpatched and **perl-5.22.0** with the **Debian/Ubuntu** patches applied as they would be on a desktop version.  The sources used as well as the script used to configure the packages are in **src** in this repo.

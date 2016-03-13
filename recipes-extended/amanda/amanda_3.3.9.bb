DESCRIPTION = " Amanda, The Advanced Maryland Automatic Network Disk Archiver"
HOMEPAGE = "http://www.amanda.org/"
SECTION = "utilities"
PRIORITY = "optional"
DEPENDS = "glib-2.0 swig-native readline"
LICENSE = "Amanda"
LIC_FILES_CHKSUM = " \
    file://COPYRIGHT;md5=221c4cbd4f4cf56da041b035c94179aa \
"

SRC_URI = " \
	http://downloads.sourceforge.net/project/amanda/amanda%20-%20stable/${PV}/amanda-${PV}.tar.gz \
	file://fake-version.patch \
	file://fake-make_security.patch \
	file://demo/amanda.conf \
	file://demo/disklist \
	file://demo/ssh-key \
	file://demo/ssh-key.pub \
	file://amanda-client.conf \
	file://amanda-mailer \
	file://msmtprc.amanda \
          "
SRC_URI[md5sum] = "51a7d55ee84d250c9d809318b0b3dcbb"
SRC_URI[sha256sum] = "2520b95ca96f1d521d582b7c94bd631486e7029eda1de8e1887d74b323549a41"

inherit autotools-brokensep gettext cpan-base perlnative
export PERL_LIB = "${libdir}/perl/${@get_perl_version(d)}"

# Override configuration to match common distributions (Fedora, Debian)
libexecdir = "/usr/libexec"
libexecdir = "/usr/lib"
CONFIGUREOPTS = " --build=${BUILD_SYS} \
                  --host=${HOST_SYS} \
                  --target=${TARGET_SYS} \
                  --prefix=${prefix} \
                  --bindir=${bindir} \
                  --sbindir=${sbindir} \
                  --sysconfdir=${sysconfdir} \
                  --sharedstatedir=${sharedstatedir} \
                  --localstatedir=${localstatedir} \
                  --libdir=${libdir} \
                  --libexecdir=${libexecdir} \
                  --includedir=${includedir} \
                  --oldincludedir=${oldincludedir} \
                  --infodir=${infodir} \
                  --mandir=${mandir} \
                  --disable-silent-rules \
                  --with-amperldir=${PERL_LIB} \
                  --with-user=amandabackup \
                  --with-group=amandabackup \
                  --with-amdatadir=/var/amanda/lib \
                  --with-gnutar=/bin/tar \
                  --with-gnutar-listdir=/var/amanda/lib/gnutar-lists \
                  --with-index-server=localhost \
                  --with-tape-server=localhost \
                  --with-fqdn \
                  --without-bsd-security \
                  --with-bsdtcp-security \
                  --without-bsdudp-security \
                  --with-ssh-security \
                  --with-libcurl=no \
                  --with-debugging=/var/amanda/log \
                  --with-assertions \
                  --with-security-file=${sysconfdir}/amanda-security.conf \
                  ${CONFIGUREOPT_DEPTRACK}"

CACHED_CONFIGUREVARS += "ac_cv_path_SORT=${bindir}/sort"

# Override default configure step
do_configure() {
    if [ -f ${S}/configure.in ]; then
        mv ${S}/configure.in ${S}/configure.ac
    fi
    rm -f ${S}/aclocal.m4 ${S}/configure
    libtoolize --force --copy
    ./autogen
    oe_runconf
    # Force perl interface files to be recreated from swig templates
    rm -f perl/Amanda/*.c
}

do_install_append() {
    install -d -m 0755 -o root -g root ${D}${sysconfdir}
    install -d -m 0755 -o amandabackup -g amandabackup ${D}${sysconfdir}/amanda
    install -d -m 0755 -o root -g root ${D}/var
    install -d -m 0755 -o root -g root ${D}/var/backups
    install -d -m 0755 -o amandabackup -g amandabackup ${D}/var/backups/amanda
    install -d -m 0755 -o amandabackup -g amandabackup ${D}/var/backups/amanda/demo
    install -d -m 0755 -o amandabackup -g amandabackup ${D}/var/amanda/log
    install -d -m 0755 -o amandabackup -g amandabackup ${D}/var/amanda/lib
    install -d -m 0755 -o amandabackup -g amandabackup ${D}/var/amanda/lib/gnutar-lists
    # Fixup perl scripts (install creates incorrect !shebang line)
    sed -i 's;#!.*/perl;#! /usr/bin/env perl;' ${D}${libexecdir}/amanda/amlogroll
    sed -i 's;#!.*/perl;#! /usr/bin/env perl;' ${D}${libexecdir}/amanda/amdumpd
    sed -i 's;#!.*/perl;#! /usr/bin/env perl;' ${D}${libexecdir}/amanda/amidxtaped
    sed -i 's;#!.*/perl;#! /usr/bin/env perl;' ${D}${libexecdir}/amanda/amcheck-device
    sed -i 's;#!.*/perl;#! /usr/bin/env perl;' ${D}${libexecdir}/amanda/taper
    sed -i 's;#!.*/perl;#! /usr/bin/env perl;' ${D}${sbindir}/amdump
    sed -i 's;#!.*/perl;#! /usr/bin/env perl;' ${D}${sbindir}/amaddclient
    sed -i 's;#!.*/perl;#! /usr/bin/env perl;' ${D}${sbindir}/amcleanup
    sed -i 's;#!.*/perl;#! /usr/bin/env perl;' ${D}${sbindir}/amcleanupdisk
    sed -i 's;#!.*/perl;#! /usr/bin/env perl;' ${D}${sbindir}/amcryptsimple
    sed -i 's;#!.*/perl;#! /usr/bin/env perl;' ${D}${sbindir}/amgpgcrypt
    sed -i 's;#!.*/perl;#! /usr/bin/env perl;' ${D}${sbindir}/amoverview
    sed -i 's;#!.*/perl;#! /usr/bin/env perl;' ${D}${sbindir}/amrmtape
    sed -i 's;#!.*/perl;#! /usr/bin/env perl;' ${D}${sbindir}/amserverconfig
    sed -i 's;#!.*/perl;#! /usr/bin/env perl;' ${D}${sbindir}/amstatus
    sed -i 's;#!.*/perl;#! /usr/bin/env perl;' ${D}${sbindir}/amtoc
    sed -i 's;#!.*/perl;#! /usr/bin/env perl;' ${D}${sbindir}/amcheckdump
    sed -i 's;#!.*/perl;#! /usr/bin/env perl;' ${D}${sbindir}/amdevcheck
    sed -i 's;#!.*/perl;#! /usr/bin/env perl;' ${D}${sbindir}/amdump
    sed -i 's;#!.*/perl;#! /usr/bin/env perl;' ${D}${sbindir}/amdump_client
    sed -i 's;#!.*/perl;#! /usr/bin/env perl;' ${D}${sbindir}/amfetchdump
    sed -i 's;#!.*/perl;#! /usr/bin/env perl;' ${D}${sbindir}/amgetconf
    sed -i 's;#!.*/perl;#! /usr/bin/env perl;' ${D}${sbindir}/amlabel
    sed -i 's;#!.*/perl;#! /usr/bin/env perl;' ${D}${sbindir}/amreport
    sed -i 's;#!.*/perl;#! /usr/bin/env perl;' ${D}${sbindir}/amrestore
    sed -i 's;#!.*/perl;#! /usr/bin/env perl;' ${D}${sbindir}/amtape
    sed -i 's;#!.*/perl;#! /usr/bin/env perl;' ${D}${sbindir}/amtapetype
    sed -i 's;#!.*/perl;#! /usr/bin/env perl;' ${D}${sbindir}/amvault
    sed -i 's;#!.*/perl;#! /usr/bin/env perl;' ${D}${libexecdir}/amanda/application/amlog-script
    sed -i 's;#!.*/perl;#! /usr/bin/env perl;' ${D}${libexecdir}/amanda/application/ampgsql
    sed -i 's;#!.*/perl;#! /usr/bin/env perl;' ${D}${libexecdir}/amanda/application/amraw 
    sed -i 's;#!.*/perl;#! /usr/bin/env perl;' ${D}${libexecdir}/amanda/application/amsamba 
    sed -i 's;#!.*/perl;#! /usr/bin/env perl;' ${D}${libexecdir}/amanda/application/amsuntar
    sed -i 's;#!.*/perl;#! /usr/bin/env perl;' ${D}${libexecdir}/amanda/application/amzfs-sendrecv
    sed -i 's;#!.*/perl;#! /usr/bin/env perl;' ${D}${libexecdir}/amanda/application/amzfs-snapshot
    sed -i 's;#!.*/perl;#! /usr/bin/env perl;' ${D}${libexecdir}/amanda/application/script-email
    # Set up simple test/demo
    install -d -m 0777 -o amandabackup -g amandabackup ${D}${sysconfdir}/amanda/demo
    install -m 0644 -o amandabackup -g amandabackup ${WORKDIR}/amanda-client.conf ${D}${sysconfdir}/amanda/amanda-client.conf
    install -m 0644 -o amandabackup -g amandabackup ${WORKDIR}/demo/amanda.conf ${D}${sysconfdir}/amanda/demo/amanda.conf
    install -m 0644 -o amandabackup -g amandabackup ${WORKDIR}/demo/disklist ${D}${sysconfdir}/amanda/demo/disklist
    install -m 0600 -o amandabackup -g amandabackup ${WORKDIR}/demo/ssh-key ${D}${sysconfdir}/amanda/demo/ssh-key
    install -m 0600 -o amandabackup -g amandabackup ${WORKDIR}/demo/ssh-key.pub ${D}${sysconfdir}/amanda/demo/ssh-key.pub
    touch tapelist
    install -m 0644 -o amandabackup -g amandabackup tapelist ${D}${sysconfdir}/amanda/demo/tapelist
    install -d -m 0777 -o amandabackup -g amandabackup ${D}/var/backups/amanda/demo
    install -d -m 0777 -o amandabackup -g amandabackup ${D}/var/backups/amanda/demo/vtapes
    install -d -m 0777 -o amandabackup -g amandabackup ${D}/var/backups/amanda/demo/vtapes/slot1
    install -d -m 0777 -o amandabackup -g amandabackup ${D}/var/backups/amanda/demo/vtapes/slot2
    install -d -m 0777 -o amandabackup -g amandabackup ${D}/var/backups/amanda/demo/vtapes/slot3
    install -d -m 0777 -o amandabackup -g amandabackup ${D}/var/backups/amanda/demo/vtapes/slot4
    install -d -m 0777 -o amandabackup -g amandabackup ${D}/var/backups/amanda/demo/holding
    install -d -m 0777 -o amandabackup -g amandabackup ${D}/var/backups/amanda/demo/state
    install -d -m 0777 -o amandabackup -g amandabackup ${D}/var/backups/amanda/demo/state/curinfo
    install -d -m 0777 -o amandabackup -g amandabackup ${D}/var/backups/amanda/demo/state/log
    install -d -m 0777 -o amandabackup -g amandabackup ${D}/var/backups/amanda/demo/state/index
    # Simple email MTA setup - NEEDS LOCALIZATION
    install -m 0755 -o amandabackup -g amandabackup ${WORKDIR}/amanda-mailer ${D}/${sbindir}/amanda-mailer
    install -m 0644 -o amandabackup -g amandabackup ${WORKDIR}/msmtprc.amanda ${D}${sysconfdir}/msmtprc.amanda
    # Fix ownership of [makefile] installed files
    if [ -f ${D}${sysconfdir}/amanda/amanda-security.conf ]; then
       mv ${D}${sysconfdir}/amanda/amanda-security.conf ${D}${sysconfdir}/amanda-security.conf
       chown    root:root ${D}${sysconfdir}/amanda-security.conf
    fi
    chown -R amandabackup:amandabackup ${D}${sysconfdir}/amanda
    chown -R amandabackup:amandabackup ${D}${sbindir}
    chown -R amandabackup:amandabackup ${D}${libexecdir}/amanda
    chown -R amandabackup:amandabackup ${D}${libexecdir}/perl/*/Amanda
    chown -R amandabackup:amandabackup ${D}${libexecdir}/perl/*/auto/Amanda
    chown -R amandabackup:amandabackup ${D}/var/amanda
    chown -R amandabackup:amandabackup ${D}/var/backups/amanda
    chown -R amandabackup:amandabackup ${D}/usr/share/amanda
    # SUID programs
    chown root:amandabackup ${D}${libexecdir}/amanda/calcsize
    chmod +s ${D}${libexecdir}/amanda/calcsize
    chown root:amandabackup ${D}${libexecdir}/amanda/killpgrp
    chmod +s ${D}${libexecdir}/amanda/killpgrp
    chown root:amandabackup ${D}${libexecdir}/amanda/planner
    chmod +s ${D}${libexecdir}/amanda/planner
    chown root:amandabackup ${D}${libexecdir}/amanda/dumper
    chmod +s ${D}${libexecdir}/amanda/dumper
    chown root:amandabackup ${D}${libexecdir}/amanda/rundump
    chmod +s ${D}${libexecdir}/amanda/rundump
    chown root:amandabackup ${D}${libexecdir}/amanda/runtar
    chmod +s ${D}${libexecdir}/amanda/runtar
    chown root:amandabackup ${D}${sbindir}/amcheck
    chmod +s ${D}${sbindir}/amcheck
    chown root:amandabackup ${D}${sbindir}/amservice
    chmod +s ${D}${sbindir}/amservice
}

# Set up special 'amandabackup' user

inherit useradd

USERADD_PACKAGES = "${PN}"
USERADD_PARAM_${PN} = "--home-dir=/home/amanda \
		       --create-home --system \
                       --groups root,disk,tape,backup \
		       --password='$6$TXYrtULsGy/UwB$Jr/EG5cdJs37VOdH/mkLcReth6E5eclYmyo8990cwUov/70CeobknGs8AdrnKZgp7Vg/x12wg8pefpZH6U7sq/' \
                       --user-group amandabackup"

# Packaging

PACKAGES =+ " ${PN}-demo"
FILES_${PN}-demo += " \
		 ${sysconfdir}/amanda/demo/ \
		 /var/backups/amanda \
"
RDEPENDS_${PN}-demo += "${PN}"
FILES_${PN}-dbg += "${libdir}/perl/*/auto/Amanda/*/.debug \
                    ${libdir}/perl/*/auto/Amanda/*/*/.debug \
		    ${libexecdir}/amanda/.debug \
		    ${libexecdir}/amanda/application/.debug \
"
FILES_${PN} += "${libdir} \
	    ${libexecdir}/amanda/* \
	    /var/backups/amanda \
	    /var/amanda \
	    ${sysconfdir}/amanda \
"

# Suppress warnings about naked .so libraries in main package
INSANE_SKIP_${PN} = "dev-so"

RDEPENDS_${PN} += " perl libxml-simple-perl libxml-parser-perl gzip procps openssh bash \
                    perl-module-lib perl-module-getopt-long perl-module-overloading \
		    perl-module-posix perl-module-file-glob perl-module-base \
		    perl-module-file-basename  perl-module-math-bigint perl-module-math-bigint-calc \
		    perl-module-math-bigint-calcemu perl-module-math-bigint-fastcalc \
		    perl-module-time-localtime perl-module-time-gmtime perl-module-time-local \
		    perl-module-ipc-open3 perl-module-filehandle perl-module-file-copy \
		    perl-module-data-dumper perl-module-bytes perl-module-file-stat \
		    perl-module-io-dir perl-module-file-temp \
		    coreutils bash tar \
"

RRECOMMENDS_${PN} += " msmtp"

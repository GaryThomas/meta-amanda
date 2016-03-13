DESCRIPTION = "Configuration files for Amanda based backup"
LICENSE = "Proprietary"
LIC_FILES_CHKSUM = "file://${COREBASE}/meta/files/common-licenses/Proprietary;md5=0557f9d92cf58f2ccdd50f62f8ac0b28"
DEPENDS = "amanda"

SRC_URI = "\
	file://.bashrc \
"

do_install() {
    install -d -m 0700 -o amandabackup -g amandabackup ${D}/home/amanda
    install -m 0644 -o amandabackup -g amandabackup ${WORKDIR}/.bashrc ${D}/home/amanda
}

FILES_${PN} += "\
    /home/amanda \
"

RRECOMMENDS_${PN} += "\
    amanda \
    amanda-demo \
"

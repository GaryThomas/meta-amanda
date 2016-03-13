# meta-amanda
OpenEmbedded layer demonstrating AMANDA

Add these lines to local.conf:

CORE_IMAGE_EXTRA_INSTALL_append = "amanda amanda-demo backup-setup"
IMAGE_FEATURES_append = " ssh-server-openssh"
#PREFERRED_VERSION_perl = "5.20.0"
#PREFERRED_VERSION_perl-native = "5.20.0"
PREFERRED_VERSION_perl = "5.22.1"
PREFERRED_VERSION_perl-native = "5.22.1"


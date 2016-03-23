# vim:ft=perl
# Copyright (c) 2008-2013 Zmanda, Inc.  All Rights Reserved.
#
# This program is free software; you can redistribute it and/or
# modify it under the terms of the GNU General Public License
# as published by the Free Software Foundation; either version 2
# of the License, or (at your option) any later version.
#
# This program is distributed in the hope that it will be useful, but
# WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
# or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
# for more details.
#
# You should have received a copy of the GNU General Public License along
# with this program; if not, write to the Free Software Foundation, Inc.,
# 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
#
# Contact information: Zmanda Inc, 465 S. Mathilda Ave., Suite 300
# Sunnyvale, CA 94086, USA, or: http://www.zmanda.com

package Amanda::Constants;

=head1 NAME

Amanda::Constants - perl access to build-time configuration values

=head1 SYNOPSIS

  use Amanda::Constants;

  my $default_config = $Amanda::Constants::DEFAULT_CONFIG;

This package is a means of getting all of the necessary variables
provided by configure into Perl scripts, without a bunch of
boilerplate, and without requiring config.status substitution for
every .pm file.  

This module does not automatically export any of its values.

See the source for the list of constants available.

=cut

# the 'warnings' pragma doesn't recognized exported variables as "used", and generates warnings
# for variables only used once.  We turn it off for this module.
no warnings;

# (keep this list sorted in alphabetical order, for ease of updates)

$AIX_BACKUP = "";
$AMANDA_COMPONENTS = " server restore client amrecover ndmp";
$AMANDA_DEBUG_DAYS = "4";
$ASSERTIONS = "1";
$BSDTAR = "/usr/bin/bsdtar";
$BSDTCP_SECURITY = "yes";
$BSDUDP_SECURITY = "no";
$BSD_SECURITY = "no";
$CC = "gcc";
$CHECK_USERID = "1";
$CLIENT_HOST_INSTANCE = "@CLIENT_HOST_INSTANCE@";
$CLIENT_HOST_KEY_FILE = "@CLIENT_HOST_KEY_FILE@";
$CLIENT_HOST_PRINCIPAL = "@CLIENT_HOST_PRINCIPAL@";
$CLIENT_LOGIN = "amandabackup";
$COMPRESS_BEST_OPT = "--best";
$COMPRESS_FAST_OPT = "--fast";
$COMPRESS_PATH = "/bin/gzip";
$COMPRESS_SUFFIX = ".gz";
$DD = "/bin/dd";
$DEFAULT_AMANDATES_FILE = "/var/amanda/amandates";
$DEFAULT_CONFIG = "DailySet1";
$DEFAULT_SERVER = "localhost";
$DEFAULT_TAPE_DEVICE = "";
$DEFAULT_TAPE_SERVER = "localhost";
$DUMP = "";
$DUMP_RETURNS_1 = "";
$GNUTAR = "/bin/tar.tar";
$HAVE_GZIP = "1";
$KRB5_SECURITY = "no";
$LOCKING = "LNLOCK";
$MAILER = "NONE";
$MT = "mt";
$MTX = "mtx";
$MOUNT = "/bin/mount";
$UMOUNT = "/bin/umount";
$LPR = "";
$LPRFLAG = "";
$PS = "/bin/ps";
$PS_ARGUMENT = "-eo pid,ppid,command";
$PS_ARGUMENT_ARGS = "-eo pid,ppid,command";
$RESTORE = "";
$RSH_SECURITY = "no";
$SAMBA_CLIENT = "/usr/bin/smbclient";
$SERVER_HOST_INSTANCE = "@SERVER_HOST_INSTANCE@";
$SERVER_HOST_KEY_FILE = "@SERVER_HOST_KEY_FILE@";
$SERVER_HOST_PRINCIPAL = "@SERVER_HOST_PRINCIPAL@";
$SSH_SECURITY = "yes";
$STAR = "/usr/bin/star";
$SUNTAR = "/usr/sbin/tar";
$TICKET_LIFETIME = "@TICKET_LIFETIME@";
$UNCOMPRESS_OPT = "-dc";
$UNCOMPRESS_PATH = "/bin/gzip";
$USE_AMANDAHOSTS = "yes";
$USE_RUNDUMP = "";
$VDUMP = "";
$VERSION = "3.3.9";
$VRESTORE = "";
$VXDUMP = "";
$VXRESTORE = "";
$XFSDUMP = "";
$XFSRESTORE = "";
$NC = "/usr/bin/nc";
$NC6 = "";
$NETCAT = "";

# non-AC_SUBST'd constants

$DATA_FD_OFFSET = 50;
$DATA_FD_COUNT = 3;

1;

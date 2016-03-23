# vim:ft=perl
# Copyright (c) 2007-2013 Zmanda, Inc.  All Rights Reserved.
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

package Amanda::Paths;

=head1 NAME

Amanda::Paths - perl access to build-time configuration paths

=head1 SYNOPSIS

  use Amanda::Paths;

  my $filename = "$amlibexecdir/foo/bar";

This package is a means of getting all of the necessary variables provided
by configure into Perl scripts, without a bunch of boilerplate, and without
requiring config.status substitution for every .pm file.

All of the variables in @EXPORT will be automatically imported into
your module's namespace.  See the source, rather than the perldoc,
to find out what variables are available.

=cut

use Exporter;
@ISA = qw( Exporter );

@EXPORT = qw(
    $prefix
    $exec_prefix
    $bindir
    $sbindir
    $libexecdir
    $amlibexecdir
    $mandir
    $datarootdir
    $sysconfdir
    $amdatadir
    $localstatedir

    $AMANDA_TMPDIR
    $CONFIG_DIR
    $AMANDA_DBGDIR
    $APPLICATION_DIR
    $GNUTAR_LISTED_INCREMENTAL_DIR
);

# the 'warnings' pragma doesn't recognized exported variables as "used", and generates warnings
# for variables only used once.  We turn it off for this module.
no warnings;

## basic filesystem layout

# these need to go in order, due to the way autoconf sets these dirs up
$prefix = "/usr";
$exec_prefix = "${prefix}";
$bindir = "/usr/bin";
$sbindir = "/usr/sbin";
$libexecdir = "/usr/lib";
$amlibexecdir = "/usr/lib/amanda";
$mandir = "/usr/share/man";
# (config.status worries if it doesn't see this:)
$datarootdir = "${prefix}/share";
$sysconfdir = "/etc";
$amdatadir = "/var/amanda/lib";
$localstatedir = "/var";

## amanda configuration directories

$AMANDA_TMPDIR = "/tmp/amanda";
$CONFIG_DIR = "/etc/amanda";
$AMANDA_DBGDIR = "/var/amanda/log";
$APPLICATION_DIR = "/usr/lib/amanda/application";
$GNUTAR_LISTED_INCREMENTAL_DIR = "/var/amanda/lib/gnutar-lists";

1;

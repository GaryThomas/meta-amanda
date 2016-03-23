# This file was automatically generated by SWIG (http://www.swig.org).
# Version 3.0.7
#
# Do not make changes to this file unless you know what you are doing--modify
# the SWIG interface file instead.

package Amanda::Disklist;
use base qw(Exporter);
use base qw(DynaLoader);
require Amanda::Config;
package Amanda::Disklistc;
bootstrap Amanda::Disklist;
package Amanda::Disklist;
@EXPORT = qw();

# ---------- BASE METHODS -------------

package Amanda::Disklist;

sub TIEHASH {
    my ($classname,$obj) = @_;
    return bless $obj, $classname;
}

sub CLEAR { }

sub FIRSTKEY { }

sub NEXTKEY { }

sub FETCH {
    my ($self,$field) = @_;
    my $member_func = "swig_${field}_get";
    $self->$member_func();
}

sub STORE {
    my ($self,$field,$newval) = @_;
    my $member_func = "swig_${field}_set";
    $self->$member_func($newval);
}

sub this {
    my $ptr = shift;
    return tied(%$ptr);
}


# ------- FUNCTION WRAPPERS --------

package Amanda::Disklist;

*read_disklist_internal = *Amanda::Disklistc::read_disklist_internal;
*unload_disklist_internal = *Amanda::Disklistc::unload_disklist_internal;
*clean_dle_str_for_client = *Amanda::Disklistc::clean_dle_str_for_client;

# ------- VARIABLE STUBS --------

package Amanda::Disklist;


@EXPORT_OK = ();
%EXPORT_TAGS = ();


=head1 NAME

Amanda::Disklist - interface to the Amanda disklist

=head1 SYNOPSIS

  use Amanda::Config qw( :init :getconf );
  use Amanda::Disklist;

  # .. call config_init()
  my $cfgerr_level = Amanda::Disklist::read_disklist(
    filename => $ARGV[0],
    disk_class => "MyScript::Disk",
  );
  die("Config errors") if ($cfgerr_level >= $CFGERR_WARNINGS);
  my $dle = Amanda::Disklist::get_disk($ARGV[1], $ARGV[2]);
  die "No such DLE" unless defined($dle);

  print "Diskname for this DLE: ", $dle->{name}, "\n";
  print "Auth for this DLE's host: ", $dle->{host}->{auth}, "\n";
  print "'record':", dumptype_getconf($dle->{config}, $DUMPTYPE_RECORD), "\n";

=head1 OVERVIEW

The Amanda disklist is a part of its configuration, so this module is
similar in function to L<Amanda::Config>.  In particular,
C<read_disklist> loads the disklist into process-global variables, and
returns an error status similar to that of L<Amanda::Config>.  Those
global variables are then used by the acces functions described below.

Amanda parses all DLE's as a simple tuple (host, diskname, device,
dumptype, interface, spindle), linked to a dumptype.  DLE's which
specify additional dumptype parameters within the C<disklist> file
result in the creation of a "hidden" dumptype with those parameters.
Consequently, most configuration data about a particular disk is
available in an C<Amanda::Config::dumptype_t> object, and that data is
not reproduced by this package.

This package differs from the underlying C code in that it separates
I<disk> configuration from I<host> configuration.  Furthermore, the
package does not provide storage for runtime parameters you might want
to associate with hosts or disks.  However, the objects this packages
creates are simple hashrefs that can be blessed with arbitrary class
names, so you can add whatever data and behaviors you like to these
objects.

=head1 FUNCTIONS

After calling C<Amanda::Config::config_init()>, call C<read_disklist>.
The following parameters are available:

=over 4

=item filename

Filename from which to read the disklist; defaults to the C<diskfile>
configuration parameter.

=item disk_class

Class with which to bless disk objects; defaults to
C<Amanda::Disklist::Disk>.

=item host_class

Class with which to bless host objects; defaults to
C<Amanda::Disklist::Host>.

=item interface_class

Class with which to bless interface objects; defaults to
C<Amanda::Disklist::Interface>.

=back

C<read_disklist> returns a config error level just like
C<config_init>. Once the disklist is loaded, call one of the following
functions to access the disklist.

  get_host($host)	    get the corresponding host object
  all_hosts()		    get a list of all host objects
  get_disk($host, $disk)    get a specific disk object
  all_disks()		    get a list of all disk objects
  get_interface($name)	    get a specific interface object
  all_interfaces()	    get a list of all interface objects

=head1 Objects

=head2 Amanda::Disklist::Disk

A disk object has the following keys:

=over 4

=item host

Host object for this DLE

=item name

The disk name

=item device

The device, if one was specified separately from the disk name

=item spindle

The spindle specified in the disklist

=item config

An C<Amanda::Config::dumptype_t> object giving the configuration for
the disk; use C<dumptype_getconf> and other functions from
L<Amanda::Config> to examine it.

=back

=head2 Amanda::Disklist::Host

Note that, because host configuration parameters are specified in
dumptypes, there is no C<config> key for a host object.  Instead, the
relevant parameters are available as attributes of the object.

=over 4

=item hostname

hostname of this host

=item amandad_path

=item client_username

=item ssh_keys

=item auth

=item maxdumps

configuration parameters

=item disks

an array containing the names of all of the disks on this host.

=back

As a convenience, the C<Amanda::Disklist::Host> class also provides
methods C<get_disk($disk)>, to get a disk object on the host, and
C<all_disks()>, to get a list of all disk objects on this host.

=head2 Amanda::Disklist::Interface

Interface objects have only one key, C<config>, containing a
C<Amanda::Config::interface_t> object; use C<interface_getconf> and
other functions from L<Amanda::Config> to examine it.

=cut



use Amanda::Debug qw( :logging );
use Amanda::Config qw( :getconf config_dir_relative );


package Amanda::Disklist::Disk;

# methods

package Amanda::Disklist::Host;

sub get_disk {
    my ($self, $disk) = @_;
    return $Amanda::Disklist::disks{$self->{'hostname'}}{$disk};
}

sub all_disks {
    my ($self) = @_;
    return sort { $a->{'name'} cmp $b->{'name'} } values %{$Amanda::Disklist::disks{$self->{'hostname'}}};
}

package Amanda::Disklist::Interface;

# methods

package Amanda::Disklist;

our (%disks, %hosts, %interfaces);

sub read_disklist {
    my %params = @_;

    return read_disklist_internal(
	($params{filename} or config_dir_relative(getconf($CNF_DISKFILE))),
	\%disks, ($params{disk_class} or "Amanda::Disklist::Disk"),
	\%hosts, ($params{host_class} or "Amanda::Disklist::Host"),
	\%interfaces, ($params{interface_class} or "Amanda::Disklist::Interface"),
    );
}

sub unload_disklist {
    return unload_disklist_internal();
}

sub get_host {
    my ($hostname) = @_;
    return $hosts{$hostname};
}

sub all_hosts {
    return sort { $a->{'hostname'} cmp $b->{'hostname'} } values %hosts;
}

sub get_disk {
    my ($hostname, $diskname) = @_;
    return $disks{$hostname}->{$diskname};
}

sub all_disks {
    my @rv;
    foreach my $hostname (sort keys %disks) {
	foreach my $diskname ( sort keys %{$disks{$hostname}} ) {
	    push @rv, $disks{$hostname}->{$diskname};
	}
    }
    return @rv;
}

sub get_interface {
    my ($interfacename) = @_;
    return $interfaces{$interfacename};
}

sub all_interfaces {
    return values %interfaces;
}

push @EXPORT_OK, qw( read_disklist
	get_host all_hosts
	get_disk all_disks
	get_interface all_interfaces);

1;

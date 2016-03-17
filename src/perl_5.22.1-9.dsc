-----BEGIN PGP SIGNED MESSAGE-----
Hash: SHA256

Format: 3.0 (quilt)
Source: perl
Binary: perl-base, perl-doc, perl-debug, libperl5.22, libperl-dev, perl-modules-5.22, perl
Architecture: any all
Version: 5.22.1-9
Maintainer: Niko Tyni <ntyni@debian.org>
Uploaders: Dominic Hargreaves <dom@earth.li>
Homepage: http://dev.perl.org/perl5/
Standards-Version: 3.9.6
Vcs-Browser: http://anonscm.debian.org/gitweb/?p=perl/perl.git
Vcs-Git: git://anonscm.debian.org/perl/perl.git -b debian-5.22
Build-Depends: file <!nocheck>, cpio, libdb-dev, libgdbm-dev, netbase [!hurd-any] <!nocheck>, procps [!hurd-any] <!nocheck>, zlib1g-dev | libz-dev, libbz2-dev, dpkg-dev (>= 1.17.14), libc6-dev (>= 2.19-9) [s390x]
Package-List:
 libperl-dev deb libdevel optional arch=any
 libperl5.22 deb libs optional arch=any
 perl deb perl standard arch=any
 perl-base deb perl required arch=any essential=yes
 perl-debug deb devel extra arch=any
 perl-doc deb doc optional arch=all
 perl-modules-5.22 deb perl standard arch=all
Checksums-Sha1:
 8cb3b099f7c74d4f541a9318c108906daef942c1 11223940 perl_5.22.1.orig.tar.xz
 a02df09b5b95cb3ccd9f53cb3594538163984b7c 148292 perl_5.22.1-9.debian.tar.xz
Checksums-Sha256:
 9e87317d693ce828095204be0d09af8d60b8785533fadea1a82b6f0e071e5c79 11223940 perl_5.22.1.orig.tar.xz
 3368488e1d56e9ff69556a2e75cc50858414147afcf5d72f91dbfd71fb5d9127 148292 perl_5.22.1-9.debian.tar.xz
Files:
 6671e4829cbaf9cecafa9a84f141b0a3 11223940 perl_5.22.1.orig.tar.xz
 17c152003615cc4c58f95653b8d6deb1 148292 perl_5.22.1-9.debian.tar.xz

-----BEGIN PGP SIGNATURE-----
Version: GnuPG v1

iQIcBAEBCAAGBQJW5afCAAoJEC7A/7O3MBsfLOoQAI394PtWzJ+s7OTArDyy6o6w
GHUfNPL7YOUmkjA4gNuKunK7eyxAZShIJMuQPipbT+sIqSKabLoVn/kRm3SvQNhu
g2cKpXgmqIlRRWDFy8KVvc+WgMyzoaTL6VabeiRB6P3uKbqCElGoEQoKVt3QUpM0
OmSQngOfGFl0BhD44Ok5jIzRkzGu+knMzx7gDeOPW0luojuI/iFIKYEoKHqis5y2
MPnH2qpQeV3UKe3AJfRhosBJ3ZvpE8unwXcdi+V08FXXMd67UWYPfVP9UYZO5cyO
RnfukUjdJE/cPouErAGpXrrAy2JcJNkGZzm9M5/1JI4afHPBMYoC6J1+rqx6/uwI
8vQhS6y3RTaS1ygPUAUE6M3kKY0IiT/XP10V9wDGfp+LCgK3Ssf6ge+6dosL4HpG
tbAyhQ3bguQOt9jwj8UMmY0ViTh9drCMTuxHkSK2bftACWbQAmBltu9sIOofY6Up
zaGhHoNjTZQWclL8L2YmZRJrTaWHNTGvjovOVWtsL/JsxuOXg2ZOOHxX49/+fc8Z
ZR7D6b0Ow0OsBO2PCWAo2TsCXsDy8ycI5btNZFCcrH5k5Dgkh2tW+K43KBzH9pnk
jLmCBEDH1I5s1YwD+2x1/boWc48lfRLecaW7myGPxmwJAduWw/EuoW9zDJ50V7O/
Wk/USKjYz2e8EU9TTe14
=w2Nq
-----END PGP SIGNATURE-----

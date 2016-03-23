/* config/config.h.  Generated from config.h.in by configure.  */
/* config/config.h.in.  Generated from configure.ac by autoheader.  */

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Is DUMP the AIX program 'backup'? */
/* #undef AIX_BACKUP */

/* Location of Amanda directories and files. */
#define AMANDA_DBGDIR "/var/amanda/log"

/* Number of days to keep debugging files. */
#define AMANDA_DEBUG_DAYS 4

/* The name for the Amanda service. */
#define AMANDA_SERVICE_NAME "amanda"

/* The directory in which Amanda should create temporary files. */
#define AMANDA_TMPDIR "/tmp/amanda"

/* Location of the readlink binary */
#define AM_READLINK "/bin/readlink"

/* Directory in which dumper interfaces should be installed and searched. */
#define APPLICATION_DIR "/usr/lib/amanda/application"

/* Define if you want assertion checking. */
#define ASSERTIONS 1

/* Define as the user who owns installed binaries. */
#define BINARY_OWNER "amandabackup"

/* Define to the number of bits in type 'ptrdiff_t'. */
/* #undef BITSIZEOF_PTRDIFF_T */

/* Define to the number of bits in type 'sig_atomic_t'. */
/* #undef BITSIZEOF_SIG_ATOMIC_T */

/* Define to the number of bits in type 'size_t'. */
/* #undef BITSIZEOF_SIZE_T */

/* Define to the number of bits in type 'wchar_t'. */
/* #undef BITSIZEOF_WCHAR_T */

/* Define to the number of bits in type 'wint_t'. */
/* #undef BITSIZEOF_WINT_T */

/* Location of the 'bsdtar' binary */
#define BSDTAR "/local/amanda_test/tmp/sysroots/x86_64-linux/usr/bin/bsdtar"

/* Define if BSDTCP transport should be enabled. */
#define BSDTCP_SECURITY 1

/* Define if BSDUDP transport should be enabled. */
/* #undef BSDUDP_SECURITY */

/* Define to use BSD .rhosts/.amandahosts security. */
/* #undef BSD_SECURITY */

/* Define to force to another user on client machines. */
#define CHECK_USERID 1

/* Define as a the user to force to on client machines. */
#define CLIENT_LOGIN "amandabackup"

/* Define to 1 if the `closedir' function returns void instead of `int'. */
#define CLOSEDIR_VOID 1

/* Define as the command line option for best compression. */
#define COMPRESS_BEST_OPT "--best"

/* Define as the command line option for fast compression. */
#define COMPRESS_FAST_OPT "--fast"

/* Define to the exact path to the gzip or the compress program. */
#define COMPRESS_PATH "/bin/gzip"

/* Define to the suffix for the COMPRESS_PATH compression program. */
#define COMPRESS_SUFFIX ".gz"

/* Define as the configure command line option. */
#define CONFIGURE_ARGS " '--build=x86_64-linux' '--host=i686-poky-linux' '--target=i686-poky-linux' '--prefix=/usr' '--bindir=/usr/bin' '--sbindir=/usr/sbin' '--sysconfdir=/etc' '--sharedstatedir=/com' '--localstatedir=/var' '--libdir=/usr/lib' '--libexecdir=/usr/lib' '--includedir=/usr/include' '--oldincludedir=/usr/include' '--infodir=/usr/share/info' '--mandir=/usr/share/man' '--disable-silent-rules' '--with-amperldir=/usr/lib/perl/5.22.1' '--with-user=amandabackup' '--with-group=amandabackup' '--with-amdatadir=/var/amanda/lib' '--with-gnutar=/bin/tar' '--with-gnutar-listdir=/var/amanda/lib/gnutar-lists' '--with-index-server=localhost' '--with-tape-server=localhost' '--with-fqdn' '--without-bsd-security' '--with-bsdtcp-security' '--without-bsdudp-security' '--with-ssh-security' '--with-libcurl=no' '--with-debugging=/var/amanda/log' '--with-assertions' '--with-security-file=/etc/amanda-security.conf' '--disable-dependency-tracking' '--disable-static' '--enable-nls' 'build_alias=x86_64-linux' 'host_alias=i686-poky-linux' 'target_alias=i686-poky-linux' 'CC=i686-poky-linux-gcc  -m32 -march=core2 -mtune=core2 -msse3 -mfpmath=sse --sysroot=/local/amanda_test/tmp/sysroots/genericx86' 'CFLAGS= -O2 -pipe -g -feliminate-unused-debug-types -fdebug-prefix-map=/local/amanda_test/tmp/work/core2-32-poky-linux/amanda/3.3.9-r0/amanda-3.3.9=/usr/src/amanda -fdebug-prefix-map=/local/amanda_test/tmp/work/core2-32-poky-linux/amanda/3.3.9-r0/amanda-3.3.9=/usr/src/amanda -fdebug-prefix-map=/local/amanda_test/tmp/sysroots/x86_64-linux= -fdebug-prefix-map=/local/amanda_test/tmp/sysroots/genericx86= ' 'LDFLAGS=-Wl,-O1 -Wl,--hash-style=gnu -Wl,--as-needed' 'CPPFLAGS=' 'CPP=i686-poky-linux-gcc -E --sysroot=/local/amanda_test/tmp/sysroots/genericx86  -m32 -march=core2 -mtune=core2 -msse3 -mfpmath=sse' 'PKG_CONFIG_PATH=/local/amanda_test/tmp/sysroots/genericx86/usr/lib/pkgconfig:/local/amanda_test/tmp/sysroots/genericx86/usr/share/pkgconfig' 'PKG_CONFIG_LIBDIR=/local/amanda_test/tmp/sysroots/genericx86/usr/lib/pkgconfig'"

/* The directory in which configuration directories should be created. */
#define CONFIG_DIR "/etc/amanda"

/* Define to one of `_getb67', `GETB67', `getb67' for Cray-2 and Cray-YMP
   systems. This function is required for `alloca.c' support on those systems.
   */
/* #undef CRAY_STACKSEG_END */

/* Define to 1 if using `alloca.c'. */
/* #undef C_ALLOCA */

/* Define as the bit index in the word where to find bit 0 of the exponent of
   'double'. */
#define DBL_EXPBIT0_BIT 20

/* Define as the word index where to find the exponent of 'double'. */
#define DBL_EXPBIT0_WORD 1

/* Default location for 'amandates' */
#define DEFAULT_AMANDATES_FILE "/var/amanda/amandates"

/* This is the default Amanda configuration. */
#define DEFAULT_CONFIG "DailySet1"

/* Define if a FSF is needed on filemark. */
#define DEFAULT_FSF_AFTER_FILEMARK FALSE

/* A program that understands -s "subject" user < message_file */
#define DEFAULT_MAILER ""

/* Default full path for 'amanda-security.conf' */
#define DEFAULT_SECURITY_FILE "/etc/amanda-security.conf"

/* This is the default Amanda index server. */
#define DEFAULT_SERVER "localhost"

/* This is the default no-rewinding tape device. */
#define DEFAULT_TAPE_DEVICE ""

/* Define if open of tape device require O_NONBLOCK */
#define DEFAULT_TAPE_NON_BLOCKING_OPEN 1

/* This is the default restoring Amanda tape server. */
#define DEFAULT_TAPE_SERVER "localhost"

/* Define as the prefix for disk devices, commonly /dev/ or /dev/dsk/ */
#define DEV_PREFIX "/dev/"

/* Define the location of the ufsdump, backup, or dump program. */
/* #undef DUMP */

/* Define if dumper should buffer the sockets for faster throughput. */
/* #undef DUMPER_SOCKET_BUFFERING */

/* Define this if this system's dump exits with 1 as a success code. */
/* #undef DUMP_RETURNS_1 */

/* Define to 1 if translation of program messages to the user's native
   language is requested. */
#define ENABLE_NLS 1

/* Define to 1 if the system's ftello function has the Solaris bug. */
/* #undef FTELLO_BROKEN_AFTER_SWITCHING_FROM_READ_TO_WRITE */

/* Define to 1 if nl_langinfo (YESEXPR) returns a non-empty string. */
#define FUNC_NL_LANGINFO_YESEXPR_WORKS 1

/* Define to the type of elements in the array set by `getgroups'. Usually
   this is either `int' or `gid_t'. */
#define GETGROUPS_T gid_t

/* Define this to 1 if getgroups(0,NULL) does not return the number of groups.
   */
/* #undef GETGROUPS_ZERO_BUG */

/* Define to 1 if the `getpgrp' function requires zero arguments. */
#define GETPGRP_VOID 1

/* Define if gettimeofday clobbers the localtime buffer. */
/* #undef GETTIMEOFDAY_CLOBBERS_LOCALTIME */

/* Define this to 'void' or 'struct timezone' to match the system's
   declaration of the second argument to gettimeofday. */
#define GETTIMEOFDAY_TIMEZONE struct timezone

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module fscanf shall be considered present. */
#define GNULIB_FSCANF 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module malloc-gnu shall be considered present. */
#define GNULIB_MALLOC_GNU 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module scanf shall be considered present. */
#define GNULIB_SCANF 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module snprintf shall be considered present. */
#define GNULIB_SNPRINTF 1

/* Define to 1 when the gnulib module btowc should be tested. */
#define GNULIB_TEST_BTOWC 1

/* Define to 1 when the gnulib module environ should be tested. */
#define GNULIB_TEST_ENVIRON 1

/* Define to 1 when the gnulib module euidaccess should be tested. */
#define GNULIB_TEST_EUIDACCESS 1

/* Define to 1 when the gnulib module fseek should be tested. */
#define GNULIB_TEST_FSEEK 1

/* Define to 1 when the gnulib module fseeko should be tested. */
#define GNULIB_TEST_FSEEKO 1

/* Define to 1 when the gnulib module fstat should be tested. */
#define GNULIB_TEST_FSTAT 1

/* Define to 1 when the gnulib module ftell should be tested. */
#define GNULIB_TEST_FTELL 1

/* Define to 1 when the gnulib module ftello should be tested. */
#define GNULIB_TEST_FTELLO 1

/* Define to 1 when the gnulib module ftruncate should be tested. */
#define GNULIB_TEST_FTRUNCATE 1

/* Define to 1 when the gnulib module getaddrinfo should be tested. */
#define GNULIB_TEST_GETADDRINFO 1

/* Define to 1 when the gnulib module getgroups should be tested. */
#define GNULIB_TEST_GETGROUPS 1

/* Define to 1 when the gnulib module getopt-gnu should be tested. */
#define GNULIB_TEST_GETOPT_GNU 1

/* Define to 1 when the gnulib module gettimeofday should be tested. */
#define GNULIB_TEST_GETTIMEOFDAY 1

/* Define to 1 when the gnulib module group-member should be tested. */
#define GNULIB_TEST_GROUP_MEMBER 1

/* Define to 1 when the gnulib module localeconv should be tested. */
#define GNULIB_TEST_LOCALECONV 1

/* Define to 1 when the gnulib module lseek should be tested. */
#define GNULIB_TEST_LSEEK 1

/* Define to 1 when the gnulib module lstat should be tested. */
#define GNULIB_TEST_LSTAT 1

/* Define to 1 when the gnulib module malloc-posix should be tested. */
#define GNULIB_TEST_MALLOC_POSIX 1

/* Define to 1 when the gnulib module mbrtowc should be tested. */
#define GNULIB_TEST_MBRTOWC 1

/* Define to 1 when the gnulib module mbsinit should be tested. */
#define GNULIB_TEST_MBSINIT 1

/* Define to 1 when the gnulib module mbtowc should be tested. */
#define GNULIB_TEST_MBTOWC 1

/* Define to 1 when the gnulib module memchr should be tested. */
#define GNULIB_TEST_MEMCHR 1

/* Define to 1 when the gnulib module mkdtemp should be tested. */
#define GNULIB_TEST_MKDTEMP 1

/* Define to 1 when the gnulib module nl_langinfo should be tested. */
#define GNULIB_TEST_NL_LANGINFO 1

/* Define to 1 when the gnulib module raise should be tested. */
#define GNULIB_TEST_RAISE 1

/* Define to 1 when the gnulib module read should be tested. */
#define GNULIB_TEST_READ 1

/* Define to 1 when the gnulib module secure_getenv should be tested. */
#define GNULIB_TEST_SECURE_GETENV 1

/* Define to 1 when the gnulib module snprintf should be tested. */
#define GNULIB_TEST_SNPRINTF 1

/* Define to 1 when the gnulib module stat should be tested. */
#define GNULIB_TEST_STAT 1

/* Define to 1 when the gnulib module wcrtomb should be tested. */
#define GNULIB_TEST_WCRTOMB 1

/* Define to 1 when the gnulib module write should be tested. */
#define GNULIB_TEST_WRITE 1

/* Location of the GNU 'tar' binary */
#define GNUTAR "/bin/tar"

/* The directory in which GNU tar should store directory lists for
   incrementals. */
#define GNUTAR_LISTED_INCREMENTAL_DIR "/var/amanda/lib/gnutar-lists"

/* Define the location of the grep program. */
#define GREP "/bin/grep"

/* Define to 1 if you have the `accept' function. */
#define HAVE_ACCEPT 1

/* Define if accept is declared. */
#define HAVE_ACCEPT_DECL 1

/* Define to 1 if you have `alloca', as a function or macro. */
#define HAVE_ALLOCA 1

/* Define to 1 if you have <alloca.h> and it should be used (not on Ultrix).
   */
#define HAVE_ALLOCA_H 1

/* Define to 1 if you have the "amanda.h" header file. */
#define HAVE_AMANDA_H 1

/* Define to 1 if you have the <arpa/inet.h> header file. */
#define HAVE_ARPA_INET_H 1

/* Define to 1 if you have the `atexit' function. */
#define HAVE_ATEXIT 1

/* Define to 1 if you have the `atof' function. */
#define HAVE_ATOF 1

/* Define if atof is declared. */
#define HAVE_ATOF_DECL 1

/* Define to 1 if you have the `atol' function. */
#define HAVE_ATOL 1

/* Define to 1 if you have the `atoll' function. */
#define HAVE_ATOLL 1

/* Define if atoll is declared. */
#define HAVE_ATOLL_DECL 1

/* Define if atol is declared. */
#define HAVE_ATOL_DECL 1

/* Define to 1 if you have the `basename' function. */
#define HAVE_BASENAME 1

/* Define to 1 if you have the `bcopy' function. */
#define HAVE_BCOPY 1

/* Define if bcopy is declared. */
#define HAVE_BCOPY_DECL 1

/* Define to 1 if you have the `bind' function. */
#define HAVE_BIND 1

/* Define if bind is declared. */
#define HAVE_BIND_DECL 1

/* Define to 1 if you have the <bp-sym.h> header file. */
/* #undef HAVE_BP_SYM_H */

/* Define to 1 if you have the `btowc' function. */
#define HAVE_BTOWC 1

/* Define to 1 if you have the `bzero' function. */
#define HAVE_BZERO 1

/* Define if bzero is declared. */
#define HAVE_BZERO_DECL 1

/* Define to 1 if you have the MacOS X function CFLocaleCopyCurrent in the
   CoreFoundation framework. */
/* #undef HAVE_CFLOCALECOPYCURRENT */

/* Define to 1 if you have the MacOS X function CFPreferencesCopyAppValue in
   the CoreFoundation framework. */
/* #undef HAVE_CFPREFERENCESCOPYAPPVALUE */

/* Define to 1 if you have the `chsize' function. */
/* #undef HAVE_CHSIZE */

/* Define to 1 if you have the `closelog' function. */
#define HAVE_CLOSELOG 1

/* Define if closelog is declared. */
#define HAVE_CLOSELOG_DECL 1

/* Define to 1 if you have the `connect' function. */
#define HAVE_CONNECT 1

/* Define if connect is declared. */
#define HAVE_CONNECT_DECL 1

/* Define to 1 if you have the <crypto/hmac.h> header file. */
/* #undef HAVE_CRYPTO_HMAC_H */

/* Define if the GNU dcgettext() function is already present or preinstalled.
   */
#define HAVE_DCGETTEXT 1

/* Define to 1 if you have the declaration of `alarm', and to 0 if you don't.
   */
#define HAVE_DECL_ALARM 1

/* Define to 1 if you have the declaration of `freeaddrinfo', and to 0 if you
   don't. */
#define HAVE_DECL_FREEADDRINFO 1

/* Define to 1 if you have the declaration of `fseeko', and to 0 if you don't.
   */
#define HAVE_DECL_FSEEKO 1

/* Define to 1 if you have the declaration of `ftello', and to 0 if you don't.
   */
#define HAVE_DECL_FTELLO 1

/* Define to 1 if you have the declaration of `gai_strerror', and to 0 if you
   don't. */
#define HAVE_DECL_GAI_STRERROR 1

/* Define to 1 if you have the declaration of `gai_strerrorA', and to 0 if you
   don't. */
#define HAVE_DECL_GAI_STRERRORA 0

/* Define to 1 if you have the declaration of `getaddrinfo', and to 0 if you
   don't. */
#define HAVE_DECL_GETADDRINFO 1

/* Define to 1 if you have the declaration of `getc_unlocked', and to 0 if you
   don't. */
#define HAVE_DECL_GETC_UNLOCKED 1

/* Define to 1 if you have the declaration of `getenv', and to 0 if you don't.
   */
#define HAVE_DECL_GETENV 1

/* Define to 1 if you have the declaration of `getnameinfo', and to 0 if you
   don't. */
#define HAVE_DECL_GETNAMEINFO 1

/* Define to 1 if you have the declaration of `inet_ntop', and to 0 if you
   don't. */
#define HAVE_DECL_INET_NTOP 1

/* Define to 1 if you have the declaration of `inet_pton', and to 0 if you
   don't. */
#define HAVE_DECL_INET_PTON 1

/* Define to 1 if you have the declaration of `isblank', and to 0 if you
   don't. */
#define HAVE_DECL_ISBLANK 1

/* Define to 1 if you have the declaration of `mbrtowc', and to 0 if you
   don't. */
/* #undef HAVE_DECL_MBRTOWC */

/* Define to 1 if you have the declaration of `mbsinit', and to 0 if you
   don't. */
/* #undef HAVE_DECL_MBSINIT */

/* Define to 1 if you have the declaration of `readdir', and to 0 if you
   don't. */
#define HAVE_DECL_READDIR 1

/* Define to 1 if you have the declaration of `readdir64', and to 0 if you
   don't. */
#define HAVE_DECL_READDIR64 1

/* Define to 1 if you have the declaration of `readdir64_r', and to 0 if you
   don't. */
#define HAVE_DECL_READDIR64_R 1

/* Define to 1 if you have the declaration of `readdir_r', and to 0 if you
   don't. */
#define HAVE_DECL_READDIR_R 1

/* Define to 1 if you have the declaration of `snprintf', and to 0 if you
   don't. */
#define HAVE_DECL_SNPRINTF 1

/* Define to 1 if you have the declaration of `towlower', and to 0 if you
   don't. */
/* #undef HAVE_DECL_TOWLOWER */

/* Define to 1 if you have the declaration of `wcrtomb', and to 0 if you
   don't. */
/* #undef HAVE_DECL_WCRTOMB */

/* Define to 1 if you have the declaration of `_snprintf', and to 0 if you
   don't. */
#define HAVE_DECL__SNPRINTF 0

/* Define to 1 if you have the <dirent.h> header file, and it defines `DIR'.
   */
#define HAVE_DIRENT_H 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to the string that enables dump estimates. */
/* #undef HAVE_DUMP_ESTIMATE */

/* Define to 1 if you have the <dustat.h> header file. */
/* #undef HAVE_DUSTAT_H */

/* Define to 1 if you have the `eaccess' function. */
#define HAVE_EACCESS 1

/* Define if eaccess is declared. */
#define HAVE_EACCESS_DECL 1

/* Define to 1 if you have the `endmntent' function. */
#define HAVE_ENDMNTENT 1

/* Define if you have the declaration of environ. */
#define HAVE_ENVIRON_DECL 1

/* Define to 1 if you have the `euidaccess' function. */
#define HAVE_EUIDACCESS 1

/* Define if euidaccess is declared. */
#define HAVE_EUIDACCESS_DECL 1

/* Define to 1 if you have the `faccessat' function. */
#define HAVE_FACCESSAT 1

/* Define to 1 if you have the `fclose' function. */
#define HAVE_FCLOSE 1

/* Define if fclose is declared. */
#define HAVE_FCLOSE_DECL 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the <features.h> header file. */
#define HAVE_FEATURES_H 1

/* Define to 1 if you have the `fflush' function. */
#define HAVE_FFLUSH 1

/* Define if fflush is declared. */
#define HAVE_FFLUSH_DECL 1

/* Define to 1 if you have the `fprintf' function. */
#define HAVE_FPRINTF 1

/* Define if fprintf is declared. */
#define HAVE_FPRINTF_DECL 1

/* Define to 1 if you have the `fputc' function. */
#define HAVE_FPUTC 1

/* Define if fputc is declared. */
#define HAVE_FPUTC_DECL 1

/* Define to 1 if you have the `fputs' function. */
#define HAVE_FPUTS 1

/* Define if fputs is declared. */
#define HAVE_FPUTS_DECL 1

/* Define to 1 if you have the `fread' function. */
#define HAVE_FREAD 1

/* Define if fread is declared. */
#define HAVE_FREAD_DECL 1

/* Define to 1 if you have the `fseek' function. */
#define HAVE_FSEEK 1

/* Define to 1 if fseeko (and presumably ftello) exists and is declared. */
#define HAVE_FSEEKO 1

/* Define if fseek is declared. */
#define HAVE_FSEEK_DECL 1

/* Define to 1 if you have the <fstab.h> header file. */
#define HAVE_FSTAB_H 1

/* Define to 1 if you have the `ftruncate' function. */
#define HAVE_FTRUNCATE 1

/* Define to 1 if you have the `fwrite' function. */
#define HAVE_FWRITE 1

/* Define if fwrite is declared. */
#define HAVE_FWRITE_DECL 1

/* Define to 1 if you have the `getgrgid_r' function. */
#define HAVE_GETGRGID_R 1

/* Define to 1 if your system has a working `getgroups' function. */
#define HAVE_GETGROUPS 1

/* Define to 1 if you have the `gethostbyname' function. */
#define HAVE_GETHOSTBYNAME 1

/* Define to 1 if you have the `gethostname' function. */
#define HAVE_GETHOSTNAME 1

/* Define if gethostname is declared. */
#define HAVE_GETHOSTNAME_DECL 1

/* Define to 1 if you have the `getopt' function. */
#define HAVE_GETOPT 1

/* Define if getopt is declared. */
#define HAVE_GETOPT_DECL 1

/* Define to 1 if you have the <getopt.h> header file. */
#define HAVE_GETOPT_H 1

/* Define to 1 if you have the `getopt_long_only' function. */
#define HAVE_GETOPT_LONG_ONLY 1

/* Define to 1 if you have the `getpeername' function. */
#define HAVE_GETPEERNAME 1

/* Define if getpeername is declared. */
#define HAVE_GETPEERNAME_DECL 1

/* Define to 1 if you have the `getpwuid_r' function. */
#define HAVE_GETPWUID_R 1

/* Define to 1 if you have the `getservbyname' function. */
#define HAVE_GETSERVBYNAME 1

/* Define to 1 if you have the `getsockname' function. */
#define HAVE_GETSOCKNAME 1

/* Define if getsockname is declared. */
#define HAVE_GETSOCKNAME_DECL 1

/* Define to 1 if you have the `getsockopt' function. */
#define HAVE_GETSOCKOPT 1

/* Define if getsockopt is declared. */
#define HAVE_GETSOCKOPT_DECL 1

/* Define to 1 if you have the `getsysinfo' function. */
/* #undef HAVE_GETSYSINFO */

/* Define if the GNU gettext() function is already present or preinstalled. */
#define HAVE_GETTEXT 1

/* Define to 1 if you have the `gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* Define this if glibc's backtrace functionality (execinfo.h) is present */
#define HAVE_GLIBC_BACKTRACE 1

/* Define to 1 if you have the <grp.h> header file. */
#define HAVE_GRP_H 1

/* Define if Amanda is using the gzip program. */
#define HAVE_GZIP 1

/* Define to 1 if you have the <history.h> header file. */
/* #undef HAVE_HISTORY_H */

/* Define to 1 if you have the <hmac.h> header file. */
/* #undef HAVE_HMAC_H */

/* Define this if dump accepts -h for honoring nodump. */
/* #undef HAVE_HONOR_NODUMP */

/* Define if you have the iconv() function. */
/* #undef HAVE_ICONV */

/* Define to 1 if you have the `inet_ntop' function. */
/* #undef HAVE_INET_NTOP */

/* Define to 1 if you have the `inet_pton' function. */
/* #undef HAVE_INET_PTON */

/* Define to 1 if you have the `initgroups' function. */
#define HAVE_INITGROUPS 1

/* Define if initgroups is declared. */
#define HAVE_INITGROUPS_DECL 1

/* Define if you have the 'intmax_t' type in <stdint.h> or <inttypes.h>. */
#define HAVE_INTMAX_T 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define if <inttypes.h> exists, doesn't clash with <sys/types.h>, and
   declares uintmax_t. */
#define HAVE_INTTYPES_H_WITH_UINTMAX 1

/* Define to 1 if you have the `ioctl' function. */
#define HAVE_IOCTL 1

/* Define if ioctl is declared. */
#define HAVE_IOCTL_DECL 1

/* Define to 1 if <sys/socket.h> defines AF_INET. */
#define HAVE_IPV4 1

/* Define to 1 if <sys/socket.h> defines AF_INET6. */
#define HAVE_IPV6 1

/* Define to 1 if you have the `isblank' function. */
#define HAVE_ISBLANK 1

/* Define to 1 if you have the `isnormal' function. */
/* #undef HAVE_ISNORMAL */

/* Define if isnormal is declared. */
/* #undef HAVE_ISNORMAL_DECL */

/* Define to 1 if you have the `issetugid' function. */
/* #undef HAVE_ISSETUGID */

/* Define to 1 if you have the `iswcntrl' function. */
#define HAVE_ISWCNTRL 1

/* Define to 1 if you have the `iswctype' function. */
#define HAVE_ISWCTYPE 1

/* Define if you have <langinfo.h> and nl_langinfo(CODESET). */
#define HAVE_LANGINFO_CODESET 1

/* Define to 1 if you have the <langinfo.h> header file. */
#define HAVE_LANGINFO_H 1

/* Define to 1 if you have the `crypto' library (-lcrypto). */
#define HAVE_LIBCRYPTO 1

/* Define to 1 if you have a functional curl library. */
/* #undef HAVE_LIBCURL */

/* Define to 1 if you have the `cur_colr' library (-lcur_colr). */
/* #undef HAVE_LIBCUR_COLR */

/* Define to 1 if you have the <libc.h> header file. */
/* #undef HAVE_LIBC_H */

/* Define to 1 if you have the <libgen.h> header file. */
#define HAVE_LIBGEN_H 1

/* Define to 1 if you have the `intl' library (-lintl). */
/* #undef HAVE_LIBINTL */

/* Define to 1 if you have the <libintl.h> header file. */
#define HAVE_LIBINTL_H 1

/* Define to 1 if you have the `krb5support' library (-lkrb5support). */
/* #undef HAVE_LIBKRB5SUPPORT */

/* Define to 1 if you have the `m' library (-lm). */
#define HAVE_LIBM 1

/* Define to 1 if you have the `nsl' library (-lnsl). */
#define HAVE_LIBNSL 1

/* Define if you have a readline compatible library */
#define HAVE_LIBREADLINE 1

/* Define to 1 if you have the `resolv' library (-lresolv). */
#define HAVE_LIBRESOLV 1

/* Define to 1 if you have the `socket' library (-lsocket). */
/* #undef HAVE_LIBSOCKET */

/* Define to 1 if you have the `sun' library (-lsun). */
/* #undef HAVE_LIBSUN */

/* Define to 1 if you have the `xpg4' library (-lxpg4). */
/* #undef HAVE_LIBXPG4 */

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* Define to 1 if you have the <linux/zftape.h> header file. */
/* #undef HAVE_LINUX_ZFTAPE_H */

/* Define to 1 if you have the `listen' function. */
#define HAVE_LISTEN 1

/* Define if listen is declared. */
#define HAVE_LISTEN_DECL 1

/* Define to 1 if the system has the type 'long long int'. */
#define HAVE_LONG_LONG_INT 1

/* Set to 1 if an LPR command was found at configure time */
#define HAVE_LPR_CMD 1

/* Define to 1 if you have the `lstat' function. */
#define HAVE_LSTAT 1

/* Define if lstat is declared. */
#define HAVE_LSTAT_DECL 1

/* Define to 1 if you have the <machine/hal_sysinfo.h> header file. */
/* #undef HAVE_MACHINE_HAL_SYSINFO_H */

/* Define to 1 if you have the `malloc' function. */
#define HAVE_MALLOC 1

/* Define if malloc is declared. */
#define HAVE_MALLOC_DECL 1

/* Define to 1 if your system has a GNU libc compatible 'malloc' function, and
   to 0 otherwise. */
#define HAVE_MALLOC_GNU 1

/* Define if the 'malloc' function is POSIX compliant. */
#define HAVE_MALLOC_POSIX 1

/* Define to 1 if mmap()'s MAP_ANONYMOUS flag is available after including
   config.h and <sys/mman.h>. */
#define HAVE_MAP_ANONYMOUS 1

/* Define to 1 if you have the <math.h> header file. */
#define HAVE_MATH_H 1

/* Define to 1 if you have the `mbrtowc' function. */
#define HAVE_MBRTOWC 1

/* Define to 1 if you have the `mbsinit' function. */
#define HAVE_MBSINIT 1

/* Define to 1 if <wchar.h> declares mbstate_t. */
#define HAVE_MBSTATE_T 1

/* Define to 1 if you have the `memmove' function. */
#define HAVE_MEMMOVE 1

/* Define if memmove is declared. */
#define HAVE_MEMMOVE_DECL 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `memset' function. */
#define HAVE_MEMSET 1

/* Define if memset is declared. */
#define HAVE_MEMSET_DECL 1

/* Define to 1 if you have the `mkdtemp' function. */
#define HAVE_MKDTEMP 1

/* Define to 1 if you have the `mkstemp' function. */
#define HAVE_MKSTEMP 1

/* Define if mkstemp is declared. */
#define HAVE_MKSTEMP_DECL 1

/* Define to 1 if you have the `mktemp' function. */
#define HAVE_MKTEMP 1

/* Define if mktemp is declared. */
#define HAVE_MKTEMP_DECL 1

/* Define to 1 if you have the `mktime' function. */
#define HAVE_MKTIME 1

/* Define if mktime is declared. */
#define HAVE_MKTIME_DECL 1

/* Define to 1 if you have the <mntent.h> header file. */
#define HAVE_MNTENT_H 1

/* Define to 1 if you have the <mnttab.h> header file. */
/* #undef HAVE_MNTTAB_H */

/* Define to 1 if you have the `mprotect' function. */
#define HAVE_MPROTECT 1

/* Define to 1 on MSVC platforms that have the "invalid parameter handler"
   concept. */
/* #undef HAVE_MSVC_INVALID_PARAMETER_HANDLER */

/* Define if the mtget structure has an mt_blkno field */
#define HAVE_MT_BLKNO 1

/* Define if the mtget structure has an mt_dsreg field */
#define HAVE_MT_DSREG 1

/* Define if the mtget structure has an mt_erreg field */
#define HAVE_MT_ERREG 1

/* Define if the mtget structure has an mt_fileno field */
#define HAVE_MT_FILENO 1

/* Define if the mtget structure has an mt_flags field */
/* #undef HAVE_MT_FLAGS */

/* Define to 1 if you have the <ndir.h> header file, and it defines `DIR'. */
/* #undef HAVE_NDIR_H */

/* Define to 1 if you have the <netdb.h> header file. */
#define HAVE_NETDB_H 1

/* Define to 1 if you have the <netinet/in.h> header file. */
#define HAVE_NETINET_IN_H 1

/* Define to 1 if you have the `nl_langinfo' function. */
#define HAVE_NL_LANGINFO 1

/* Define to 1 if you have the `on_exit' function. */
#define HAVE_ON_EXIT 1

/* Define to 1 if you have the `openlog' function. */
#define HAVE_OPENLOG 1

/* Define if openlog is declared. */
#define HAVE_OPENLOG_DECL 1

/* Define to 1 if you have the <openssl/hmac.h> header file. */
#define HAVE_OPENSSL_HMAC_H 1

/* Define to 1 if you have the `pclose' function. */
#define HAVE_PCLOSE 1

/* Define if pclose is declared. */
#define HAVE_PCLOSE_DECL 1

/* Define to 1 if you have the `perror' function. */
#define HAVE_PERROR 1

/* Define if perror is declared. */
#define HAVE_PERROR_DECL 1

/* Define to 1 if you have the `printf' function. */
#define HAVE_PRINTF 1

/* Define if printf is declared. */
#define HAVE_PRINTF_DECL 1

/* Define to 1 if you have the `pstat_getdynamic' function. */
/* #undef HAVE_PSTAT_GETDYNAMIC */

/* Define to 1 if you have the `pstat_getstatic' function. */
/* #undef HAVE_PSTAT_GETSTATIC */

/* Define if the <pthread.h> defines PTHREAD_MUTEX_RECURSIVE. */
#define HAVE_PTHREAD_MUTEX_RECURSIVE 1

/* Define if the POSIX multithreading library has read/write locks. */
#define HAVE_PTHREAD_RWLOCK 1

/* Define to 1 if you have the `putenv' function. */
#define HAVE_PUTENV 1

/* Define to 1 if you have the `puts' function. */
#define HAVE_PUTS 1

/* Define if puts is declared. */
#define HAVE_PUTS_DECL 1

/* Define to 1 if you have the `raise' function. */
#define HAVE_RAISE 1

/* Define to 1 if accept is declared even after undefining macros. */
#define HAVE_RAW_DECL_ACCEPT 1

/* Define to 1 if accept4 is declared even after undefining macros. */
#define HAVE_RAW_DECL_ACCEPT4 1

/* Define to 1 if atoll is declared even after undefining macros. */
#define HAVE_RAW_DECL_ATOLL 1

/* Define to 1 if bind is declared even after undefining macros. */
#define HAVE_RAW_DECL_BIND 1

/* Define to 1 if btowc is declared even after undefining macros. */
#define HAVE_RAW_DECL_BTOWC 1

/* Define to 1 if canonicalize_file_name is declared even after undefining
   macros. */
#define HAVE_RAW_DECL_CANONICALIZE_FILE_NAME 1

/* Define to 1 if chdir is declared even after undefining macros. */
#define HAVE_RAW_DECL_CHDIR 1

/* Define to 1 if chown is declared even after undefining macros. */
#define HAVE_RAW_DECL_CHOWN 1

/* Define to 1 if connect is declared even after undefining macros. */
#define HAVE_RAW_DECL_CONNECT 1

/* Define to 1 if dprintf is declared even after undefining macros. */
#define HAVE_RAW_DECL_DPRINTF 1

/* Define to 1 if dup is declared even after undefining macros. */
#define HAVE_RAW_DECL_DUP 1

/* Define to 1 if dup2 is declared even after undefining macros. */
#define HAVE_RAW_DECL_DUP2 1

/* Define to 1 if dup3 is declared even after undefining macros. */
#define HAVE_RAW_DECL_DUP3 1

/* Define to 1 if duplocale is declared even after undefining macros. */
#define HAVE_RAW_DECL_DUPLOCALE 1

/* Define to 1 if endusershell is declared even after undefining macros. */
#define HAVE_RAW_DECL_ENDUSERSHELL 1

/* Define to 1 if environ is declared even after undefining macros. */
#define HAVE_RAW_DECL_ENVIRON 1

/* Define to 1 if euidaccess is declared even after undefining macros. */
#define HAVE_RAW_DECL_EUIDACCESS 1

/* Define to 1 if faccessat is declared even after undefining macros. */
#define HAVE_RAW_DECL_FACCESSAT 1

/* Define to 1 if fchdir is declared even after undefining macros. */
#define HAVE_RAW_DECL_FCHDIR 1

/* Define to 1 if fchmodat is declared even after undefining macros. */
#define HAVE_RAW_DECL_FCHMODAT 1

/* Define to 1 if fchownat is declared even after undefining macros. */
#define HAVE_RAW_DECL_FCHOWNAT 1

/* Define to 1 if fcntl is declared even after undefining macros. */
#define HAVE_RAW_DECL_FCNTL 1

/* Define to 1 if fdatasync is declared even after undefining macros. */
#define HAVE_RAW_DECL_FDATASYNC 1

/* Define to 1 if ffsl is declared even after undefining macros. */
#define HAVE_RAW_DECL_FFSL 1

/* Define to 1 if ffsll is declared even after undefining macros. */
#define HAVE_RAW_DECL_FFSLL 1

/* Define to 1 if fpurge is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_FPURGE */

/* Define to 1 if freeaddrinfo is declared even after undefining macros. */
#define HAVE_RAW_DECL_FREEADDRINFO 1

/* Define to 1 if fseeko is declared even after undefining macros. */
#define HAVE_RAW_DECL_FSEEKO 1

/* Define to 1 if fstat is declared even after undefining macros. */
#define HAVE_RAW_DECL_FSTAT 1

/* Define to 1 if fstatat is declared even after undefining macros. */
#define HAVE_RAW_DECL_FSTATAT 1

/* Define to 1 if fsync is declared even after undefining macros. */
#define HAVE_RAW_DECL_FSYNC 1

/* Define to 1 if ftello is declared even after undefining macros. */
#define HAVE_RAW_DECL_FTELLO 1

/* Define to 1 if ftruncate is declared even after undefining macros. */
#define HAVE_RAW_DECL_FTRUNCATE 1

/* Define to 1 if futimens is declared even after undefining macros. */
#define HAVE_RAW_DECL_FUTIMENS 1

/* Define to 1 if gai_strerror is declared even after undefining macros. */
#define HAVE_RAW_DECL_GAI_STRERROR 1

/* Define to 1 if getaddrinfo is declared even after undefining macros. */
#define HAVE_RAW_DECL_GETADDRINFO 1

/* Define to 1 if getcwd is declared even after undefining macros. */
#define HAVE_RAW_DECL_GETCWD 1

/* Define to 1 if getdelim is declared even after undefining macros. */
#define HAVE_RAW_DECL_GETDELIM 1

/* Define to 1 if getdomainname is declared even after undefining macros. */
#define HAVE_RAW_DECL_GETDOMAINNAME 1

/* Define to 1 if getdtablesize is declared even after undefining macros. */
#define HAVE_RAW_DECL_GETDTABLESIZE 1

/* Define to 1 if getgroups is declared even after undefining macros. */
#define HAVE_RAW_DECL_GETGROUPS 1

/* Define to 1 if gethostname is declared even after undefining macros. */
#define HAVE_RAW_DECL_GETHOSTNAME 1

/* Define to 1 if getline is declared even after undefining macros. */
#define HAVE_RAW_DECL_GETLINE 1

/* Define to 1 if getloadavg is declared even after undefining macros. */
#define HAVE_RAW_DECL_GETLOADAVG 1

/* Define to 1 if getlogin is declared even after undefining macros. */
#define HAVE_RAW_DECL_GETLOGIN 1

/* Define to 1 if getlogin_r is declared even after undefining macros. */
#define HAVE_RAW_DECL_GETLOGIN_R 1

/* Define to 1 if getnameinfo is declared even after undefining macros. */
#define HAVE_RAW_DECL_GETNAMEINFO 1

/* Define to 1 if getpagesize is declared even after undefining macros. */
#define HAVE_RAW_DECL_GETPAGESIZE 1

/* Define to 1 if getpeername is declared even after undefining macros. */
#define HAVE_RAW_DECL_GETPEERNAME 1

/* Define to 1 if gets is declared even after undefining macros. */
/* #undef HAVE_RAW_DECL_GETS */

/* Define to 1 if getsockname is declared even after undefining macros. */
#define HAVE_RAW_DECL_GETSOCKNAME 1

/* Define to 1 if getsockopt is declared even after undefining macros. */
#define HAVE_RAW_DECL_GETSOCKOPT 1

/* Define to 1 if getsubopt is declared even after undefining macros. */
#define HAVE_RAW_DECL_GETSUBOPT 1

/* Define to 1 if gettimeofday is declared even after undefining macros. */
#define HAVE_RAW_DECL_GETTIMEOFDAY 1

/* Define to 1 if getusershell is declared even after undefining macros. */
#define HAVE_RAW_DECL_GETUSERSHELL 1

/* Define to 1 if grantpt is declared even after undefining macros. */
#define HAVE_RAW_DECL_GRANTPT 1

/* Define to 1 if group_member is declared even after undefining macros. */
#define HAVE_RAW_DECL_GROUP_MEMBER 1

/* Define to 1 if inet_ntop is declared even after undefining macros. */
#define HAVE_RAW_DECL_INET_NTOP 1

/* Define to 1 if inet_pton is declared even after undefining macros. */
#define HAVE_RAW_DECL_INET_PTON 1

/* Define to 1 if initstate is declared even after undefining macros. */
#define HAVE_RAW_DECL_INITSTATE 1

/* Define to 1 if initstate_r is declared even after undefining macros. */
#define HAVE_RAW_DECL_INITSTATE_R 1

/* Define to 1 if isatty is declared even after undefining macros. */
#define HAVE_RAW_DECL_ISATTY 1

/* Define to 1 if iswctype is declared even after undefining macros. */
#define HAVE_RAW_DECL_ISWCTYPE 1

/* Define to 1 if lchmod is declared even after undefining macros. */
#define HAVE_RAW_DECL_LCHMOD 1

/* Define to 1 if lchown is declared even after undefining macros. */
#define HAVE_RAW_DECL_LCHOWN 1

/* Define to 1 if link is declared even after undefining macros. */
#define HAVE_RAW_DECL_LINK 1

/* Define to 1 if linkat is declared even after undefining macros. */
#define HAVE_RAW_DECL_LINKAT 1

/* Define to 1 if listen is declared even after undefining macros. */
#define HAVE_RAW_DECL_LISTEN 1

/* Define to 1 if lseek is declared even after undefining macros. */
#define HAVE_RAW_DECL_LSEEK 1

/* Define to 1 if lstat is declared even after undefining macros. */
#define HAVE_RAW_DECL_LSTAT 1

/* Define to 1 if mbrlen is declared even after undefining macros. */
#define HAVE_RAW_DECL_MBRLEN 1

/* Define to 1 if mbrtowc is declared even after undefining macros. */
#define HAVE_RAW_DECL_MBRTOWC 1

/* Define to 1 if mbsinit is declared even after undefining macros. */
#define HAVE_RAW_DECL_MBSINIT 1

/* Define to 1 if mbsnrtowcs is declared even after undefining macros. */
#define HAVE_RAW_DECL_MBSNRTOWCS 1

/* Define to 1 if mbsrtowcs is declared even after undefining macros. */
#define HAVE_RAW_DECL_MBSRTOWCS 1

/* Define to 1 if memmem is declared even after undefining macros. */
#define HAVE_RAW_DECL_MEMMEM 1

/* Define to 1 if mempcpy is declared even after undefining macros. */
#define HAVE_RAW_DECL_MEMPCPY 1

/* Define to 1 if memrchr is declared even after undefining macros. */
#define HAVE_RAW_DECL_MEMRCHR 1

/* Define to 1 if mkdirat is declared even after undefining macros. */
#define HAVE_RAW_DECL_MKDIRAT 1

/* Define to 1 if mkdtemp is declared even after undefining macros. */
#define HAVE_RAW_DECL_MKDTEMP 1

/* Define to 1 if mkfifo is declared even after undefining macros. */
#define HAVE_RAW_DECL_MKFIFO 1

/* Define to 1 if mkfifoat is declared even after undefining macros. */
#define HAVE_RAW_DECL_MKFIFOAT 1

/* Define to 1 if mknod is declared even after undefining macros. */
#define HAVE_RAW_DECL_MKNOD 1

/* Define to 1 if mknodat is declared even after undefining macros. */
#define HAVE_RAW_DECL_MKNODAT 1

/* Define to 1 if mkostemp is declared even after undefining macros. */
#define HAVE_RAW_DECL_MKOSTEMP 1

/* Define to 1 if mkostemps is declared even after undefining macros. */
#define HAVE_RAW_DECL_MKOSTEMPS 1

/* Define to 1 if mkstemp is declared even after undefining macros. */
#define HAVE_RAW_DECL_MKSTEMP 1

/* Define to 1 if mkstemps is declared even after undefining macros. */
#define HAVE_RAW_DECL_MKSTEMPS 1

/* Define to 1 if nl_langinfo is declared even after undefining macros. */
#define HAVE_RAW_DECL_NL_LANGINFO 1

/* Define to 1 if openat is declared even after undefining macros. */
#define HAVE_RAW_DECL_OPENAT 1

/* Define to 1 if pclose is declared even after undefining macros. */
#define HAVE_RAW_DECL_PCLOSE 1

/* Define to 1 if pipe is declared even after undefining macros. */
#define HAVE_RAW_DECL_PIPE 1

/* Define to 1 if pipe2 is declared even after undefining macros. */
#define HAVE_RAW_DECL_PIPE2 1

/* Define to 1 if popen is declared even after undefining macros. */
#define HAVE_RAW_DECL_POPEN 1

/* Define to 1 if posix_openpt is declared even after undefining macros. */
#define HAVE_RAW_DECL_POSIX_OPENPT 1

/* Define to 1 if pread is declared even after undefining macros. */
#define HAVE_RAW_DECL_PREAD 1

/* Define to 1 if pthread_sigmask is declared even after undefining macros. */
#define HAVE_RAW_DECL_PTHREAD_SIGMASK 1

/* Define to 1 if ptsname is declared even after undefining macros. */
#define HAVE_RAW_DECL_PTSNAME 1

/* Define to 1 if ptsname_r is declared even after undefining macros. */
#define HAVE_RAW_DECL_PTSNAME_R 1

/* Define to 1 if pwrite is declared even after undefining macros. */
#define HAVE_RAW_DECL_PWRITE 1

/* Define to 1 if random is declared even after undefining macros. */
#define HAVE_RAW_DECL_RANDOM 1

/* Define to 1 if random_r is declared even after undefining macros. */
#define HAVE_RAW_DECL_RANDOM_R 1

/* Define to 1 if rawmemchr is declared even after undefining macros. */
#define HAVE_RAW_DECL_RAWMEMCHR 1

/* Define to 1 if readlink is declared even after undefining macros. */
#define HAVE_RAW_DECL_READLINK 1

/* Define to 1 if readlinkat is declared even after undefining macros. */
#define HAVE_RAW_DECL_READLINKAT 1

/* Define to 1 if realpath is declared even after undefining macros. */
#define HAVE_RAW_DECL_REALPATH 1

/* Define to 1 if recv is declared even after undefining macros. */
#define HAVE_RAW_DECL_RECV 1

/* Define to 1 if recvfrom is declared even after undefining macros. */
#define HAVE_RAW_DECL_RECVFROM 1

/* Define to 1 if renameat is declared even after undefining macros. */
#define HAVE_RAW_DECL_RENAMEAT 1

/* Define to 1 if rmdir is declared even after undefining macros. */
#define HAVE_RAW_DECL_RMDIR 1

/* Define to 1 if rpmatch is declared even after undefining macros. */
#define HAVE_RAW_DECL_RPMATCH 1

/* Define to 1 if secure_getenv is declared even after undefining macros. */
#define HAVE_RAW_DECL_SECURE_GETENV 1

/* Define to 1 if send is declared even after undefining macros. */
#define HAVE_RAW_DECL_SEND 1

/* Define to 1 if sendto is declared even after undefining macros. */
#define HAVE_RAW_DECL_SENDTO 1

/* Define to 1 if setenv is declared even after undefining macros. */
#define HAVE_RAW_DECL_SETENV 1

/* Define to 1 if sethostname is declared even after undefining macros. */
#define HAVE_RAW_DECL_SETHOSTNAME 1

/* Define to 1 if setlocale is declared even after undefining macros. */
#define HAVE_RAW_DECL_SETLOCALE 1

/* Define to 1 if setsockopt is declared even after undefining macros. */
#define HAVE_RAW_DECL_SETSOCKOPT 1

/* Define to 1 if setstate is declared even after undefining macros. */
#define HAVE_RAW_DECL_SETSTATE 1

/* Define to 1 if setstate_r is declared even after undefining macros. */
#define HAVE_RAW_DECL_SETSTATE_R 1

/* Define to 1 if setusershell is declared even after undefining macros. */
#define HAVE_RAW_DECL_SETUSERSHELL 1

/* Define to 1 if shutdown is declared even after undefining macros. */
#define HAVE_RAW_DECL_SHUTDOWN 1

/* Define to 1 if sigaction is declared even after undefining macros. */
#define HAVE_RAW_DECL_SIGACTION 1

/* Define to 1 if sigaddset is declared even after undefining macros. */
#define HAVE_RAW_DECL_SIGADDSET 1

/* Define to 1 if sigdelset is declared even after undefining macros. */
#define HAVE_RAW_DECL_SIGDELSET 1

/* Define to 1 if sigemptyset is declared even after undefining macros. */
#define HAVE_RAW_DECL_SIGEMPTYSET 1

/* Define to 1 if sigfillset is declared even after undefining macros. */
#define HAVE_RAW_DECL_SIGFILLSET 1

/* Define to 1 if sigismember is declared even after undefining macros. */
#define HAVE_RAW_DECL_SIGISMEMBER 1

/* Define to 1 if sigpending is declared even after undefining macros. */
#define HAVE_RAW_DECL_SIGPENDING 1

/* Define to 1 if sigprocmask is declared even after undefining macros. */
#define HAVE_RAW_DECL_SIGPROCMASK 1

/* Define to 1 if sleep is declared even after undefining macros. */
#define HAVE_RAW_DECL_SLEEP 1

/* Define to 1 if snprintf is declared even after undefining macros. */
#define HAVE_RAW_DECL_SNPRINTF 1

/* Define to 1 if socket is declared even after undefining macros. */
#define HAVE_RAW_DECL_SOCKET 1

/* Define to 1 if srandom is declared even after undefining macros. */
#define HAVE_RAW_DECL_SRANDOM 1

/* Define to 1 if srandom_r is declared even after undefining macros. */
#define HAVE_RAW_DECL_SRANDOM_R 1

/* Define to 1 if stat is declared even after undefining macros. */
#define HAVE_RAW_DECL_STAT 1

/* Define to 1 if stpcpy is declared even after undefining macros. */
#define HAVE_RAW_DECL_STPCPY 1

/* Define to 1 if stpncpy is declared even after undefining macros. */
#define HAVE_RAW_DECL_STPNCPY 1

/* Define to 1 if strcasestr is declared even after undefining macros. */
#define HAVE_RAW_DECL_STRCASESTR 1

/* Define to 1 if strchrnul is declared even after undefining macros. */
#define HAVE_RAW_DECL_STRCHRNUL 1

/* Define to 1 if strdup is declared even after undefining macros. */
#define HAVE_RAW_DECL_STRDUP 1

/* Define to 1 if strerror_r is declared even after undefining macros. */
#define HAVE_RAW_DECL_STRERROR_R 1

/* Define to 1 if strncat is declared even after undefining macros. */
#define HAVE_RAW_DECL_STRNCAT 1

/* Define to 1 if strndup is declared even after undefining macros. */
#define HAVE_RAW_DECL_STRNDUP 1

/* Define to 1 if strnlen is declared even after undefining macros. */
#define HAVE_RAW_DECL_STRNLEN 1

/* Define to 1 if strpbrk is declared even after undefining macros. */
#define HAVE_RAW_DECL_STRPBRK 1

/* Define to 1 if strsep is declared even after undefining macros. */
#define HAVE_RAW_DECL_STRSEP 1

/* Define to 1 if strsignal is declared even after undefining macros. */
#define HAVE_RAW_DECL_STRSIGNAL 1

/* Define to 1 if strtod is declared even after undefining macros. */
#define HAVE_RAW_DECL_STRTOD 1

/* Define to 1 if strtok_r is declared even after undefining macros. */
#define HAVE_RAW_DECL_STRTOK_R 1

/* Define to 1 if strtoll is declared even after undefining macros. */
#define HAVE_RAW_DECL_STRTOLL 1

/* Define to 1 if strtoull is declared even after undefining macros. */
#define HAVE_RAW_DECL_STRTOULL 1

/* Define to 1 if strverscmp is declared even after undefining macros. */
#define HAVE_RAW_DECL_STRVERSCMP 1

/* Define to 1 if symlink is declared even after undefining macros. */
#define HAVE_RAW_DECL_SYMLINK 1

/* Define to 1 if symlinkat is declared even after undefining macros. */
#define HAVE_RAW_DECL_SYMLINKAT 1

/* Define to 1 if tmpfile is declared even after undefining macros. */
#define HAVE_RAW_DECL_TMPFILE 1

/* Define to 1 if towctrans is declared even after undefining macros. */
#define HAVE_RAW_DECL_TOWCTRANS 1

/* Define to 1 if ttyname_r is declared even after undefining macros. */
#define HAVE_RAW_DECL_TTYNAME_R 1

/* Define to 1 if unlink is declared even after undefining macros. */
#define HAVE_RAW_DECL_UNLINK 1

/* Define to 1 if unlinkat is declared even after undefining macros. */
#define HAVE_RAW_DECL_UNLINKAT 1

/* Define to 1 if unlockpt is declared even after undefining macros. */
#define HAVE_RAW_DECL_UNLOCKPT 1

/* Define to 1 if unsetenv is declared even after undefining macros. */
#define HAVE_RAW_DECL_UNSETENV 1

/* Define to 1 if usleep is declared even after undefining macros. */
#define HAVE_RAW_DECL_USLEEP 1

/* Define to 1 if utimensat is declared even after undefining macros. */
#define HAVE_RAW_DECL_UTIMENSAT 1

/* Define to 1 if vdprintf is declared even after undefining macros. */
#define HAVE_RAW_DECL_VDPRINTF 1

/* Define to 1 if vsnprintf is declared even after undefining macros. */
#define HAVE_RAW_DECL_VSNPRINTF 1

/* Define to 1 if wcpcpy is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCPCPY 1

/* Define to 1 if wcpncpy is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCPNCPY 1

/* Define to 1 if wcrtomb is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCRTOMB 1

/* Define to 1 if wcscasecmp is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSCASECMP 1

/* Define to 1 if wcscat is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSCAT 1

/* Define to 1 if wcschr is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSCHR 1

/* Define to 1 if wcscmp is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSCMP 1

/* Define to 1 if wcscoll is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSCOLL 1

/* Define to 1 if wcscpy is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSCPY 1

/* Define to 1 if wcscspn is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSCSPN 1

/* Define to 1 if wcsdup is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSDUP 1

/* Define to 1 if wcslen is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSLEN 1

/* Define to 1 if wcsncasecmp is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSNCASECMP 1

/* Define to 1 if wcsncat is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSNCAT 1

/* Define to 1 if wcsncmp is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSNCMP 1

/* Define to 1 if wcsncpy is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSNCPY 1

/* Define to 1 if wcsnlen is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSNLEN 1

/* Define to 1 if wcsnrtombs is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSNRTOMBS 1

/* Define to 1 if wcspbrk is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSPBRK 1

/* Define to 1 if wcsrchr is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSRCHR 1

/* Define to 1 if wcsrtombs is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSRTOMBS 1

/* Define to 1 if wcsspn is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSSPN 1

/* Define to 1 if wcsstr is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSSTR 1

/* Define to 1 if wcstok is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSTOK 1

/* Define to 1 if wcswidth is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSWIDTH 1

/* Define to 1 if wcsxfrm is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCSXFRM 1

/* Define to 1 if wctob is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCTOB 1

/* Define to 1 if wctrans is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCTRANS 1

/* Define to 1 if wctype is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCTYPE 1

/* Define to 1 if wcwidth is declared even after undefining macros. */
#define HAVE_RAW_DECL_WCWIDTH 1

/* Define to 1 if wmemchr is declared even after undefining macros. */
#define HAVE_RAW_DECL_WMEMCHR 1

/* Define to 1 if wmemcmp is declared even after undefining macros. */
#define HAVE_RAW_DECL_WMEMCMP 1

/* Define to 1 if wmemcpy is declared even after undefining macros. */
#define HAVE_RAW_DECL_WMEMCPY 1

/* Define to 1 if wmemmove is declared even after undefining macros. */
#define HAVE_RAW_DECL_WMEMMOVE 1

/* Define to 1 if wmemset is declared even after undefining macros. */
#define HAVE_RAW_DECL_WMEMSET 1

/* Define to 1 if _Exit is declared even after undefining macros. */
#define HAVE_RAW_DECL__EXIT 1

/* Define to 1 if you have the <readline.h> header file. */
/* #undef HAVE_READLINE_H */

/* Define if your readline library has \`add_history' */
#define HAVE_READLINE_HISTORY 1

/* Define to 1 if you have the <readline/history.h> header file. */
#define HAVE_READLINE_HISTORY_H 1

/* Define to 1 if you have the <readline/readline.h> header file. */
#define HAVE_READLINE_READLINE_H 1

/* Define to 1 if you have the `realloc' function. */
#define HAVE_REALLOC 1

/* Define if realloc is declared. */
#define HAVE_REALLOC_DECL 1

/* Define to 1 if you have the `recvfrom' function. */
#define HAVE_RECVFROM 1

/* Define if recvfrom is declared. */
#define HAVE_RECVFROM_DECL 1

/* Define to 1 if you have the <regex.h> header file. */
#define HAVE_REGEX_H 1

/* Define to 1 if you have the `remove' function. */
#define HAVE_REMOVE 1

/* Define if remove is declared. */
#define HAVE_REMOVE_DECL 1

/* Define to 1 if you have the `rename' function. */
#define HAVE_RENAME 1

/* Define if rename is declared. */
#define HAVE_RENAME_DECL 1

/* Define to 1 if you have the `rewind' function. */
#define HAVE_REWIND 1

/* Define if rewind is declared. */
#define HAVE_REWIND_DECL 1

/* Define to 1 if you have the <rpc/rpc.h> header file. */
#define HAVE_RPC_RPC_H 1

/* Define to 1 if you have the `ruserok' function. */
#define HAVE_RUSEROK 1

/* Define if ruserok is declared. */
#define HAVE_RUSEROK_DECL 1

/* Define to 1 if the system has the type `sa_family_t'. */
#define HAVE_SA_FAMILY_T 1

/* Define to 1 if you have the `secure_getenv' function. */
#define HAVE_SECURE_GETENV 1

/* Define to 1 if you have the `select' function. */
#define HAVE_SELECT 1

/* Define if select is declared. */
#define HAVE_SELECT_DECL 1

/* Define to 1 if you have the `sendto' function. */
#define HAVE_SENDTO 1

/* Define if sendto is declared. */
#define HAVE_SENDTO_DECL 1

/* Define to 1 if you have the `setegid' function. */
#define HAVE_SETEGID 1

/* Define if setegid is declared. */
#define HAVE_SETEGID_DECL 1

/* Define to 1 if you have the `seteuid' function. */
#define HAVE_SETEUID 1

/* Define if seteuid is declared. */
#define HAVE_SETEUID_DECL 1

/* Define to 1 if you have the `setmntent' function. */
#define HAVE_SETMNTENT 1

/* Define to 1 if you have the `setpgid' function. */
#define HAVE_SETPGID 1

/* Define if setpgid is declared. */
#define HAVE_SETPGID_DECL 1

/* Define to 1 if you have the `setpgrp' function. */
#define HAVE_SETPGRP 1

/* Define if setpgrp is declared. */
#define HAVE_SETPGRP_DECL 1

/* Define to 1 if you have the `setresgid' function. */
#define HAVE_SETRESGID 1

/* Define if setresgid is declared. */
#define HAVE_SETRESGID_DECL 1

/* Define to 1 if you have the `setresuid' function. */
#define HAVE_SETRESUID 1

/* Define if setresuid is declared. */
#define HAVE_SETRESUID_DECL 1

/* Define to 1 if you have the `setsockopt' function. */
#define HAVE_SETSOCKOPT 1

/* Define if setsockopt is declared. */
#define HAVE_SETSOCKOPT_DECL 1

/* Define to 1 if you have the `shutdown' function. */
#define HAVE_SHUTDOWN 1

/* Define to 1 if you have the `sigaction' function. */
#define HAVE_SIGACTION 1

/* Define to 1 if you have the `sigemptyset' function. */
#define HAVE_SIGEMPTYSET 1

/* Define to 1 if 'sig_atomic_t' is a signed integer type. */
/* #undef HAVE_SIGNED_SIG_ATOMIC_T */

/* Define to 1 if 'wchar_t' is a signed integer type. */
/* #undef HAVE_SIGNED_WCHAR_T */

/* Define to 1 if 'wint_t' is a signed integer type. */
/* #undef HAVE_SIGNED_WINT_T */

/* Define to 1 if the system has the type `sigset_t'. */
#define HAVE_SIGSET_T 1

/* Define to 1 if you have the `sigvec' function. */
/* #undef HAVE_SIGVEC */

/* Define to 1 if you have the `snprintf' function. */
#define HAVE_SNPRINTF 1

/* Define if snprintf is declared. */
#define HAVE_SNPRINTF_DECL 1

/* Define if the return value of the snprintf function is the number of of
   bytes (excluding the terminating NUL) that would have been produced if the
   buffer had been large enough. */
#define HAVE_SNPRINTF_RETVAL_C99 1

/* struct sockaddr_storage exists */
#define HAVE_SOCKADDR_STORAGE 1

/* Define to 1 if you have the `socket' function. */
#define HAVE_SOCKET 1

/* Define to 1 if you have the `socketpair' function. */
#define HAVE_SOCKETPAIR 1

/* Define if socketpair is declared. */
#define HAVE_SOCKETPAIR_DECL 1

/* Define if socket is declared. */
#define HAVE_SOCKET_DECL 1

/* Define to 1 if you have the `sscanf' function. */
#define HAVE_SSCANF 1

/* Define if sscanf is declared. */
#define HAVE_SSCANF_DECL 1

/* Define to 1 if you have the <stdarg.h> header file. */
#define HAVE_STDARG_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define if <stdint.h> exists, doesn't clash with <sys/types.h>, and declares
   uintmax_t. */
#define HAVE_STDINT_H_WITH_UINTMAX 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strcasecmp' function. */
#define HAVE_STRCASECMP 1

/* Define if strcasecmp is declared. */
#define HAVE_STRCASECMP_DECL 1

/* Define to 1 if you have the `strerror' function. */
#define HAVE_STRERROR 1

/* Define if strerror is declared. */
#define HAVE_STRERROR_DECL 1

/* Define to 1 if you have the `strftime' function. */
#define HAVE_STRFTIME 1

/* Define if strftime is declared. */
#define HAVE_STRFTIME_DECL 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strncasecmp' function. */
#define HAVE_STRNCASECMP 1

/* Define if strncasecmp is declared. */
#define HAVE_STRNCASECMP_DECL 1

/* Define to 1 if you have the `strnlen' function. */
#define HAVE_STRNLEN 1

/* Define to 1 if you have the `strtol' function. */
#define HAVE_STRTOL 1

/* Define to 1 if you have the `strtoll' function. */
#define HAVE_STRTOLL 1

/* Define if strtoll is declared. */
#define HAVE_STRTOLL_DECL 1

/* Define if strtol is declared. */
#define HAVE_STRTOL_DECL 1

/* Define to 1 if the system has the type `struct addrinfo'. */
#define HAVE_STRUCT_ADDRINFO 1

/* Define to 1 if `decimal_point' is a member of `struct lconv'. */
/* #undef HAVE_STRUCT_LCONV_DECIMAL_POINT */

/* Define to 1 if `sa_len' is a member of `struct sockaddr'. */
/* #undef HAVE_STRUCT_SOCKADDR_SA_LEN */

/* Define to 1 if the system has the type `struct sockaddr_storage'. */
#define HAVE_STRUCT_SOCKADDR_STORAGE 1

/* Define to 1 if `ss_family' is a member of `struct sockaddr_storage'. */
#define HAVE_STRUCT_SOCKADDR_STORAGE_SS_FAMILY 1

/* Define to 1 if you have the `symlink' function. */
#define HAVE_SYMLINK 1

/* Define to 1 if you have the `sysctl' function. */
#define HAVE_SYSCTL 1

/* Define to 1 if you have the `syslog' function. */
#define HAVE_SYSLOG 1

/* Define if syslog is declared. */
#define HAVE_SYSLOG_DECL 1

/* Define to 1 if you have the <syslog.h> header file. */
#define HAVE_SYSLOG_H 1

/* Define to 1 if you have the `sysmp' function. */
/* #undef HAVE_SYSMP */

/* Define to 1 if you have the `system' function. */
#define HAVE_SYSTEM 1

/* Define if system is declared. */
#define HAVE_SYSTEM_DECL 1

/* Define to 1 if you have the <sys/bitypes.h> header file. */
/* #undef HAVE_SYS_BITYPES_H */

/* Define to 1 if you have the <sys/dir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_DIR_H */

/* Define to 1 if you have the <sys/fcntl.h> header file. */
#define HAVE_SYS_FCNTL_H 1

/* Define to 1 if you have the <sys/file.h> header file. */
#define HAVE_SYS_FILE_H 1

/* Define to 1 if you have the <sys/filsys.h> header file. */
/* #undef HAVE_SYS_FILSYS_H */

/* Define to 1 if you have the <sys/fs/s5param.h> header file. */
/* #undef HAVE_SYS_FS_S5PARAM_H */

/* Define to 1 if you have the <sys/fs_types.h> header file. */
/* #undef HAVE_SYS_FS_TYPES_H */

/* Define to 1 if you have the <sys/inttypes.h> header file. */
/* #undef HAVE_SYS_INTTYPES_H */

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#define HAVE_SYS_IOCTL_H 1

/* Define to 1 if you have the <sys/ipc.h> header file. */
#define HAVE_SYS_IPC_H 1

/* Define to 1 if you have the <sys/mman.h> header file. */
#define HAVE_SYS_MMAN_H 1

/* Define to 1 if you have the <sys/mntent.h> header file. */
/* #undef HAVE_SYS_MNTENT_H */

/* Define to 1 if you have the <sys/mount.h> header file. */
#define HAVE_SYS_MOUNT_H 1

/* Define to 1 if you have the <sys/mtio.h> header file. */
#define HAVE_SYS_MTIO_H 1

/* Define to 1 if you have the <sys/ndir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_NDIR_H */

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/pstat.h> header file. */
/* #undef HAVE_SYS_PSTAT_H */

/* Define to 1 if you have the <sys/select.h> header file. */
#define HAVE_SYS_SELECT_H 1

/* Define to 1 if you have the <sys/shm.h> header file. */
#define HAVE_SYS_SHM_H 1

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/statfs.h> header file. */
#define HAVE_SYS_STATFS_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/sysctl.h> header file. */
#define HAVE_SYS_SYSCTL_H 1

/* Define to 1 if you have the <sys/sysinfo.h> header file. */
#define HAVE_SYS_SYSINFO_H 1

/* Define to 1 if you have the <sys/sysmp.h> header file. */
/* #undef HAVE_SYS_SYSMP_H */

/* Define to 1 if you have the <sys/systemcfg.h> header file. */
/* #undef HAVE_SYS_SYSTEMCFG_H */

/* Define to 1 if you have the <sys/table.h> header file. */
/* #undef HAVE_SYS_TABLE_H */

/* Define to 1 if you have the <sys/tape.h> header file. */
/* #undef HAVE_SYS_TAPE_H */

/* Define to 1 if you have the <sys/timeb.h> header file. */
/* #undef HAVE_SYS_TIMEB_H */

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/uio.h> header file. */
#define HAVE_SYS_UIO_H 1

/* Define to 1 if you have the <sys/vfstab.h> header file. */
/* #undef HAVE_SYS_VFSTAB_H */

/* Define to 1 if you have the <sys/vfs.h> header file. */
#define HAVE_SYS_VFS_H 1

/* Define to 1 if you have the <sys/wait.h> header file. */
#define HAVE_SYS_WAIT_H 1

/* Define to 1 if you have the `table' function. */
/* #undef HAVE_TABLE */

/* Define to 1 if you have the `time' function. */
#define HAVE_TIME 1

/* Define if time is declared. */
#define HAVE_TIME_DECL 1

/* Define to 1 if you have the <time.h> header file. */
#define HAVE_TIME_H 1

/* Define to 1 if you have the `tolower' function. */
#define HAVE_TOLOWER 1

/* Define if tolower is declared. */
#define HAVE_TOLOWER_DECL 1

/* Define to 1 if you have the `toupper' function. */
#define HAVE_TOUPPER 1

/* Define if toupper is declared. */
#define HAVE_TOUPPER_DECL 1

/* Define to 1 if you have the `towlower' function. */
#define HAVE_TOWLOWER 1

/* Define to 1 if you have the `ungetc' function. */
#define HAVE_UNGETC 1

/* Define if ungetc is declared. */
#define HAVE_UNGETC_DECL 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the `unsetenv' function. */
#define HAVE_UNSETENV 1

/* Define to 1 if the system has the type 'unsigned long long int'. */
#define HAVE_UNSIGNED_LONG_LONG_INT 1

/* Define to 1 if you have the "util.h" header file. */
#define HAVE_UTIL_H 1

/* Define to 1 if you have the `vasnprintf' function. */
/* #undef HAVE_VASNPRINTF */

/* Define to 1 if you have the `vfprintf' function. */
#define HAVE_VFPRINTF 1

/* Define if vfprintf is declared. */
#define HAVE_VFPRINTF_DECL 1

/* Define to 1 if you have the `vprintf' function. */
#define HAVE_VPRINTF 1

/* Define if vprintf is declared. */
#define HAVE_VPRINTF_DECL 1

/* Define to 1 if you have the `vsnprintf' function. */
#define HAVE_VSNPRINTF 1

/* Define if vsnprintf is declared. */
#define HAVE_VSNPRINTF_DECL 1

/* Define to 1 if you have the <wait.h> header file. */
#define HAVE_WAIT_H 1

/* Define to 1 if you have the <wchar.h> header file. */
#define HAVE_WCHAR_H 1

/* Define if you have the 'wchar_t' type. */
#define HAVE_WCHAR_T 1

/* Define to 1 if you have the `wcrtomb' function. */
#define HAVE_WCRTOMB 1

/* Define to 1 if you have the `wcscoll' function. */
#define HAVE_WCSCOLL 1

/* Define to 1 if you have the `wcslen' function. */
#define HAVE_WCSLEN 1

/* Define to 1 if you have the `wcsnlen' function. */
#define HAVE_WCSNLEN 1

/* Define to 1 if you have the <wctype.h> header file. */
#define HAVE_WCTYPE_H 1

/* Define to 1 if you have the <winsock2.h> header file. */
/* #undef HAVE_WINSOCK2_H */

/* Define if you have the 'wint_t' type. */
#define HAVE_WINT_T 1

/* Define to 1 if O_NOATIME works. */
#define HAVE_WORKING_O_NOATIME 1

/* Define to 1 if O_NOFOLLOW works. */
#define HAVE_WORKING_O_NOFOLLOW 1

/* Define to 1 if you have the `writev' function. */
#define HAVE_WRITEV 1

/* Define if writev is declared. */
#define HAVE_WRITEV_DECL 1

/* Define to 1 if you have the <ws2tcpip.h> header file. */
/* #undef HAVE_WS2TCPIP_H */

/* Define to 1 if you have the <xlocale.h> header file. */
#define HAVE_XLOCALE_H 1

/* Define to 1 if the system has the type `_Bool'. */
#define HAVE__BOOL 1

/* Define to 1 if you have the `_fseeki64' function. */
/* #undef HAVE__FSEEKI64 */

/* Define to 1 if you have the `_ftelli64' function. */
/* #undef HAVE__FTELLI64 */

/* Define to 1 if you have the `_ftime' function. */
/* #undef HAVE__FTIME */

/* Define to 1 if you have the `_set_invalid_parameter_handler' function. */
/* #undef HAVE__SET_INVALID_PARAMETER_HANDLER */

/* Define to 1 if you have the external variable, _system_configuration with a
   member named physmem. */
/* #undef HAVE__SYSTEM_CONFIGURATION */

/* Define to 1 if you have the `__secure_getenv' function. */
/* #undef HAVE___SECURE_GETENV */

/* Define on Cygwin. */
/* #undef IGNORE_FSTAB */

/* Define on Cygwin. */
/* #undef IGNORE_TAR_ERRORS */

/* The name for the Kerberized Amanda service. */
#define KAMANDA_SERVICE_NAME "kamanda"

/* Define if Kerberos 5 security is to be enabled. */
/* #undef KRB5_SECURITY */

/* Defined if libcurl supports AsynchDNS */
/* #undef LIBCURL_FEATURE_ASYNCHDNS */

/* Defined if libcurl supports IDN */
/* #undef LIBCURL_FEATURE_IDN */

/* Defined if libcurl supports IPv6 */
/* #undef LIBCURL_FEATURE_IPV6 */

/* Defined if libcurl supports KRB4 */
/* #undef LIBCURL_FEATURE_KRB4 */

/* Defined if libcurl supports libz */
/* #undef LIBCURL_FEATURE_LIBZ */

/* Defined if libcurl supports NTLM */
/* #undef LIBCURL_FEATURE_NTLM */

/* Defined if libcurl supports SSL */
/* #undef LIBCURL_FEATURE_SSL */

/* Defined if libcurl supports SSPI */
/* #undef LIBCURL_FEATURE_SSPI */

/* Defined if libcurl supports DICT */
/* #undef LIBCURL_PROTOCOL_DICT */

/* Defined if libcurl supports FILE */
/* #undef LIBCURL_PROTOCOL_FILE */

/* Defined if libcurl supports FTP */
/* #undef LIBCURL_PROTOCOL_FTP */

/* Defined if libcurl supports FTPS */
/* #undef LIBCURL_PROTOCOL_FTPS */

/* Defined if libcurl supports HTTP */
/* #undef LIBCURL_PROTOCOL_HTTP */

/* Defined if libcurl supports HTTPS */
/* #undef LIBCURL_PROTOCOL_HTTPS */

/* Defined if libcurl supports LDAP */
/* #undef LIBCURL_PROTOCOL_LDAP */

/* Defined if libcurl supports TELNET */
/* #undef LIBCURL_PROTOCOL_TELNET */

/* Defined if libcurl supports TFTP */
/* #undef LIBCURL_PROTOCOL_TFTP */

/* Defined if libcurl use GnuTLS */
/* #undef LIBCURL_USE_GNUTLS */

/* Defined if libcurl use NSS */
/* #undef LIBCURL_USE_NSS */

/* Defined if libcurl use OpenSSL */
/* #undef LIBCURL_USE_OPENSSL */

/* A comma-separated list of two integers, determining the minimum and maximum
   * reserved TCP port numbers sockets should be bound to. (mainly for
   amrecover) */
/* #undef LOW_TCPPORTRANGE */

/* Define to 1 if lseek does not detect pipes. */
/* #undef LSEEK_PIPE_BROKEN */

/* Define to 1 if 'lstat' dereferences a symlink specified with a trailing
   slash. */
#define LSTAT_FOLLOWS_SLASHED_SYMLINK 1

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* If malloc(0) is != NULL, define this to 1. Otherwise define this to 0. */
#define MALLOC_0_IS_NONNULL 1

/* Define to a substitute value for mmap()'s MAP_ANONYMOUS flag. */
/* #undef MAP_ANONYMOUS */

/* Define if the mbrtowc function has the NULL pwc argument bug. */
/* #undef MBRTOWC_NULL_ARG1_BUG */

/* Define if the mbrtowc function has the NULL string argument bug. */
/* #undef MBRTOWC_NULL_ARG2_BUG */

/* Define if the mbrtowc function does not return 0 for a NUL character. */
/* #undef MBRTOWC_NUL_RETVAL_BUG */

/* Define if the mbrtowc function returns a wrong return value. */
/* #undef MBRTOWC_RETVAL_BUG */

/* The switch to be used when invoking mt to specify the * tape device. */
#define MT_FILE_FLAG "-f"

/* Define on hpux. */
/* #undef NEED_LD_LIBRARY_PATH_ENV */

/* Define on Cygwin. */
/* #undef NEED_PATH_ENV */

/* Define if we have to reset tape offsets when reaching 2GB. */
/* #undef NEED_RESETOFS */

/* Name of package */
#define PACKAGE "amanda"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME "amanda"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "amanda 3.3.9"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "amanda"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "3.3.9"

/* Define if the pthread_in_use() detection is hard. */
/* #undef PTHREAD_IN_USE_DETECTION_HARD */

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
   'ptrdiff_t'. */
/* #undef PTRDIFF_T_SUFFIX */

/* Define as the prefix for raw disk devices, commonly /dev/r or /dev/rdsk/ */
#define RDEV_PREFIX "/dev/"

/* Define to 1 if stat needs help when passed a directory name with a trailing
   slash */
/* #undef REPLACE_FUNC_STAT_DIR */

/* Define to 1 if stat needs help when passed a file name with a trailing
   slash */
/* #undef REPLACE_FUNC_STAT_FILE */

/* Define if nl_langinfo exists but is overridden by gnulib. */
/* #undef REPLACE_NL_LANGINFO */

/* Define if vasnprintf exists but is overridden by gnulib. */
/* #undef REPLACE_VASNPRINTF */

/* Define the location of the ufsrestore or restore program. */
/* #undef RESTORE */

/* Define as the return type of signal handlers (`int' or `void'). */
#define RETSIGTYPE void

/* Define if RSH transport should be enabled. */
/* #undef RSH_SECURITY */

/* Define the location of smbclient for backing up Samba PC clients. */
#define SAMBA_CLIENT "/usr/bin/smbclient"

/* Not the actual samba version, just a number that should be increased
   whenever we start to rely on a new samba feature. */
#define SAMBA_VERSION 2

/* Define to type of select arguments. */
#define SELECT_ARG_TYPE fd_set

/* A suffix that will be appended to service names. * Useful for testing in
   parallel with a working version. */
#define SERVICE_SUFFIX ""

/* Define to 1 if the `setpgrp' function takes no argument. */
#define SETPGRP_VOID 1

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
   'sig_atomic_t'. */
/* #undef SIG_ATOMIC_T_SUFFIX */

/* Define if all of Amanda will run as a single userid (e.g., on Cygwin or for
   installchecks) */
/* #undef SINGLE_USERID */

/* The size of `int', as computed by sizeof. */
#define SIZEOF_INT 4

/* The size of `intmax_t', as computed by sizeof. */
#define SIZEOF_INTMAX_T 8

/* The size of `long', as computed by sizeof. */
#define SIZEOF_LONG 4

/* The size of `long long', as computed by sizeof. */
#define SIZEOF_LONG_LONG 8

/* The size of `off_t', as computed by sizeof. */
#define SIZEOF_OFF_T 4

/* The size of `size_t', as computed by sizeof. */
#define SIZEOF_SIZE_T 4

/* The size of `ssize_t', as computed by sizeof. */
#define SIZEOF_SSIZE_T 4

/* The size of `time_t', as computed by sizeof. */
#define SIZEOF_TIME_T 4

/* Define as the maximum value of type 'size_t', if the system doesn't define
   it. */
/* #undef SIZE_MAX */

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
   'size_t'. */
/* #undef SIZE_T_SUFFIX */

/* Define to the exact path to the sort program. */
#define SORT_PATH "/usr/bin/sort"

/* Path to the SSH binary */
#define SSH "/usr/bin/ssh"

/* Arguments to ssh */
#define SSH_OPTIONS "-x", "-o", "BatchMode=yes", "-o", "PreferredAuthentications=publickey"

/* Define if SSH transport should be enabled. */
#define SSH_SECURITY 1

/* If using the C implementation of alloca, define if you know the
   direction of stack growth for your system; otherwise it will be
   automatically deduced at runtime.
	STACK_DIRECTION > 0 => grows toward higher addresses
	STACK_DIRECTION < 0 => grows toward lower addresses
	STACK_DIRECTION = 0 => direction of growth unknown */
/* #undef STACK_DIRECTION */

/* Location of the 'star' binary */
#define STAR "/usr/bin/star"

/* Define if the block counts reported by statfs may be truncated to 2GB and
   the correct values may be stored in the f_spare array. (SunOS 4.1.2, 4.1.3,
   and 4.1.3_U1 are reported to have this problem. SunOS 4.1.1 seems not to be
   affected.) */
/* #undef STATFS_TRUNCATES_BLOCK_COUNTS */

/* Define to 1 if the `S_IS*' macros in <sys/stat.h> do not work properly. */
/* #undef STAT_MACROS_BROKEN */

/* Define if there is no specific function for reading file systems usage
   information and you have the <sys/filsys.h> header file. (SVR2) */
/* #undef STAT_READ_FILSYS */

/* Define if statfs takes 2 args and struct statfs has a field named f_bsize.
   (4.3BSD, SunOS 4, HP-UX, AIX PS/2) */
/* #undef STAT_STATFS2_BSIZE */

/* Define if statfs takes 2 args and struct statfs has a field named f_frsize.
   (glibc/Linux > 2.6) */
/* #undef STAT_STATFS2_FRSIZE */

/* Define if statfs takes 2 args and struct statfs has a field named f_fsize.
   (4.4BSD, NetBSD) */
/* #undef STAT_STATFS2_FSIZE */

/* Define if statfs takes 2 args and the second argument has type struct
   fs_data. (Ultrix) */
/* #undef STAT_STATFS2_FS_DATA */

/* Define if statfs takes 3 args. (DEC Alpha running OSF/1) */
/* #undef STAT_STATFS3_OSF1 */

/* Define if statfs takes 4 args. (SVR3, Dynix, old Irix, old AIX, Dolphin) */
/* #undef STAT_STATFS4 */

/* Define if there is a function named statvfs. (SVR4) */
#define STAT_STATVFS 1

/* Define if statvfs64 should be preferred over statvfs. */
/* #undef STAT_STATVFS64 */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Location of the 'suntar' binary */
#define SUNTAR "/usr/sbin/tar"

/* A comma-separated list of two integers, determining the minimum and *
   maximum unreserved TCP port numbers sockets should be bound to. */
/* #undef TCPPORTRANGE */

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

/* Define to 1 if your <sys/time.h> declares `struct tm'. */
/* #undef TM_IN_SYS_TIME */

/* A comma-separated list of two integers, determining the minimum and *
   maximum reserved UDP port numbers sockets should be bound to. */
/* #undef UDPPORTRANGE */

/* Define the location of the uname program. */
#define UNAME_PATH "/bin/uname"

/* Define as any optional arguments to get UNCOMPRESS_PATH to uncompress. */
#define UNCOMPRESS_OPT "-dc"

/* Define as the exact path to the gzip or compress command. */
#define UNCOMPRESS_PATH "/bin/gzip"

/* Define if you want to use the ".amandahosts" for BSD* security. */
#define USE_AMANDAHOSTS 1

/* Define for backups being done on a multiple networks and FQDNs are used. */
#define USE_FQDN 1

/* Define to 1 if files will be processed with gettextize */
#define USE_GETTEXT 1

/* Define if the POSIX multithreading library can be used. */
#define USE_POSIX_THREADS 1

/* Define if references to the POSIX multithreading library should be made
   weak. */
#define USE_POSIX_THREADS_WEAK 1

/* Define if the GNU Pth multithreading library can be used. */
/* #undef USE_PTH_THREADS */

/* Define if references to the GNU Pth multithreading library should be made
   weak. */
/* #undef USE_PTH_THREADS_WEAK */

/* Define to set SO_REUSEADDR on network connections. */
#define USE_REUSEADDR 1

/* Define to invoke rundump (setuid-root) instead of DUMP program directly. */
/* #undef USE_RUNDUMP */

/* Define if the old Solaris multithreading library can be used. */
/* #undef USE_SOLARIS_THREADS */

/* Define if references to the old Solaris multithreading library should be
   made weak. */
/* #undef USE_SOLARIS_THREADS_WEAK */

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable general extensions on OS X.  */
#ifndef _DARWIN_C_SOURCE
# define _DARWIN_C_SOURCE 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable X/Open extensions if necessary.  HP-UX 11.11 defines
   mbstate_t only if _XOPEN_SOURCE is defined to 500, regardless of
   whether compiling with -Ae or -D_HPUX_SOURCE=1.  */
#ifndef _XOPEN_SOURCE
/* # undef _XOPEN_SOURCE */
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif


/* Define if the native Windows multithreading API can be used. */
/* #undef USE_WINDOWS_THREADS */

/* Define the location of the vdump program. */
/* #undef VDUMP */

/* Version number of package */
#define VERSION "3.3.9"

/* Amanda version information beyond patch */
#define VERSION_COMMENT ""

/* major Amanda version number */
#define VERSION_MAJOR 3

/* minor Amanda version number */
#define VERSION_MINOR 3

/* Amanda patch number */
#define VERSION_PATCH 9

/* Define the location of the vrestore program. */
/* #undef VRESTORE */

/* Define the location of the vxdump program on HPUX and SINIX hosts or on *
   other hosts where the Veritas filesystem (vxfs) has been installed. */
/* #undef VXDUMP */

/* Define the location of the vxrestore program on HPUX and SINIX hosts or on
   * other hosts where the Veritas filesystem (vxfs) has been installed. */
/* #undef VXRESTORE */

/* Defined if wait() puts the status in a int instead of a union wait. */
#define WAIT_USES_INT 1

/* Defined if wait() puts the status in a union wait instead of int. */
#define WAIT_USES_UNION 1

/* Define to use flock(2) for file locking */
#define WANT_AMFLOCK_FLOCK 1

/* Define to use link(2) to emulate file locking. */
#define WANT_AMFLOCK_LNLOCK 1

/* Define to use lockf(3) for file locking. */
#define WANT_AMFLOCK_LOCKF 1

/* Define to use POSIX (fcntl()) for file locking */
#define WANT_AMFLOCK_POSIX 1

/* Compile DVD-RW driver */
#define WANT_DVDRW_DEVICE /**/

/* Compile NDMP device */
#define WANT_NDMP_DEVICE 1

/* Compile Amazon S3 driver */
/* #undef WANT_S3_DEVICE */

/* Define if clients should be built setuid-root */
#define WANT_SETUID_CLIENT 1

/* Define if the tape-device will be built */
#define WANT_TAPE_DEVICE 1

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
   'wchar_t'. */
/* #undef WCHAR_T_SUFFIX */

/* Define if WSAStartup is needed. */
/* #undef WINDOWS_SOCKETS */

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
   'wint_t'. */
/* #undef WINT_T_SUFFIX */

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif

/* This system has functional IPv6 support (kernel and compiler) */
#define WORKING_IPV6 1

/* Define the location of the xfsdump program on Irix hosts. */
/* #undef XFSDUMP */

/* Define the location of the xfsrestore program on Irix hosts. */
/* #undef XFSRESTORE */

/* Define to 1 if `lex' declares `yytext' as a `char *' by default, not a
   `char[]'. */
#define YYTEXT_POINTER 1

/* Enable large inode numbers on Mac OS X 10.5. */
#define _DARWIN_USE_64_BIT_INODE 1

/* Number of bits in a file offset, on hosts where this is settable. */
#define _FILE_OFFSET_BITS 64

/* Define to 1 if Gnulib overrides 'struct stat' on Windows so that struct
   stat.st_size becomes 64-bit. */
/* #undef _GL_WINDOWS_64_BIT_ST_SIZE */

/* Define to 1 to make fseeko visible on some hosts (e.g. glibc 2.2). */
/* #undef _LARGEFILE_SOURCE */

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Define to 1 on Solaris. */
/* #undef _LCONV_C99 */

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Define to 1 to make NetBSD features available. MINIX 3 needs this. */
/* #undef _NETBSD_SOURCE */

/* The _Noreturn keyword of C11.  */
#if ! (defined _Noreturn \
       || (defined __STDC_VERSION__ && 201112 <= __STDC_VERSION__))
# if (3 <= __GNUC__ || (__GNUC__ == 2 && 8 <= __GNUC_MINOR__) \
      || 0x5110 <= __SUNPRO_C)
#  define _Noreturn __attribute__ ((__noreturn__))
# elif defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn
# endif
#endif


/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Define to 1 in order to get the POSIX compatible declarations of socket
   functions. */
/* #undef _POSIX_PII_SOCKET */

/* Define to 1 if you need to in order for 'stat' and other things to work. */
/* #undef _POSIX_SOURCE */

/* Define if you want <regex.h> to include <limits.h>, so that it consistently
   overrides <limits.h>'s RE_DUP_MAX. */
#define _REGEX_INCLUDE_LIMITS_H 1

/* Define if you want regoff_t to be at least as wide POSIX requires. */
#define _REGEX_LARGE_OFFSETS 1

/* Define to rpl_ if the getopt replacement functions and variables should be
   used. */
#define __GETOPT_PREFIX rpl_

/* Directory in which amanda's templates and examples are installed. */
#define amdatadir "/var/amanda/lib"

/* Directory in which Amanda header files should be installed */
#define amincludedir "/usr/include/amanda"

/* Directory in which Amanda libraries should be installed */
#define amlibdir "/usr/lib/amanda"

/* Directory in which Amanda own programs should be installed */
#define amlibexecdir "/usr/lib/amanda"

/* Directory in which perl modules should be installed */
#define amperldir "/usr/lib/perl/5.22.1"

/* Directory in which user binaries should be installed. */
#define bindir "/usr/bin"

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define curl_free() as free() if our version of curl lacks curl_free. */
/* #undef curl_free */

/* Type for curl_off_t, if it is not defined by the system */
/* #undef curl_off_t */

/* _GL_INLINE is a portable alternative to ISO C99 plain 'inline'.
   _GL_EXTERN_INLINE is a portable alternative to 'extern inline'.
   _GL_INLINE_HEADER_BEGIN contains useful stuff to put
     in an include file, before uses of _GL_INLINE.
     It suppresses GCC's bogus "no previous prototype for 'FOO'" diagnostic,
     when FOO is an inline function in the header; see
     <http://gcc.gnu.org/bugzilla/show_bug.cgi?id=54113>.
   _GL_INLINE_HEADER_END contains useful stuff to put
     in the same include file, after uses of _GL_INLINE.

   Suppress extern inline with HP-UX cc, as it appears to be broken; see
   <http://lists.gnu.org/archive/html/bug-texinfo/2013-02/msg00030.html>.

   Suppress extern inline with Sun C in standards-conformance mode, as it
   mishandles inline functions that call each other.  E.g., for 'inline void f
   (void) { } inline void g (void) { f (); }', c99 incorrectly complains
   'reference to static identifier "f" in extern inline function'.
   This bug was observed with Sun C 5.12 SunOS_i386 2011/11/16.

   Suppress the use of extern inline on Apple's platforms, as Libc at least
   through Libc-825.26 (2013-04-09) is incompatible with it; see, e.g.,
   <http://lists.gnu.org/archive/html/bug-gnulib/2012-12/msg00023.html>.
   Perhaps Apple will fix this some day.  */
#if ((__GNUC__ \
      ? defined __GNUC_STDC_INLINE__ && __GNUC_STDC_INLINE__ \
      : (199901L <= __STDC_VERSION__ \
         && !defined __HP_cc \
         && !(defined __SUNPRO_C && __STDC__))) \
     && !defined __APPLE__)
# define _GL_INLINE inline
# define _GL_EXTERN_INLINE extern inline
#elif 2 < __GNUC__ + (7 <= __GNUC_MINOR__) && !defined __APPLE__
# if __GNUC_GNU_INLINE__
   /* __gnu_inline__ suppresses a GCC 4.2 diagnostic.  */
#  define _GL_INLINE extern inline __attribute__ ((__gnu_inline__))
# else
#  define _GL_INLINE extern inline
# endif
# define _GL_EXTERN_INLINE extern
#else
# define _GL_INLINE static _GL_UNUSED
# define _GL_EXTERN_INLINE static _GL_UNUSED
#endif

#if 4 < __GNUC__ + (6 <= __GNUC_MINOR__)
# if defined __GNUC_STDC_INLINE__ && __GNUC_STDC_INLINE__
#  define _GL_INLINE_HEADER_CONST_PRAGMA
# else
#  define _GL_INLINE_HEADER_CONST_PRAGMA \
     _Pragma ("GCC diagnostic ignored \"-Wsuggest-attribute=const\"")
# endif
# define _GL_INLINE_HEADER_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wmissing-prototypes\"") \
    _Pragma ("GCC diagnostic ignored \"-Wmissing-declarations\"") \
    _GL_INLINE_HEADER_CONST_PRAGMA
# define _GL_INLINE_HEADER_END \
    _Pragma ("GCC diagnostic pop")
#else
# define _GL_INLINE_HEADER_BEGIN
# define _GL_INLINE_HEADER_END
#endif

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef gid_t */

/* Define to rpl_gmtime if the replacement function should be used. */
/* #undef gmtime */

/* Type for in_port_t, if it is not defined by the system */
/* #undef in_port_t */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to long or long long if <stdint.h> and <inttypes.h> don't define. */
/* #undef intmax_t */

/* Work around a bug in Apple GCC 4.0.1 build 5465: In C99 mode, it supports
   the ISO C 99 semantics of 'extern inline' (unlike the GNU C semantics of
   earlier versions), but does not display it by setting __GNUC_STDC_INLINE__.
   __APPLE__ && __MACH__ test for Mac OS X.
   __APPLE_CC__ tests for the Apple compiler and its version.
   __STDC_VERSION__ tests for the C99 mode.  */
#if defined __APPLE__ && defined __MACH__ && __APPLE_CC__ >= 5465 && !defined __cplusplus && __STDC_VERSION__ >= 199901L && !defined __GNUC_STDC_INLINE__
# define __GNUC_STDC_INLINE__ 1
#endif

/* Directory in which internal binaries should be installed. */
#define libexecdir "/usr/lib"

/* Define to rpl_localtime if the replacement function should be used. */
/* #undef localtime */

/* Directory in which man-pages should be installed */
#define mandir "/usr/share/man"

/* Define to a type if <wchar.h> does not define. */
/* #undef mbstate_t */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef mode_t */

/* Define to the type of st_nlink in struct stat, or a supertype. */
/* #undef nlink_t */

/* Define to `long int' if <sys/types.h> does not define. */
/* #undef off_t */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef pid_t */

/* Define as the type of the result of subtracting two pointers, if the system
   doesn't define it. */
/* #undef ptrdiff_t */

/* Define to rpl_re_comp if the replacement should be used. */
#define re_comp rpl_re_comp

/* Define to rpl_re_compile_fastmap if the replacement should be used. */
#define re_compile_fastmap rpl_re_compile_fastmap

/* Define to rpl_re_compile_pattern if the replacement should be used. */
#define re_compile_pattern rpl_re_compile_pattern

/* Define to rpl_re_exec if the replacement should be used. */
#define re_exec rpl_re_exec

/* Define to rpl_re_match if the replacement should be used. */
#define re_match rpl_re_match

/* Define to rpl_re_match_2 if the replacement should be used. */
#define re_match_2 rpl_re_match_2

/* Define to rpl_re_search if the replacement should be used. */
#define re_search rpl_re_search

/* Define to rpl_re_search_2 if the replacement should be used. */
#define re_search_2 rpl_re_search_2

/* Define to rpl_re_set_registers if the replacement should be used. */
#define re_set_registers rpl_re_set_registers

/* Define to rpl_re_set_syntax if the replacement should be used. */
#define re_set_syntax rpl_re_set_syntax

/* Define to rpl_re_syntax_options if the replacement should be used. */
#define re_syntax_options rpl_re_syntax_options

/* Define to rpl_regcomp if the replacement should be used. */
#define regcomp rpl_regcomp

/* Define to rpl_regerror if the replacement should be used. */
#define regerror rpl_regerror

/* Define to rpl_regexec if the replacement should be used. */
#define regexec rpl_regexec

/* Define to rpl_regfree if the replacement should be used. */
#define regfree rpl_regfree

/* Define to the equivalent of the C99 'restrict' keyword, or to
   nothing if this is not supported.  Do not define if restrict is
   supported directly.  */
#define restrict __restrict
/* Work around a bug in Sun C++: it does not support _Restrict or
   __restrict__, even though the corresponding Sun C compiler ends up with
   "#define restrict _Restrict" or "#define restrict __restrict__" in the
   previous line.  Perhaps some future version of Sun C++ will work with
   restrict; if so, hopefully it defines __RESTRICT like Sun C does.  */
#if defined __SUNPRO_CC && !defined __RESTRICT
# define _Restrict
# define __restrict__
#endif

/* Type for sa_family_t, if it is not defined by the system */
/* #undef sa_family_t */

/* Directory in which administrator binaries should be installed. */
#define sbindir "/usr/sbin"

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

/* type to use in place of socklen_t if not defined */
/* #undef socklen_t */

/* type to use for socket length parameters; use instead of socklen_t */
#define socklen_t_equiv socklen_t

/* Define as a signed type of the same size as size_t. */
/* #undef ssize_t */

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef uid_t */

/* Define as a marker that can be attached to declarations that might not
    be used.  This helps to reduce warnings, such as from
    GCC -Wunused-parameter.  */
#if __GNUC__ >= 3 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 7)
# define _GL_UNUSED __attribute__ ((__unused__))
#else
# define _GL_UNUSED
#endif
/* The name _UNUSED_PARAMETER_ is an earlier spelling, although the name
   is a misnomer outside of parameter lists.  */
#define _UNUSED_PARAMETER_ _GL_UNUSED

/* The __pure__ attribute was added in gcc 2.96.  */
#if __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 96)
# define _GL_ATTRIBUTE_PURE __attribute__ ((__pure__))
#else
# define _GL_ATTRIBUTE_PURE /* empty */
#endif

/* The __const__ attribute was added in gcc 2.95.  */
#if __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 95)
# define _GL_ATTRIBUTE_CONST __attribute__ ((__const__))
#else
# define _GL_ATTRIBUTE_CONST /* empty */
#endif


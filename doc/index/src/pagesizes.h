typedef struct LASTPAGES {
	char docname[30];
	int lastpagenum;
} LASTPAGES;
LASTPAGES lastpages[]= {  /* contains an entry for the last page of every doc */
{"PS1:1", 37},
{"PS1:2", 28},
{"PS1:3", 11},
{"PS1:4", 50},
{"PS1:5", 14},
{"PS1:6", 43},
{"PS1:7", 25},
{"PS1:8", 41},
{"PS1:9", 11},
{"PS1:10", 27},
{"PS1:11", 6},
{"PS1:12", 9},
{"PS1:13", 22},
{"PS1:14", 15},
{"PS1:15", 33},
{"PS1:16", 13},
{"PS1:17", 6},
{"PS1:18", 2},
{"PS2:1", 15},
{"PS2:2", 14},
{"PS2:3", 16},
{"PS2:4", 10},
{"PS2:5", 7},
{"PS2:6", 35},
{"PS2:7", 37},
{"PS2:8", 14},
{"PS2:9", 157},
{"PS2:10", 88},
{"SMM:1", 65},
{"SMM:2", 34},
{"SMM:3", 2},   /* this is wrong */
{"SMM:4", 3},
{"SMM:5", 22},
{"SMM:6", 8},
{"SMM:07", 39},
{"SMM:7", 39},
{"SMM:8", 4},
{"SMM:9", 21},
{"SMM:10", 24},
{"SMM:11", 16},
{"SMM:12", 23},
{"SMM:13", 34},
{"SMM:14", 15},
{"SMM:15", 27},
{"SMM:16", 14},
{"SMM:17", 3},
{"SMM:18", 6},
{"SMM:19", 28},
{"SMM:20", 11},
{"SMM:21", 7},
{"SMM:22", 10},
{"USD:1", 14},
{"USD:2", 12},
{"USD:3", 24},
{"USD:4", 45},
{"USD:5", 8},
{"USD:6", 14},
{"USD:7", 25},
{"USD:8", 112},
{"USD:9", 13},
{"USD:10", 12},
{"USD:11", 15},
{"USD:12", 10},
{"USD:13", 16},
{"USD:14", 24},
{"USD:15", 29},
{"USD:16", 19},
{"USD:17", 48},
{"USD:18", 10},
{"USD:19", 8},
{"USD:20", 8},
{"USD:21", 3},
{"USD:22", 19},
{"USD:23", 16},
{"USD:24", 35},
{"USD:25", 16},
{"USD:26", 8},
{"USD:27", 11},
{"USD:28", 18},
{"USD:29", 10},
{"USD:30", 12},
{"USD:31", 17},
{"USD:32", 15},
{"USD:33", 9},
{"USD:34", 13},
{"ADB(1)", 6},
{"ADDBIB(1)", 2},
{"APPLY(1)", 1},
{"APROPOS(1)", 1},
{"AR(1)", 2},
{"AS(1)", 1},
{"AT(1)", 2},
{"ATQ(1)", 1},
{"ATRM(1)", 1},
{"AWK(1)", 2},
{"BASENAME(1)", 1},
{"BC(1)", 2},
{"BIFF(1)", 1},
{"BINMAIL(1)", 2},
{"CAL(1)", 1},
{"CALENDAR(1)", 1},
{"CAT(1)", 1},
{"CB(1)", 1},
{"CC(1)", 3},
{"CD(1)", 1},
{"CHECKNR(1)", 1},
{"CHGRP(1)", 1},
{"CHMOD(1)", 1},
{"CLEAR(1)", 1},
{"CMP(1)", 1},
{"COL(1)", 1},
{"COLCRT(1)", 1},
{"COLRM(1)", 1},
{"COMM(1)", 1},
{"COMPRESS(1)", 2},
{"CP(1)", 1},
{"CRYPT(1)", 1},
{"CSH(1)", 21},
{"CTAGS(1)", 2},
{"DATE(1)", 1},
{"DBX(1)", 7},
{"DC(1)", 2},
{"DD(1)", 2},
{"DEROFF(1)", 1},
{"DF(1)", 1},
{"DICTION(1)", 1},
{"DIFF(1)", 2},
{"DIFF3(1)", 2},
{"DU(1)", 1},
{"ECHO(1)", 1},
{"ED(1)", 6},
{"EFL(1)", 1},
{"EQN(1)", 2},
{"ERROR(1)", 3},
{"EX(1)", 2},
{"EXPAND(1)", 1},
{"EXPR(1)", 1},
{"F77(1)", 3},
{"FALSE(1)", 1},
{"FILE(1)", 1},
{"FIND(1)", 2},
{"FINGER(1)", 1},
{"FMT(1)", 1},
{"FOLD(1)", 1},
{"FP(1)", 1},
{"FPR(1)", 1},
{"FROM(1)", 1},
{"FSPLIT(1)", 1},
{"FTP(1C)", 7},
{"GCORE(1)", 1},
{"GPROF(1)", 2},
{"GRAPH(1G)", 1},
{"GREP(1)", 2},
{"GROUPS(1)", 1},
{"HEAD(1)", 1},
{"HOSTID(1)", 1},
{"HOSTNAME(1)", 1},
{"INDENT(1)", 1},
{"INSTALL(1)", 1},
{"INTRO(1)", 1},
{"IOSTAT(1)", 1},
{"JOIN(1)", 1},
{"KILL(1)", 1},
{"LAST(1)", 1},
{"LASTCOMM(1)", 1},
{"LD(1)", 2},
{"LEARN(1)", 2},
{"LEAVE(1)", 1},
{"LEX(1)", 1},
{"LINT(1)", 2},
{"LISP(1)", 1},
{"LISZT(1)", 2},
{"LN(1)", 1},
{"LOCK(1)", 1},
{"LOGGER(1)", 1},
{"LOGIN(1)", 1},
{"LOOK(1)", 1},
{"LOOKBIB(1)", 1},
{"LORDER(1)", 1},
{"LPQ(1)", 1},
{"LPR(1)", 2},
{"LPRM(1)", 1},
{"LPTEST(1)", 1},
{"LS(1)", 2},
{"LXREF(1)", 1},
{"M4(1)", 2},
{"MAIL(1)", 7},
{"MAKE(1)", 3},
{"MAN(1)", 1},
{"MESG(1)", 1},
{"MKDIR(1)", 1},
{"MKSTR(1)", 1},
{"MORE(1)", 3},
{"MSET(1)", 1},
{"MSGS(1)", 2},
{"MT(1)", 1},
{"MV(1)", 1},
{"NETSTAT(1)", 2},
{"NEWALIASES(1)", 1},
{"NICE(1)", 1},
{"NM(1)", 1},
{"NROFF(1)", 1},
{"OD(1)", 2},
{"PAGESIZE(1)", 1},
{"PASSWD(1)", 1},
{"PC(1)", 2},
{"PDX(1)", 4},
{"PI(1)", 2},
{"PIX(1)", 1},
{"PLOT(1G)", 2},
{"PMERGE(1)", 1},
{"PR(1)", 1},
{"PRINTENV(1)", 1},
{"PROF(1)", 1},
{"PS(1)", 3},
{"PTX(1)", 1},
{"PWD(1)", 1},
{"PX(1)", 1},
{"PXP(1)", 2},
{"PXREF(1)", 1},
{"QUOTA(1)", 1},
{"RANLIB(1)", 1},
{"RATFOR(1)", 1},
{"RCP(1C)", 1},
{"RDIST(1)", 4},
{"REFER(1)", 2},
{"REV(1)", 1},
{"RLOGIN(1C)", 1},
{"RM(1)", 1},
{"RMAIL(1)", 1},
{"RMDIR(1)", 1},
{"ROFFBIB(1)", 1},
{"RSH(1C)", 1},
{"RUPTIME(1C)", 1},
{"RWHO(1C)", 1},
{"SCCS(1)", 3},
{"SCRIPT(1)", 1},
{"SED(1)", 3},
{"SENDBUG(1)", 1},
{"SH(1)", 6},
{"SIZE(1)", 1},
{"SLEEP(1)", 1},
{"SOELIM(1)", 1},
{"SORT(1)", 2},
{"SORTBIB(1)", 1},
{"SPELL(1)", 1},
{"SPLINE(1G)", 1},
{"SPLIT(1)", 1},
{"STRINGS(1)", 1},
{"STRIP(1)", 1},
{"STRUCT(1)", 2},
{"STTY(1)", 3},
{"STYLE(1)", 1},
{"SU(1)", 1},
{"SUM(1)", 1},
{"SYMORDER(1)", 1},
{"SYSLINE(1)", 2},
{"SYSTAT(1)", 5},
{"TABS(1)", 1},
{"TAIL(1)", 1},
{"TALK(1)", 1},
{"TAR(1)", 2},
{"TBL(1)", 1},
{"TC(1)", 1},
{"TCOPY(1)", 1},
{"TEE(1)", 1},
{"TELNET(1C)", 4},
{"TEST(1)", 1},
{"TFTP(1C)", 2},
{"TIME(1)", 1},
{"TIP(1C)", 4},
{"TIP(1)", 4},  /* added manually */
{"TK(1)", 1},
{"TN3270(1)", 2},
{"TOUCH(1)", 1},
{"TP(1)", 2},
{"TR(1)", 1},
{"TROFF(1)", 2},
{"TRUE(1)", 1},
{"TSET(1)", 4},
{"TSORT(1)", 1},
{"TTY(1)", 1},
{"UL(1)", 1},
{"UNIFDEF(1)", 1},
{"UNIQ(1)", 1},
{"UNITS(1)", 1},
{"UPTIME(1)", 1},
{"USERS(1)", 1},
{"UUCP(1C)", 2},
{"UUENCODE(1C)", 1},
{"UULOG(1C)", 1},
{"UUNAME(1C)", 1},
{"UUQ(1C)", 1},
{"UUSEND(1C)", 1},
{"UUX(1C)", 2},
{"VACATION(1)", 1},
{"VGRIND(1)", 2},
{"VI(1)", 1},
{"VLP(1)", 1},
{"VMSTAT(1)", 2},
{"VWIDTH(1)", 1},
{"W(1)", 1},
{"WAIT(1)", 1},
{"WALL(1)", 1},
{"WC(1)", 1},
{"WHAT(1)", 1},
{"WHATIS(1)", 1},
{"WHEREIS(1)", 1},
{"WHICH(1)", 1},
{"WHO(1)", 1},
{"WHOAMI(1)", 1},
{"WHOIS(1)", 1},
{"WINDOW(1)", 7},
{"WRITE(1)", 1},
{"XSEND(1)", 1},
{"XSTR(1)", 1},
{"YACC(1)", 1},
{"YES(1)", 1},
{"ACCEPT(2)", 1},
{"ACCESS(2)", 2},
{"ACCT(2)", 1},
{"ADJTIME(2)", 1},
{"BIND(2)", 2},
{"BRK(2)", 1},
{"CHDIR(2)", 1},
{"CHMOD(2)", 2},
{"CHOWN(2)", 2},
{"CHROOT(2)", 1},
{"CLOSE(2)", 1},
{"CONNECT(2)", 2},
{"CREAT(2)", 2},
{"DUP(2)", 1},
{"EXECVE(2)", 2},
{"EXIT(2)", 1},
{"FCNTL(2)", 2},
{"FLOCK(2)", 1},
{"FORK(2)", 1},
{"FSYNC(2)", 1},
{"GETDTABLESIZE(2)", 1},
{"GETGID(2)", 1},
{"GETGROUPS(2)", 1},
{"GETHOSTID(2)", 1},
{"GETHOSTNAME(2)", 1},
{"GETITIMER(2)", 2},
{"GETPAGESIZE(2)", 1},
{"GETPEERNAME(2)", 1},
{"GETPGRP(2)", 1},
{"GETPID(2)", 1},
{"GETPRIORITY(2)", 1},
{"GETRLIMIT(2)", 2},
{"GETRUSAGE(2)", 2},
{"GETSOCKNAME(2)", 1},
{"GETSOCKOPT(2)", 2},
{"GETTIMEOFDAY(2)", 1},
{"GETUID(2)", 1},
{"INTRO(2)", 7},
{"IOCTL(2)", 1},
{"KILL(2)", 1},
{"KILLPG(2)", 1},
{"LINK(2)", 2},
{"LISTEN(2)", 1},
{"LSEEK(2)", 1},
{"MKDIR(2)", 2},
{"MKNOD(2)", 2},
{"MOUNT(2)", 2},
{"OPEN(2)", 2},
{"PIPE(2)", 1},
{"PROFIL(2)", 1},
{"PTRACE(2)", 2},
{"QUOTA(2)", 2},
{"READ(2)", 2},
{"READLINK(2)", 1},
{"REBOOT(2)", 1},
{"RECV(2)", 2},
{"RENAME(2)", 2},
{"RMDIR(2)", 1},
{"SELECT(2)", 2},
{"SEND(2)", 2},
{"SETGROUPS(2)", 1},
{"SETPGRP(2)", 1},
{"SETQUOTA(2)", 1},
{"SETREGID(2)", 1},
{"SETREUID(2)", 1},
{"SHUTDOWN(2)", 1},
{"SIGBLOCK(2)", 1},
{"SIGPAUSE(2)", 1},
{"SIGRETURN(2)", 1},
{"SIGSETMASK(2)", 1},
{"SIGSTACK(2)", 1},
{"SIGVEC(2)", 3},
{"SOCKET(2)", 2},
{"SOCKETPAIR(2)", 1},
{"STAT(2)", 3},
{"SWAPON(2)", 1},
{"SYMLINK(2)", 2},
{"SYNC(2)", 1},
{"SYSCALL(2)", 1},
{"TRUNCATE(2)", 1},
{"UMASK(2)", 1},
{"UNLINK(2)", 1},
{"UTIMES(2)", 1},
{"VFORK(2)", 1},
{"VHANGUP(2)", 1},
{"WAIT(2)", 2},
{"WRITE(2)", 2},
{"ABORT(3)", 1},
{"ABORT(3F)", 1},
{"ABS(3)", 1},
{"ACCESS(3F)", 1},
{"ALARM(3C)", 1},
{"ALARM(3F)", 1},
{"ASINH(3M)", 1},
{"ASSERT(3)", 1},
{"ATOF(3)", 1},
{"BESSEL(3F)", 1},
{"BIT(3F)", 1},
{"BSTRING(3)", 1},
{"BYTEORDER(3N)", 1},
{"CHDIR(3F)", 1},
{"CHMOD(3F)", 1},
{"CRYPT(3)", 1},
{"CTIME(3)", 2},
{"CTYPE(3)", 1},
{"CURSES(3X)", 2},
{"DBM(3X)", 2},
{"DIRECTORY(3)", 2},
{"ECVT(3)", 1},
{"END(3)", 1},
{"ERF(3M)", 1},
{"ETIME(3F)", 1},
{"EXECL(3)", 2},
{"EXIT(3)", 1},
{"EXIT(3F)", 1},
{"EXP(3M)", 2},
{"FCLOSE(3S)", 1},
{"FDATE(3F)", 1},
{"FERROR(3S)", 1},
{"FLMIN(3F)", 1},
{"FLOOR(3M)", 1},
{"FLUSH(3F)", 1},
{"FOPEN(3S)", 1},
{"FORK(3F)", 1},
{"FREAD(3S)", 1},
{"FREXP(3)", 1},
{"FSEEK(3F)", 1},
{"FSEEK(3S)", 1},
{"GETARG(3F)", 1},
{"GETC(3F)", 1},
{"GETC(3S)", 1},
{"GETCWD(3F)", 1},
{"GETDISKBYNAME(3)", 1},
{"GETENV(3)", 1},
{"GETENV(3F)", 1},
{"GETFSENT(3)", 1},
{"GETGRENT(3)", 1},
{"GETHOSTBYNAME(3N)", 2},
{"GETHOSTBYNAME(3)", 2},  /* these entries from manual correction */
{"GETLOG(3F)", 1},
{"GETLOGIN(3)", 1},
{"GETNETENT(3N)", 1},
{"GETOPT(3)", 2},
{"GETPASS(3)", 1},
{"GETPID(3F)", 1},
{"GETPROTOENT(3N)", 1},
{"GETPW(3C)", 1},
{"GETPWENT(3)", 2},
{"GETS(3S)", 1},
{"GETSERVENT(3N)", 1},
{"GETTTYENT(3)", 2},
{"GETUID(3F)", 1},
{"GETUSERSHELL(3)", 1},
{"GETWD(3)", 1},
{"HOSTNM(3F)", 1},
{"HYPOT(3M)", 1},
{"IDATE(3F)", 1},
{"IEEE(3M)", 2},
{"INDEX(3F)", 1},
{"INET(3N)", 2},
{"INFNAN(3M)", 2},
{"INITGROUPS(3)", 1},
{"INSQUE(3)", 1},
{"INTRO(3)", 7},
{"INTRO(3F)", 3},
{"IOINIT(3F)", 2},
{"J0(3M)", 1},
{"KILL(3F)", 1},
{"LGAMMA(3M)", 1},
{"LIB2648(3X)", 5},
{"LINK(3F)", 1},
{"LOC(3F)", 1},
{"LONG(3F)", 1},
{"MALLOC(3)", 2},
{"MALLOC(3F)", 2},
{"MATH(3M)", 7},
{"MKTEMP(3)", 1},
{"MONITOR(3)", 2},
{"MP(3X)", 2},
{"NDBM(3)", 2},
{"NICE(3C)", 1},
{"NLIST(3)", 1},
{"NS(3N)", 1},
{"PAUSE(3C)", 1},
{"PERROR(3)", 1},
{"PERROR(3F)", 2},
{"PLOT(3F)", 1},
{"PLOT(3X)", 2},
{"POPEN(3)", 1},
{"PRINTF(3S)", 2},
{"PSIGNAL(3)", 1},
{"PUTC(3F)", 1},
{"PUTC(3S)", 1},
{"PUTS(3S)", 1},
{"QSORT(3)", 1},
{"QSORT(3F)", 1},
{"RAND(3C)", 1},
{"RAND(3F)", 1},
{"RANDOM(3)", 2},
{"RANDOM(3F)", 1},
{"RCMD(3)", 2},
{"REGEX(3)", 1},
{"RENAME(3F)", 1},
{"RESOLVER(3)", 2},
{"REXEC(3)", 1},
{"SCANDIR(3)", 1},
{"SCANF(3S)", 2},
{"SETBUF(3S)", 1},
{"SETJMP(3)", 1},
{"SETUID(3)", 1},
{"SIGINTERRUPT(3)", 1},
{"SIGNAL(3C)", 3},
{"SIGNAL(3F)", 1},
{"SIN(3M)", 2},
{"SINH(3M)", 1},
{"SLEEP(3)", 1},
{"SLEEP(3F)", 1},
{"SQRT(3M)", 1},
{"STAT(3F)", 1},
{"STDIO(3S)", 2},
{"STRING(3)", 1},
{"STTY(3C)", 1},
{"SWAB(3)", 1},
{"SYSLOG(3)", 2},
{"SYSTEM(3)", 1},
{"SYSTEM(3F)", 1},
{"TERMCAP(3X)", 2},
{"TIME(3C)", 1},
{"TIME(3F)", 1},
{"TIMES(3C)", 1},
{"TOPEN(3F)", 2},
{"TRAPER(3F)", 1},
{"TRAPOV(3F)", 1},
{"TRPFPE(3F)", 1},
{"TTYNAM(3F)", 1},
{"TTYNAME(3)", 1},
{"UALARM(3)", 1},
{"UNGETC(3S)", 1},
{"UNLINK(3F)", 1},
{"USLEEP(3)", 1},
{"UTIME(3C)", 1},
{"VALLOC(3C)", 1},
{"VARARGS(3)", 2},
{"VLIMIT(3C)", 1},
{"VTIMES(3C)", 1},
{"WAIT(3F)", 1},
{"ACC(4)", 1},
{"AD(4)", 1},
{"ARP(4P)", 2},
{"AUTOCONF(4)", 2},
{"BK(4)", 1},
{"CONS(4)", 1},
{"CRL(4)", 1},
{"CSS(4)", 1},
{"CT(4)", 1},
{"DDN(4)", 1},
{"DE(4)", 1},
{"DH(4)", 1},
{"DHU(4)", 1},
{"DMC(4)", 1},
{"DMF(4)", 1},
{"DMZ(4)", 1},
{"DN(4)", 1},
{"DRUM(4)", 1},
{"DZ(4)", 1},
{"EC(4)", 1},
{"EN(4)", 1},
{"EX(4)", 1},
{"FL(4)", 1},
{"HDH(4)", 1},
{"HK(4)", 2},
{"HP(4)", 4},
{"HT(4)", 1},
{"HY(4)", 1},
{"ICMP(4P)", 1},
{"IDP(4P)", 2},
{"IK(4)", 1},
{"IL(4)", 1},
{"IMP(4)", 2},
{"IMP(4P)", 1},
{"INET(4F)", 2},
{"INTRO(4)", 2},
{"INTRO(4N)", 4},
{"IP(4P)", 1},
{"IX(4)", 1},
{"KG(4)", 1},
{"LO(4)", 1},
{"LP(4)", 1},
{"MEM(4)", 1},
{"MT(4)", 1},
{"MTIO(4)", 2},
{"NP(4)", 2},
{"NS(4F)", 2},
{"NSIP(4)", 1},
{"NULL(4)", 1},
{"PCL(4)", 1},
{"PS(4)", 2},
{"PTY(4)", 2},
{"QE(4)", 1},
{"RX(4)", 2},
{"SPP(4P)", 2},
{"TB(4)", 1},
{"TCP(4P)", 2},
{"TM(4)", 1},
{"TMSCP(4)", 1},
{"TS(4)", 1},
{"TTY(4)", 11},
{"TU(4)", 1},
{"UDA(4)", 3},
{"UDP(4P)", 1},
{"UP(4)", 3},
{"UT(4)", 1},
{"UU(4)", 2},
{"VA(4)", 2},
{"VP(4)", 1},
{"VV(4)", 1},
{"L-DEVICES(5)", 2},
{"L-DIALCODES(5)", 1},
{"L.ALIASES(5)", 1},
{"L.CMDS(5)", 1},
{"L.SYS(5)", 4},
{"L_ALIASES(5)", 1},  /* indexer has problems with a.b.c because of versioning */
{"L_CMDS(5)", 1},
{"L_SYS(5)", 4},
{"USERFILE(5)", 2},
{"A.OUT(5)", 3},
{"ACCT(5)", 2},
{"ALIASES(5)", 1},
{"AR(5)", 1},
{"CORE(5)", 1},
{"DBX(5)", 5},
{"DIR(5)", 2},
{"DISKTAB(5)", 1},
{"DUMP(5)", 2},
{"FS(5)", 4},
{"FSTAB(5)", 1},
{"GETTYTAB(5)", 3},
{"GROUP(5)", 1},
{"HOSTS(5)", 1},
{"MAP3270(5)", 5},
{"MTAB(5)", 1},
{"NETWORKS(5)", 1},
{"PASSWD(5)", 1},
{"PHONES(5)", 1},
{"PLOT(5)", 1},
{"PRINTCAP(5)", 2},
{"PROTOCOLS(5)", 1},
{"REMOTE(5)", 2},
{"RESOLVER(5)", 1},
{"SERVICES(5)", 1},
{"STAB(5)", 2},
{"TAR(5)", 2},
{"TERMCAP(5)", 14},
{"TP(5)", 1},
{"TTYS(5)", 1},
{"TYPES(5)", 2},
{"UTMP(5)", 1},
{"UUENCODE(5)", 1},
{"VFONT(5)", 1},
{"VGRINDEFS(5)", 2},
{"AARDVARK(6)", 1},
{"ADVENTURE(6)", 1},
{"ARITHMETIC(6)", 1},
{"BACKGAMMON(6)", 1},
{"BANNER(6)", 1},
{"BATTLESTAR(6)", 2},
{"BCD(6)", 1},
{"BOGGLE(6)", 1},
{"CANFIELD(6)", 1},
{"CHESS(6)", 1},
{"CHING(6)", 1},
{"CRIBBAGE(6)", 2},
{"DOCTOR(6)", 1},
{"FISH(6)", 1},
{"FORTUNE(6)", 1},
{"HANGMAN(6)", 1},
{"HUNT(6)", 3},
{"MILLE(6)", 3},
{"MONOP(6)", 2},
{"NUMBER(6)", 1},
{"QUIZ(6)", 1},
{"RAIN(6)", 1},
{"ROBOTS(6)", 2},
{"ROGUE(6)", 1},
{"SAIL(6)", 13},
{"SNAKE(6)", 1},
{"TREK(6)", 1},
{"WORM(6)", 1},
{"WORMS(6)", 1},
{"WUMP(6)", 1},
{"ZORK(6)", 1},
{"ASCII(7)", 1},
{"ENVIRON(7)", 1},
{"EQNCHAR(7)", 2},
{"HIER(7)", 6},
{"INTRO(7)", 1},
{"MAILADDR(7)", 3},
{"MAN(7)", 2},
{"ME(7)", 3},
{"MS(7)", 3},
{"TERM(7)", 1},
{"XNSROUTED(8C)", 2},
{"AC(8)", 1},
{"ADDUSER(8)", 1},
{"ARFF(8V)", 2},
{"ARP(8C)", 1},
{"BAD144(8)", 2},
{"BADSECT(8)", 1},
{"BUGFILER(8)", 2},
{"CATMAN(8)", 1},
{"CHOWN(8)", 1},
{"CLRI(8)", 1},
{"COMSAT(8C)", 1},
{"CONFIG(8)", 1},
{"CRASH(8V)", 3},
{"CRON(8)", 1},
{"DCHECK(8)", 1},
{"DISKPART(8)", 1},
{"DMESG(8)", 1},
{"DRTEST(8)", 1},
{"DUMP(8)", 2},
{"DUMPFS(8)", 1},
{"EDQUOTA(8)", 1},
{"FASTBOOT(8)", 1},
{"FINGERD(8C)", 1},
{"FORMAT(8V)", 3},
{"FSCK(8)", 2},
{"FTPD(8C)", 2},
{"GETTABLE(8C)", 1},
{"GETTY(8)", 1},
{"HALT(8)", 1},
{"HTABLE(8)", 1},
{"ICHECK(8)", 1},
{"IFCONFIG(8C)", 2},
{"IMPLOG(8C)", 1},
{"IMPLOGD(8C)", 1},
{"INETD(8)", 2},
{"INIT(8)", 2},
{"INTRO(8)", 1},
{"KGMON(8)", 1},
{"LPC(8)", 2},
{"LPD(8)", 2},
{"MAKEDEV(8)", 1},
{"MAKEKEY(8)", 1},
{"MKFS(8)", 1},
{"MKHOSTS(8)", 1},
{"MKLOST+FOUND(8)", 1},
{"MKNOD(8)", 1},
{"MKPASSWD(8)", 1},
{"MKPROTO(8)", 1},
{"MOUNT(8)", 1},
{"NAMED(8)", 2},
{"NCHECK(8)", 1},
{"NEWFS(8)", 2},
{"PAC(8)", 1},
{"PING(8)", 1},
{"PSTAT(8)", 4},
{"QUOT(8)", 1},
{"QUOTACHECK(8)", 1},
{"QUOTAON(8)", 1},
{"RC(8)", 1},
{"RDUMP(8C)", 1},
{"REBOOT(8)", 3},
{"RENICE(8)", 1},
{"REPQUOTA(8)", 1},
{"RESTORE(8)", 3},
{"REXECD(8C)", 2},
{"RLOGIND(8C)", 1},
{"RMT(8C)", 2},
{"ROUTE(8C)", 2},
{"ROUTED(8C)", 3},
{"RRESTORE(8C)", 1},
{"RSHD(8C)", 2},
{"RWHOD(8C)", 2},
{"RXFORMAT(8V)", 1},
{"SA(8)", 2},
{"SAVECORE(8)", 1},
{"SENDMAIL(8)", 4},
{"SHUTDOWN(8)", 1},
{"SLATTACH(8C)", 1},
{"STICKY(8)", 1},
{"SWAPON(8)", 1},
{"SYNC(8)", 1},
{"SYSLOGD(8)", 2},
{"TALKD(8C)", 1},
{"TELNETD(8C)", 1},
{"TFTPD(8C)", 1},
{"TIMED(8)", 1},
{"TIMEDC(8)", 1},
{"TRPT(8C)", 1},
{"TRSP(8c)", 1},
{"TUNEFS(8)", 2},
{"UPDATE(8)", 1},
{"UUCICO(8C)", 2},
{"UUCLEAN(8C)", 1},
{"UUPOLL(8C)", 1},
{"UUSNAP(8C)", 1},
{"UUXQT(8C)", 1},
{"VIPW(8)", 1},
{"ALI(1)", 1},
{"ANNO(1)", 1},
{"AP(8)", 2},
{"BIB(1)", 2},
{"BURST(1)", 2},
{"CI(1)", 3},
{"CO(1)", 3},
{"COMP(1)", 2},
{"CONFLICT(8)", 1},
{"DIST(1)", 2},
{"DP(8)", 1},
{"FOLDER(1)", 2},
{"FORW(1)", 3},
{"IDENT(1)", 1},
{"INC(1)", 2},
{"INSTALL-MH(8)", 1},
{"INVERT(1)", 2},
{"JOVE(1)", 3},
{"JOVE_RECOVER(1)", 2},
{"MARK(1)", 2},
{"MERGE(1)", 1},
{"MH-ALIAS(5)", 3},
{"MH-CHART(1)", 3},
{"MH-FORMAT(5)", 3},
{"MH-MAIL(5)", 3},
{"MH-PROFILE(5)", 6},
{"MH(1)", 3},
{"MHL(1)", 4},
{"MHMAIL(1)", 1},
{"MHOOK(1)", 4},
{"MHPATH(1)", 2},
{"MSGCHK(1)", 1},
{"MSH(1)", 3},
{"NEXT(1)", 1},
{"PACKF(1)", 1},
{"PATCH(1)", 3},
{"PICK(1)", 3},
{"POST(8)", 2},
{"PREV(1)", 1},
{"PROMPTER(1)", 2},
{"RCS(1)", 2},
{"RCSDIFF(1)", 1},
{"RCSFILE(5)", 3},
{"RCSINTRO(1)", 1},
{"RCSMERGE(1)", 1},
{"REFILE(1)", 2},
{"REPL(1)", 3},
{"RLOG(1)", 2},
{"RMF(1)", 1},
{"RMM(1)", 1},
{"SCAN(1)", 2},
{"SCCSTORCS(8)", 1},
{"SEND(1)", 2},
{"SHOW(1)", 2},
{"SORTM(1)", 1},
{"TEACHJOVE(1)", 1},
{"VMH(1)", 2},
{"WHATNOW(1)", 2},
{"WHOM(1)", 1},
};
int	ndocs = { sizeof lastpages/sizeof lastpages[0] };


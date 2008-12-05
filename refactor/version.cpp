#include <string>
using namespace std;
#include "version.h"
char Version::revision[] = "$Revision: 2.6 $";
char Version::date[] = "$Date: 2008/12/05 11:20:44 $";
const char *Version::ident[] = {
"$" "Id:" " Makefile 1.145 2008/12/05 07:16:01 dds Exp $",
"$" "Id:" " attr.cpp 1.20 2008/09/18 10:35:42 dds Exp $",
"$" "Id:" " attr.h 1.19 2008/12/04 15:19:06 dds Exp $",
"$" "Id:" " cpp.h 1.6 2008/12/04 15:19:06 dds Exp $",
"$" "Id:" " cscout.cpp 1.216 2008/12/05 10:24:28 dds Exp $",
"$" "Id:" " ctoken.cpp 1.37 2007/11/08 17:48:05 dds Exp $",
"$" "Id:" " ctoken.h 1.6 2008/12/04 15:19:06 dds Exp $",
"$" "Id:" " debug.cpp 1.4 2006/06/13 15:32:05 dds Exp $",
"$" "Id:" " debug.h 1.9 2008/12/04 15:19:06 dds Exp $",
"$" "Id:" " defs.h 1.14 2006/02/10 12:13:50 dds Exp $",
"$" "Id:" " des.c 1.14 2006/09/21 12:47:18 dds Exp $",
"$" "Id:" " des.h 1.3 2003/05/17 07:38:32 dds Exp $",
"$" "Id:" " eclass.cpp 1.33 2008/09/26 05:34:33 dds Exp $",
"$" "Id:" " eclass.h 1.24 2008/12/04 15:19:06 dds Exp $",
"$" "Id:" " error.cpp 1.20 2008/07/01 13:28:21 dds Exp $",
"$" "Id:" " error.h 1.8 2008/12/04 15:19:06 dds Exp $",
"$" "Id:" " eval.y 1.17 2006/08/07 11:36:44 dds Exp $",
"$" "Id:" " fchar.cpp 1.41 2008/09/03 11:51:03 dds Exp $",
"$" "Id:" " fchar.h 1.23 2008/12/04 15:19:06 dds Exp $",
"$" "Id:" " fileid.cpp 1.50 2008/10/08 17:23:47 dds Exp $",
"$" "Id:" " fileid.h 1.43 2008/12/04 15:19:06 dds Exp $",
"$" "Id:" " id.h 1.3 2004/07/23 06:55:38 dds Exp $",
"$" "Id:" " incs.h 1.2 2004/07/23 06:55:38 dds Exp $",
"$" "Id:" " license.c 1.23 2007/07/16 16:50:53 dds Exp $",
"$" "Id:" " license.h 1.12 2008/12/04 15:19:06 dds Exp $",
"$" "Id:" " macro.cpp 1.58 2008/07/01 07:28:28 dds Exp $",
"$" "Id:" " macro.h 1.19 2008/12/04 15:19:06 dds Exp $",
"$" "Id:" " metrics.cpp 1.31 2008/09/29 09:17:36 dds Exp $",
"$" "Id:" " metrics.h 1.32 2008/12/04 15:19:06 dds Exp $",
"$" "Id:" " defs.h 1.9 2002/09/05 16:51:23 dds Exp $",
"$" "Id:" " incs.h 1.1 2002/09/05 16:43:58 dds Exp $",
"$" "Id:" " obfuscate.cpp 1.13 2008/11/30 21:17:00 dds Exp $",
"$" "Id:" " parse.y 1.148 2008/12/05 07:25:33 dds Exp $",
"$" "Id:" " pdtoken.cpp 1.119 2008/09/03 11:50:20 dds Exp $",
"$" "Id:" " pdtoken.h 1.33 2008/12/04 15:19:06 dds Exp $",
"$" "Id:" " pltoken.cpp 1.16 2007/07/16 10:11:16 dds Exp $",
"$" "Id:" " pltoken.h 1.35 2008/12/04 15:19:06 dds Exp $",
"$" "Id:" " ptoken.cpp 1.16 2008/12/05 07:25:33 dds Exp $",
"$" "Id:" " ptoken.h 1.12 2008/12/04 15:19:06 dds Exp $",
"$" "Id:" " simple_cpp.cpp 1.17 2006/06/18 19:34:46 dds Exp $",
"$" "Id:" " stab.cpp 1.51 2008/12/05 11:11:52 dds Exp $",
"$" "Id:" " stab.h 1.29 2008/12/04 15:19:06 dds Exp $",
"$" "Id:" " tchar.cpp 1.15 2006/06/11 21:44:18 dds Exp $",
"$" "Id:" " tchar.h 1.7 2008/12/04 15:19:06 dds Exp $",
"$" "Id:" " tclfuns.cpp 1.10 2006/06/18 19:34:46 dds Exp $",
"$" "Id:" " token.cpp 1.27 2007/08/18 13:23:39 dds Exp $",
"$" "Id:" " token.h 1.21 2008/12/04 15:19:06 dds Exp $",
"$" "Id:" " tokid.cpp 1.29 2007/08/18 13:23:39 dds Exp $",
"$" "Id:" " tokid.h 1.26 2008/12/04 15:19:06 dds Exp $",
"$" "Id:" " tokmap.cpp 1.3 2002/09/17 10:53:02 dds Exp $",
"$" "Id:" " tokmap.h 1.4 2008/12/04 15:19:06 dds Exp $",
"$" "Id:" " tokname.pl 1.8 2006/06/11 21:44:18 dds Exp $",
"$" "Id:" " type.cpp 1.59 2007/11/15 21:54:21 dds Exp $",
"$" "Id:" " type.h 1.45 2008/12/04 15:19:06 dds Exp $",
"$" "Id:" " type2.h 1.32 2008/12/04 15:19:06 dds Exp $",
"$" "Id:" " defs.h 1.9 2002/09/05 16:51:23 dds Exp $",
"$" "Id:" " incs.h 1.1 2002/09/05 16:43:58 dds Exp $",
"$" "Id:" " workdb.cpp 1.50 2008/09/18 10:35:42 dds Exp $",
"$" "Id:" " ytoken.h 1.13 2007/11/08 17:48:05 dds Exp $",
"$" "Id:" " version.h 1.6 2008/12/04 15:19:06 dds Exp $",
"$" "Id:" " getopt.c 1.4 2005/07/15 17:35:15 dds Exp $",
"$" "Id:" " getopt.h 1.4 2008/12/04 15:19:06 dds Exp $",
"$" "Id:" " fdep.cpp 1.12 2007/11/15 18:09:15 dds Exp $",
"$" "Id:" " fdep.h 1.11 2008/12/04 15:19:06 dds Exp $",
"$" "Id:" " fcall.cpp 1.21 2007/08/19 09:07:54 dds Exp $",
"$" "Id:" " fcall.h 1.15 2008/12/04 15:19:06 dds Exp $",
"$" "Id:" " mcall.h 1.8 2008/12/04 15:19:06 dds Exp $",
"$" "Id:" " call.cpp 1.24 2007/09/01 06:09:12 dds Exp $",
"$" "Id:" " call.h 1.26 2008/12/04 15:19:06 dds Exp $",
"$" "Id:" " idquery.cpp 1.17 2008/09/25 16:09:01 dds Exp $",
"$" "Id:" " idquery.h 1.15 2008/12/04 15:19:06 dds Exp $",
"$" "Id:" " query.cpp 1.11 2006/09/24 20:58:46 dds Exp $",
"$" "Id:" " query.h 1.12 2008/12/04 15:19:06 dds Exp $",
"$" "Id:" " funquery.cpp 1.21 2008/09/26 05:34:33 dds Exp $",
"$" "Id:" " funquery.h 1.18 2008/12/04 15:19:06 dds Exp $",
"$" "Id:" " logo.h 1.2 2008/12/04 15:19:06 dds Exp $",
"$" "Id:" " ytoken.h 1.13 2007/11/08 17:48:05 dds Exp $",
"$" "Id:" " workdb.h 1.5 2008/12/04 15:19:06 dds Exp $",
"$" "Id:" " obfuscate.h,v 1.2 2008/12/04 15:19:06 dds Exp $",
"$" "Id:" " dlstubs.c 1.1 2005/05/18 15:56:28 dds Exp $",
"$" "Id:" " sql.cpp 1.4 2007/11/08 09:24:28 dds Exp $",
"$" "Id:" " sql.h 1.9 2008/12/04 15:19:06 dds Exp $",
"$" "Id:" " fifstream.h 1.3 2008/12/04 15:19:06 dds Exp $",
"$" "Id:" " compiledre.h 1.2 2008/12/04 15:19:06 dds Exp $",
"$" "Id:" " base64.c 1.2 2005/09/29 09:19:16 dds Exp $",
"$" "Id:" " base64.c 1.2 2005/09/29 09:19:16 dds Exp $",
"$" "Id:" " gdisplay.h 1.19 2008/12/05 10:24:28 dds Exp $",
"$" "Id:" " eval.h 1.2 2006/08/07 18:33:47 dds Exp $",
"$" "Id:" " md5.h 1.2 2006/09/20 08:03:48 dds Exp $",
"$" "Id:" " md5.c 1.5 2007/11/08 09:24:28 dds Exp $",
"$" "Id:" " os.cpp 1.3 2006/09/21 16:43:11 dds Exp $",
"$" "Id:" " os.h 1.2 2008/12/04 15:19:06 dds Exp $",
"$" "Id:" " filequery.cpp,v 1.2 2008/09/22 16:25:45 dds Exp $",
"$" "Id:" " filequery.h,v 1.4 2008/12/04 15:19:06 dds Exp $",
"$" "Id:" " mquery.h,v 1.6 2008/12/04 15:19:06 dds Exp $",
"$" "Id:" " mcall.cpp,v 1.2 2007/08/12 07:24:06 dds Exp $",
"$" "Id:" " filemetrics.h 1.27 2008/12/04 15:19:06 dds Exp $",
"$" "Id:" " funmetrics.h,v 1.15 2008/12/04 15:19:06 dds Exp $",
"$" "Id:" " pager.h 1.3 2008/12/04 15:19:06 dds Exp $",
"$" "Id:" " pager.cpp 1.5 2008/09/29 09:17:36 dds Exp $",
"$" "Id:" " option.cpp 1.15 2008/12/05 10:24:28 dds Exp $",
"$" "Id:" " option.h 1.15 2008/12/05 10:24:28 dds Exp $",
"$" "Id:" " filemetrics.cpp 1.29 2007/08/19 13:49:32 dds Exp $",
"$" "Id:" " funmetrics.cpp,v 1.18 2007/08/21 15:09:20 dds Exp $",
"$" "Id:" " ctconst.cpp,v 1.2 2007/11/01 12:53:39 dds Exp $",
"$" "Id:" " ctconst.h,v 1.1 2007/08/28 15:26:39 dds Exp $",
"$" "Id:" " gdisplay.cpp,v 1.2 2008/12/05 10:24:28 dds Exp $",
"$" "Id:" " globobj.cpp,v 1.1 2008/10/08 17:23:47 dds Exp $",
"$" "Id:" " globobj.h,v 1.3 2008/12/04 15:19:06 dds Exp $",
"$" "Id:" " html.h,v 1.4 2008/12/04 15:19:06 dds Exp $",
"$" "Id:" " html.cpp,v 1.6 2008/12/05 08:08:59 dds Exp $",
"$" "Id:" " dirbrowse.h,v 1.3 2008/12/04 15:19:06 dds Exp $",
"$" "Id:" " dirbrowse.cpp,v 1.2 2008/07/01 13:37:58 dds Exp $",
"$" "Id:" " fileutils.cpp,v 1.1 2008/09/27 09:01:20 dds Exp $",
"$" "Id:" " fileutils.h,v 1.2 2008/12/04 15:19:06 dds Exp $",
"$" "Id:" " runtest.sh 1.26 2008/12/02 13:24:40 dds Exp $",
"$" "Id:" " csmake.pl 1.20 2008/04/06 18:52:44 dds Exp $",
"$" "Id:" " csmake.pl 1.20 2008/04/06 18:52:44 dds Exp $",
"$" "Id:" " cswc.pl 1.20 2008/12/02 14:04:35 dds Exp $",
"$" "Id:" " style.css,v 1.5 2008/11/16 14:18:27 dds Exp $",
0 };

#ifndef WCONFIG_H
#define WCONFIG_H

// Version defines
#define WT_SERIES 4
#define WT_MAJOR  4
#define WT_MINOR  0

/*! \brief A constant that encodes the library version of %Wt
 *
 * You may use this constant to check for the version of %Wt at build-time.
 */
#define WT_VERSION (((WT_SERIES & 0xff) << 24) | ((WT_MAJOR & 0xff) << 16) | ((WT_MINOR & 0xff) << 8))
#define WT_VERSION_STR "4.4.0"
#define WT_CLASS       "Wt4_4_0"
#define WT_INCLUDED_VERSION Wt_4_4_0

#define RUNDIR "c:/witty"
#define WT_CONFIG_XML "c:/witty/wt_config.xml"
#define WTHTTP_CONFIGURATION "c:/witty/wthttpd"

/* #undef WT_STATIC */
/* #undef WTDBO_STATIC */
/* #undef WTDBOPOSTGRES_STATIC */
/* #undef WTDBOSQLITE3_STATIC */
/* #undef WTDBOFIREBIRD_STATIC */
/* #undef WTDBOMYSQL_STATIC */
/* #undef WTDBOMSSQLSERVER_STATIC */
/* #undef WTHTTP_STATIC */

#define WT_HAS_WRASTERIMAGE
#define WT_HAS_WPDFIMAGE
#define WT_WITH_SSL

#define WT_USE_OPENGL
/* #undef WT_DEBUG_ENABLED */
#define WT_THREADED

#define WT_ANY_IS_THELINK2012_ANY
/* #undef WT_ANY_IS_EXPERIMENTAL_ANY */
/* #undef WT_ANY_IS_STD_ANY */

/* #undef WT_ASIO_IS_BOOST_ASIO */
#define WT_ASIO_IS_STANDALONE_ASIO

// our win32: WIN32 (gcc) or _WIN32 (MSC)
#if defined(WIN32) || defined(_WIN32)
#define WT_WIN32 1
#endif

#endif

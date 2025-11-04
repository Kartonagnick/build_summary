
// --- Kartonagnick/build_summary                                       [show.hpp]
// [2025-11-04][05:20:00] 002 Kartonagnick PRE
//   --- CastleOfDreams/compile                                         [show.hpp]
//   [2022-10-23][19:00:00] 002 Kartonagnick
//   [2022-08-17][19:00:00] 001 Kartonagnick
//     --- Kartonagnick/buid_info (closed)                              [show.hpp]
//     [2021-06-18][22:50:00] 001 Idrisov Denis R.

#pragma once
#ifndef dBUILD_SUMMARY_SHOW_USED_
#define dBUILD_SUMMARY_SHOW_USED_ 2
//================================================================================
//================================================================================

#define dSTRINGIZE(...) #__VA_ARGS__
#define dSSTRINGIZE(x) dSTRINGIZE(x)

#ifndef dBUILD_SUMMARY_SELECT_USED_
    #error "select.hpp" must be included first
#endif

#ifndef dBUILD_SUMMARY_MESSAGE_USED_
    #error "../message.hpp" must be included first
#endif

#define dSHOW_BI_VERSION(x, n) dPRAGMA_MESSAGE(x " " dFULL_ABOUT_ME(n))

#ifdef dPCH_USED
    #define dSHOW_BI_PCH(x) dPRAGMA_MESSAGE(x " enabled -> pch")
#else
    #define dSHOW_BI_PCH(x) dPRAGMA_MESSAGE(x " disabled -> pch")
#endif

#ifdef STABLE_RELEASE
    #ifdef NDEBUG
        #define dSHOW_BI_STABLE(x) dPRAGMA_MESSAGE(x " STABLE-RELEASE")
    #else
        #define dSHOW_BI_STABLE(x) dPRAGMA_MESSAGE(x " STABLE-DEBUG")
    #endif
#else
    #ifdef NDEBUG
        #define dSHOW_BI_STABLE(x) dPRAGMA_MESSAGE(x " UNSTABLE-RELEASE")
    #else
        #define dSHOW_BI_STABLE(x) dPRAGMA_MESSAGE(x " UNSTABLE-DEBUG")
    #endif
#endif

#ifdef dCRT_VAL
    #if dCRT_VAL == 1
        #define dSHOW_BI_CRT(x) dPRAGMA_MESSAGE(x " MD (release-dynamic runtime c++)")
    #elif dCRT_VAL == 2
        #define dSHOW_BI_CRT(x) dPRAGMA_MESSAGE(x " MT (release-static runtime c++)")
    #elif dCRT_VAL == 3
        #define dSHOW_BI_CRT(x) dPRAGMA_MESSAGE(x " MDd (debug-dynamic runtime c++)")
    #elif dCRT_VAL == 4
        #define dSHOW_BI_CRT(x) dPRAGMA_MESSAGE(x " MTd (debug-static runtime c++)")
    #else
        #error unknown runtime c++
    #endif
#else
    #error unknown runtime c++
#endif

#define dSHOW_COMPILER_VERSION() \
    dSHOW_BI_CPUSPLUS()          \
    dSHOW_BI_COMPILER()          \

#define dSHOW_BI_TARGET_NAME(n) \
  dPRAGMA_MESSAGE("------------------------------------" n)

#ifndef dMANUAL_SHOW_COMPILER_VERSION
    #define dSHOW_BUILD(title, name)  \
        dSHOW_BI_TARGET_NAME(title)   \
        dSHOW_COMPILER_VERSION()      \
        dPRAGMA_MESSAGE("  ---")      \
        dSHOW_BI_PCH(title)           \
        dSHOW_BI_STABLE(title)        \
        dSHOW_BI_CRT(title)           \
        dSHOW_BI_VERSION(title, name) \
        dPRAGMA_MESSAGE("  ---") 
#else
    #define dSHOW_BUILD(title, name)  \
        dPRAGMA_MESSAGE("  ---")      \
        dSHOW_BI_PCH(title)           \
        dSHOW_BI_STABLE(title)        \
        dSHOW_BI_CRT(title)           \
        dSHOW_BI_VERSION(title, name) \
        dPRAGMA_MESSAGE("  ---")
#endif

//================================================================================
//================================================================================
#endif // dBUILD_SUMMARY_SHOW_USED_

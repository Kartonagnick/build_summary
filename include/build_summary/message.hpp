
// --- Kartonagnick/build_summary                                  [message.hpp]
// [2025-11-04][05:20:00] 001 Kartonagnick    
//   --- CastleOfDreams/compile                                    [message.hpp]
//   [2022-08-17][19:00:00] 001 Kartonagnick
//     --- Kartonagnick/buid_info (closed)                        [dmessage.hpp]
//     [2021-06-18][22:50:00] 001 Idrisov Denis R.

//==============================================================================
//==============================================================================

#pragma once
#ifndef dBUILD_SUMMARY_MESSAGE_USED_ 
#define dBUILD_SUMMARY_MESSAGE_USED_ 1

#include "private/compilers.hpp"

//==============================================================================
//=== dSTRINGIZE ===============================================================

#define dSTRINGIZE(...) #__VA_ARGS__
#define dSSTRINGIZE(x) dSTRINGIZE(x)

//==============================================================================
//=== dCOMPILER_MESSAGE ========================================================

#if defined(_MSC_VER)
    #define dCOMPILER_MESSAGE(...)  __pragma(message(__VA_ARGS__))
#else
    #define dCOMPILER_MESSAGE(...)  _Pragma(dSSTRINGIZE(message __VA_ARGS__))
#endif

//==============================================================================
//=== dPRAGMA_MESSAGE ==========================================================

#if defined(dMSVC_COMPILER) && !defined(dHIDE_MSVC_MESSAGES)
    #define dPRAGMA_MESSAGE(...) dCOMPILER_MESSAGE(__VA_ARGS__)

#elif defined(dMINGW_COMPILER) && !defined(dHIDE_MINGW_MESSAGES)
    #define dPRAGMA_MESSAGE(...) dCOMPILER_MESSAGE(__VA_ARGS__)

#elif defined(dGCC_COMPILER) && !defined(dHIDE_GCC_MESSAGES)
    #define dPRAGMA_MESSAGE(...) dCOMPILER_MESSAGE(__VA_ARGS__)

#elif defined(dCLANG_COMPILER) && !defined(dHIDE_CLANG_MESSAGES)
    #define dPRAGMA_MESSAGE(...) dCOMPILER_MESSAGE(__VA_ARGS__)

#else
    #define dPRAGMA_MESSAGE(...)
#endif

//==============================================================================
//==============================================================================
#endif // dBUILD_SUMMARY_MESSAGE_USED_

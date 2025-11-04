
// --- Kartonagnick/build_summary                                   [select.hpp]
// [2025-11-04][05:20:00] 001 Kartonagnick PRE
//   --- CastleOfDreams/compile                                     [select.hpp]
//   [2022-08m-17][19:00:00] 001 Kartonagnick
//     --- Kartonagnick/buid_info (closed)                          [select.hpp]
//     [2021-06m-18][22:50:00] 001 Idrisov Denis R.

#pragma once
#ifndef dBUILD_SUMMARY_SELECT_USED_ 
#define dBUILD_SUMMARY_SELECT_USED_ 1

#include "compilers.hpp"

//==============================================================================
//==============================================================================

#if defined(dMSVC_COMPILER)
    #include "compilers/msvc.hpp"
#elif defined(dMINGW_COMPILER)
    #include "compilers/mingw.hpp"
#elif defined(dCLANG_COMPILER)
    #include "compilers/clang.hpp"
#elif defined(dGCC_COMPILER)
    #include "compilers/gcc.hpp"
#else
    #error unknown compiler
#endif

#include "compilers/zfinal.hpp"

//==============================================================================
//==============================================================================
#endif // dBUILD_SUMMARY_SELECT_USED_

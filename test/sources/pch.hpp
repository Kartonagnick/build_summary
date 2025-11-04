
// --- Kartonagnick/build_summary                                      [pch.hpp]
// [2025-11-04][05:20:00] 002 Kartonagnick PRE
// [2025-11-04][03:40:00] 001 Kartonagnick
// [2025-11-04][00:51:20] registered on github
// [2025-11-03][22:15:01] birthday of the project
//==============================================================================
//==============================================================================

#pragma once

#if defined(_MSC_VER) && !defined(WIN32_LEAN_AND_MEAN)
    #define WIN32_LEAN_AND_MEAN
#endif

#define dEXAMPLE_MAJOR 1
#define dEXAMPLE_MINOR 2
#define dEXAMPLE_PATCH 3

//==============================================================================
//=== [pch] ====================================================================

#include "test.ver"
#include <build_summary/build_summary.ver>

#ifdef dCOMPILE_LIBRARY_USED_
    #include <compile/info.hpp>
#endif

#ifdef dBUILD_SUMMARY_LIBRARY_USED_
    #include <build_summary/info.hpp>
#endif

dSHOW_BUILD("[build_summary]", dBUILD_SUMMARY)
dSHOW_BUILD("[test.exe]"     , dTEST)

#pragma message("[example] " dFULL_ABOUT_ME(dEXAMPLE))

//==============================================================================
//==============================================================================

#include <mygtest/mygtest.hpp>
#include <stdexcept>
#include <cassert>

//==============================================================================
//==============================================================================


// --- Kartonagnick/build_summary                                      [pch.hpp]
// [2025-11-04][03:40:00] 001 Kartonagnick PRE
// [2025-11-04][00:51:20] registered on github
// [2025-11-03][22:15:01] birthday of the project
//==============================================================================
//==============================================================================

#pragma once

#if defined(_MSC_VER) && !defined(WIN32_LEAN_AND_MEAN)
    #define WIN32_LEAN_AND_MEAN
#endif

//==============================================================================
//=== [pch] ====================================================================

#include "test.ver"

#ifdef dCOMPILE_LIBRARY_USED_
    #include <compile/info.hpp>
    #pragma message("[test.exe] -1-")
#endif

#ifdef dBUILD_SUMMARY_LIBRARY_USED_
    #include <build_summary/build_summary.ver>
    // #include <build_summary/info.hpp>
    #pragma message("[test.exe] -2-")
#endif
// dSHOW_BUILD("[test.exe]", dTEST)

//==============================================================================
//==============================================================================

#include <mygtest/mygtest.hpp>
#include <stdexcept>
#include <cassert>

//==============================================================================
//==============================================================================

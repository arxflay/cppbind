/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 06/09/2022-13:05.
 * Please do not change it manually.
 */

#ifndef _SWIFT_WRAPPERS_GLOBS_C_SWIFT_GLOBUTILS_H_
#define _SWIFT_WRAPPERS_GLOBS_C_SWIFT_GLOBUTILS_H_

#include "swift/wrappers/c_helpers.h"

#include <stdbool.h>

#if __cplusplus
extern "C" {
#endif
    
    int _func__mul(int  first, int  second, CppBindCObject* _Nonnull cppbind_err);

    int _func__mulThree(int  first, int  second, int  third, CppBindCObject* _Nonnull cppbind_err);

    char* _Nonnull _func__concat(char* _Nonnull str1, char* _Nonnull str2, CppBindCObject* _Nonnull cppbind_err);

    char* _Nonnull _func__concat_1(char* _Nonnull str1, char* _Nonnull str2, char* _Nonnull str3, CppBindCObject* _Nonnull cppbind_err);

    int _func__maxInt(int  a, int  b, CppBindCObject* _Nonnull cppbind_err);

    char* _Nonnull _func__maxString(char* _Nonnull a, char* _Nonnull b, CppBindCObject* _Nonnull cppbind_err);

    CppBindCDataPair _func_CppbindExample_makePairProjectProject(CppBindCObject  a, CppBindCObject  b, CppBindCObject* _Nonnull cppbind_err);

    CppBindCDataPair _func_CppbindExample_makePairRootProject(CppBindCObject  a, CppBindCObject  b, CppBindCObject* _Nonnull cppbind_err);

    CppBindCObject _func__optionalFDPtr(CppBindCObject  project, CppBindCObject* _Nonnull cppbind_err);

    void _func__doNothing(CppBindCObject* _Nonnull cppbind_err);
#if __cplusplus
}
#endif
#endif /* ifndef _SWIFT_WRAPPERS_GLOBS_C_SWIFT_GLOBUTILS_H_ */
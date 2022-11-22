/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 10/26/2022-08:46.
 * Please do not change it manually.
 */

#ifndef _SWIFT_WRAPPERS_TEMPLATES_C_SWIFT_TUPLE_USAGE_H_
#define _SWIFT_WRAPPERS_TEMPLATES_C_SWIFT_TUPLE_USAGE_H_

#include "swift/wrappers/c_helpers.h"

#include <stdbool.h>

#if __cplusplus
extern "C" {
#endif
    
    CppBindCObject create_CppbindExample_IntsTuple(int a, int b, int c, CppBindCObject* _Nonnull cppbind_err);

    CppBindCObject create_CppbindExample_MyTupleDouble(double a, double b, CppBindCObject* _Nonnull cppbind_err);

    CppBindCObject create_CppbindExample_MyTupleInt(int a, int b, CppBindCObject* _Nonnull cppbind_err);

    int _func_CppbindExample_getTupleFirstElementIntDouble(CppBindCObject  t1, CppBindCObject* _Nonnull cppbind_err);

    int _func_CppbindExample_getTupleFirstElementIntInt(CppBindCObject  t1, CppBindCObject* _Nonnull cppbind_err);
#if __cplusplus
}
#endif
#endif /* ifndef _SWIFT_WRAPPERS_TEMPLATES_C_SWIFT_TUPLE_USAGE_H_ */

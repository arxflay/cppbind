/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 10/12/2022-07:52.
 * Please do not change it manually.
 */

#ifndef _SWIFT_WRAPPERS_TEMPLATES_C_SWIFT_TEMPLATE_VECTOR_H_
#define _SWIFT_WRAPPERS_TEMPLATES_C_SWIFT_TEMPLATE_VECTOR_H_

#include "swift/wrappers/c_helpers.h"

#include <stdbool.h>

#if __cplusplus
extern "C" {
#endif
    void release_CppbindExample_VectorInt(CppBindCObject cself, bool owner);

    CppBindCObject create_CppbindExample_VectorInt(CppBindCObject* _Nonnull cppbind_err);

    CppBindCObject create_CppbindExample_VectorInt1(CppBindCObject vec, CppBindCObject* _Nonnull cppbind_err);
    void _func_CppbindExample_VectorInt_pushBack(CppBindCObject cself, int  value, CppBindCObject* _Nonnull cppbind_err);
    void _func_CppbindExample_VectorInt_popBack(CppBindCObject cself, CppBindCObject* _Nonnull cppbind_err);


    int _func_CppbindExample_VectorInt__getitem_(CppBindCObject cself, int  idx);

    CppBindCObject _func_CppbindExample_VectorInt__add_(CppBindCObject cself, CppBindCObject  rhs, CppBindCObject* _Nonnull cppbind_err);
    bool _func_CppbindExample_VectorInt__eq_(CppBindCObject cself, CppBindCObject  rhs, CppBindCObject* _Nonnull cppbind_err);
    void release_CppbindExample_StringsVector(CppBindCObject cself, bool owner);

    CppBindCObject create_CppbindExample_StringsVector(CppBindCObject* _Nonnull cppbind_err);

    CppBindCObject create_CppbindExample_StringsVector1(CppBindCObject vec, CppBindCObject* _Nonnull cppbind_err);
    void _func_CppbindExample_StringsVector_pushBack(CppBindCObject cself, char* _Nonnull value, CppBindCObject* _Nonnull cppbind_err);
    void _func_CppbindExample_StringsVector_popBack(CppBindCObject cself, CppBindCObject* _Nonnull cppbind_err);


    char* _Nonnull _func_CppbindExample_StringsVector__getitem_(CppBindCObject cself, int  idx);

    CppBindCObject _func_CppbindExample_StringsVector__add_(CppBindCObject cself, CppBindCObject  rhs, CppBindCObject* _Nonnull cppbind_err);
    bool _func_CppbindExample_StringsVector__eq_(CppBindCObject cself, CppBindCObject  rhs, CppBindCObject* _Nonnull cppbind_err);
    void release_CppbindExample_Vector(CppBindCObject cself, bool owner);

    CppBindCObject create_CppbindExample_Vector(CppBindCObject* _Nonnull cppbind_err);

    CppBindCObject create_CppbindExample_Vector1(CppBindCObject vec, CppBindCObject* _Nonnull cppbind_err);
    void _func_CppbindExample_Vector_pushBack(CppBindCObject cself, double  value, CppBindCObject* _Nonnull cppbind_err);
    void _func_CppbindExample_Vector_popBack(CppBindCObject cself, CppBindCObject* _Nonnull cppbind_err);


    double _func_CppbindExample_Vector__getitem_(CppBindCObject cself, int  idx);

    CppBindCObject _func_CppbindExample_Vector__add_(CppBindCObject cself, CppBindCObject  rhs, CppBindCObject* _Nonnull cppbind_err);
    bool _func_CppbindExample_Vector__eq_(CppBindCObject cself, CppBindCObject  rhs, CppBindCObject* _Nonnull cppbind_err);

    CppBindCObject _func_CppbindExample_createVectorIntIntInt(int  args1, int  args2, CppBindCObject* _Nonnull cppbind_err);
#if __cplusplus
}
#endif
#endif /* ifndef _SWIFT_WRAPPERS_TEMPLATES_C_SWIFT_TEMPLATE_VECTOR_H_ */

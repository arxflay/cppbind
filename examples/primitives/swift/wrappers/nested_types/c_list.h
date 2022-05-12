/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 05/12/2022-10:26.
 * Please do not change it manually.
 */

#ifndef _C_list_WRAPPER_
#define _C_list_WRAPPER_

#include "swift/wrappers/c_helpers.h"

#include <stdbool.h>

#if __cplusplus
extern "C" {
#endif
    void release_CppbindExample_List(CppBindCObject cself, bool owner);
    void release_List_Item(CppBindCObject cself, bool owner);
    void release_List_Item_Value(CppBindCObject cself, bool owner);
    int _prop_get_List_Item_Value_value(CppBindCObject cself);
    void _prop_set_List_Item_Value_value(CppBindCObject cself, int value);


    CppBindCObject create_List_Item_Value(int _value, CppBindCObject* _Nonnull cppbind_err);
    CppBindCObject _prop_get_List_Item_value(CppBindCObject cself);
    void _prop_set_List_Item_value(CppBindCObject cself, CppBindCObject value);


    CppBindCObject create_List_Item(CppBindCObject v, CppBindCObject* _Nonnull cppbind_err);

    CppBindCObject create_CppbindExample_List(CppBindCObject* _Nonnull cppbind_err);
    void _func_CppbindExample_List_push_back(CppBindCObject cself, CppBindCObject  item, CppBindCObject* _Nonnull cppbind_err);
    void _func_CppbindExample_List_pop_back(CppBindCObject cself, CppBindCObject* _Nonnull cppbind_err);
    CppBindCObject _prop_get_CppbindExample_List_back(CppBindCObject cself, CppBindCObject* _Nonnull cppbind_err);
#if __cplusplus
}
#endif
#endif /* ifndef _C_list_WRAPPER_ */

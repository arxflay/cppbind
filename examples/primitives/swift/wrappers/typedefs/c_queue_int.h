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

#ifndef _C_queue_int_WRAPPER_
#define _C_queue_int_WRAPPER_

#include "swift/wrappers/c_helpers.h"

#include <stdbool.h>

#if __cplusplus
extern "C" {
#endif
    void release_CppbindExample_QueueInt(CppBindCObject cself, bool owner);

    CppBindCObject create_CppbindExample_QueueInt(CppBindCObject* _Nonnull cppbind_err);
    void _func_CppbindExample_QueueInt_push_back(CppBindCObject cself, int  element, CppBindCObject* _Nonnull cppbind_err);
    void _func_CppbindExample_QueueInt_push_back_from_str(CppBindCObject cself, char* _Nonnull element, CppBindCObject* _Nonnull cppbind_err);
    int _func_CppbindExample_QueueInt_get_size(CppBindCObject cself, CppBindCObject* _Nonnull cppbind_err);
    void release_CppbindExample_QueueIntUsage(CppBindCObject cself, bool owner);

    CppBindCObject create_CppbindExample_QueueIntUsage(CppBindCObject q, CppBindCObject* _Nonnull cppbind_err);
    int _func_CppbindExample_QueueIntUsage_getSize(CppBindCObject  q, CppBindCObject* _Nonnull cppbind_err);
    int _func_CppbindExample_QueueIntUsage_getLastElement(CppBindCObject  q, CppBindCObject* _Nonnull cppbind_err);
    int _func_CppbindExample_QueueIntUsage_getFirstElement(CppBindCObject  q, CppBindCObject* _Nonnull cppbind_err);
    CppBindCObject _func_CppbindExample_QueueIntUsage_getInvQueue(CppBindCDataArray  v, CppBindCObject* _Nonnull cppbind_err);
    CppBindCObject _func_CppbindExample_QueueIntUsage_getSavedQueue(CppBindCObject cself, CppBindCObject* _Nonnull cppbind_err);
    CppBindCObject _prop_get_CppbindExample_QueueIntUsage_empty_queue(CppBindCObject cself);
    CppBindCObject _prop_get_CppbindExample_QueueIntUsage_saved_queue(CppBindCObject cself);
#if __cplusplus
}
#endif
#endif /* ifndef _C_queue_int_WRAPPER_ */

/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 07/06/2021-10:59.
 * Please do not change it manually.
 */

#ifndef _C_stack_WRAPPER_
#define _C_stack_WRAPPER_

#include "swift/wrappers/c_helpers.h"

#include <stdbool.h>

#if __cplusplus
extern "C" {
#endif
    void release_StackProject(void* _Nullable cself);

    void* _Nonnull create_StackProject();

    void* _Nonnull create_StackProject_1(void* _Nonnull st);

    void  _func_StackProject_push(void* _Nonnull cself,void* _Nonnull item, ErrorObj* _Nonnull err);

    void  _func_StackProject_pop(void* _Nonnull cself, ErrorObj* _Nonnull err);

    void* _Nonnull _func_StackProject_top(void* _Nonnull cself, ErrorObj* _Nonnull err);

    bool  _func_StackProject_empty(void* _Nonnull cself, ErrorObj* _Nonnull err);
    void release_StackTask(void* _Nullable cself);

    void* _Nonnull create_StackTask();

    void* _Nonnull create_StackTask_1(void* _Nonnull st);

    void  _func_StackTask_push(void* _Nonnull cself,void* _Nonnull item, ErrorObj* _Nonnull err);

    void  _func_StackTask_pop(void* _Nonnull cself, ErrorObj* _Nonnull err);

    void* _Nonnull _func_StackTask_top(void* _Nonnull cself, ErrorObj* _Nonnull err);

    bool  _func_StackTask_empty(void* _Nonnull cself, ErrorObj* _Nonnull err);
#if __cplusplus
}
#endif
#endif /* ifndef _C_stack_WRAPPER_ */
/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 12/07/2021-14:51.
 * Please do not change it manually.
 */

#ifndef _C_task_WRAPPER_
#define _C_task_WRAPPER_

#include "swift/wrappers/c_helpers.h"

#include <stdbool.h>

#if __cplusplus
extern "C" {
#endif
    void release_Task(CObject cself, bool owner);

    CObject create_Task(char* _Nonnull title, ErrorObj* _Nonnull err);
    char* _Nonnull _prop_get_Task_title(CObject cself);
    void _func_Task_setTitle(CObject cself, char* _Nonnull title, ErrorObj* _Nonnull err);
#if __cplusplus
}
#endif
#endif /* ifndef _C_task_WRAPPER_ */
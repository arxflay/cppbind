/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 11/25/2021-10:01.
 * Please do not change it manually.
 */

#ifndef _C_time_WRAPPER_
#define _C_time_WRAPPER_

#include "swift/wrappers/c_helpers.h"

#include <stdbool.h>

#if __cplusplus
extern "C" {
#endif
    void release_TimeImpl(void* _Nonnull cself);

    void* _Nonnull create_Time(int h, int m, int s, ErrorObj* _Nonnull err);
    char* _Nonnull _func_Time_value(void* _Nonnull cself, ErrorObj* _Nonnull err);
    char* _Nonnull _prop_get_Time_time(void* _Nonnull cself);
#if __cplusplus
}
#endif
#endif /* ifndef _C_time_WRAPPER_ */
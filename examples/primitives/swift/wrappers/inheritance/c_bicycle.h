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

#ifndef _C_bicycle_WRAPPER_
#define _C_bicycle_WRAPPER_

#include "swift/wrappers/c_helpers.h"

#include <stdbool.h>

#if __cplusplus
extern "C" {
#endif
    void release_Bicycle(void* _Nonnull cself);

    void* _Nonnull create_Bicycle(int numberOfSeats, ErrorObj* _Nonnull err);
    char* _Nonnull _func_Bicycle_type(void* _Nonnull cself, ErrorObj* _Nonnull err);
#if __cplusplus
}
#endif
#endif /* ifndef _C_bicycle_WRAPPER_ */
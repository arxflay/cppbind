/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 07/06/2021-13:32.
 * Please do not change it manually.
 */

#ifndef _C_Utils_WRAPPER_
#define _C_Utils_WRAPPER_

#include "swift/wrappers/c_helpers.h"

#include <stdbool.h>

#if __cplusplus
extern "C" {
#endif
    void release_Utils(void* _Nonnull cself);

    void* _Nonnull create_Utils();

    int _func_Utils_sum(int  first, int  second, ErrorObj* _Nonnull err);

    float _func_Utils_sum_1(float  first, float  second, ErrorObj* _Nonnull err);

    char* _Nonnull _func_Utils_concatenate(void* _Nonnull cself,char* _Nonnull  first, char* _Nonnull  second, ErrorObj* _Nonnull err);

    char* _Nonnull _func_Utils_concatenate_1(void* _Nonnull cself,char* _Nonnull  first, char* _Nonnull  second, char* _Nonnull  third, ErrorObj* _Nonnull err);
#if __cplusplus
}
#endif
#endif /* ifndef _C_Utils_WRAPPER_ */
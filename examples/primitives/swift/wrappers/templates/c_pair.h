/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 09/23/2021-11:18.
 * Please do not change it manually.
 */

#ifndef _C_pair_WRAPPER_
#define _C_pair_WRAPPER_

#include "swift/wrappers/c_helpers.h"

#include <stdbool.h>

#if __cplusplus
extern "C" {
#endif
    void release_PairEmployee(void* _Nonnull cself);

    void* _Nonnull create_PairEmployee(char* _Nonnull first, void* _Nonnull second);
    char* _Nonnull _prop_get_PairEmployee_first(void* _Nonnull cself);
    void* _Nonnull _prop_get_PairEmployee_second(void* _Nonnull cself);
    void release_PairStudent(void* _Nonnull cself);

    void* _Nonnull create_PairStudent(char* _Nonnull first, void* _Nonnull second);
    char* _Nonnull _prop_get_PairStudent_first(void* _Nonnull cself);
    void* _Nonnull _prop_get_PairStudent_second(void* _Nonnull cself);
#if __cplusplus
}
#endif
#endif /* ifndef _C_pair_WRAPPER_ */
/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 09/23/2021-14:11.
 * Please do not change it manually.
 */

#ifndef _C_pair_examples_WRAPPER_
#define _C_pair_examples_WRAPPER_

#include "swift/wrappers/c_helpers.h"

#include <stdbool.h>

#if __cplusplus
extern "C" {
#endif
    void release_PairExamples(void* _Nonnull cself);

    void* _Nonnull create_PairExamples();
    CDataPair _func_PairExamples_sumIntPairs(void* _Nonnull cself, CDataPair  p1, CDataPair  p2, ErrorObj* _Nonnull err);
    void _func_PairExamples_setNestedPair(void* _Nonnull cself, CDataPair  p, ErrorObj* _Nonnull err);
    CDataPair _func_PairExamples_getNestedPair(void* _Nonnull cself, ErrorObj* _Nonnull err);
    CDataPair _func_PairExamples_getStringPair(void* _Nonnull cself, ErrorObj* _Nonnull err);
#if __cplusplus
}
#endif
#endif /* ifndef _C_pair_examples_WRAPPER_ */
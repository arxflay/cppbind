/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 06/09/2022-13:05.
 * Please do not change it manually.
 */

#ifndef _SWIFT_WRAPPERS_CONTAINERS_C_SWIFT_PAIR_EXAMPLES_H_
#define _SWIFT_WRAPPERS_CONTAINERS_C_SWIFT_PAIR_EXAMPLES_H_

#include "swift/wrappers/c_helpers.h"

#include <stdbool.h>

#if __cplusplus
extern "C" {
#endif
    void release_CppbindExample_PairExamples(CppBindCObject cself, bool owner);

    CppBindCObject create_CppbindExample_PairExamples(CppBindCObject* _Nonnull cppbind_err);
    CppBindCDataPair _func_CppbindExample_PairExamples_sumIntPairs(CppBindCObject cself, CppBindCDataPair  p1, CppBindCDataPair  p2, CppBindCObject* _Nonnull cppbind_err);
    void _func_CppbindExample_PairExamples_setNestedPair(CppBindCObject cself, CppBindCDataPair  p, CppBindCObject* _Nonnull cppbind_err);
    CppBindCDataPair _func_CppbindExample_PairExamples_getNestedPair(CppBindCObject cself, CppBindCObject* _Nonnull cppbind_err);
    CppBindCDataPair _func_CppbindExample_PairExamples_getStringPair(CppBindCObject cself, CppBindCObject* _Nonnull cppbind_err);
    void _func_CppbindExample_PairExamples_setNestedVectorOfPairs(CppBindCObject cself, CppBindCDataArray  v, CppBindCObject* _Nonnull cppbind_err);
    CppBindCDataArray _func_CppbindExample_PairExamples_getNestedVectorOfPairs(CppBindCObject cself, CppBindCObject* _Nonnull cppbind_err);
    CppBindCDataPair _prop_get_CppbindExample_PairExamples_complexPairObj(CppBindCObject cself, CppBindCObject* _Nonnull cppbind_err);

    void _prop_set_CppbindExample_PairExamples_complexPairObj(CppBindCObject cself, CppBindCDataPair p, CppBindCObject* _Nonnull cppbind_err);

    long _func_CppbindExample_PairExamples_sumPairItems(CppBindCObject cself, CppBindCDataPair  p, CppBindCObject* _Nonnull cppbind_err);
#if __cplusplus
}
#endif
#endif /* ifndef _SWIFT_WRAPPERS_CONTAINERS_C_SWIFT_PAIR_EXAMPLES_H_ */
/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 12/08/2021-11:54.
 * Please do not change it manually.
 */

#ifndef _C_NullableUtils_WRAPPER_
#define _C_NullableUtils_WRAPPER_

#include "swift/wrappers/c_helpers.h"

#include <stdbool.h>

#if __cplusplus
extern "C" {
#endif
    void release_NumInt(CObject cself, bool owner);

    CObject create_NumInt(int val_, ErrorObj* _Nonnull err);
    int _prop_get_NumInt_value(CObject cself);
    void release_NumDouble(CObject cself, bool owner);

    CObject create_NumDouble(double val_, ErrorObj* _Nonnull err);
    double _prop_get_NumDouble_value(CObject cself);
    void release_NullableUtils(CObject cself, bool owner);

    CObject create_NullableUtils(CObject num, ErrorObj* _Nonnull err);
    CObject _func_NullableUtils_max(CObject  first, CObject  second, ErrorObj* _Nonnull err);
    CObject _func_NullableUtils_max_1(CObject  first, CObject  second, ErrorObj* _Nonnull err);
    void _func_NullableUtils_checkNonnullArg(CObject  number, ErrorObj* _Nonnull err);
    CObject _func_NullableUtils_checkNonnullReturn(ErrorObj* _Nonnull err);
    CObject _prop_get_NullableUtils_nullable(CObject cself);

    void _prop_set_NullableUtils_nullable(CObject cself, CObject num);

    CObject _prop_get_NullableUtils_nonNull(CObject cself);

    void _prop_set_NullableUtils_nonNull(CObject cself, CObject num);

    CObject _prop_get_NullableUtils_numDouble(CObject cself);
    void _prop_set_NullableUtils_numDouble(CObject cself, CObject numDouble);

    CObject _prop_get_NullableUtils_numInt(CObject cself);
    void _prop_set_NullableUtils_numInt(CObject cself, CObject numInt);

#if __cplusplus
}
#endif
#endif /* ifndef _C_NullableUtils_WRAPPER_ */
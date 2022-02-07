/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 02/03/2022-13:55.
 * Please do not change it manually.
 */

#ifndef _C_vector_WRAPPER_
#define _C_vector_WRAPPER_

#include "swift/wrappers/c_helpers.h"

#include <stdbool.h>

#if __cplusplus
extern "C" {
#endif
    void release_VectorItem(IEGenCObject cself, bool owner);
    int _prop_get_VectorItem_value(IEGenCObject cself);
    void _prop_set_VectorItem_value(IEGenCObject cself, int value);


    IEGenCObject create_VectorItem(int _value, IEGenCObject* _Nonnull err);
    void release_VectorExamples(IEGenCObject cself, bool owner);

    IEGenCObject create_VectorExamples(IEGenCObject* _Nonnull err);
    void _func_VectorExamples_addIntVector(IEGenCObject cself, IEGenCDataArray  v, IEGenCObject* _Nonnull err);
    void _func_VectorExamples_addObjVector(IEGenCObject cself, IEGenCDataArray  v, IEGenCObject* _Nonnull err);
    void _func_VectorExamples_addStringVector(IEGenCObject cself, IEGenCDataArray  v, IEGenCObject* _Nonnull err);
    IEGenCDataArray _func_VectorExamples_getStringVector(IEGenCObject cself, IEGenCObject* _Nonnull err);
    IEGenCDataArray _func_VectorExamples_getObjVector(IEGenCObject cself, IEGenCObject* _Nonnull err);
    IEGenCDataArray _func_VectorExamples_getIntVector(IEGenCObject cself, IEGenCObject* _Nonnull err);
#if __cplusplus
}
#endif
#endif /* ifndef _C_vector_WRAPPER_ */

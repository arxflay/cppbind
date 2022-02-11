/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 02/07/2022-15:50.
 * Please do not change it manually.
 */

#ifndef _C_queue_int_shared_WRAPPER_
#define _C_queue_int_shared_WRAPPER_

#include "swift/wrappers/c_helpers.h"

#include <stdbool.h>

#if __cplusplus
extern "C" {
#endif
    void release_QueueIntShared(IEGenCObject cself, bool owner);

    IEGenCObject create_QueueIntShared(IEGenCObject* _Nonnull err);
    void _func_QueueIntShared_push_back(IEGenCObject cself, int  element, IEGenCObject* _Nonnull err);
    int _func_QueueIntShared_get_size(IEGenCObject cself, IEGenCObject* _Nonnull err);
    void release_QueueIntSharedUsage(IEGenCObject cself, bool owner);

    IEGenCObject create_QueueIntSharedUsage(IEGenCObject q, IEGenCObject* _Nonnull err);
    int _func_QueueIntSharedUsage_getSize(IEGenCObject  q, IEGenCObject* _Nonnull err);
    int _func_QueueIntSharedUsage_getLastElement(IEGenCObject  q, IEGenCObject* _Nonnull err);
    int _func_QueueIntSharedUsage_getFirstElement(IEGenCObject  q, IEGenCObject* _Nonnull err);
    IEGenCObject _func_QueueIntSharedUsage_getInvQueue(IEGenCDataArray  v, IEGenCObject* _Nonnull err);
    IEGenCObject _func_QueueIntSharedUsage_getSavedQueue(IEGenCObject cself, IEGenCObject* _Nonnull err);
    IEGenCObject _prop_get_QueueIntSharedUsage_saved_queue(IEGenCObject cself);
#if __cplusplus
}
#endif
#endif /* ifndef _C_queue_int_shared_WRAPPER_ */

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

#ifndef _C_addressable_WRAPPER_
#define _C_addressable_WRAPPER_

#include "swift/wrappers/c_helpers.h"

#include <stdbool.h>

#if __cplusplus
extern "C" {
#endif
    void release_AddressableImplRoot(IEGenCObject cself, bool owner);

    IEGenCObject create_AddressableRoot(IEGenCObject parent, char* _Nonnull name, IEGenCObject* _Nonnull err);
    char* _Nonnull _func_AddressableRoot_absPath(IEGenCObject cself, IEGenCObject* _Nonnull err);
#if __cplusplus
}
#endif
#endif /* ifndef _C_addressable_WRAPPER_ */

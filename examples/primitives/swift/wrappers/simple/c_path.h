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

#ifndef _C_path_WRAPPER_
#define _C_path_WRAPPER_

#include "swift/wrappers/c_helpers.h"

#include <stdbool.h>

#if __cplusplus
extern "C" {
#endif
    void release_Path(IEGenCObject cself, bool owner);

    IEGenCObject create_Path(char* _Nonnull _value, IEGenCObject* _Nonnull err);
    char* _Nonnull _func_Path_toString(IEGenCObject cself, IEGenCObject* _Nonnull err);
    char* _Nonnull _prop_get_Path_value(IEGenCObject cself);
#if __cplusplus
}
#endif
#endif /* ifndef _C_path_WRAPPER_ */

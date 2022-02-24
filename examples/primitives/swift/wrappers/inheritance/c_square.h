/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 02/22/2022-13:23.
 * Please do not change it manually.
 */

#ifndef _C_square_WRAPPER_
#define _C_square_WRAPPER_

#include "swift/wrappers/c_helpers.h"

#include <stdbool.h>

#if __cplusplus
extern "C" {
#endif
    void release_Square(IEGenCObject cself, bool owner);

    IEGenCObject create_Square(double side, IEGenCObject* _Nonnull err);
    double _prop_get_Square_area(IEGenCObject cself, IEGenCObject* _Nonnull err);
    double _func_Square_perimeter(IEGenCObject cself, IEGenCObject* _Nonnull err);
#if __cplusplus
}
#endif
#endif /* ifndef _C_square_WRAPPER_ */

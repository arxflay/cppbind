/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 12/07/2021-14:51.
 * Please do not change it manually.
 */

#ifndef _C_rhombus_WRAPPER_
#define _C_rhombus_WRAPPER_

#include "swift/wrappers/c_helpers.h"

#include <stdbool.h>

#if __cplusplus
extern "C" {
#endif
    void release_RhombusFigureImpl(CObject cself, bool owner);

    CObject create_RhombusFigure(double diagonal1, double diagonal2, ErrorObj* _Nonnull err);
#if __cplusplus
}
#endif
#endif /* ifndef _C_rhombus_WRAPPER_ */
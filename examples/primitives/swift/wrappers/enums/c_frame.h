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

#ifndef _C_frame_WRAPPER_
#define _C_frame_WRAPPER_

#include "swift/wrappers/c_helpers.h"

#include <stdbool.h>

#if __cplusplus
extern "C" {
#endif
    void release_Frame(CObject cself, bool owner);

    CObject create_Frame(ErrorObj* _Nonnull err);
    unsigned int _prop_get_Frame_backgroundColor(CObject cself);
    void _prop_set_Frame_backgroundColor(CObject cself, unsigned int backgroundColor);

    unsigned int _prop_get_Frame_backgroundColorShade(CObject cself);
    void _prop_set_Frame_backgroundColorShade(CObject cself, unsigned int backgroundColorShade);

#if __cplusplus
}
#endif
#endif /* ifndef _C_frame_WRAPPER_ */
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

#ifndef _C_car_WRAPPER_
#define _C_car_WRAPPER_

#include "swift/wrappers/c_helpers.h"

#include <stdbool.h>

#if __cplusplus
extern "C" {
#endif
    void release_MyCar(CObject cself, bool owner);

    CObject create_MyCar(int numberOfSeats, ErrorObj* _Nonnull err);
    char* _Nonnull _func_MyCar_type(CObject cself, ErrorObj* _Nonnull err);
#if __cplusplus
}
#endif
#endif /* ifndef _C_car_WRAPPER_ */
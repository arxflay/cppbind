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

#ifndef _C_date_WRAPPER_
#define _C_date_WRAPPER_

#include "swift/wrappers/c_helpers.h"

#include <stdbool.h>

#if __cplusplus
extern "C" {
#endif
    void release_MyDate(CObject cself, bool owner);

    CObject create_MyDate(int d, int m, int y, ErrorObj* _Nonnull err);
    char* _Nonnull _func_MyDate_value(CObject cself, ErrorObj* _Nonnull err);
    char* _Nonnull _prop_get_MyDate_date(CObject cself);
#if __cplusplus
}
#endif
#endif /* ifndef _C_date_WRAPPER_ */
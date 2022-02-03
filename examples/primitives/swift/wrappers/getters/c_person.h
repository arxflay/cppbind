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

#ifndef _C_person_WRAPPER_
#define _C_person_WRAPPER_

#include "swift/wrappers/c_helpers.h"

#include <stdbool.h>

#if __cplusplus
extern "C" {
#endif
    void release_Person(IEGenCObject cself, bool owner);

    IEGenCObject create_Person(char* _Nonnull name, char* _Nonnull email, int age, IEGenCObject* _Nonnull err);
    char* _Nonnull _prop_get_Person_name(IEGenCObject cself);

    void _prop_set_Person_name(IEGenCObject cself, char* _Nonnull val);

    char* _Nonnull _prop_get_Person_email(IEGenCObject cself);
    int _prop_get_Person_age(IEGenCObject cself);
    void _prop_set_Person_age(IEGenCObject cself, int age);

#if __cplusplus
}
#endif
#endif /* ifndef _C_person_WRAPPER_ */

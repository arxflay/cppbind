#ifndef _C_number_WRAPPER_
#define _C_number_WRAPPER_

#include "swift/wrappers/c_helpers.h"

#include <stdbool.h>

#if __cplusplus
extern "C" {
#endif
    void release_NumberInt(void* _Nonnull cself);
    void* _Nonnull create_NumberInt(int n);
    int _prop_get_NumberInt_num(void* _Nonnull cself);
    void _prop_set_NumberInt_num(void* _Nonnull cself, int num);

    void release_NumberDouble(void* _Nonnull cself);
    void* _Nonnull create_NumberDouble(double n);
    double _prop_get_NumberDouble_num(void* _Nonnull cself);
    void _prop_set_NumberDouble_num(void* _Nonnull cself, double num);

#if __cplusplus
}
#endif
#endif /* ifndef _C_number_WRAPPER_ */
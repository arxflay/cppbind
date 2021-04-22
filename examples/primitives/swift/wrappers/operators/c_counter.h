#ifndef _C_counter_WRAPPER_
#define _C_counter_WRAPPER_ 

#include "swift/wrappers/c_helpers.h"

#include <stdbool.h>

#if __cplusplus
extern "C" {
#endif
    void release_Counter(void* _Nonnull cself);
    void* _Nonnull create_Counter(int count);
    int _prop_get_Counter_count(void* _Nonnull cself);
    void* _Nonnull _func_Counter_operator_add_(void* _Nonnull cself , void* _Nonnull counter);
    int _func_Counter_compareTo(void* _Nonnull cself , void* _Nonnull counter);
    bool _func_Counter_operator_gt_(void* _Nonnull cself , void* _Nonnull counter);
    void* _Nonnull _func_Counter_operator_iadd_(void* _Nonnull cself , void* _Nonnull counter);
#if __cplusplus
}
#endif
#endif /* ifndef _C_counter_WRAPPER_ */
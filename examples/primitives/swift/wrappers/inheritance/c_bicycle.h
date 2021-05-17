#ifndef _C_bicycle_WRAPPER_
#define _C_bicycle_WRAPPER_

#include "swift/wrappers/c_helpers.h"

#include <stdbool.h>

#if __cplusplus
extern "C" {
#endif
    void release_Bicycle(void* _Nonnull cself);
    void* _Nonnull create_Bicycle(int numberOfSeats);
#if __cplusplus
}
#endif
#endif /* ifndef _C_bicycle_WRAPPER_ */
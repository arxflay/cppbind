#ifndef _C_map_WRAPPER_
#define _C_map_WRAPPER_

#include "swift/wrappers/c_helpers.h"

#include <stdbool.h>

#if __cplusplus
extern "C" {
#endif
    void release_MapItem(void* _Nonnull cself);
    int _prop_get_MapItem_value(void* _Nonnull cself);
    void _prop_set_MapItem_value(void* _Nonnull cself, int value);

    void* _Nonnull create_MapItem(int _value);
    void release_MapExamples(void* _Nonnull cself);
    void* _Nonnull create_MapExamples();
    void _func_MapExamples_addStringPair(void* _Nonnull cself , CDataPair info, ErrorObj* _Nonnull err);
    void _func_MapExamples_addIntMap(void* _Nonnull cself , CDataMap info, ErrorObj* _Nonnull err);
    void _func_MapExamples_addStringMap(void* _Nonnull cself , CDataMap info, ErrorObj* _Nonnull err);
    CDataMap _func_MapExamples_getStringMap(void* _Nonnull cself , ErrorObj* _Nonnull err);
    CDataMap _func_MapExamples_getIntMap(void* _Nonnull cself , ErrorObj* _Nonnull err);
    void _func_MapExamples_addMixedMap(void* _Nonnull cself , CDataMap info, ErrorObj* _Nonnull err);
    CDataMap _func_MapExamples_getMixedMap(void* _Nonnull cself , ErrorObj* _Nonnull err);
#if __cplusplus
}
#endif
#endif /* ifndef _C_map_WRAPPER_ */
#ifndef _C_template_functions_WRAPPER_
#define _C_template_functions_WRAPPER_ 

#include "swift/wrappers/c_helpers.h"

#include <stdbool.h>

#if __cplusplus
extern "C" {
#endif
    void release_TemplateFunctions(void* _Nonnull cself);
    void* _Nonnull create_TemplateFunctions();
    int _func_TemplateFunctions_maxInt(void* _Nonnull cself , int arg0, int arg1);
    char* _Nonnull _func_TemplateFunctions_maxString(void* _Nonnull cself , char* _Nonnull arg0, char* _Nonnull arg1);
    CDataPair _func_TemplateFunctions_makePairProjectProject(void* _Nonnull cself , void* _Nonnull arg0, void* _Nonnull arg1);
    CDataPair _func_TemplateFunctions_makePairTaskProject(void* _Nonnull cself , void* _Nonnull arg0, void* _Nonnull arg1);
#if __cplusplus
}
#endif
#endif /* ifndef _C_template_functions_WRAPPER_ */
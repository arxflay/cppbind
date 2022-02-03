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

#include <stdlib.h>
#include <string.h>
#include <cxxabi.h>
#include <memory>
#include "swift/wrappers/inheritance/c_base.h"
#include "cxx/inheritance/base.hpp"

using namespace iegen::example;

void release_BaseImpl(IEGenCObject cself, bool owner){
    free(cself.type);
    if (owner) {
        delete static_cast<std::shared_ptr<iegen::example::Base>*>(cself.ptr);
    }
}

char* _Nonnull _func_Base_value(IEGenCObject cself, IEGenCObject* _Nonnull err){
    
    std::shared_ptr<iegen::example::Base> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<iegen::example::Base>*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->value();
        auto cxxtocresult = strdup(result.data());
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    }
    catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    char* result {};
    return result;
}

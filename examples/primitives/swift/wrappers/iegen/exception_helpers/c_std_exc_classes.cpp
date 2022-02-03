/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 02/03/2022-12:28.
 * Please do not change it manually.
 */

#include <stdlib.h>
#include <string.h>
#include <cxxabi.h>
#include <memory>
#include "swift/wrappers/iegen/exception_helpers/c_std_exc_classes.h"
#include <stdexcept>
#include <new>
#include <typeinfo>


using namespace std;

void release_StdException(IEGenCObject cself, bool owner) {
    free(cself.type);
    if (owner) {
        delete static_cast<std::exception*>(cself.ptr);
    }
}

const char * _Nonnull _func_StdException_what(IEGenCObject cself, IEGenCObject* _Nonnull err){
    
    auto ctocxxcself = static_cast<std::exception*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->what();
        
        return result;
    }
    catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    }
    catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    const char * result {};
    return result;
}

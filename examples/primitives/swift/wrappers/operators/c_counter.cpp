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
#include "swift/wrappers/operators/c_counter.h"
#include "cxx/operators/counter.hpp"

using namespace iegen::example;

void release_Counter(IEGenCObject cself, bool owner) {
    free(cself.type);
    if (owner) {
        delete static_cast<iegen::example::Counter*>(cself.ptr);
    }
}

IEGenCObject create_Counter(int count, IEGenCObject* _Nonnull err){
    
    try {
        auto this_object = new iegen::example::Counter(count);
        return {strdup("iegen::example::Counter"), this_object};
    }
    catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    }
    catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}

int _prop_get_Counter_count(IEGenCObject cself){
    auto ctocxxcself = static_cast<iegen::example::Counter*>(cself.ptr);
    const auto& result = ctocxxcself->count();
    
    return result;
}

IEGenCObject _func_Counter__add_(IEGenCObject cself, IEGenCObject counter, IEGenCObject* _Nonnull err){
    
    auto& ctocxxcounter = *static_cast<iegen::example::Counter*>(counter.ptr);
  
    
    auto ctocxxcself = static_cast<iegen::example::Counter*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->operator+(ctocxxcounter);
        
        char* type_result = strdup("iegen::example::Counter");
        IEGenCObject cxxtocresult = {type_result, const_cast<iegen::example::Counter*>( new iegen::example::Counter(result) )};
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    }
    catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}

bool _func_Counter__gt_(IEGenCObject cself, IEGenCObject counter, IEGenCObject* _Nonnull err){
    
    auto& ctocxxcounter = *static_cast<iegen::example::Counter*>(counter.ptr);
  
    
    auto ctocxxcself = static_cast<iegen::example::Counter*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->operator>(ctocxxcounter);
        
        return result;
    }
    catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    }
    catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    bool result {};
    return result;
}

IEGenCObject _func_Counter__iadd_(IEGenCObject cself, IEGenCObject counter, IEGenCObject* _Nonnull err){
    
    auto& ctocxxcounter = *static_cast<iegen::example::Counter*>(counter.ptr);
  
    
    auto ctocxxcself = static_cast<iegen::example::Counter*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->operator+=(ctocxxcounter);
        
        char* type_result = strdup("iegen::example::Counter");
        IEGenCObject cxxtocresult = {type_result, const_cast<iegen::example::Counter*>( &result )};
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    }
    catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}

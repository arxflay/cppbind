/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 03/23/2022-10:47.
 * Please do not change it manually.
 */

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cxxabi.h>
#include <memory>
#include <type_traits>
#include "swift/wrappers/operators/c_counter.h"
#include "cxx/operators/counter.hpp"

using namespace iegen::example;

void release_IegenExample_Counter(IEGenCObject cself, bool owner) {
    if (owner) {
        delete static_cast<iegen::example::Counter*>(cself.ptr);
    }
    free(cself.type);
}

IEGenCObject create_IegenExample_Counter(int count, IEGenCObject* _Nonnull err) {
    try {
        auto this_object = new iegen::example::Counter(count);
        return {strdup("iegen::example::Counter"), this_object};
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}

int _prop_get_IegenExample_Counter_count(IEGenCObject cself, IEGenCObject* _Nonnull err) {
    auto ctocxxcself = static_cast<iegen::example::Counter*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->count();
        
        return result;
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    int result {};
    return result;
}

IEGenCObject _func_IegenExample_Counter__add_(IEGenCObject cself, IEGenCObject counter, IEGenCObject* _Nonnull err) {
    
    auto& ctocxxcounter = *static_cast<iegen::example::Counter*>(counter.ptr);
  
    auto ctocxxcself = static_cast<iegen::example::Counter*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->operator+(ctocxxcounter);
        
        char* type_result = strdup("iegen::example::Counter");
        auto value_ptr_result = const_cast<iegen::example::Counter*>(new iegen::example::Counter(result));
        IEGenCObject cxxtocresult = {type_result, value_ptr_result};
        return cxxtocresult;
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}

bool _func_IegenExample_Counter__gt_(IEGenCObject cself, IEGenCObject counter, IEGenCObject* _Nonnull err) {
    
    auto& ctocxxcounter = *static_cast<iegen::example::Counter*>(counter.ptr);
  
    auto ctocxxcself = static_cast<iegen::example::Counter*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->operator>(ctocxxcounter);
        
        return result;
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    bool result {};
    return result;
}

IEGenCObject _func_IegenExample_Counter__iadd_(IEGenCObject cself, IEGenCObject counter, IEGenCObject* _Nonnull err) {
    
    auto& ctocxxcounter = *static_cast<iegen::example::Counter*>(counter.ptr);
  
    auto ctocxxcself = static_cast<iegen::example::Counter*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->operator+=(ctocxxcounter);
        
        char* type_result = strdup("iegen::example::Counter");
        auto value_ptr_result = const_cast<iegen::example::Counter*>(&result);
        IEGenCObject cxxtocresult = {type_result, value_ptr_result};
        return cxxtocresult;
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}


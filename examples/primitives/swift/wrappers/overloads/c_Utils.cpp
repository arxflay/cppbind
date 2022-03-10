/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 03/04/2022-15:19.
 * Please do not change it manually.
 */

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cxxabi.h>
#include <memory>
#include <type_traits>
#include "swift/wrappers/overloads/c_Utils.h"
#include "cxx/overloads/utils.hpp"

using namespace iegen::example;

void release_Utils(IEGenCObject cself, bool owner) {
    free(cself.type);
    if (owner) {
        delete static_cast<std::shared_ptr<iegen::example::Utils>*>(cself.ptr);
    }
}

IEGenCObject create_Utils(IEGenCObject* _Nonnull err) {
    try {
        auto this_object = new iegen::example::Utils();
        return {strdup("iegen::example::Utils"), new std::shared_ptr<iegen::example::Utils>(this_object)};
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}

int _func_Utils_sum(int first, int second, IEGenCObject* _Nonnull err) {
  
  
    try {
        const auto& result = iegen::example::Utils::sum(first, second);
        
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

float _func_Utils_sum_1(float first, float second, IEGenCObject* _Nonnull err) {
  
  
    try {
        const auto& result = iegen::example::Utils::sum(first, second);
        
        return result;
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    float result {};
    return result;
}

char* _Nonnull _func_Utils_concatenate(IEGenCObject cself, char* _Nonnull first, char* _Nonnull second, IEGenCObject* _Nonnull err) {
    auto ctocxxfirst = std::string(first);
    free(first);
  
    auto ctocxxsecond = std::string(second);
    free(second);
  
    
    std::shared_ptr<iegen::example::Utils> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<iegen::example::Utils>*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->concatenate(ctocxxfirst, ctocxxsecond);
        auto cxxtocresult = strdup(result.data());
        return cxxtocresult;
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    char* result {};
    return result;
}

char* _Nonnull _func_Utils_concatenate_1(IEGenCObject cself, char* _Nonnull first, char* _Nonnull second, char* _Nonnull third, IEGenCObject* _Nonnull err) {
    auto ctocxxfirst = std::string(first);
    free(first);
  
    auto ctocxxsecond = std::string(second);
    free(second);
  
    auto ctocxxthird = std::string(third);
    free(third);
  
    
    std::shared_ptr<iegen::example::Utils> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<iegen::example::Utils>*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->concatenate(ctocxxfirst, ctocxxsecond, ctocxxthird);
        auto cxxtocresult = strdup(result.data());
        return cxxtocresult;
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    char* result {};
    return result;
}

int _func_Utils_minus(int first, int second, IEGenCObject* _Nonnull err) {
  
  
    try {
        const auto& result = iegen::example::Utils::sub(first, second);
        
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

float _func_Utils_minus_1(float first, float second, IEGenCObject* _Nonnull err) {
  
  
    try {
        const auto& result = iegen::example::Utils::sub(first, second);
        
        return result;
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    float result {};
    return result;
}


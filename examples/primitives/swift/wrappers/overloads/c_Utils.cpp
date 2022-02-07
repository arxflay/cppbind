/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 02/02/2022-11:11.
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

IEGenCObject create_Utils(IEGenCErrorObj* _Nonnull err){
    try {
        auto this_object = new iegen::example::Utils();
        return {strdup("iegen::example::Utils"), new std::shared_ptr<iegen::example::Utils>(this_object)};
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    IEGenCObject result {};
    return result;
}

int _func_Utils_sum(int first, int second, IEGenCErrorObj* _Nonnull err){
    
  
    
  
    try {
        const auto& result = iegen::example::Utils::sum(first, second);
        
        return result;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    int result {};
    return result;
}

float _func_Utils_sum_1(float first, float second, IEGenCErrorObj* _Nonnull err){
    
  
    
  
    try {
        const auto& result = iegen::example::Utils::sum(first, second);
        
        return result;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    float result {};
    return result;
}

char* _Nonnull _func_Utils_concatenate(IEGenCObject cself, char* _Nonnull first, char* _Nonnull second, IEGenCErrorObj* _Nonnull err){
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
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    char* result {};
    return result;
}

char* _Nonnull _func_Utils_concatenate_1(IEGenCObject cself, char* _Nonnull first, char* _Nonnull second, char* _Nonnull third, IEGenCErrorObj* _Nonnull err){
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
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    char* result {};
    return result;
}

int _func_Utils_minus(int first, int second, IEGenCErrorObj* _Nonnull err){
    
  
    
  
    try {
        const auto& result = iegen::example::Utils::sub(first, second);
        
        return result;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    int result {};
    return result;
}

float _func_Utils_minus_1(float first, float second, IEGenCErrorObj* _Nonnull err){
    
  
    
  
    try {
        const auto& result = iegen::example::Utils::sub(first, second);
        
        return result;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    float result {};
    return result;
}

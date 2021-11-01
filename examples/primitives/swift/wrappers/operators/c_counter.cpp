/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 10/28/2021-10:21.
 * Please do not change it manually.
 */

#include <string.h>
#include <memory>
#include "swift/wrappers/operators/c_counter.h"
#include "cxx/operators/counter.hpp"

using namespace iegen::example;

void release_Counter(void* _Nonnull cself) {
    delete dynamic_cast<iegen::example::Counter*>(static_cast<iegen::example::Counter*>(cself));
}

void* _Nonnull create_Counter(int count){
    
    auto this_object = new iegen::example::Counter(count);
    return this_object;
}

int _prop_get_Counter_count(void* _Nonnull cself){
    auto c_to_cxx_cself = static_cast<iegen::example::Counter*>(cself);
    const auto& result = c_to_cxx_cself->count();
    
    return result;
}

void* _Nonnull _func_Counter_operator_add_(void* _Nonnull cself, void* _Nonnull counter, ErrorObj* _Nonnull err){
    
    auto& c_to_cxx_counter = *static_cast<iegen::example::Counter*>(counter);
  
    
    auto c_to_cxx_cself = static_cast<iegen::example::Counter*>(cself);
    try {
        const auto& result = c_to_cxx_cself->operator+(c_to_cxx_counter);
        
        auto cxx_to_c_result = const_cast<iegen::example::Counter*>( new iegen::example::Counter(result) );
        return cxx_to_c_result;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    void* result;
    return result;
}

int _func_Counter_compareTo(void* _Nonnull cself, void* _Nonnull counter, ErrorObj* _Nonnull err){
    
    auto& c_to_cxx_counter = *static_cast<iegen::example::Counter*>(counter);
  
    
    auto c_to_cxx_cself = static_cast<iegen::example::Counter*>(cself);
    try {
        const auto& result = c_to_cxx_cself->compareTo(c_to_cxx_counter);
        
        return result;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    int result;
    return result;
}

bool _func_Counter_operator_gt_(void* _Nonnull cself, void* _Nonnull counter, ErrorObj* _Nonnull err){
    
    auto& c_to_cxx_counter = *static_cast<iegen::example::Counter*>(counter);
  
    
    auto c_to_cxx_cself = static_cast<iegen::example::Counter*>(cself);
    try {
        const auto& result = c_to_cxx_cself->operator>(c_to_cxx_counter);
        
        return result;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    bool result;
    return result;
}

void* _Nonnull _func_Counter_operator_iadd_(void* _Nonnull cself, void* _Nonnull counter, ErrorObj* _Nonnull err){
    
    auto& c_to_cxx_counter = *static_cast<iegen::example::Counter*>(counter);
  
    
    auto c_to_cxx_cself = static_cast<iegen::example::Counter*>(cself);
    try {
        const auto& result = c_to_cxx_cself->operator+=(c_to_cxx_counter);
        
        auto cxx_to_c_result = const_cast<iegen::example::Counter*>( &result );
        return cxx_to_c_result;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    void* result;
    return result;
}
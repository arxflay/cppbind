/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 07/06/2021-14:53.
 * Please do not change it manually.
 */

#include <string.h>
#include <memory>
#include "swift/wrappers/nullables/c_NullableUtils.h"
#include "cxx/nullables/nullable_utils.hpp"


using namespace iegen::example::nullable;
void release_NumInt(void* _Nonnull cself) {
    delete static_cast<std::shared_ptr<iegen::example::nullable::NumberInt>*>(cself);
}

void* _Nonnull create_NumInt(int val_){
    
    auto this_object = new iegen::example::nullable::NumberInt(val_);
    return new std::shared_ptr<iegen::example::nullable::NumberInt>(this_object);
}
int _prop_get_NumInt_value(void* _Nonnull cself){
    auto c_to_cxx_cself = std::dynamic_pointer_cast<iegen::example::nullable::NumberInt>(
              *static_cast<std::shared_ptr<iegen::example::nullable::NumberInt>*>(cself)
              );
    auto result = c_to_cxx_cself->value;
    
    return result;
}

using namespace iegen::example::nullable;
void release_NumDouble(void* _Nonnull cself) {
    delete dynamic_cast<iegen::example::nullable::NumberDouble*>(static_cast<iegen::example::nullable::NumberDouble*>(cself));
}

void* _Nonnull create_NumDouble(double val_){
    
    auto this_object = new iegen::example::nullable::NumberDouble(val_);
    return static_cast<iegen::example::nullable::NumberDouble*>(this_object);
}
double _prop_get_NumDouble_value(void* _Nonnull cself){
    auto c_to_cxx_cself = dynamic_cast<iegen::example::nullable::NumberDouble*>(static_cast<iegen::example::nullable::NumberDouble*>(cself));
    auto result = c_to_cxx_cself->value;
    
    return result;
}

using namespace iegen::example::nullable;
void release_NullableUtils(void* _Nonnull cself) {
    delete static_cast<std::shared_ptr<iegen::example::nullable::Utils>*>(cself);
}

void* _Nonnull create_NullableUtils(void* _Nullable num){
    
    // we might need to avoid dynamic_cast if there is no multiple inheritance
    auto c_to_cxx_num = dynamic_cast<iegen::example::nullable::NumberDouble*>(static_cast<iegen::example::nullable::NumberDouble*>(num));
    auto this_object = new iegen::example::nullable::Utils(c_to_cxx_num);
    return new std::shared_ptr<iegen::example::nullable::Utils>(this_object);
}

void* _Nullable _func_NullableUtils_max(void* _Nullable first, void* _Nonnull second, ErrorObj* _Nonnull err){
    
    // we might need to avoid dynamic_cast if there is no multiple inheritance
    auto c_to_cxx_first = dynamic_cast<iegen::example::nullable::NumberDouble*>(static_cast<iegen::example::nullable::NumberDouble*>(first));
  
    
    // we might need to avoid dynamic_cast if there is no multiple inheritance
    auto c_to_cxx_second = dynamic_cast<iegen::example::nullable::NumberDouble*>(static_cast<iegen::example::nullable::NumberDouble*>(second));
  
    try {
      const auto& result = iegen::example::nullable::Utils::max(c_to_cxx_first, c_to_cxx_second);
      auto value_ptr_result = const_cast<iegen::example::nullable::NumberDouble*>(result);
    auto cxx_to_c_result = static_cast<iegen::example::nullable::NumberDouble*>(value_ptr_result);
      return cxx_to_c_result;
    }
    catch (const std::exception& e) {
        err->is_err = true;
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->is_err = true;
    }
    void* result;
    return result;
}

void* _Nullable _func_NullableUtils_max_1(void* _Nullable first, void* _Nullable second, ErrorObj* _Nonnull err){
    
    std::shared_ptr<iegen::example::nullable::NumberInt> c_to_cxx_first;
    auto c_to_cxx_first_baseptr = *reinterpret_cast<std::shared_ptr<iegen::example::nullable::NumberInt>*>(first);
    c_to_cxx_first = std::dynamic_pointer_cast<iegen::example::nullable::NumberInt>(c_to_cxx_first_baseptr);
  
    
    std::shared_ptr<iegen::example::nullable::NumberInt> c_to_cxx_second;
    auto c_to_cxx_second_baseptr = *reinterpret_cast<std::shared_ptr<iegen::example::nullable::NumberInt>*>(second);
    c_to_cxx_second = std::dynamic_pointer_cast<iegen::example::nullable::NumberInt>(c_to_cxx_second_baseptr);
  
    try {
      const auto& result = iegen::example::nullable::Utils::max(c_to_cxx_first, c_to_cxx_second);
      
    void* cxx_to_c_result;
    std::shared_ptr<iegen::example::nullable::NumberInt> cxx_to_c_result_baseptr = std::static_pointer_cast<iegen::example::nullable::NumberInt>(result);
    cxx_to_c_result = reinterpret_cast<void*>(new std::shared_ptr<iegen::example::nullable::NumberInt>(cxx_to_c_result_baseptr));
      return cxx_to_c_result;
    }
    catch (const std::exception& e) {
        err->is_err = true;
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->is_err = true;
    }
    void* result;
    return result;
}

void _func_NullableUtils_checkNonnullArg(void* _Nonnull number, ErrorObj* _Nonnull err){
    
    // we might need to avoid dynamic_cast if there is no multiple inheritance
    auto c_to_cxx_number = dynamic_cast<iegen::example::nullable::NumberDouble*>(static_cast<iegen::example::nullable::NumberDouble*>(number));
  
    try {
      iegen::example::nullable::Utils::checkNonnullArg(c_to_cxx_number);
    }
    catch (const std::exception& e) {
        err->is_err = true;
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->is_err = true;
    }
}

void* _Nonnull _func_NullableUtils_checkNonnullReturn(ErrorObj* _Nonnull err){
    try {
      const auto& result = iegen::example::nullable::Utils::checkNonnullReturn();
      auto value_ptr_result = const_cast<iegen::example::nullable::NumberDouble*>(result);
    auto cxx_to_c_result = static_cast<iegen::example::nullable::NumberDouble*>(value_ptr_result);
      return cxx_to_c_result;
    }
    catch (const std::exception& e) {
        err->is_err = true;
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->is_err = true;
    }
    void* result;
    return result;
}
void* _Nullable _prop_get_NullableUtils_nullable(void* _Nonnull cself){
    auto c_to_cxx_cself = std::dynamic_pointer_cast<iegen::example::nullable::Utils>(
              *static_cast<std::shared_ptr<iegen::example::nullable::Utils>*>(cself)
              );
    auto result = c_to_cxx_cself->nullable();
    auto value_ptr_result = const_cast<iegen::example::nullable::NumberDouble*>(result);
    auto cxx_to_c_result = static_cast<iegen::example::nullable::NumberDouble*>(value_ptr_result);
    return cxx_to_c_result;
}

void _prop_set_NullableUtils_setNullable(void* _Nonnull cself, void* _Nullable num){
    auto c_to_cxx_cself = std::dynamic_pointer_cast<iegen::example::nullable::Utils>(
              *static_cast<std::shared_ptr<iegen::example::nullable::Utils>*>(cself)
              );
    
    // we might need to avoid dynamic_cast if there is no multiple inheritance
    auto c_to_cxx_num = dynamic_cast<iegen::example::nullable::NumberDouble*>(static_cast<iegen::example::nullable::NumberDouble*>(num));
    c_to_cxx_cself->setNullable(c_to_cxx_num);
}

void* _Nonnull _prop_get_NullableUtils_nonNull(void* _Nonnull cself){
    auto c_to_cxx_cself = std::dynamic_pointer_cast<iegen::example::nullable::Utils>(
              *static_cast<std::shared_ptr<iegen::example::nullable::Utils>*>(cself)
              );
    auto result = c_to_cxx_cself->nonNull();
    auto value_ptr_result = const_cast<iegen::example::nullable::NumberDouble*>(result);
    auto cxx_to_c_result = static_cast<iegen::example::nullable::NumberDouble*>(value_ptr_result);
    return cxx_to_c_result;
}

void _prop_set_NullableUtils_setNonNull(void* _Nonnull cself, void* _Nonnull num){
    auto c_to_cxx_cself = std::dynamic_pointer_cast<iegen::example::nullable::Utils>(
              *static_cast<std::shared_ptr<iegen::example::nullable::Utils>*>(cself)
              );
    
    // we might need to avoid dynamic_cast if there is no multiple inheritance
    auto c_to_cxx_num = dynamic_cast<iegen::example::nullable::NumberDouble*>(static_cast<iegen::example::nullable::NumberDouble*>(num));
    c_to_cxx_cself->setNonNull(c_to_cxx_num);
}

void* _Nullable _prop_get_NullableUtils_numDouble(void* _Nonnull cself){
    auto c_to_cxx_cself = std::dynamic_pointer_cast<iegen::example::nullable::Utils>(
              *static_cast<std::shared_ptr<iegen::example::nullable::Utils>*>(cself)
              );
    auto result = c_to_cxx_cself->numDouble;
    auto value_ptr_result = const_cast<iegen::example::nullable::NumberDouble*>(result);
    auto cxx_to_c_result = static_cast<iegen::example::nullable::NumberDouble*>(value_ptr_result);
    return cxx_to_c_result;
}
void _prop_set_NullableUtils_numDouble(void* _Nonnull cself, void* _Nullable numDouble){
    auto c_to_cxx_cself = std::dynamic_pointer_cast<iegen::example::nullable::Utils>(
              *static_cast<std::shared_ptr<iegen::example::nullable::Utils>*>(cself)
              );
    
    // we might need to avoid dynamic_cast if there is no multiple inheritance
    auto c_to_cxx_numDouble = dynamic_cast<iegen::example::nullable::NumberDouble*>(static_cast<iegen::example::nullable::NumberDouble*>(numDouble));
    c_to_cxx_cself->numDouble = c_to_cxx_numDouble;
}

void* _Nonnull _prop_get_NullableUtils_numInt(void* _Nonnull cself){
    auto c_to_cxx_cself = std::dynamic_pointer_cast<iegen::example::nullable::Utils>(
              *static_cast<std::shared_ptr<iegen::example::nullable::Utils>*>(cself)
              );
    auto result = c_to_cxx_cself->numInt;
    
    void* cxx_to_c_result;
    std::shared_ptr<iegen::example::nullable::NumberInt> cxx_to_c_result_baseptr = std::static_pointer_cast<iegen::example::nullable::NumberInt>(result);
    cxx_to_c_result = reinterpret_cast<void*>(new std::shared_ptr<iegen::example::nullable::NumberInt>(cxx_to_c_result_baseptr));
    return cxx_to_c_result;
}
void _prop_set_NullableUtils_numInt(void* _Nonnull cself, void* _Nonnull numInt){
    auto c_to_cxx_cself = std::dynamic_pointer_cast<iegen::example::nullable::Utils>(
              *static_cast<std::shared_ptr<iegen::example::nullable::Utils>*>(cself)
              );
    
    std::shared_ptr<iegen::example::nullable::NumberInt> c_to_cxx_numInt;
    auto c_to_cxx_numInt_baseptr = *reinterpret_cast<std::shared_ptr<iegen::example::nullable::NumberInt>*>(numInt);
    c_to_cxx_numInt = std::dynamic_pointer_cast<iegen::example::nullable::NumberInt>(c_to_cxx_numInt_baseptr);
    c_to_cxx_cself->numInt = c_to_cxx_numInt;
}

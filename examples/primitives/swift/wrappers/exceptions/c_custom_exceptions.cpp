/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 11/25/2021-09:16.
 * Please do not change it manually.
 */

#include <string.h>
#include <memory>
#include "swift/wrappers/exceptions/c_custom_exceptions.h"
#include "cxx/exceptions/exceptions.hpp"

using namespace iegen::example;

void release_SimpleBaseException(void* _Nonnull cself) {
    delete static_cast<iegen::example::SimpleBaseException*>(cself);
}

void* _Nonnull create_SimpleBaseException(int err_num, ErrorObj* _Nonnull err){
    
    try {
        auto this_object = new iegen::example::SimpleBaseException(err_num);
        return this_object;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    void* result = nullptr;
    return result;
}

int _func_SimpleBaseException_errNum(void* _Nonnull cself, ErrorObj* _Nonnull err){
    
    auto c_to_cxx_cself = static_cast<iegen::example::SimpleBaseException*>(cself);
    try {
        const auto& result = c_to_cxx_cself->errNum();
        
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
void release_SimpleChildException(void* _Nonnull cself) {
    delete static_cast<iegen::example::SimpleBaseException*>(cself);
}

void* _Nonnull create_SimpleChildException(int err_num, ErrorObj* _Nonnull err){
    
    try {
        auto this_object = new iegen::example::SimpleChildException(err_num);
        return static_cast<iegen::example::SimpleBaseException*>(this_object);
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    void* result = nullptr;
    return result;
}

int _func_SimpleChildException_errNum(void* _Nonnull cself, ErrorObj* _Nonnull err){
    
    // we might need to avoid dynamic_cast if there is no multiple inheritance
    auto c_to_cxx_cself = dynamic_cast<iegen::example::SimpleChildException*>(static_cast<iegen::example::SimpleBaseException*>(cself));
    try {
        const auto& result = c_to_cxx_cself->errNum();
        
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
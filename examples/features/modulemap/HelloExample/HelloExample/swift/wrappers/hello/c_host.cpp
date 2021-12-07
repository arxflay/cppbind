/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 12/07/2021-12:46.
 * Please do not change it manually.
 */

#include <string.h>
#include <memory>
#include "swift/wrappers/hello/c_host.h"
#include "cxx/host.hpp"
#include "cxx/user.hpp"


void release_Host(void* _Nonnull cself) {
    delete static_cast<Host*>(cself);
}

void* _Nonnull create_Host(ErrorObj* _Nonnull err){
    try {
        auto this_object = new Host();
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

char* _Nonnull _func_Host_hello(void* _Nonnull cself, void* _Nonnull user, ErrorObj* _Nonnull err){
    
    auto& c_to_cxx_user = *static_cast<UserInfo*>(user);
  
    
    auto c_to_cxx_cself = static_cast<Host*>(cself);
    try {
        const auto& result = c_to_cxx_cself->hello(c_to_cxx_user);
        auto cxx_to_c_result = strdup(result.data());
        return cxx_to_c_result;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    char* result = nullptr;
    return result;
}

char* _Nonnull _func_Host_welcome(void* _Nonnull cself, void* _Nonnull user, ErrorObj* _Nonnull err){
    
    auto& c_to_cxx_user = *static_cast<UserInfo*>(user);
  
    
    auto c_to_cxx_cself = static_cast<Host*>(cself);
    try {
        const auto& result = c_to_cxx_cself->welcome(c_to_cxx_user);
        auto cxx_to_c_result = strdup(result.data());
        return cxx_to_c_result;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    char* result = nullptr;
    return result;
}
/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 07/30/2021-08:48.
 * Please do not change it manually.
 */

#include <string.h>
#include <memory>
#include "swift/wrappers/exceptions/c_custom_std_exceptions.h"
#include "cxx/exceptions/exceptions.hpp"

using namespace iegen::example;

void release_SystemError(void* _Nonnull cself) {
    delete dynamic_cast<iegen::example::SystemError*>(static_cast<std::exception*>(cself));
}

void* _Nonnull create_SystemError(char* _Nonnull message){
    auto c_to_cxx_message = std::string(message);
    free(message);
    auto this_object = new iegen::example::SystemError(c_to_cxx_message);
    return static_cast<std::exception*>(this_object);
}

const char * _Nonnull _func_SystemError_what(void* _Nonnull cself, ErrorObj* _Nonnull err){
    auto c_to_cxx_cself = dynamic_cast<iegen::example::SystemError*>(static_cast<std::exception*>(cself));
    try {
      const auto& result = c_to_cxx_cself->what();
      
      return result;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    const char * result;
    return result;
}
void release_FileError(void* _Nonnull cself) {
    delete dynamic_cast<iegen::example::FileError*>(static_cast<std::exception*>(cself));
}

void* _Nonnull create_FileError(char* _Nonnull message){
    auto c_to_cxx_message = std::string(message);
    free(message);
    auto this_object = new iegen::example::FileError(c_to_cxx_message);
    return static_cast<std::exception*>(this_object);
}

const char * _Nonnull _func_FileError_what(void* _Nonnull cself, ErrorObj* _Nonnull err){
    auto c_to_cxx_cself = dynamic_cast<iegen::example::FileError*>(static_cast<std::exception*>(cself));
    try {
      const auto& result = c_to_cxx_cself->what();
      
      return result;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    const char * result;
    return result;
}
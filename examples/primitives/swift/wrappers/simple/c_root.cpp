/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 09/01/2021-08:16.
 * Please do not change it manually.
 */

#include <string.h>
#include <memory>
#include "swift/wrappers/simple/c_root.h"
#include "cxx/simple/root.hpp"

using namespace iegen::example;

void release_Root(void* _Nonnull cself) {
    delete dynamic_cast<iegen::example::Root*>(static_cast<iegen::example::Root*>(cself));
}

void* _Nonnull create_Root(char* _Nonnull _path){
    auto c_to_cxx__path = std::string(_path);
    free(_path);
    auto this_object = new iegen::example::Root(c_to_cxx__path);
    return static_cast<iegen::example::Root*>(this_object);
}

void _func_Root_setPath(void* _Nonnull cself, char* _Nonnull _path, ErrorObj* _Nonnull err){
    auto c_to_cxx__path = std::string(_path);
    free(_path);
  
    
    // we might need to avoid dynamic_cast if there is no multiple inheritance
    auto c_to_cxx_cself = dynamic_cast<iegen::example::Root*>(static_cast<iegen::example::Root*>(cself));
    try {
        c_to_cxx_cself->setPath(c_to_cxx__path);
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
}
char* _Nonnull _prop_get_Root_path(void* _Nonnull cself){
    // we might need to avoid dynamic_cast if there is no multiple inheritance
    auto c_to_cxx_cself = dynamic_cast<iegen::example::Root*>(static_cast<iegen::example::Root*>(cself));
    auto result = c_to_cxx_cself->path;
    auto cxx_to_c_result = strdup(result.c_str()); 
    return cxx_to_c_result;
}
void _prop_set_Root_path(void* _Nonnull cself, char* _Nonnull path){
    
    // we might need to avoid dynamic_cast if there is no multiple inheritance
    auto c_to_cxx_cself = dynamic_cast<iegen::example::Root*>(static_cast<iegen::example::Root*>(cself));
    auto c_to_cxx_path = std::string(path);
    free(path);
    c_to_cxx_cself->path = c_to_cxx_path;
}

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
#include "swift/wrappers/simple/c_project.h"
#include "cxx/simple/project.hpp"
#include "cxx/simple/task.hpp"

using namespace iegen::example;

void release_Project(void* _Nonnull cself) {
    delete dynamic_cast<iegen::example::Project*>(static_cast<iegen::example::Project*>(cself));
}

void* _Nonnull create_Project(char* _Nonnull title){
    auto c_to_cxx_title = std::string(title);
    free(title);
    auto this_object = new iegen::example::Project(c_to_cxx_title);
    return static_cast<iegen::example::Project*>(this_object);
}

char* _Nonnull _prop_get_Project_title(void* _Nonnull cself){
    // we might need to avoid dynamic_cast if there is no multiple inheritance
    auto c_to_cxx_cself = dynamic_cast<iegen::example::Project*>(static_cast<iegen::example::Project*>(cself));
    auto result = c_to_cxx_cself->title();
    auto cxx_to_c_result = strdup(result.c_str()); 
    return cxx_to_c_result;
}

void _func_Project_addTask(void* _Nonnull cself, void* _Nonnull task, ErrorObj* _Nonnull err){
    
    // we might need to avoid dynamic_cast if there is no multiple inheritance
    auto c_to_cxx_task = dynamic_cast<iegen::example::Task*>(static_cast<iegen::example::Task*>(task));
  
    
    // we might need to avoid dynamic_cast if there is no multiple inheritance
    auto c_to_cxx_cself = dynamic_cast<iegen::example::Project*>(static_cast<iegen::example::Project*>(cself));
    try {
        c_to_cxx_cself->addTask(c_to_cxx_task);
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
}

CDataArray _func_Project_tasks(void* _Nonnull cself, ErrorObj* _Nonnull err){
    
    // we might need to avoid dynamic_cast if there is no multiple inheritance
    auto c_to_cxx_cself = dynamic_cast<iegen::example::Project*>(static_cast<iegen::example::Project*>(cself));
    try {
        const auto& result = c_to_cxx_cself->tasks();
        auto _data_cxx_to_c_result = new void* [result.size()];
        CDataArray cxx_to_c_result = { _data_cxx_to_c_result, (long long)result.size() };
        for (int _i_result = 0; _i_result < result.size(); ++_i_result) {
          auto& value_result = result[_i_result];
          auto value_ptr_value_result = const_cast<iegen::example::Task*>(value_result);
            auto cxx_to_c_value_result = static_cast<iegen::example::Task*>(value_ptr_value_result);
          _data_cxx_to_c_result[_i_result] = cxx_to_c_value_result;
        }
        return cxx_to_c_result;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    CDataArray result;
    return result;
}
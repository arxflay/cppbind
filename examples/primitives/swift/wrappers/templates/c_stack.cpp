/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 07/06/2021-10:59.
 * Please do not change it manually.
 */

#include <string.h>
#include <memory>
#include "swift/wrappers/templates/c_stack.h"
#include "cxx/templates/stack.hpp"
#include "cxx/simple/project.hpp"
#include "cxx/simple/task.hpp"


using namespace iegen::example;
void release_StackProject(void* _Nullable cself) {
    delete dynamic_cast<iegen::example::Stack<iegen::example::Project>*>(static_cast<iegen::example::Stack<iegen::example::Project>*>(cself));
}

void* _Nonnull create_StackProject(){
    auto this_object = new iegen::example::Stack<iegen::example::Project>();
    return static_cast<iegen::example::Stack<iegen::example::Project>*>(this_object);
}

void* _Nonnull create_StackProject_1(void* _Nonnull st){
    
    // we might need to avoid dynamic_cast if there is no multiple inheritance
    auto& c_to_cxx_st = *dynamic_cast<iegen::example::Project*>(static_cast<iegen::example::Project*>(st));
    auto this_object = new iegen::example::Stack<iegen::example::Project>(c_to_cxx_st);
    return static_cast<iegen::example::Stack<iegen::example::Project>*>(this_object);
}

void  _func_StackProject_push(void* _Nonnull cself,void* _Nonnull item, ErrorObj* _Nonnull err){
    
    // we might need to avoid dynamic_cast if there is no multiple inheritance
    auto c_to_cxx_item = dynamic_cast<iegen::example::Project*>(static_cast<iegen::example::Project*>(item));
  
    auto c_to_cxx_cself = dynamic_cast<iegen::example::Stack<iegen::example::Project>*>(static_cast<iegen::example::Stack<iegen::example::Project>*>(cself));
    try {
      c_to_cxx_cself->push(c_to_cxx_item);
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

void  _func_StackProject_pop(void* _Nonnull cself, ErrorObj* _Nonnull err){
    auto c_to_cxx_cself = dynamic_cast<iegen::example::Stack<iegen::example::Project>*>(static_cast<iegen::example::Stack<iegen::example::Project>*>(cself));
    try {
      c_to_cxx_cself->pop();
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

void* _Nonnull _func_StackProject_top(void* _Nonnull cself, ErrorObj* _Nonnull err){
    auto c_to_cxx_cself = dynamic_cast<iegen::example::Stack<iegen::example::Project>*>(static_cast<iegen::example::Stack<iegen::example::Project>*>(cself));
    try {
      const auto& result = c_to_cxx_cself->top();
      auto value_ptr_result = const_cast<iegen::example::Project*>(result);
    auto cxx_to_c_result = static_cast<iegen::example::Project*>(value_ptr_result);
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

bool  _func_StackProject_empty(void* _Nonnull cself, ErrorObj* _Nonnull err){
    auto c_to_cxx_cself = dynamic_cast<iegen::example::Stack<iegen::example::Project>*>(static_cast<iegen::example::Stack<iegen::example::Project>*>(cself));
    try {
      const auto& result = c_to_cxx_cself->empty();
      
      return result;
    }
    catch (const std::exception& e) {
        err->is_err = true;
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->is_err = true;
    }
    bool result;
    return result;
}

using namespace iegen::example;
void release_StackTask(void* _Nullable cself) {
    delete dynamic_cast<iegen::example::Stack<iegen::example::Task>*>(static_cast<iegen::example::Stack<iegen::example::Task>*>(cself));
}

void* _Nonnull create_StackTask(){
    auto this_object = new iegen::example::Stack<iegen::example::Task>();
    return static_cast<iegen::example::Stack<iegen::example::Task>*>(this_object);
}

void* _Nonnull create_StackTask_1(void* _Nonnull st){
    
    // we might need to avoid dynamic_cast if there is no multiple inheritance
    auto& c_to_cxx_st = *dynamic_cast<iegen::example::Task*>(static_cast<iegen::example::Task*>(st));
    auto this_object = new iegen::example::Stack<iegen::example::Task>(c_to_cxx_st);
    return static_cast<iegen::example::Stack<iegen::example::Task>*>(this_object);
}

void  _func_StackTask_push(void* _Nonnull cself,void* _Nonnull item, ErrorObj* _Nonnull err){
    
    // we might need to avoid dynamic_cast if there is no multiple inheritance
    auto c_to_cxx_item = dynamic_cast<iegen::example::Task*>(static_cast<iegen::example::Task*>(item));
  
    auto c_to_cxx_cself = dynamic_cast<iegen::example::Stack<iegen::example::Task>*>(static_cast<iegen::example::Stack<iegen::example::Task>*>(cself));
    try {
      c_to_cxx_cself->push(c_to_cxx_item);
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

void  _func_StackTask_pop(void* _Nonnull cself, ErrorObj* _Nonnull err){
    auto c_to_cxx_cself = dynamic_cast<iegen::example::Stack<iegen::example::Task>*>(static_cast<iegen::example::Stack<iegen::example::Task>*>(cself));
    try {
      c_to_cxx_cself->pop();
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

void* _Nonnull _func_StackTask_top(void* _Nonnull cself, ErrorObj* _Nonnull err){
    auto c_to_cxx_cself = dynamic_cast<iegen::example::Stack<iegen::example::Task>*>(static_cast<iegen::example::Stack<iegen::example::Task>*>(cself));
    try {
      const auto& result = c_to_cxx_cself->top();
      auto value_ptr_result = const_cast<iegen::example::Task*>(result);
    auto cxx_to_c_result = static_cast<iegen::example::Task*>(value_ptr_result);
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

bool  _func_StackTask_empty(void* _Nonnull cself, ErrorObj* _Nonnull err){
    auto c_to_cxx_cself = dynamic_cast<iegen::example::Stack<iegen::example::Task>*>(static_cast<iegen::example::Stack<iegen::example::Task>*>(cself));
    try {
      const auto& result = c_to_cxx_cself->empty();
      
      return result;
    }
    catch (const std::exception& e) {
        err->is_err = true;
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->is_err = true;
    }
    bool result;
    return result;
}
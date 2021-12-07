/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 12/07/2021-15:55.
 * Please do not change it manually.
 */

#include <string.h>
#include <cxxabi.h>
#include <memory>
#include "swift/wrappers/templates/c_stack.h"
#include "cxx/templates/stack.hpp"
#include "cxx/templates/container.hpp"
#include "cxx/simple/project.hpp"
#include "cxx/simple/task.hpp"
#include "cxx/getters/number.hpp"

using namespace iegen::example;

void release_StackPrj(CObject cself, bool owner) {
    delete cself.type;
    if (owner) {
        delete static_cast<iegen::example::Container*>(cself.ptr);
    }
}

CObject create_StackPrj(ErrorObj* _Nonnull err){
    try {
        auto this_object = new iegen::example::Stack<iegen::example::Project>();
        return {strdup("iegen::example::Stack<iegen::example::Project>"), static_cast<iegen::example::Container*>(this_object)};
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    CObject result{};
    return result;
}

CObject create_StackPrj_1(CObject st, ErrorObj* _Nonnull err){
    
    auto& c_to_cxx_st = *static_cast<iegen::example::Project*>(st.ptr);
    try {
        auto this_object = new iegen::example::Stack<iegen::example::Project>(c_to_cxx_st);
        return {strdup("iegen::example::Stack<iegen::example::Project>"), static_cast<iegen::example::Container*>(this_object)};
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    CObject result{};
    return result;
}

void _func_StackPrj_push(CObject cself, CObject item, ErrorObj* _Nonnull err){
    
    auto c_to_cxx_item = static_cast<iegen::example::Project*>(item.ptr);
  
    
    // we might need to avoid dynamic_cast if there is no multiple inheritance
    auto c_to_cxx_cself = dynamic_cast<iegen::example::Stack<iegen::example::Project>*>(static_cast<iegen::example::Container*>(cself.ptr));
    try {
        c_to_cxx_cself->push(c_to_cxx_item);
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
}

void _func_StackPrj_pop(CObject cself, ErrorObj* _Nonnull err){
    
    // we might need to avoid dynamic_cast if there is no multiple inheritance
    auto c_to_cxx_cself = dynamic_cast<iegen::example::Stack<iegen::example::Project>*>(static_cast<iegen::example::Container*>(cself.ptr));
    try {
        c_to_cxx_cself->pop();
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
}

CObject _func_StackPrj_top(CObject cself, ErrorObj* _Nonnull err){
    
    // we might need to avoid dynamic_cast if there is no multiple inheritance
    auto c_to_cxx_cself = dynamic_cast<iegen::example::Stack<iegen::example::Project>*>(static_cast<iegen::example::Container*>(cself.ptr));
    try {
        const auto& result = c_to_cxx_cself->top();
        
        char* type_result = strdup("iegen::example::Project");
        CObject cxx_to_c_result = {type_result, const_cast<iegen::example::Project*>(result)};
        return cxx_to_c_result;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    CObject result{};
    return result;
}

bool _func_StackPrj_empty(CObject cself, ErrorObj* _Nonnull err){
    
    // we might need to avoid dynamic_cast if there is no multiple inheritance
    auto c_to_cxx_cself = dynamic_cast<iegen::example::Stack<iegen::example::Project>*>(static_cast<iegen::example::Container*>(cself.ptr));
    try {
        const auto& result = c_to_cxx_cself->empty();
        
        return result;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    bool result{};
    return result;
}
void release_StackTask(CObject cself, bool owner) {
    delete cself.type;
    if (owner) {
        delete static_cast<iegen::example::Container*>(cself.ptr);
    }
}

CObject create_StackTask(ErrorObj* _Nonnull err){
    try {
        auto this_object = new iegen::example::Stack<iegen::example::Task>();
        return {strdup("iegen::example::Stack<iegen::example::Task>"), static_cast<iegen::example::Container*>(this_object)};
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    CObject result{};
    return result;
}

CObject create_StackTask_1(CObject st, ErrorObj* _Nonnull err){
    
    auto& c_to_cxx_st = *static_cast<iegen::example::Task*>(st.ptr);
    try {
        auto this_object = new iegen::example::Stack<iegen::example::Task>(c_to_cxx_st);
        return {strdup("iegen::example::Stack<iegen::example::Task>"), static_cast<iegen::example::Container*>(this_object)};
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    CObject result{};
    return result;
}

void _func_StackTask_push(CObject cself, CObject item, ErrorObj* _Nonnull err){
    
    auto c_to_cxx_item = static_cast<iegen::example::Task*>(item.ptr);
  
    
    // we might need to avoid dynamic_cast if there is no multiple inheritance
    auto c_to_cxx_cself = dynamic_cast<iegen::example::Stack<iegen::example::Task>*>(static_cast<iegen::example::Container*>(cself.ptr));
    try {
        c_to_cxx_cself->push(c_to_cxx_item);
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
}

void _func_StackTask_pop(CObject cself, ErrorObj* _Nonnull err){
    
    // we might need to avoid dynamic_cast if there is no multiple inheritance
    auto c_to_cxx_cself = dynamic_cast<iegen::example::Stack<iegen::example::Task>*>(static_cast<iegen::example::Container*>(cself.ptr));
    try {
        c_to_cxx_cself->pop();
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
}

CObject _func_StackTask_top(CObject cself, ErrorObj* _Nonnull err){
    
    // we might need to avoid dynamic_cast if there is no multiple inheritance
    auto c_to_cxx_cself = dynamic_cast<iegen::example::Stack<iegen::example::Task>*>(static_cast<iegen::example::Container*>(cself.ptr));
    try {
        const auto& result = c_to_cxx_cself->top();
        
        char* type_result = strdup("iegen::example::Task");
        CObject cxx_to_c_result = {type_result, const_cast<iegen::example::Task*>(result)};
        return cxx_to_c_result;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    CObject result{};
    return result;
}

bool _func_StackTask_empty(CObject cself, ErrorObj* _Nonnull err){
    
    // we might need to avoid dynamic_cast if there is no multiple inheritance
    auto c_to_cxx_cself = dynamic_cast<iegen::example::Stack<iegen::example::Task>*>(static_cast<iegen::example::Container*>(cself.ptr));
    try {
        const auto& result = c_to_cxx_cself->empty();
        
        return result;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    bool result{};
    return result;
}
void release_StackNumInt(CObject cself, bool owner) {
    delete cself.type;
    if (owner) {
        delete static_cast<iegen::example::Container*>(cself.ptr);
    }
}

CObject create_StackNumInt(ErrorObj* _Nonnull err){
    try {
        auto this_object = new iegen::example::Stack<iegen::example::Number<int>>();
        return {strdup("iegen::example::Stack<iegen::example::Number<int>>"), static_cast<iegen::example::Container*>(this_object)};
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    CObject result{};
    return result;
}

CObject create_StackNumInt_1(CObject st, ErrorObj* _Nonnull err){
    
    auto& c_to_cxx_st = *static_cast<iegen::example::Number<int>*>(st.ptr);
    try {
        auto this_object = new iegen::example::Stack<iegen::example::Number<int>>(c_to_cxx_st);
        return {strdup("iegen::example::Stack<iegen::example::Number<int>>"), static_cast<iegen::example::Container*>(this_object)};
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    CObject result{};
    return result;
}

void _func_StackNumInt_push(CObject cself, CObject item, ErrorObj* _Nonnull err){
    
    auto c_to_cxx_item = static_cast<iegen::example::Number<int>*>(item.ptr);
  
    
    // we might need to avoid dynamic_cast if there is no multiple inheritance
    auto c_to_cxx_cself = dynamic_cast<iegen::example::Stack<iegen::example::Number<int>>*>(static_cast<iegen::example::Container*>(cself.ptr));
    try {
        c_to_cxx_cself->push(c_to_cxx_item);
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
}

void _func_StackNumInt_pop(CObject cself, ErrorObj* _Nonnull err){
    
    // we might need to avoid dynamic_cast if there is no multiple inheritance
    auto c_to_cxx_cself = dynamic_cast<iegen::example::Stack<iegen::example::Number<int>>*>(static_cast<iegen::example::Container*>(cself.ptr));
    try {
        c_to_cxx_cself->pop();
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
}

CObject _func_StackNumInt_top(CObject cself, ErrorObj* _Nonnull err){
    
    // we might need to avoid dynamic_cast if there is no multiple inheritance
    auto c_to_cxx_cself = dynamic_cast<iegen::example::Stack<iegen::example::Number<int>>*>(static_cast<iegen::example::Container*>(cself.ptr));
    try {
        const auto& result = c_to_cxx_cself->top();
        
        char* type_result = strdup("iegen::example::Number<int>");
        CObject cxx_to_c_result = {type_result, const_cast<iegen::example::Number<int>*>(result)};
        return cxx_to_c_result;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    CObject result{};
    return result;
}

bool _func_StackNumInt_empty(CObject cself, ErrorObj* _Nonnull err){
    
    // we might need to avoid dynamic_cast if there is no multiple inheritance
    auto c_to_cxx_cself = dynamic_cast<iegen::example::Stack<iegen::example::Number<int>>*>(static_cast<iegen::example::Container*>(cself.ptr));
    try {
        const auto& result = c_to_cxx_cself->empty();
        
        return result;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    bool result{};
    return result;
}
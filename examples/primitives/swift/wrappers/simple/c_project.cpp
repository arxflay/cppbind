/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 05/12/2022-10:26.
 * Please do not change it manually.
 */

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cxxabi.h>
#include <memory>
#include <type_traits>
#include "swift/wrappers/simple/c_project.h"
#include "cxx/simple/project.hpp"
#include "cxx/simple/task.hpp"

extern const char* CPPBIND_STD_STDEXCEPTION;
extern const char* CPPBIND_CPPBIND_EXAMPLE_TASK;

const char* CPPBIND_CPPBIND_EXAMPLE_PROJECT = "cppbind::example::Project";

using namespace cppbind::example;

void release_CppbindExample_Project(CppBindCObject cself, bool owner) {
    if (owner) {
        delete static_cast<cppbind::example::Project*>(cself.ptr);
    }
    free(cself.type);
}

CppBindCObject create_CppbindExample_Project(char* _Nonnull title, CppBindCObject* _Nonnull cppbind_err) {
    auto ctocxxtitle = std::string(title);
    free(title);
    try {
        auto this_object = new cppbind::example::Project(ctocxxtitle);
        return {strdup(CPPBIND_CPPBIND_EXAMPLE_PROJECT), this_object};
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    CppBindCObject result {};
    return result;
}

char* _Nonnull _prop_get_CppbindExample_Project_title(CppBindCObject cself, CppBindCObject* _Nonnull cppbind_err) {
    auto ctocxxcself = static_cast<cppbind::example::Project*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->title();
        auto cxxtocresult = strdup(result.data());
        return cxxtocresult;
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    char* result {};
    return result;
}

void _func_CppbindExample_Project_addTask(CppBindCObject cself, CppBindCObject task, CppBindCObject* _Nonnull cppbind_err) {
    
    auto ctocxxtask = static_cast<cppbind::example::Task*>(task.ptr);
  
    auto ctocxxcself = static_cast<cppbind::example::Project*>(cself.ptr);
    try {
        ctocxxcself->addTask(ctocxxtask);
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
}

CppBindCDataArray _func_CppbindExample_Project_tasks(CppBindCObject cself, CppBindCObject* _Nonnull cppbind_err) {
    auto ctocxxcself = static_cast<cppbind::example::Project*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->tasks();
        auto _data_cxxtocresult = new CppBindCObject [result.size()];
        CppBindCDataArray cxxtocresult = { _data_cxxtocresult, static_cast<long long>(result.size()) };
        for (int _i_result = 0; _i_result < result.size(); ++_i_result) {
            auto& value_result = result[_i_result];
            
            char* type_value_result = strdup(CPPBIND_CPPBIND_EXAMPLE_TASK);
            auto value_ptr_value_result = const_cast<cppbind::example::Task*>(value_result);
            CppBindCObject cxxtocvalue_result = {type_value_result, value_ptr_value_result};
            _data_cxxtocresult[_i_result] = cxxtocvalue_result;
        }
        return cxxtocresult;
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    CppBindCDataArray result {};
    return result;
}

bool _func_CppbindExample_Project_equals(CppBindCObject cself, CppBindCObject p, CppBindCObject* _Nonnull cppbind_err) {
    
    auto ctocxxp = static_cast<cppbind::example::Project*>(p.ptr);
  
    auto ctocxxcself = static_cast<cppbind::example::Project*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->equals(ctocxxp);
        
        return result;
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    bool result {};
    return result;
}


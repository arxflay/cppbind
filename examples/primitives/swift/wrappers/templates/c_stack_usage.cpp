/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 01/24/2022-11:53.
 * Please do not change it manually.
 */

#include <iostream>
#include <string.h>
#include <cxxabi.h>
#include <memory>
#include "swift/wrappers/templates/c_stack_usage.h"
#include "cxx/templates/stack_usage.hpp"
#include "cxx/templates/stack.hpp"
#include "cxx/simple/project.hpp"

using namespace iegen::example;

void release_StackUsage(CObject cself, bool owner) {
    delete cself.type;
    if (owner) {
        delete static_cast<iegen::example::StackUsage*>(cself.ptr);
    }
}

CObject create_StackUsage(ErrorObj* _Nonnull err){
    try {
        auto this_object = new iegen::example::StackUsage();
        return {strdup("iegen::example::StackUsage"), this_object};
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

CObject _func_StackUsage_firstItemOfSpecializedStack(CObject cself, CObject p, ErrorObj* _Nonnull err){
    
    iegen::example::Stack<Project>* ctocxxp_ptr = nullptr;
    if (p.ptr) {
        if (strcmp(p.type, "iegen::example::Stack<iegen::example::Project>") == 0)
            ctocxxp_ptr = static_cast<iegen::example::Stack<Project>*>(p.ptr);
        else {
            std::cerr << "Unexpected object type: " << p.type << std::endl;
            exit(1);
        }
    }
    auto ctocxxp = ctocxxp_ptr;
  
    
    iegen::example::StackUsage* ctocxxcself_ptr = nullptr;
    if (cself.ptr) {
        if (strcmp(cself.type, "iegen::example::StackUsage") == 0)
            ctocxxcself_ptr = static_cast<iegen::example::StackUsage*>(cself.ptr);
        else {
            std::cerr << "Unexpected object type: " << cself.type << std::endl;
            exit(1);
        }
    }
    auto ctocxxcself = ctocxxcself_ptr;
    try {
        const auto& result = ctocxxcself->firstItemOfSpecializedStack(ctocxxp);
        
        char* type_result = strdup("iegen::example::Project");
        auto value_ptr_result = const_cast<iegen::example::Project*>(result);
        CObject cxxtocresult = {type_result, value_ptr_result};
        return cxxtocresult;
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

CObject _func_StackUsage_firstItemOfTemplateStackProject(CObject cself, CObject arg0, ErrorObj* _Nonnull err){
    
    iegen::example::Stack<iegen::example::Project>* ctocxxarg0_ptr = nullptr;
    if (arg0.ptr) {
        if (strcmp(arg0.type, "iegen::example::Stack<iegen::example::Project>") == 0)
            ctocxxarg0_ptr = static_cast<iegen::example::Stack<iegen::example::Project>*>(arg0.ptr);
        else {
            std::cerr << "Unexpected object type: " << arg0.type << std::endl;
            exit(1);
        }
    }
    auto ctocxxarg0 = ctocxxarg0_ptr;
  
    
    iegen::example::StackUsage* ctocxxcself_ptr = nullptr;
    if (cself.ptr) {
        if (strcmp(cself.type, "iegen::example::StackUsage") == 0)
            ctocxxcself_ptr = static_cast<iegen::example::StackUsage*>(cself.ptr);
        else {
            std::cerr << "Unexpected object type: " << cself.type << std::endl;
            exit(1);
        }
    }
    auto ctocxxcself = ctocxxcself_ptr;
    try {
        const auto& result = ctocxxcself->firstItemOfTemplateStack<iegen::example::Project>(ctocxxarg0);
        
        char* type_result = strdup("iegen::example::Project");
        auto value_ptr_result = const_cast<iegen::example::Project*>(result);
        CObject cxxtocresult = {type_result, value_ptr_result};
        return cxxtocresult;
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

CObject _func_StackUsage_firstItemOfSpecializedStackWithTypedefArg(CObject cself, CObject p, ErrorObj* _Nonnull err){
    
    StackProjectType* ctocxxp_ptr = nullptr;
    if (p.ptr) {
        if (strcmp(p.type, "iegen::example::Stack<iegen::example::Project>") == 0)
            ctocxxp_ptr = static_cast<StackProjectType*>(p.ptr);
        else {
            std::cerr << "Unexpected object type: " << p.type << std::endl;
            exit(1);
        }
    }
    auto ctocxxp = ctocxxp_ptr;
  
    
    iegen::example::StackUsage* ctocxxcself_ptr = nullptr;
    if (cself.ptr) {
        if (strcmp(cself.type, "iegen::example::StackUsage") == 0)
            ctocxxcself_ptr = static_cast<iegen::example::StackUsage*>(cself.ptr);
        else {
            std::cerr << "Unexpected object type: " << cself.type << std::endl;
            exit(1);
        }
    }
    auto ctocxxcself = ctocxxcself_ptr;
    try {
        const auto& result = ctocxxcself->firstItemOfSpecializedStackWithTypedefArg(ctocxxp);
        
        char* type_result = strdup("iegen::example::Project");
        auto value_ptr_result = const_cast<iegen::example::Project*>(result);
        CObject cxxtocresult = {type_result, value_ptr_result};
        return cxxtocresult;
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

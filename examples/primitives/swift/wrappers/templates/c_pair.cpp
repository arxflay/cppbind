/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 02/22/2022-13:54.
 * Please do not change it manually.
 */

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cxxabi.h>
#include <memory>
#include <type_traits>
#include "swift/wrappers/templates/c_pair.h"
#include "cxx/templates/pair.hpp"
#include "cxx/overloads/employee.hpp"
#include "cxx/forward_decl/student.hpp"

using namespace iegen::example;

void release_PairEmployee(IEGenCObject cself, bool owner) {
    free(cself.type);
    if (owner) {
        delete static_cast<iegen::example::Pair<std::string, std::shared_ptr<iegen::example::Employee>>*>(cself.ptr);
    }
}

IEGenCObject create_PairEmployee(char* _Nonnull first, IEGenCObject second, IEGenCObject* _Nonnull err){
    auto ctocxxfirst = std::string(first);
    free(first);
    
    std::shared_ptr<iegen::example::Employee> ctocxxsecond;
    ctocxxsecond = *static_cast<std::shared_ptr<iegen::example::Employee>*>(second.ptr);
    try {
        auto this_object = new iegen::example::Pair<std::string, std::shared_ptr<iegen::example::Employee>>(ctocxxfirst, ctocxxsecond);
        return {strdup("iegen::example::Pair<std::string, std::shared_ptr<iegen::example::Employee>>"), this_object};
    }
    catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    }
    catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}
char* _Nonnull _prop_get_PairEmployee_first(IEGenCObject cself, IEGenCObject* _Nonnull err){
    auto ctocxxcself = static_cast<iegen::example::Pair<std::string, std::shared_ptr<iegen::example::Employee>>*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->first();
        auto cxxtocresult = strdup(result.data());
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    }
    catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    char* result {};
    return result;
}
IEGenCObject _prop_get_PairEmployee_second(IEGenCObject cself, IEGenCObject* _Nonnull err){
    auto ctocxxcself = static_cast<iegen::example::Pair<std::string, std::shared_ptr<iegen::example::Employee>>*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->second();
        
        char* type_result = strdup("iegen::example::Employee");
        void* cxxtocresult_ptr;
        cxxtocresult_ptr = new std::shared_ptr<iegen::example::Employee>(result);
        IEGenCObject cxxtocresult = {type_result, cxxtocresult_ptr};
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    }
    catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}
void release_PairStudent(IEGenCObject cself, bool owner) {
    free(cself.type);
    if (owner) {
        delete static_cast<iegen::example::Pair<std::string, std::shared_ptr<iegen::example::Student>>*>(cself.ptr);
    }
}

IEGenCObject create_PairStudent(char* _Nonnull first, IEGenCObject second, IEGenCObject* _Nonnull err){
    auto ctocxxfirst = std::string(first);
    free(first);
    
    std::shared_ptr<iegen::example::Student> ctocxxsecond;
    ctocxxsecond = *static_cast<std::shared_ptr<iegen::example::Student>*>(second.ptr);
    try {
        auto this_object = new iegen::example::Pair<std::string, std::shared_ptr<iegen::example::Student>>(ctocxxfirst, ctocxxsecond);
        return {strdup("iegen::example::Pair<std::string, std::shared_ptr<iegen::example::Student>>"), this_object};
    }
    catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    }
    catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}
char* _Nonnull _prop_get_PairStudent_first(IEGenCObject cself, IEGenCObject* _Nonnull err){
    auto ctocxxcself = static_cast<iegen::example::Pair<std::string, std::shared_ptr<iegen::example::Student>>*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->first();
        auto cxxtocresult = strdup(result.data());
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    }
    catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    char* result {};
    return result;
}
IEGenCObject _prop_get_PairStudent_second(IEGenCObject cself, IEGenCObject* _Nonnull err){
    auto ctocxxcself = static_cast<iegen::example::Pair<std::string, std::shared_ptr<iegen::example::Student>>*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->second();
        
        char* type_result = strdup("iegen::example::Student");
        void* cxxtocresult_ptr;
        cxxtocresult_ptr = new std::shared_ptr<iegen::example::Student>(result);
        IEGenCObject cxxtocresult = {type_result, cxxtocresult_ptr};
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    }
    catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}

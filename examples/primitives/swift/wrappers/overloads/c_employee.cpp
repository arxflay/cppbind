/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 02/22/2022-13:23.
 * Please do not change it manually.
 */

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cxxabi.h>
#include <memory>
#include <type_traits>
#include "swift/wrappers/overloads/c_employee.h"
#include "cxx/overloads/employee.hpp"

using namespace iegen::example;

void release_Employee(IEGenCObject cself, bool owner) {
    free(cself.type);
    if (owner) {
        delete static_cast<std::shared_ptr<iegen::example::Employee>*>(cself.ptr);
    }
}

IEGenCObject create_Employee(char* _Nonnull name, IEGenCObject* _Nonnull err){
    auto ctocxxname = std::string(name);
    free(name);
    try {
        auto this_object = new iegen::example::Employee(ctocxxname);
        return {strdup("iegen::example::Employee"), new std::shared_ptr<iegen::example::Employee>(this_object)};
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

IEGenCObject create_Employee_1(int age, char* _Nonnull email, IEGenCObject* _Nonnull err){
    
    auto ctocxxemail = std::string(email);
    free(email);
    try {
        auto this_object = new iegen::example::Employee(age, ctocxxemail);
        return {strdup("iegen::example::Employee"), new std::shared_ptr<iegen::example::Employee>(this_object)};
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

void _func_Employee_setData(IEGenCObject cself, char* _Nonnull name, int age, char* _Nonnull email, IEGenCObject* _Nonnull err){
    auto ctocxxname = std::string(name);
    free(name);
  
    
  
    auto ctocxxemail = std::string(email);
    free(email);
  
    
    std::shared_ptr<iegen::example::Employee> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<iegen::example::Employee>*>(cself.ptr);
    try {
        ctocxxcself->setData(ctocxxname, age, ctocxxemail);
    }
    catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    }
    catch (...) {
        err->type = strdup("Uncaught Exception");
    }
}

void _func_Employee_setData_1(IEGenCObject cself, int age, IEGenCObject* _Nonnull err){
    
  
    
    std::shared_ptr<iegen::example::Employee> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<iegen::example::Employee>*>(cself.ptr);
    try {
        ctocxxcself->setData(age);
    }
    catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    }
    catch (...) {
        err->type = strdup("Uncaught Exception");
    }
}
char* _Nonnull _prop_get_Employee_name(IEGenCObject cself, IEGenCObject* _Nonnull err){
    std::shared_ptr<iegen::example::Employee> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<iegen::example::Employee>*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->name();
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
char* _Nonnull _prop_get_Employee_email(IEGenCObject cself, IEGenCObject* _Nonnull err){
    std::shared_ptr<iegen::example::Employee> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<iegen::example::Employee>*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->email();
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
int _prop_get_Employee_age(IEGenCObject cself, IEGenCObject* _Nonnull err){
    std::shared_ptr<iegen::example::Employee> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<iegen::example::Employee>*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->age();
        
        return result;
    }
    catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    }
    catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    int result {};
    return result;
}

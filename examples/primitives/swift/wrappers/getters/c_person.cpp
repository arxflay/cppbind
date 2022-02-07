/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 02/07/2022-12:05.
 * Please do not change it manually.
 */

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cxxabi.h>
#include <memory>
#include <type_traits>
#include "swift/wrappers/getters/c_person.h"
#include "cxx/getters/person.hpp"

using namespace iegen::example;

void release_Person(IEGenCObject cself, bool owner) {
    free(cself.type);
    if (owner) {
        delete static_cast<std::shared_ptr<iegen::example::Person>*>(cself.ptr);
    }
}

IEGenCObject create_Person(char* _Nonnull name, char* _Nonnull email, int age, IEGenCObject* _Nonnull err){
    auto ctocxxname = std::string(name);
    free(name);
    auto ctocxxemail = std::string(email);
    free(email);
    
    try {
        auto this_object = new iegen::example::Person(ctocxxname, ctocxxemail, age);
        return {strdup("iegen::example::Person"), new std::shared_ptr<iegen::example::Person>(this_object)};
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

char* _Nonnull _prop_get_Person_name(IEGenCObject cself){
    std::shared_ptr<iegen::example::Person> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<iegen::example::Person>*>(cself.ptr);
    const auto& result = ctocxxcself->fullName();
    auto cxxtocresult = strdup(result.data());
    return cxxtocresult;
}

void _prop_set_Person_name(IEGenCObject cself, char* _Nonnull val){
    
    std::shared_ptr<iegen::example::Person> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<iegen::example::Person>*>(cself.ptr);
    auto ctocxxval = std::string(val);
    free(val);
    ctocxxcself->setFullName(ctocxxval);
}

char* _Nonnull _prop_get_Person_email(IEGenCObject cself){
    std::shared_ptr<iegen::example::Person> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<iegen::example::Person>*>(cself.ptr);
    const auto& result = ctocxxcself->_email;
    auto cxxtocresult = strdup(result.data());
    return cxxtocresult;
}
int _prop_get_Person_age(IEGenCObject cself){
    std::shared_ptr<iegen::example::Person> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<iegen::example::Person>*>(cself.ptr);
    const auto& result = ctocxxcself->_age;
    
    return result;
}
void _prop_set_Person_age(IEGenCObject cself, int age){
    
    std::shared_ptr<iegen::example::Person> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<iegen::example::Person>*>(cself.ptr);
    
    ctocxxcself->_age = age;
}


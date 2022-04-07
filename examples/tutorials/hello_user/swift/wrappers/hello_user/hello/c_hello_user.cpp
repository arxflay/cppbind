/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 04/06/2022-15:17.
 * Please do not change it manually.
 */

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cxxabi.h>
#include <memory>
#include <type_traits>
#include "swift/wrappers/hello_user/hello/c_hello_user.h"
#include "cxx/hello_user.hpp"

extern const char* IEGEN_STD_STDEXCEPTION;

const char* IEGEN_USERINFO = "UserInfo";
const char* IEGEN_HOST = "Host";


void release_UserInfo(IEGenCObject cself, bool owner) {
    if (owner) {
        delete static_cast<UserInfo*>(cself.ptr);
    }
    free(cself.type);
}

IEGenCObject create_UserInfo(char* _Nonnull user_name, unsigned int user_age, IEGenCObject* _Nonnull iegen_err) {
    auto ctocxxuser_name = std::string(user_name);
    free(user_name);
    try {
        auto this_object = new UserInfo(ctocxxuser_name, user_age);
        return {strdup(IEGEN_USERINFO), this_object};
    } catch (const std::exception& e) {
        iegen_err->type = strdup(IEGEN_STD_STDEXCEPTION);
        iegen_err->ptr = new std::exception(e);
    } catch (...) {
        iegen_err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}

unsigned int _prop_get_UserInfo_age(IEGenCObject cself) {
    auto ctocxxcself = static_cast<UserInfo*>(cself.ptr);
    const auto& result = ctocxxcself->age;
    
    return result;
}

char* _Nonnull _prop_get_UserInfo_name(IEGenCObject cself) {
    auto ctocxxcself = static_cast<UserInfo*>(cself.ptr);
    const auto& result = ctocxxcself->name;
    auto cxxtocresult = strdup(result.data());
    return cxxtocresult;
}

bool _prop_get_UserInfo_want_a_drink(IEGenCObject cself) {
    auto ctocxxcself = static_cast<UserInfo*>(cself.ptr);
    const auto& result = ctocxxcself->want_a_drink;
    
    return result;
}

void _prop_set_UserInfo_want_a_drink(IEGenCObject cself, bool want_a_drink) {
    
    auto ctocxxcself = static_cast<UserInfo*>(cself.ptr);
    
    ctocxxcself->want_a_drink = want_a_drink;
}

void release_Host(IEGenCObject cself, bool owner) {
    if (owner) {
        delete static_cast<Host*>(cself.ptr);
    }
    free(cself.type);
}

IEGenCObject create_Host(IEGenCObject* _Nonnull iegen_err) {
    try {
        auto this_object = new Host();
        return {strdup(IEGEN_HOST), this_object};
    } catch (const std::exception& e) {
        iegen_err->type = strdup(IEGEN_STD_STDEXCEPTION);
        iegen_err->ptr = new std::exception(e);
    } catch (...) {
        iegen_err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}

char* _Nonnull _func_Host_hello(IEGenCObject cself, IEGenCObject user, IEGenCObject* _Nonnull iegen_err) {
    
    auto& ctocxxuser = *static_cast<UserInfo*>(user.ptr);
  
    auto ctocxxcself = static_cast<Host*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->hello(ctocxxuser);
        auto cxxtocresult = strdup(result.data());
        return cxxtocresult;
    } catch (const std::exception& e) {
        iegen_err->type = strdup(IEGEN_STD_STDEXCEPTION);
        iegen_err->ptr = new std::exception(e);
    } catch (...) {
        iegen_err->type = strdup("Uncaught Exception");
    }
    char* result {};
    return result;
}

char* _Nonnull _func_Host_welcome(IEGenCObject cself, IEGenCObject user, IEGenCObject* _Nonnull iegen_err) {
    
    auto& ctocxxuser = *static_cast<UserInfo*>(user.ptr);
  
    auto ctocxxcself = static_cast<Host*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->welcome(ctocxxuser);
        auto cxxtocresult = strdup(result.data());
        return cxxtocresult;
    } catch (const std::exception& e) {
        iegen_err->type = strdup(IEGEN_STD_STDEXCEPTION);
        iegen_err->ptr = new std::exception(e);
    } catch (...) {
        iegen_err->type = strdup("Uncaught Exception");
    }
    char* result {};
    return result;
}


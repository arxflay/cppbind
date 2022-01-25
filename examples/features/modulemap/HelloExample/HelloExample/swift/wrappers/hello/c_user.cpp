/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 01/25/2022-12:45.
 * Please do not change it manually.
 */

#include <iostream>
#include <string.h>
#include <cxxabi.h>
#include <memory>
#include "swift/wrappers/hello/c_user.h"
#include "cxx/user.hpp"




void release_UserInfo(CObject cself, bool owner) {
    delete cself.type;
    if (owner) {
        delete static_cast<UserInfo*>(cself.ptr);
    }
}

CObject create_UserInfo(char* _Nonnull user_name, unsigned int user_age, ErrorObj* _Nonnull err){
    auto ctocxxuser_name = std::string(user_name);
    free(user_name);
    
    try {
        auto this_object = new UserInfo(ctocxxuser_name, user_age);
        return {strdup("UserInfo"), this_object};
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
unsigned int _prop_get_UserInfo_age(CObject cself){
    UserInfo* ctocxxcself_ptr = nullptr;
    if (cself.ptr) {
        if (strcmp(cself.type, "UserInfo") == 0)
            ctocxxcself_ptr = static_cast<UserInfo*>(cself.ptr);
        else {
            std::cerr << "Unexpected object type: " << cself.type << std::endl;
            exit(1);
        }
    }
    auto ctocxxcself = ctocxxcself_ptr;
    const auto& result = ctocxxcself->age;
    
    return result;
}
char* _Nonnull _prop_get_UserInfo_name(CObject cself){
    UserInfo* ctocxxcself_ptr = nullptr;
    if (cself.ptr) {
        if (strcmp(cself.type, "UserInfo") == 0)
            ctocxxcself_ptr = static_cast<UserInfo*>(cself.ptr);
        else {
            std::cerr << "Unexpected object type: " << cself.type << std::endl;
            exit(1);
        }
    }
    auto ctocxxcself = ctocxxcself_ptr;
    const auto& result = ctocxxcself->name;
    auto cxxtocresult = strdup(result.data());
    return cxxtocresult;
}
bool _prop_get_UserInfo_want_a_drink(CObject cself){
    UserInfo* ctocxxcself_ptr = nullptr;
    if (cself.ptr) {
        if (strcmp(cself.type, "UserInfo") == 0)
            ctocxxcself_ptr = static_cast<UserInfo*>(cself.ptr);
        else {
            std::cerr << "Unexpected object type: " << cself.type << std::endl;
            exit(1);
        }
    }
    auto ctocxxcself = ctocxxcself_ptr;
    const auto& result = ctocxxcself->want_a_drink;
    
    return result;
}
void _prop_set_UserInfo_want_a_drink(CObject cself, bool want_a_drink){
    
    UserInfo* ctocxxcself_ptr = nullptr;
    if (cself.ptr) {
        if (strcmp(cself.type, "UserInfo") == 0)
            ctocxxcself_ptr = static_cast<UserInfo*>(cself.ptr);
        else {
            std::cerr << "Unexpected object type: " << cself.type << std::endl;
            exit(1);
        }
    }
    auto ctocxxcself = ctocxxcself_ptr;
    
    ctocxxcself->want_a_drink = want_a_drink;
}


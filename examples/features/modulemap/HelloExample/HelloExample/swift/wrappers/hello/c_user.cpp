/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 11/02/2021-06:10.
 * Please do not change it manually.
 */

#include <string.h>
#include <memory>
#include "swift/wrappers/hello/c_user.h"
#include "cxx/user.hpp"


void release_UserInfo(void* _Nonnull cself) {
    delete dynamic_cast<UserInfo*>(static_cast<UserInfo*>(cself));
}

void* _Nonnull create_UserInfo(char* _Nonnull user_name, unsigned int user_age){
    auto c_to_cxx_user_name = std::string(user_name);
    free(user_name);
    
    auto this_object = new UserInfo(c_to_cxx_user_name, user_age);
    return this_object;
}
unsigned int _prop_get_UserInfo_age(void* _Nonnull cself){
    auto c_to_cxx_cself = static_cast<UserInfo*>(cself);
    const auto& result = c_to_cxx_cself->age;
    
    return result;
}
char* _Nonnull _prop_get_UserInfo_name(void* _Nonnull cself){
    auto c_to_cxx_cself = static_cast<UserInfo*>(cself);
    const auto& result = c_to_cxx_cself->name;
    auto cxx_to_c_result = strdup(result.data());
    return cxx_to_c_result;
}
bool _prop_get_UserInfo_want_a_drink(void* _Nonnull cself){
    auto c_to_cxx_cself = static_cast<UserInfo*>(cself);
    const auto& result = c_to_cxx_cself->want_a_drink;
    
    return result;
}
void _prop_set_UserInfo_want_a_drink(void* _Nonnull cself, bool want_a_drink){
    
    auto c_to_cxx_cself = static_cast<UserInfo*>(cself);
    
    c_to_cxx_cself->want_a_drink = want_a_drink;
}
/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 11/25/2021-10:01.
 * Please do not change it manually.
 */

#include <string.h>
#include <memory>
#include "swift/wrappers/templates/c_wrapper.h"
#include "cxx/templates/wrapper.hpp"

using namespace iegen::example;

void release_WrapperPairStrings(void* _Nonnull cself) {
    delete static_cast<iegen::example::Wrapper<std::pair<std::string, std::string>>*>(cself);
}

void* _Nonnull create_WrapperPairStrings(CDataPair value, ErrorObj* _Nonnull err){
    auto first_tmp_value = *reinterpret_cast<char**>(value.first);
    auto second_tmp_value = *reinterpret_cast<char**>(value.second);
    auto c_to_cxx_first_tmp_value = std::string(first_tmp_value);
    free(first_tmp_value);
    auto c_to_cxx_second_tmp_value = std::string(second_tmp_value);
    free(second_tmp_value);
    std::pair<std::string, std::string> c_to_cxx_value { c_to_cxx_first_tmp_value, c_to_cxx_second_tmp_value };
    try {
        auto this_object = new iegen::example::Wrapper<std::pair<std::string, std::string>>(c_to_cxx_value);
        return this_object;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    void* result = nullptr;
    return result;
}

CDataPair _prop_get_WrapperPairStrings_value(void* _Nonnull cself){
    auto c_to_cxx_cself = static_cast<iegen::example::Wrapper<std::pair<std::string, std::string>>*>(cself);
    const auto& result = c_to_cxx_cself->value();
    auto _first_data_cxx_to_c_result = new char*;
    auto _second_data_cxx_to_c_result = new char*;
    const auto& first_result = result.first;
    const auto& second_result = result.second;
    auto cxx_to_c_first_result = strdup(first_result.data());
    auto cxx_to_c_second_result = strdup(second_result.data());
    *_first_data_cxx_to_c_result = cxx_to_c_first_result;
    *_second_data_cxx_to_c_result = cxx_to_c_second_result;
    CDataPair cxx_to_c_result = { _first_data_cxx_to_c_result, _second_data_cxx_to_c_result };
    return cxx_to_c_result;
}

void _prop_set_WrapperPairStrings_value(void* _Nonnull cself, CDataPair value){
    
    auto c_to_cxx_cself = static_cast<iegen::example::Wrapper<std::pair<std::string, std::string>>*>(cself);
    auto first_tmp_value = *reinterpret_cast<char**>(value.first);
    auto second_tmp_value = *reinterpret_cast<char**>(value.second);
    auto c_to_cxx_first_tmp_value = std::string(first_tmp_value);
    free(first_tmp_value);
    auto c_to_cxx_second_tmp_value = std::string(second_tmp_value);
    free(second_tmp_value);
    std::pair<std::string, std::string> c_to_cxx_value { c_to_cxx_first_tmp_value, c_to_cxx_second_tmp_value };
    c_to_cxx_cself->setValue(c_to_cxx_value);
}

void release_WrapperPairIntInt(void* _Nonnull cself) {
    delete static_cast<iegen::example::Wrapper<std::pair<int, int>>*>(cself);
}

void* _Nonnull create_WrapperPairIntInt(CDataPair value, ErrorObj* _Nonnull err){
    auto first_tmp_value = *reinterpret_cast<int*>(value.first);
    auto second_tmp_value = *reinterpret_cast<int*>(value.second);


    std::pair<int, int> c_to_cxx_value { first_tmp_value, second_tmp_value };
    try {
        auto this_object = new iegen::example::Wrapper<std::pair<int, int>>(c_to_cxx_value);
        return this_object;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    void* result = nullptr;
    return result;
}

CDataPair _prop_get_WrapperPairIntInt_value(void* _Nonnull cself){
    auto c_to_cxx_cself = static_cast<iegen::example::Wrapper<std::pair<int, int>>*>(cself);
    const auto& result = c_to_cxx_cself->value();
    auto _first_data_cxx_to_c_result = new int;
    auto _second_data_cxx_to_c_result = new int;
    const auto& first_result = result.first;
    const auto& second_result = result.second;


    *_first_data_cxx_to_c_result = first_result;
    *_second_data_cxx_to_c_result = second_result;
    CDataPair cxx_to_c_result = { _first_data_cxx_to_c_result, _second_data_cxx_to_c_result };
    return cxx_to_c_result;
}

void _prop_set_WrapperPairIntInt_value(void* _Nonnull cself, CDataPair value){
    
    auto c_to_cxx_cself = static_cast<iegen::example::Wrapper<std::pair<int, int>>*>(cself);
    auto first_tmp_value = *reinterpret_cast<int*>(value.first);
    auto second_tmp_value = *reinterpret_cast<int*>(value.second);


    std::pair<int, int> c_to_cxx_value { first_tmp_value, second_tmp_value };
    c_to_cxx_cself->setValue(c_to_cxx_value);
}

void release_WrapperString(void* _Nonnull cself) {
    delete static_cast<iegen::example::Wrapper<std::string>*>(cself);
}

void* _Nonnull create_WrapperString(char* _Nonnull value, ErrorObj* _Nonnull err){
    auto c_to_cxx_value = std::string(value);
    free(value);
    try {
        auto this_object = new iegen::example::Wrapper<std::string>(c_to_cxx_value);
        return this_object;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    void* result = nullptr;
    return result;
}

char* _Nonnull _prop_get_WrapperString_value(void* _Nonnull cself){
    auto c_to_cxx_cself = static_cast<iegen::example::Wrapper<std::string>*>(cself);
    const auto& result = c_to_cxx_cself->value();
    auto cxx_to_c_result = strdup(result.data());
    return cxx_to_c_result;
}

void _prop_set_WrapperString_value(void* _Nonnull cself, char* _Nonnull value){
    
    auto c_to_cxx_cself = static_cast<iegen::example::Wrapper<std::string>*>(cself);
    auto c_to_cxx_value = std::string(value);
    free(value);
    c_to_cxx_cself->setValue(c_to_cxx_value);
}

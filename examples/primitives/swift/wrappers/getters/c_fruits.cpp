/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 12/29/2021-07:21.
 * Please do not change it manually.
 */

#include <string.h>
#include <cxxabi.h>
#include <memory>
#include "swift/wrappers/getters/c_fruits.h"
#include "cxx/getters/fruits.hpp"

using namespace iegen::example;

void release_Fruit(CObject cself, bool owner) {
    delete cself.type;
    if (owner) {
        delete static_cast<iegen::example::Fruit*>(cself.ptr);
    }
}

unsigned int _prop_get_Fruit_type(CObject cself){
    auto ctocxxcself = static_cast<iegen::example::Fruit*>(cself.ptr);
    const auto& result = ctocxxcself->type();
    unsigned int cxxtocresult = (unsigned int)result;
    return cxxtocresult;
}
void release_Apple(CObject cself, bool owner) {
    delete cself.type;
    if (owner) {
        delete static_cast<iegen::example::Fruit*>(cself.ptr);
    }
}

CObject create_Apple(ErrorObj* _Nonnull err){
    try {
        auto this_object = new iegen::example::Apple();
        return {strdup("iegen::example::Apple"), static_cast<iegen::example::Fruit*>(this_object)};
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

unsigned int _prop_get_Apple_type(CObject cself){
    // we might need to avoid dynamic_cast if there is no multiple inheritance
    auto ctocxxcself = dynamic_cast<iegen::example::Apple*>(static_cast<iegen::example::Fruit*>(cself.ptr));
    const auto& result = ctocxxcself->type();
    unsigned int cxxtocresult = (unsigned int)result;
    return cxxtocresult;
}
void release_Pineapple(CObject cself, bool owner) {
    delete cself.type;
    if (owner) {
        delete static_cast<iegen::example::Fruit*>(cself.ptr);
    }
}

CObject create_Pineapple(ErrorObj* _Nonnull err){
    try {
        auto this_object = new iegen::example::Pineapple();
        return {strdup("iegen::example::Pineapple"), static_cast<iegen::example::Fruit*>(this_object)};
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

unsigned int _prop_get_Pineapple_type(CObject cself){
    // we might need to avoid dynamic_cast if there is no multiple inheritance
    auto ctocxxcself = dynamic_cast<iegen::example::Pineapple*>(static_cast<iegen::example::Fruit*>(cself.ptr));
    const auto& result = ctocxxcself->type();
    unsigned int cxxtocresult = (unsigned int)result;
    return cxxtocresult;
}
void release_Fruits(CObject cself, bool owner) {
    delete cself.type;
    if (owner) {
        delete static_cast<iegen::example::Fruits*>(cself.ptr);
    }
}

CObject create_Fruits(CDataArray fruits, ErrorObj* _Nonnull err){
    std::vector<Fruit *> ctocxxfruits;

    auto data_fruits = reinterpret_cast<CObject*>(fruits.data);

    for (size_t _i_fruits = 0; _i_fruits < fruits.size; ++_i_fruits) {
        auto& value_fruits = data_fruits[_i_fruits];
        
        auto ctocxxvalue_fruits = static_cast<iegen::example::Fruit*>(value_fruits.ptr);
        ctocxxfruits.emplace_back(ctocxxvalue_fruits);
    }
    try {
        auto this_object = new iegen::example::Fruits(ctocxxfruits);
        return {strdup("iegen::example::Fruits"), this_object};
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

CDataArray _prop_get_Fruits_fruitsApple(CObject cself){
    auto ctocxxcself = static_cast<iegen::example::Fruits*>(cself.ptr);
    const auto& result = ctocxxcself->fruits<iegen::example::Apple>();
    auto _data_cxxtocresult = new CObject [result.size()];
    CDataArray cxxtocresult = { _data_cxxtocresult, (long long)result.size() };
    for (int _i_result = 0; _i_result < result.size(); ++_i_result) {
        auto& value_result = result[_i_result];
        
        char* type_value_result = strdup("iegen::example::Apple");
        auto value_ptr_value_result = const_cast<iegen::example::Apple*>(value_result);
        CObject cxxtocvalue_result = {type_value_result, static_cast<iegen::example::Fruit*>(value_ptr_value_result)};
        _data_cxxtocresult[_i_result] = cxxtocvalue_result;
    }
    return cxxtocresult;
}

CDataArray _prop_get_Fruits_fruitsPineapple(CObject cself){
    auto ctocxxcself = static_cast<iegen::example::Fruits*>(cself.ptr);
    const auto& result = ctocxxcself->fruits<iegen::example::Pineapple>();
    auto _data_cxxtocresult = new CObject [result.size()];
    CDataArray cxxtocresult = { _data_cxxtocresult, (long long)result.size() };
    for (int _i_result = 0; _i_result < result.size(); ++_i_result) {
        auto& value_result = result[_i_result];
        
        char* type_value_result = strdup("iegen::example::Pineapple");
        auto value_ptr_value_result = const_cast<iegen::example::Pineapple*>(value_result);
        CObject cxxtocvalue_result = {type_value_result, static_cast<iegen::example::Fruit*>(value_ptr_value_result)};
        _data_cxxtocresult[_i_result] = cxxtocvalue_result;
    }
    return cxxtocresult;
}

CDataArray _prop_get_Fruits_allFruitsApplePineapple(CObject cself){
    auto ctocxxcself = static_cast<iegen::example::Fruits*>(cself.ptr);
    const auto& result = ctocxxcself->allFruits<iegen::example::Apple, iegen::example::Pineapple>();
    auto _data_cxxtocresult = new CObject [result.size()];
    CDataArray cxxtocresult = { _data_cxxtocresult, (long long)result.size() };
    for (int _i_result = 0; _i_result < result.size(); ++_i_result) {
        auto& value_result = result[_i_result];
        
        char* type_value_result = nullptr;
        const char * name_value_result = typeid(*value_result).name();
        int status = 0;
        char* demangled_value_result = abi::__cxa_demangle(name_value_result, NULL, NULL, &status);
        if (status == 0) {
            type_value_result = demangled_value_result;
        } else {
            type_value_result = strdup("iegen::example::Fruit");
        }
        CObject cxxtocvalue_result = {type_value_result, const_cast<iegen::example::Fruit*>(value_result)};
        _data_cxxtocresult[_i_result] = cxxtocvalue_result;
    }
    return cxxtocresult;
}

void _prop_set_Fruits_allFruitsApplePineapple(CObject cself, CDataArray arg0){
    
    auto ctocxxcself = static_cast<iegen::example::Fruits*>(cself.ptr);
    std::vector<Fruit *> ctocxxarg0;

    auto data_arg0 = reinterpret_cast<CObject*>(arg0.data);

    for (size_t _i_arg0 = 0; _i_arg0 < arg0.size; ++_i_arg0) {
        auto& value_arg0 = data_arg0[_i_arg0];
        
        auto ctocxxvalue_arg0 = static_cast<iegen::example::Fruit*>(value_arg0.ptr);
        ctocxxarg0.emplace_back(ctocxxvalue_arg0);
    }
    ctocxxcself->setAllFruits<iegen::example::Apple, iegen::example::Pineapple>(ctocxxarg0);
}


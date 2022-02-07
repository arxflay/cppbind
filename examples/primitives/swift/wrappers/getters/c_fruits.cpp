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
#include "swift/wrappers/getters/c_fruits.h"
#include "cxx/getters/fruits.hpp"

using namespace iegen::example;

void release_Fruit(IEGenCObject cself, bool owner) {
    static_assert(std::has_virtual_destructor<iegen::example::Fruit>::value, "iegen::example::Fruit type must have virtual destructor");
    free(cself.type);
    if (owner) {
        delete static_cast<iegen::example::Fruit*>(cself.ptr);
    }
}

unsigned int _prop_get_Fruit_type(IEGenCObject cself){iegen::example::Fruit* ctocxxcself_ptr = nullptr;
    if (cself.ptr) {
        if (strcmp(cself.type, "iegen::example::Fruit") == 0)
            ctocxxcself_ptr = static_cast<iegen::example::Fruit*>(cself.ptr);
        else if (strcmp(cself.type, "iegen::example::Apple") == 0)
            ctocxxcself_ptr = static_cast<iegen::example::Apple*>(cself.ptr);
        else if (strcmp(cself.type, "iegen::example::Pineapple") == 0)
            ctocxxcself_ptr = static_cast<iegen::example::Pineapple*>(cself.ptr);
        else {
            std::cerr << "Unexpected object type: " << cself.type << std::endl;
            exit(1);
        }
    }
    auto ctocxxcself = ctocxxcself_ptr;
    const auto& result = ctocxxcself->type();
    unsigned int cxxtocresult = static_cast<unsigned int>(result);
    return cxxtocresult;
}

IEGenCObject create_Apple(IEGenCObject* _Nonnull err){
    try {
        auto this_object = new iegen::example::Apple();
        return {strdup("iegen::example::Apple"), this_object};
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

unsigned int _prop_get_Apple_type(IEGenCObject cself){
    auto ctocxxcself = static_cast<iegen::example::Apple*>(cself.ptr);
    const auto& result = ctocxxcself->type();
    unsigned int cxxtocresult = static_cast<unsigned int>(result);
    return cxxtocresult;
}

IEGenCObject create_Pineapple(IEGenCObject* _Nonnull err){
    try {
        auto this_object = new iegen::example::Pineapple();
        return {strdup("iegen::example::Pineapple"), this_object};
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

unsigned int _prop_get_Pineapple_type(IEGenCObject cself){
    auto ctocxxcself = static_cast<iegen::example::Pineapple*>(cself.ptr);
    const auto& result = ctocxxcself->type();
    unsigned int cxxtocresult = static_cast<unsigned int>(result);
    return cxxtocresult;
}
void release_Fruits(IEGenCObject cself, bool owner) {
    free(cself.type);
    if (owner) {
        delete static_cast<iegen::example::Fruits*>(cself.ptr);
    }
}

IEGenCObject create_Fruits(IEGenCDataArray fruits, IEGenCObject* _Nonnull err){
    std::vector<Fruit *> ctocxxfruits;

    auto data_fruits = reinterpret_cast<IEGenCObject*>(fruits.data);

    for (size_t _i_fruits = 0; _i_fruits < fruits.size; ++_i_fruits) {
        auto& value_fruits = data_fruits[_i_fruits];
        iegen::example::Fruit* ctocxxvalue_fruits_ptr = nullptr;
        if (value_fruits.ptr) {
            if (strcmp(value_fruits.type, "iegen::example::Fruit") == 0)
                ctocxxvalue_fruits_ptr = static_cast<iegen::example::Fruit*>(value_fruits.ptr);
            else if (strcmp(value_fruits.type, "iegen::example::Apple") == 0)
                ctocxxvalue_fruits_ptr = static_cast<iegen::example::Apple*>(value_fruits.ptr);
            else if (strcmp(value_fruits.type, "iegen::example::Pineapple") == 0)
                ctocxxvalue_fruits_ptr = static_cast<iegen::example::Pineapple*>(value_fruits.ptr);
            else {
                std::cerr << "Unexpected object type: " << value_fruits.type << std::endl;
                exit(1);
            }
        }
        auto ctocxxvalue_fruits = ctocxxvalue_fruits_ptr;
        ctocxxfruits.emplace_back(ctocxxvalue_fruits);
    }
    try {
        auto this_object = new iegen::example::Fruits(ctocxxfruits);
        return {strdup("iegen::example::Fruits"), this_object};
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

IEGenCDataArray _prop_get_Fruits_fruitsApple(IEGenCObject cself){
    auto ctocxxcself = static_cast<iegen::example::Fruits*>(cself.ptr);
    const auto& result = ctocxxcself->fruits<iegen::example::Apple>();
    auto _data_cxxtocresult = new IEGenCObject [result.size()];
    IEGenCDataArray cxxtocresult = { _data_cxxtocresult, static_cast<long long>(result.size()) };
    for (int _i_result = 0; _i_result < result.size(); ++_i_result) {
        auto& value_result = result[_i_result];
        
        char* type_value_result = strdup("iegen::example::Apple");
        auto value_ptr_value_result = const_cast<iegen::example::Apple*>(value_result);
        IEGenCObject cxxtocvalue_result = {type_value_result, value_ptr_value_result};
        _data_cxxtocresult[_i_result] = cxxtocvalue_result;
    }
    return cxxtocresult;
}

IEGenCDataArray _prop_get_Fruits_fruitsPineapple(IEGenCObject cself){
    auto ctocxxcself = static_cast<iegen::example::Fruits*>(cself.ptr);
    const auto& result = ctocxxcself->fruits<iegen::example::Pineapple>();
    auto _data_cxxtocresult = new IEGenCObject [result.size()];
    IEGenCDataArray cxxtocresult = { _data_cxxtocresult, static_cast<long long>(result.size()) };
    for (int _i_result = 0; _i_result < result.size(); ++_i_result) {
        auto& value_result = result[_i_result];
        
        char* type_value_result = strdup("iegen::example::Pineapple");
        auto value_ptr_value_result = const_cast<iegen::example::Pineapple*>(value_result);
        IEGenCObject cxxtocvalue_result = {type_value_result, value_ptr_value_result};
        _data_cxxtocresult[_i_result] = cxxtocvalue_result;
    }
    return cxxtocresult;
}

IEGenCDataArray _prop_get_Fruits_allFruitsApplePineapple(IEGenCObject cself){
    auto ctocxxcself = static_cast<iegen::example::Fruits*>(cself.ptr);
    const auto& result = ctocxxcself->allFruits<iegen::example::Apple, iegen::example::Pineapple>();
    auto _data_cxxtocresult = new IEGenCObject [result.size()];
    IEGenCDataArray cxxtocresult = { _data_cxxtocresult, static_cast<long long>(result.size()) };
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
        auto value_ptr_value_result = const_cast<iegen::example::Fruit*>(value_result);
        IEGenCObject cxxtocvalue_result = {type_value_result, dynamic_cast<void*>(value_ptr_value_result)};
        _data_cxxtocresult[_i_result] = cxxtocvalue_result;
    }
    return cxxtocresult;
}

void _prop_set_Fruits_allFruitsApplePineapple(IEGenCObject cself, IEGenCDataArray arg0){
    
    auto ctocxxcself = static_cast<iegen::example::Fruits*>(cself.ptr);
    std::vector<Fruit *> ctocxxarg0;

    auto data_arg0 = reinterpret_cast<IEGenCObject*>(arg0.data);

    for (size_t _i_arg0 = 0; _i_arg0 < arg0.size; ++_i_arg0) {
        auto& value_arg0 = data_arg0[_i_arg0];
        iegen::example::Fruit* ctocxxvalue_arg0_ptr = nullptr;
        if (value_arg0.ptr) {
            if (strcmp(value_arg0.type, "iegen::example::Fruit") == 0)
                ctocxxvalue_arg0_ptr = static_cast<iegen::example::Fruit*>(value_arg0.ptr);
            else if (strcmp(value_arg0.type, "iegen::example::Apple") == 0)
                ctocxxvalue_arg0_ptr = static_cast<iegen::example::Apple*>(value_arg0.ptr);
            else if (strcmp(value_arg0.type, "iegen::example::Pineapple") == 0)
                ctocxxvalue_arg0_ptr = static_cast<iegen::example::Pineapple*>(value_arg0.ptr);
            else {
                std::cerr << "Unexpected object type: " << value_arg0.type << std::endl;
                exit(1);
            }
        }
        auto ctocxxvalue_arg0 = ctocxxvalue_arg0_ptr;
        ctocxxarg0.emplace_back(ctocxxvalue_arg0);
    }
    ctocxxcself->setAllFruits<iegen::example::Apple, iegen::example::Pineapple>(ctocxxarg0);
}


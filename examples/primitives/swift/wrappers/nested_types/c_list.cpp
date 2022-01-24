/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 01/19/2022-05:52.
 * Please do not change it manually.
 */

#include <string.h>
#include <cxxabi.h>
#include <memory>
#include "swift/wrappers/nested_types/c_list.h"
#include "cxx/nested_types/list.hpp"

using namespace iegen::example;

void release_List(CObject cself, bool owner) {
    delete cself.type;
    if (owner) {
        delete static_cast<iegen::example::List*>(cself.ptr);
    }
}
void release_Item(CObject cself, bool owner) {
    delete cself.type;
    if (owner) {
        delete static_cast<iegen::example::List::Item*>(cself.ptr);
    }
}
void release_Value(CObject cself, bool owner) {
    delete cself.type;
    if (owner) {
        delete static_cast<iegen::example::List::Item::Value*>(cself.ptr);
    }
}
int _prop_get_Value_value(CObject cself){
    auto ctocxxcself = static_cast<iegen::example::List::Item::Value*>(cself.ptr);
    const auto& result = ctocxxcself->value;
    
    return result;
}
void _prop_set_Value_value(CObject cself, int value){
    
    auto ctocxxcself = static_cast<iegen::example::List::Item::Value*>(cself.ptr);
    
    ctocxxcself->value = value;
}


CObject create_Value(int _value, ErrorObj* _Nonnull err){
    
    try {
        auto this_object = new iegen::example::List::Item::Value(_value);
        return {strdup("iegen::example::List::Item::Value"), this_object};
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
CObject _prop_get_Item_value(CObject cself){
    auto ctocxxcself = static_cast<iegen::example::List::Item*>(cself.ptr);
    const auto& result = ctocxxcself->value;
    
    char* type_result = strdup("iegen::example::List::Item::Value");
    CObject cxxtocresult = {type_result, const_cast<iegen::example::List::Item::Value*>(result)};
    return cxxtocresult;
}
void _prop_set_Item_value(CObject cself, CObject value){
    
    auto ctocxxcself = static_cast<iegen::example::List::Item*>(cself.ptr);
    
    auto ctocxxvalue = static_cast<iegen::example::List::Item::Value*>(value.ptr);
    ctocxxcself->value = ctocxxvalue;
}


CObject create_Item(CObject v, ErrorObj* _Nonnull err){
    
    auto ctocxxv = static_cast<iegen::example::List::Item::Value*>(v.ptr);
    try {
        auto this_object = new iegen::example::List::Item(ctocxxv);
        return {strdup("iegen::example::List::Item"), this_object};
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

CObject create_List(ErrorObj* _Nonnull err){
    try {
        auto this_object = new iegen::example::List();
        return {strdup("iegen::example::List"), this_object};
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

void _func_List_push_back(CObject cself, CObject item, ErrorObj* _Nonnull err){
    
    auto ctocxxitem = static_cast<iegen::example::List::Item*>(item.ptr);
  
    
    auto ctocxxcself = static_cast<iegen::example::List*>(cself.ptr);
    try {
        ctocxxcself->push_back(ctocxxitem);
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
}

void _func_List_pop_back(CObject cself, ErrorObj* _Nonnull err){
    
    auto ctocxxcself = static_cast<iegen::example::List*>(cself.ptr);
    try {
        ctocxxcself->pop_back();
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
}

CObject _prop_get_List_back(CObject cself){
    auto ctocxxcself = static_cast<iegen::example::List*>(cself.ptr);
    const auto& result = ctocxxcself->back();
    
    char* type_result = strdup("iegen::example::List::Item");
    CObject cxxtocresult = {type_result, const_cast<iegen::example::List::Item*>(result)};
    return cxxtocresult;
}
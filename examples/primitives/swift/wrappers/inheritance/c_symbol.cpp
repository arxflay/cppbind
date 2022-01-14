/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 01/12/2022-13:51.
 * Please do not change it manually.
 */

#include <string.h>
#include <cxxabi.h>
#include <memory>
#include <iostream>
#include "swift/wrappers/inheritance/c_symbol.h"
#include "cxx/inheritance/symbol.hpp"

using namespace iegen::example;

void release_SymbolImpl(CObject cself, bool owner){
    delete cself.type;
    if (owner) {
        delete static_cast<iegen::example::Symbol*>(cself.ptr);
    }
}

CObject create_Symbol(ErrorObj* _Nonnull err){
    try {
        auto this_object = new iegen::example::Symbol();
        return {strdup("iegen::example::Symbol"), this_object};
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

char* _Nonnull _func_Symbol_typeName(CObject cself, ErrorObj* _Nonnull err){
    
    auto ctocxxcself = static_cast<iegen::example::Symbol*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->typeName();
        auto cxxtocresult = strdup(result.data());
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    char* result{};
    return result;
}
void release_NumberImpl(CObject cself, bool owner){
    delete cself.type;
    if (owner) {
        delete static_cast<iegen::example::Number*>(cself.ptr);
    }
}

CObject create_Number(ErrorObj* _Nonnull err){
    try {
        auto this_object = new iegen::example::Number();
        return {strdup("iegen::example::Number"), this_object};
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

char* _Nonnull _func_Number_typeName(CObject cself, ErrorObj* _Nonnull err){
    
    // we might need to avoid dynamic_cast if there is no multiple inheritance
    auto ctocxxcself = static_cast<iegen::example::Number*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->typeName();
        auto cxxtocresult = strdup(result.data());
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    char* result{};
    return result;
}
void release_Text(CObject cself, bool owner) {
    delete cself.type;
    if (owner) {
        delete static_cast<iegen::example::Text*>(cself.ptr);
    }
}

CObject create_Text(ErrorObj* _Nonnull err){
    try {
        auto this_object = new iegen::example::Text();
        std::cout << "Address of created text object: " << this_object << std::endl;
        return {strdup("iegen::example::Text"), this_object};
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

char* _Nonnull _func_Text_typeName(CObject cself, ErrorObj* _Nonnull err){
    
    // we might need to avoid dynamic_cast if there is no multiple inheritance
    auto ctocxxcself = static_cast<iegen::example::Text*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->typeName();
        auto cxxtocresult = strdup(result.data());
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    char* result{};
    return result;
}
void release_Digit(CObject cself, bool owner) {
    delete cself.type;
    if (owner) {
        delete static_cast<iegen::example::Digit*>(cself.ptr);
    }
}

CObject create_Digit(ErrorObj* _Nonnull err){
    try {
        auto this_object = new iegen::example::Digit();
        std::cout << "Address of created digit object: " << this_object << std::endl;
        return {strdup("iegen::example::Digit"), this_object};
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

char* _Nonnull _func_Digit_typeName(CObject cself, ErrorObj* _Nonnull err){
    
    // we might need to avoid dynamic_cast if there is no multiple inheritance
    auto ctocxxcself = static_cast<iegen::example::Digit*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->typeName();
        auto cxxtocresult = strdup(result.data());
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    char* result{};
    return result;
}
void release_SymbolUsage(CObject cself, bool owner) {
    delete cself.type;
    if (owner) {
        delete static_cast<iegen::example::SymbolUsage*>(cself.ptr);
    }
}

CObject create_SymbolUsage(ErrorObj* _Nonnull err){
    try {
        auto this_object = new iegen::example::SymbolUsage();
        return {strdup("iegen::example::SymbolUsage"), this_object};
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

char* _Nonnull _func_SymbolUsage_getTextType(CObject cself, CObject t, ErrorObj* _Nonnull err){

    // we might need to avoid dynamic_cast if there is no multiple inheritance
     iegen::example::Text* ctocxxt;

    if (strcmp(t.type, "iegen::example::Digit") == 0 ) {
        ctocxxt = static_cast<iegen::example::Digit*>(t.ptr);
    } else {
        ctocxxt = static_cast<iegen::example::Text*>(t.ptr);
    }
    
    auto ctocxxcself = static_cast<iegen::example::SymbolUsage*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->getTextType(ctocxxt);
        auto cxxtocresult = strdup(result.data());
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    char* result{};
    return result;
}

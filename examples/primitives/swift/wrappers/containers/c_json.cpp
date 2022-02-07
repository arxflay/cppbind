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
#include "swift/wrappers/containers/c_json.h"
#include "cxx/containers/json.hpp"

using namespace iegen::example;

void release_JsonExamples(IEGenCObject cself, bool owner) {
    free(cself.type);
    if (owner) {
        delete static_cast<iegen::example::JsonExamples*>(cself.ptr);
    }
}

IEGenCObject create_JsonExamples(IEGenCObject* _Nonnull err){
    try {
        auto this_object = new iegen::example::JsonExamples();
        return {strdup("iegen::example::JsonExamples"), this_object};
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

void _func_JsonExamples_setJson(IEGenCObject cself, char * _Nullable j, IEGenCObject* _Nonnull err){
    auto ctocxxj = nlohmann::json::parse(j);
    free(j);
  
    
    auto ctocxxcself = static_cast<iegen::example::JsonExamples*>(cself.ptr);
    try {
        ctocxxcself->setJson(ctocxxj);
    }
    catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    }
    catch (...) {
        err->type = strdup("Uncaught Exception");
    }
}

char * _Nullable _func_JsonExamples_getJson(IEGenCObject cself, IEGenCObject* _Nonnull err){
    
    auto ctocxxcself = static_cast<iegen::example::JsonExamples*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->getJson();
        auto result_str = result.dump();
        auto cxxtocresult = strdup(result_str.c_str());
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    }
    catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    char * _Nullable result {};
    return result;
}

char * _Nullable _func_JsonExamples_getSimpleJsonExample(IEGenCObject cself, IEGenCObject* _Nonnull err){
    
    auto ctocxxcself = static_cast<iegen::example::JsonExamples*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->getSimpleJsonExample();
        auto result_str = result.dump();
        auto cxxtocresult = strdup(result_str.c_str());
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    }
    catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    char * _Nullable result {};
    return result;
}

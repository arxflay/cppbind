/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 03/23/2022-10:47.
 * Please do not change it manually.
 */

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cxxabi.h>
#include <memory>
#include <type_traits>
#include "swift/wrappers/extra/c_object.h"
#include "cxx/extra/object.hpp"
#include "cxx/extra/object_usage.hpp"

using namespace iegen;

void release_Iegen_Object(IEGenCObject cself, bool owner) {
    if (owner) {
        if (strcmp(cself.type, "iegen::Object") == 0)
            delete static_cast<std::shared_ptr<iegen::Object>*>(cself.ptr);
        else if (strcmp(cself.type, "iegen::ObjectUsage") == 0)
            delete static_cast<std::shared_ptr<iegen::ObjectUsage>*>(cself.ptr);
        else {
            std::cerr << "Unexpected object type: " << cself.type << std::endl;
            exit(1);
        }
    }
    free(cself.type);
}

std::shared_ptr<iegen::Object> downcast_Iegen_Object(IEGenCObject iegenObj) {
    if (iegenObj.ptr) {
        if (strcmp(iegenObj.type, "iegen::Object") == 0)
            return *static_cast<std::shared_ptr<iegen::Object>*>(iegenObj.ptr);
        else if (strcmp(iegenObj.type, "iegen::ObjectUsage") == 0)
            return *static_cast<std::shared_ptr<iegen::ObjectUsage>*>(iegenObj.ptr);
        else {
            std::cerr << "Unexpected object type: " << iegenObj.type << std::endl;
            exit(1);
        }
    }
    return nullptr;
}

char* _Nonnull _func_Iegen_Object_toString(IEGenCObject cself, IEGenCObject* _Nonnull err) {
    std::shared_ptr<iegen::Object> ctocxxcself;
    ctocxxcself = downcast_Iegen_Object(cself);
    try {
        const auto& result = ctocxxcself->toString();
        auto cxxtocresult = strdup(result.data());
        return cxxtocresult;
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    char* result {};
    return result;
}

char* _Nonnull _func_Iegen_Object_className(IEGenCObject cself, IEGenCObject* _Nonnull err) {
    std::shared_ptr<iegen::Object> ctocxxcself;
    ctocxxcself = downcast_Iegen_Object(cself);
    try {
        const auto& result = ctocxxcself->className();
        auto cxxtocresult = strdup(result.data());
        return cxxtocresult;
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    char* result {};
    return result;
}

bool _func_Iegen_Object_equals(IEGenCObject cself, IEGenCObject other, IEGenCObject* _Nonnull err) {
    
    std::shared_ptr<iegen::Object> ctocxxother;
    ctocxxother = downcast_Iegen_Object(other);
  
    std::shared_ptr<iegen::Object> ctocxxcself;
    ctocxxcself = downcast_Iegen_Object(cself);
    try {
        const auto& result = ctocxxcself->equals(ctocxxother);
        
        return result;
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    bool result {};
    return result;
}

unsigned long _func_Iegen_Object_hash(IEGenCObject cself, IEGenCObject* _Nonnull err) {
    std::shared_ptr<iegen::Object> ctocxxcself;
    ctocxxcself = downcast_Iegen_Object(cself);
    try {
        const auto& result = ctocxxcself->hash();
        
        return result;
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    unsigned long result {};
    return result;
}

char* _Nonnull _func_Iegen_Object_debugInfo(IEGenCObject cself, IEGenCObject* _Nonnull err) {
    std::shared_ptr<iegen::Object> ctocxxcself;
    ctocxxcself = downcast_Iegen_Object(cself);
    try {
        const auto& result = ctocxxcself->debugInfo();
        auto cxxtocresult = strdup(result.data());
        return cxxtocresult;
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    char* result {};
    return result;
}

unsigned long _func_Iegen_Object_bytesCount(IEGenCObject cself, IEGenCObject* _Nonnull err) {
    std::shared_ptr<iegen::Object> ctocxxcself;
    ctocxxcself = downcast_Iegen_Object(cself);
    try {
        const auto& result = ctocxxcself->bytesCount();
        
        return result;
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    unsigned long result {};
    return result;
}


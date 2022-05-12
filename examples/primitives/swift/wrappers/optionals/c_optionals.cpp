/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 05/12/2022-10:26.
 * Please do not change it manually.
 */

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cxxabi.h>
#include <memory>
#include <type_traits>
#include "swift/wrappers/optionals/c_optionals.h"
#include "cxx/optionals/optionals.hpp"
#include "cxx/simple/task.hpp"
#include "cxx/enums/color.hpp"
#include "cxx/simple/root.hpp"
#include "cxx/simple/project.hpp"
#include "cxx/getters/person.hpp"

extern const char* CPPBIND_CPPBIND_EXAMPLE_TASK;
extern const char* CPPBIND_STD_STDEXCEPTION;
extern const char* CPPBIND_CPPBIND_EXAMPLE_PROJECT;
extern const char* CPPBIND_CPPBIND_EXAMPLE_PERSON;

const char* CPPBIND_CPPBIND_EXAMPLE_OPTIONALS = "cppbind::example::Optionals";

using namespace cppbind::example;

void release_CppbindExample_Optionals(CppBindCObject cself, bool owner) {
    if (owner) {
        delete static_cast<cppbind::example::Optionals*>(cself.ptr);
    }
    free(cself.type);
}

CppBindCObject _func_CppbindExample_Optionals_optionalPtrWithNullptrDefault(CppBindCObject cself, CppBindCObject task, CppBindCObject* _Nonnull cppbind_err) {
    
    auto ctocxxtask = static_cast<cppbind::example::Task*>(task.ptr);
  
    auto ctocxxcself = static_cast<cppbind::example::Optionals*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->optionalPtrWithNullptrDefault(ctocxxtask);
        
        char* type_result = strdup(CPPBIND_CPPBIND_EXAMPLE_TASK);
        auto value_ptr_result = const_cast<cppbind::example::Task*>(result);
        CppBindCObject cxxtocresult = {type_result, value_ptr_result};
        return cxxtocresult;
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    CppBindCObject result {};
    return result;
}

CppBindCObject _func_CppbindExample_Optionals_optionalPtrWithNullDefault(CppBindCObject cself, CppBindCObject task, CppBindCObject* _Nonnull cppbind_err) {
    
    auto ctocxxtask = static_cast<cppbind::example::Task*>(task.ptr);
  
    auto ctocxxcself = static_cast<cppbind::example::Optionals*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->optionalPtrWithNullDefault(ctocxxtask);
        
        char* type_result = strdup(CPPBIND_CPPBIND_EXAMPLE_TASK);
        auto value_ptr_result = const_cast<cppbind::example::Task*>(result);
        CppBindCObject cxxtocresult = {type_result, value_ptr_result};
        return cxxtocresult;
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    CppBindCObject result {};
    return result;
}

int _func_CppbindExample_Optionals_optionalIntWithDefault(CppBindCObject cself, int value, CppBindCObject* _Nonnull cppbind_err) {
  
    auto ctocxxcself = static_cast<cppbind::example::Optionals*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->optionalIntWithDefault(value);
        
        return result;
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    int result {};
    return result;
}

long _func_CppbindExample_Optionals_optionalLongWithDefault(CppBindCObject cself, long value, CppBindCObject* _Nonnull cppbind_err) {
  
    auto ctocxxcself = static_cast<cppbind::example::Optionals*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->optionalLongWithDefault(value);
        
        return result;
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    long result {};
    return result;
}

double _func_CppbindExample_Optionals_optionalDoubleWithDefault(CppBindCObject cself, double value, CppBindCObject* _Nonnull cppbind_err) {
  
    auto ctocxxcself = static_cast<cppbind::example::Optionals*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->optionalDoubleWithDefault(value);
        
        return result;
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    double result {};
    return result;
}

float _func_CppbindExample_Optionals_optionalFloatWithDefault(CppBindCObject cself, float value, CppBindCObject* _Nonnull cppbind_err) {
  
    auto ctocxxcself = static_cast<cppbind::example::Optionals*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->optionalFloatWithDefault(value);
        
        return result;
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    float result {};
    return result;
}

bool _func_CppbindExample_Optionals_optionalBoolWithDefault(CppBindCObject cself, bool value, CppBindCObject* _Nonnull cppbind_err) {
  
    auto ctocxxcself = static_cast<cppbind::example::Optionals*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->optionalBoolWithDefault(value);
        
        return result;
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    bool result {};
    return result;
}

char* _Nonnull _func_CppbindExample_Optionals_optionalStringWithDefault(CppBindCObject cself, char* _Nonnull optional_str, CppBindCObject* _Nonnull cppbind_err) {
    auto ctocxxoptional_str = std::string(optional_str);
    free(optional_str);
  
    auto ctocxxcself = static_cast<cppbind::example::Optionals*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->optionalStringWithDefault(ctocxxoptional_str);
        auto cxxtocresult = strdup(result.data());
        return cxxtocresult;
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    char* result {};
    return result;
}

char _func_CppbindExample_Optionals_optionalCharWithDefault(CppBindCObject cself, char symbol, CppBindCObject* _Nonnull cppbind_err) {
  
    auto ctocxxcself = static_cast<cppbind::example::Optionals*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->optionalCharWithDefault(symbol);
        
        return result;
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    char result {};
    return result;
}

unsigned char _func_CppbindExample_Optionals_optionalUnsignedCharWithDefault(CppBindCObject cself, unsigned char num, CppBindCObject* _Nonnull cppbind_err) {
  
    auto ctocxxcself = static_cast<cppbind::example::Optionals*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->optionalUnsignedCharWithDefault(num);
        
        return result;
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    unsigned char result {};
    return result;
}

const char * _Nonnull _func_CppbindExample_Optionals_optionalCharPointerWithDefault(CppBindCObject cself, const char * _Nonnull optional_str, CppBindCObject* _Nonnull cppbind_err) {
  
    auto ctocxxcself = static_cast<cppbind::example::Optionals*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->optionalCharPointerWithDefault(optional_str);
        
        return result;
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    const char * result {};
    return result;
}

int _func_CppbindExample_Optionals_optionalEnumWithDefault(CppBindCObject cself, int c, CppBindCObject* _Nonnull cppbind_err) {
    auto ctocxxc = static_cast<cppbind::example::Color>(c);
  
    auto ctocxxcself = static_cast<cppbind::example::Optionals*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->optionalEnumWithDefault(ctocxxc);
        int cxxtocresult = static_cast<int>(result);
        return cxxtocresult;
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    int result {};
    return result;
}

CppBindCObject _func_CppbindExample_Optionals_singleComplexDefaultValue_1(CppBindCObject cself, CppBindCObject* _Nonnull cppbind_err) {
    auto ctocxxcself = static_cast<cppbind::example::Optionals*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->singleComplexDefaultValue();
        
        char* type_result = strdup(CPPBIND_CPPBIND_EXAMPLE_TASK);
        auto value_ptr_result = const_cast<cppbind::example::Task*>(new cppbind::example::Task(result));
        CppBindCObject cxxtocresult = {type_result, value_ptr_result};
        return cxxtocresult;
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    CppBindCObject result {};
    return result;
}

CppBindCObject _func_CppbindExample_Optionals_singleComplexDefaultValue(CppBindCObject cself, CppBindCObject task, CppBindCObject* _Nonnull cppbind_err) {
    
    auto& ctocxxtask = *static_cast<cppbind::example::Task*>(task.ptr);
  
    auto ctocxxcself = static_cast<cppbind::example::Optionals*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->singleComplexDefaultValue(ctocxxtask);
        
        char* type_result = strdup(CPPBIND_CPPBIND_EXAMPLE_TASK);
        auto value_ptr_result = const_cast<cppbind::example::Task*>(new cppbind::example::Task(result));
        CppBindCObject cxxtocresult = {type_result, value_ptr_result};
        return cxxtocresult;
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    CppBindCObject result {};
    return result;
}

char* _Nonnull _func_CppbindExample_Optionals_multipleMixedDefaultValues_1(CppBindCObject cself, CppBindCObject* _Nonnull cppbind_err) {
    auto ctocxxcself = static_cast<cppbind::example::Optionals*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->multipleMixedDefaultValues();
        auto cxxtocresult = strdup(result.data());
        return cxxtocresult;
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    char* result {};
    return result;
}

char* _Nonnull _func_CppbindExample_Optionals_multipleMixedDefaultValues_2(CppBindCObject cself, CppBindCObject task, int i, CppBindCObject* _Nonnull cppbind_err) {
    
    auto& ctocxxtask = *static_cast<cppbind::example::Task*>(task.ptr);
  
  
    auto ctocxxcself = static_cast<cppbind::example::Optionals*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->multipleMixedDefaultValues(ctocxxtask, i);
        auto cxxtocresult = strdup(result.data());
        return cxxtocresult;
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    char* result {};
    return result;
}

char* _Nonnull _func_CppbindExample_Optionals_multipleMixedDefaultValues(CppBindCObject cself, CppBindCObject task, int i, CppBindCObject r, CppBindCObject* _Nonnull cppbind_err) {
    
    auto& ctocxxtask = *static_cast<cppbind::example::Task*>(task.ptr);
  
  
    
    auto& ctocxxr = *static_cast<cppbind::example::Root*>(r.ptr);
  
    auto ctocxxcself = static_cast<cppbind::example::Optionals*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->multipleMixedDefaultValues(ctocxxtask, i, ctocxxr);
        auto cxxtocresult = strdup(result.data());
        return cxxtocresult;
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    char* result {};
    return result;
}

CppBindCObject create_CppbindExample_Optionals_1(CppBindCObject* _Nonnull cppbind_err) {
    try {
        auto this_object = new cppbind::example::Optionals();
        return {strdup(CPPBIND_CPPBIND_EXAMPLE_OPTIONALS), this_object};
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    CppBindCObject result {};
    return result;
}

CppBindCObject create_CppbindExample_Optionals_2(CppBindCObject task, int i, CppBindCObject* _Nonnull cppbind_err) {
    
    auto& ctocxxtask = *static_cast<cppbind::example::Task*>(task.ptr);
    try {
        auto this_object = new cppbind::example::Optionals(ctocxxtask, i);
        return {strdup(CPPBIND_CPPBIND_EXAMPLE_OPTIONALS), this_object};
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    CppBindCObject result {};
    return result;
}

CppBindCObject create_CppbindExample_Optionals(CppBindCObject task, int i, CppBindCObject r, CppBindCObject* _Nonnull cppbind_err) {
    
    auto& ctocxxtask = *static_cast<cppbind::example::Task*>(task.ptr);
    
    auto& ctocxxr = *static_cast<cppbind::example::Root*>(r.ptr);
    try {
        auto this_object = new cppbind::example::Optionals(ctocxxtask, i, ctocxxr);
        return {strdup(CPPBIND_CPPBIND_EXAMPLE_OPTIONALS), this_object};
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    CppBindCObject result {};
    return result;
}

int _func_CppbindExample_Optionals_optionalEnumWithDefaultAndFieldPrefix(CppBindCObject cself, int c, CppBindCObject* _Nonnull cppbind_err) {
    auto ctocxxc = static_cast<cppbind::example::ColorShade>(c);
  
    auto ctocxxcself = static_cast<cppbind::example::Optionals*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->optionalEnumWithDefaultAndFieldPrefix(ctocxxc);
        int cxxtocresult = static_cast<int>(result);
        return cxxtocresult;
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    int result {};
    return result;
}

int _func_CppbindExample_Optionals_optionalEnumWithInternalDefault(CppBindCObject cself, int c, CppBindCObject* _Nonnull cppbind_err) {
    auto ctocxxc = static_cast<cppbind::example::ColorShade>(c);
  
    auto ctocxxcself = static_cast<cppbind::example::Optionals*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->optionalEnumWithInternalDefault(ctocxxc);
        int cxxtocresult = static_cast<int>(result);
        return cxxtocresult;
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    int result {};
    return result;
}

char* _Nonnull _func_CppbindExample_Optionals_optionalStringViewWithDefault(CppBindCObject cself, char* _Nonnull optional_str, CppBindCObject* _Nonnull cppbind_err) {
    auto ctocxxoptional_str = std::string(optional_str);
    free(optional_str);
  
    auto ctocxxcself = static_cast<cppbind::example::Optionals*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->optionalStringViewWithDefault(ctocxxoptional_str);
        auto cxxtocresult = strdup(result.data());
        return cxxtocresult;
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    char* result {};
    return result;
}

CppBindCObject _func_CppbindExample_Optionals_optionalFDPtrWithNullptrDefault(CppBindCObject cself, CppBindCObject project, CppBindCObject* _Nonnull cppbind_err) {
    
    auto ctocxxproject = static_cast<cppbind::example::Project*>(project.ptr);
  
    auto ctocxxcself = static_cast<cppbind::example::Optionals*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->optionalFDPtrWithNullptrDefault(ctocxxproject);
        
        char* type_result = strdup(CPPBIND_CPPBIND_EXAMPLE_PROJECT);
        auto value_ptr_result = const_cast<cppbind::example::Project*>(result);
        CppBindCObject cxxtocresult = {type_result, value_ptr_result};
        return cxxtocresult;
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    CppBindCObject result {};
    return result;
}

CppBindCObject _func_CppbindExample_Optionals_optionalSharedPtrWithNullptrDefault(CppBindCObject cself, CppBindCObject person, CppBindCObject* _Nonnull cppbind_err) {
    
    std::shared_ptr<cppbind::example::Person> ctocxxperson = nullptr;
    if (person.ptr) {
        ctocxxperson = *static_cast<std::shared_ptr<cppbind::example::Person>*>(person.ptr);
    }
  
    auto ctocxxcself = static_cast<cppbind::example::Optionals*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->optionalSharedPtrWithNullptrDefault(ctocxxperson);
        
        char* type_result = nullptr;
        void* cxxtocresult_ptr = nullptr;
        if (result) {
            cxxtocresult_ptr = new std::shared_ptr<cppbind::example::Person>(std::const_pointer_cast<cppbind::example::Person>(result));
        } else {
            type_result = strdup("cppbind::example::Person");
        }
        CppBindCObject cxxtocresult = {type_result, cxxtocresult_ptr};
        return cxxtocresult;
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    CppBindCObject result {};
    return result;
}


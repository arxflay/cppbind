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
#include "swift/wrappers/misc/c_yaml_example.h"
#include "cxx/misc/yaml_example.hpp"

extern const char* CPPBIND_STD_STDEXCEPTION;

const char* CPPBIND_CPPBIND_EXAMPLE_WITHEXTERNALAPICOMMENTS = "cppbind::example::WithExternalAPIComments";
const char* CPPBIND_CPPBIND_EXAMPLE_ADDERINT = "cppbind::example::Adder<int>";
const char* CPPBIND_CPPBIND_EXAMPLE_ADDERDOUBLE = "cppbind::example::Adder<double>";

using namespace cppbind::example;

void release_CppbindExample_WithExternalAPIComments(CppBindCObject cself, bool owner) {
    if (owner) {
        delete static_cast<cppbind::example::WithExternalAPIComments*>(cself.ptr);
    }
    free(cself.type);
}

CppBindCObject create_CppbindExample_WithExternalAPIComments(char* _Nonnull s, CppBindCObject* _Nonnull cppbind_err) {
    auto ctocxxs = std::string(s);
    free(s);
    try {
        auto this_object = new cppbind::example::WithExternalAPIComments(ctocxxs);
        return {strdup(CPPBIND_CPPBIND_EXAMPLE_WITHEXTERNALAPICOMMENTS), this_object};
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    CppBindCObject result {};
    return result;
}

int _func_CppbindExample_WithExternalAPIComments_retInt(int n, CppBindCObject* _Nonnull cppbind_err) {
  
    try {
        const auto& result = cppbind::example::WithExternalAPIComments::retInt(n);
        
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

char* _Nonnull _prop_get_CppbindExample_WithExternalAPIComments_str(CppBindCObject cself, CppBindCObject* _Nonnull cppbind_err) {
    auto ctocxxcself = static_cast<cppbind::example::WithExternalAPIComments*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->str();
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

void _prop_set_CppbindExample_WithExternalAPIComments_str(CppBindCObject cself, char* _Nonnull s, CppBindCObject* _Nonnull cppbind_err) {
    
    auto ctocxxcself = static_cast<cppbind::example::WithExternalAPIComments*>(cself.ptr);
    auto ctocxxs = std::string(s);
    free(s);
    try {
        ctocxxcself->setStr(ctocxxs);
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
}

int _func_CppbindExample_WithExternalAPIComments_maxInt(int a, int b, CppBindCObject* _Nonnull cppbind_err) {
  
  
    try {
        const auto& result = cppbind::example::WithExternalAPIComments::max<int>(a, b);
        
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

char* _Nonnull _func_CppbindExample_WithExternalAPIComments_maxString(char* _Nonnull a, char* _Nonnull b, CppBindCObject* _Nonnull cppbind_err) {
    auto ctocxxa = std::string(a);
    free(a);
  
    auto ctocxxb = std::string(b);
    free(b);
  
    try {
        const auto& result = cppbind::example::WithExternalAPIComments::max<std::string>(ctocxxa, ctocxxb);
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

void release_CppbindExample_AdderInt(CppBindCObject cself, bool owner) {
    if (owner) {
        delete static_cast<cppbind::example::Adder<int>*>(cself.ptr);
    }
    free(cself.type);
}

int _func_CppbindExample_AdderInt_add(int a, int b, CppBindCObject* _Nonnull cppbind_err) {
  
  
    try {
        const auto& result = cppbind::example::Adder<int>::add(a, b);
        
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

void release_CppbindExample_AdderDouble(CppBindCObject cself, bool owner) {
    if (owner) {
        delete static_cast<cppbind::example::Adder<double>*>(cself.ptr);
    }
    free(cself.type);
}

double _func_CppbindExample_AdderDouble_add(double a, double b, CppBindCObject* _Nonnull cppbind_err) {
  
  
    try {
        const auto& result = cppbind::example::Adder<double>::add(a, b);
        
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


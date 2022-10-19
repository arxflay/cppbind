/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 10/13/2022-14:16.
 * Please do not change it manually.
 */

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cxxabi.h>
#include <memory>
#include <type_traits>
#include "swift/wrappers/nested_types/c_swift_template_list.h"
#include "swift/wrappers/cppbind_wrapper_helper.hpp"
#include "cxx/nested_types/template_list.hpp"

extern const char* CPPBIND_STD_STDEXCEPTION;

const char* CPPBIND_CPPBIND_EXAMPLE_TEMPLATELISTINT = "cppbind::example::TemplateList<int>";
const char* CPPBIND_TEMPLATELISTINT_ITEM = "cppbind::example::TemplateList<int>::Item";
const char* CPPBIND_CPPBIND_EXAMPLE_TEMPLATELISTDOUBLE = "cppbind::example::TemplateList<double>";
const char* CPPBIND_TEMPLATELISTDOUBLE_ITEM = "cppbind::example::TemplateList<double>::Item";

void release_CppbindExample_TemplateListInt(CppBindCObject cself, bool owner) {
    using namespace cppbind::example;
    if (owner) {
        delete static_cast<cppbind::example::TemplateList<int>*>(cself.ptr);
    }
    free(cself.type);
}

void release_TemplateListInt_Item(CppBindCObject cself, bool owner) {
    if (owner) {
        delete static_cast<cppbind::example::TemplateList<int>::Item*>(cself.ptr);
    }
    free(cself.type);
}

int _prop_get_TemplateListInt_Item_value(CppBindCObject cself) {
    auto ctocxxcself = static_cast<cppbind::example::TemplateList<int>::Item*>(cself.ptr);
    decltype(auto) result = ctocxxcself->value;
    
    return result;
}

void _prop_set_TemplateListInt_Item_value(CppBindCObject cself, int value) {
    
    auto ctocxxcself = static_cast<cppbind::example::TemplateList<int>::Item*>(cself.ptr);
    
    ctocxxcself->value = value;
}

CppBindCObject create_TemplateListInt_Item(int v, CppBindCObject* _Nonnull cppbind_err) {
    try {
        auto this_object = new cppbind::example::TemplateList<int>::Item(v);
        return {strdup(CPPBIND_TEMPLATELISTINT_ITEM), this_object};
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    CppBindCObject result {};
    return result;
}

CppBindCObject create_CppbindExample_TemplateListInt(CppBindCObject* _Nonnull cppbind_err) {
    using namespace cppbind::example;
    try {
        auto this_object = new cppbind::example::TemplateList<int>();
        return {strdup(CPPBIND_CPPBIND_EXAMPLE_TEMPLATELISTINT), this_object};
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    CppBindCObject result {};
    return result;
}

void release_CppbindExample_TemplateListDouble(CppBindCObject cself, bool owner) {
    using namespace cppbind::example;
    if (owner) {
        delete static_cast<cppbind::example::TemplateList<double>*>(cself.ptr);
    }
    free(cself.type);
}

void release_TemplateListDouble_Item(CppBindCObject cself, bool owner) {
    if (owner) {
        delete static_cast<cppbind::example::TemplateList<double>::Item*>(cself.ptr);
    }
    free(cself.type);
}

double _prop_get_TemplateListDouble_Item_value(CppBindCObject cself) {
    auto ctocxxcself = static_cast<cppbind::example::TemplateList<double>::Item*>(cself.ptr);
    decltype(auto) result = ctocxxcself->value;
    
    return result;
}

void _prop_set_TemplateListDouble_Item_value(CppBindCObject cself, double value) {
    
    auto ctocxxcself = static_cast<cppbind::example::TemplateList<double>::Item*>(cself.ptr);
    
    ctocxxcself->value = value;
}

CppBindCObject create_TemplateListDouble_Item(double v, CppBindCObject* _Nonnull cppbind_err) {
    try {
        auto this_object = new cppbind::example::TemplateList<double>::Item(v);
        return {strdup(CPPBIND_TEMPLATELISTDOUBLE_ITEM), this_object};
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    CppBindCObject result {};
    return result;
}

CppBindCObject create_CppbindExample_TemplateListDouble(CppBindCObject* _Nonnull cppbind_err) {
    using namespace cppbind::example;
    try {
        auto this_object = new cppbind::example::TemplateList<double>();
        return {strdup(CPPBIND_CPPBIND_EXAMPLE_TEMPLATELISTDOUBLE), this_object};
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    CppBindCObject result {};
    return result;
}


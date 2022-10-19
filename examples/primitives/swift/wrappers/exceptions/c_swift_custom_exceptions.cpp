/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 10/17/2022-16:23.
 * Please do not change it manually.
 */

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cxxabi.h>
#include <memory>
#include <type_traits>
#include "swift/wrappers/exceptions/c_swift_custom_exceptions.h"
#include "swift/wrappers/cppbind_wrapper_helper.hpp"
#include "cxx/exceptions/exceptions.hpp"

extern const char* CPPBIND_STD_STDEXCEPTION;

const char* CPPBIND_CPPBIND_EXAMPLE_SIMPLEBASEEXCEPTION = "cppbind::example::SimpleBaseException";
const char* CPPBIND_CPPBIND_EXAMPLE_SIMPLECHILDEXCEPTION = "cppbind::example::SimpleChildException";

void release_CppbindExample_SimpleBaseException(CppBindCObject cself, bool owner) {
    using namespace cppbind::example;
    static_assert(std::has_virtual_destructor<cppbind::example::SimpleBaseException>::value, "cppbind::example::SimpleBaseException type must have virtual destructor");
    if (owner) {
        if (strcmp(cself.type, CPPBIND_CPPBIND_EXAMPLE_SIMPLEBASEEXCEPTION) == 0)
            delete static_cast<cppbind::example::SimpleBaseException*>(cself.ptr);
        else if (strcmp(cself.type, CPPBIND_CPPBIND_EXAMPLE_SIMPLECHILDEXCEPTION) == 0)
            delete static_cast<cppbind::example::SimpleChildException*>(cself.ptr);
        else {
            std::cerr << "Unexpected object type: " << cself.type << std::endl;
            exit(1);
        }
    }
    free(cself.type);
}

cppbind::example::SimpleBaseException* recover_obj_from_CppbindExample_SimpleBaseException(CppBindCObject cppbindObj) {
    if (cppbindObj.ptr) {
        if (strcmp(cppbindObj.type, CPPBIND_CPPBIND_EXAMPLE_SIMPLEBASEEXCEPTION) == 0)
            return static_cast<cppbind::example::SimpleBaseException*>(cppbindObj.ptr);
        else if (strcmp(cppbindObj.type, CPPBIND_CPPBIND_EXAMPLE_SIMPLECHILDEXCEPTION) == 0)
            return static_cast<cppbind::example::SimpleChildException*>(cppbindObj.ptr);
        else {
            std::cerr << "Unexpected object type: " << cppbindObj.type << std::endl;
            exit(1);
        }
    }
    return nullptr;
}

CppBindCObject create_CppbindExample_SimpleBaseException(int err_num, CppBindCObject* _Nonnull cppbind_err) {
    using namespace cppbind::example;
    try {
        auto this_object = new cppbind::example::SimpleBaseException(err_num);
        return {strdup(CPPBIND_CPPBIND_EXAMPLE_SIMPLEBASEEXCEPTION), this_object};
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    CppBindCObject result {};
    return result;
}

int _func_CppbindExample_SimpleBaseException_errNum(CppBindCObject cself, CppBindCObject* _Nonnull cppbind_err) {
    using namespace cppbind::example;
    cppbind::example::SimpleBaseException* ctocxxcself = recover_obj_from_CppbindExample_SimpleBaseException(cself);
    try {
        decltype(auto) result = ctocxxcself->errNum();
        
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

CppBindCObject create_CppbindExample_SimpleChildException(int err_num, CppBindCObject* _Nonnull cppbind_err) {
    using namespace cppbind::example;
    try {
        auto this_object = new cppbind::example::SimpleChildException(err_num);
        return {strdup(CPPBIND_CPPBIND_EXAMPLE_SIMPLECHILDEXCEPTION), this_object};
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    CppBindCObject result {};
    return result;
}

int _func_CppbindExample_SimpleChildException_errNum(CppBindCObject cself, CppBindCObject* _Nonnull cppbind_err) {
    using namespace cppbind::example;
    auto ctocxxcself = static_cast<cppbind::example::SimpleChildException*>(cself.ptr);
    try {
        decltype(auto) result = ctocxxcself->errNum();
        
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


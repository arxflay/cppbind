/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 04/06/2022-15:19.
 * Please do not change it manually.
 */

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cxxabi.h>
#include <memory>
#include <type_traits>
#include "swift/wrappers/exceptions/c_throw_exceptions.h"
#include "cxx/exceptions/exceptions.hpp"
#include "cxx/simple/task.hpp"

extern const char* IEGEN_STD_STDINVALIDARGUMENT;
extern const char* IEGEN_STD_STDEXCEPTION;
extern const char* IEGEN_STD_STDOUTOFRANGE;
extern const char* IEGEN_IEGEN_EXAMPLE_SYSTEMERROR;
extern const char* IEGEN_IEGEN_EXAMPLE_TASK;

const char* IEGEN_IEGEN_EXCEPTIONS_THROWEXC = "iegen::exceptions::ThrowExc";

using namespace iegen::exceptions;

void _func_IegenExceptions_throwExc(bool do_throw, IEGenCObject* _Nonnull iegen_err) {
    
    try {
        throwExc(do_throw);
    } catch (const std::invalid_argument& e) {
        iegen_err->type = strdup(IEGEN_STD_STDINVALIDARGUMENT);
        iegen_err->ptr = new std::invalid_argument(e);
    } catch (const std::exception& e) {
        iegen_err->type = strdup(IEGEN_STD_STDEXCEPTION);
        iegen_err->ptr = new std::exception(e);
    } catch (...) {
        iegen_err->type = strdup("Uncaught Exception");
    }
}

void release_IegenExceptions_ThrowExc(IEGenCObject cself, bool owner) {
    if (owner) {
        delete static_cast<iegen::exceptions::ThrowExc*>(cself.ptr);
    }
    free(cself.type);
}

IEGenCObject create_IegenExceptions_ThrowExc(bool do_throw, IEGenCObject* _Nonnull iegen_err) {
    try {
        auto this_object = new iegen::exceptions::ThrowExc(do_throw);
        return {strdup(IEGEN_IEGEN_EXCEPTIONS_THROWEXC), this_object};
    } catch (const std::invalid_argument& e) {
        iegen_err->type = strdup(IEGEN_STD_STDINVALIDARGUMENT);
        iegen_err->ptr = new std::invalid_argument(e);
    } catch (const std::exception& e) {
        iegen_err->type = strdup(IEGEN_STD_STDEXCEPTION);
        iegen_err->ptr = new std::exception(e);
    } catch (...) {
        iegen_err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}

int _func_IegenExceptions_ThrowExc_getByKey(IEGenCDataMap m, int key, IEGenCObject* _Nonnull iegen_err) {
    std::map<int, int> ctocxxm;

    for (size_t _i_m = 0; _i_m < m.size; ++_i_m) {
        auto ktmp_m = reinterpret_cast<int*>(m.keys)[_i_m];
        auto vtmp_m = reinterpret_cast<int*>(m.values)[_i_m];
        
        
        ctocxxm.insert({ ktmp_m, vtmp_m });
    }
  
  
    try {
        const auto& result = iegen::exceptions::ThrowExc::getByKey(ctocxxm, key);
        
        return result;
    } catch (const std::out_of_range& e) {
        iegen_err->type = strdup(IEGEN_STD_STDOUTOFRANGE);
        iegen_err->ptr = new std::out_of_range(e);
    } catch (const iegen::example::SystemError& e) {
        iegen_err->type = strdup(IEGEN_IEGEN_EXAMPLE_SYSTEMERROR);
        iegen_err->ptr = new iegen::example::SystemError(e);
    } catch (const std::exception& e) {
        iegen_err->type = strdup(IEGEN_STD_STDEXCEPTION);
        iegen_err->ptr = new std::exception(e);
    } catch (...) {
        iegen_err->type = strdup("Uncaught Exception");
    }
    int result {};
    return result;
}

char* _Nonnull _func_IegenExceptions_ThrowExc_throwsWithReturnValueString(IEGenCObject* _Nonnull iegen_err) {
    try {
        const auto& result = iegen::exceptions::ThrowExc::throwsWithReturnValueString();
        auto cxxtocresult = strdup(result.data());
        return cxxtocresult;
    } catch (const std::invalid_argument& e) {
        iegen_err->type = strdup(IEGEN_STD_STDINVALIDARGUMENT);
        iegen_err->ptr = new std::invalid_argument(e);
    } catch (const std::exception& e) {
        iegen_err->type = strdup(IEGEN_STD_STDEXCEPTION);
        iegen_err->ptr = new std::exception(e);
    } catch (...) {
        iegen_err->type = strdup("Uncaught Exception");
    }
    char* result {};
    return result;
}

IEGenCObject _func_IegenExceptions_ThrowExc_throwsWithReturnValuePtr(IEGenCObject* _Nonnull iegen_err) {
    try {
        const auto& result = iegen::exceptions::ThrowExc::throwsWithReturnValuePtr();
        
        char* type_result = strdup(IEGEN_IEGEN_EXAMPLE_TASK);
        auto value_ptr_result = const_cast<iegen::example::Task*>(result);
        IEGenCObject cxxtocresult = {type_result, value_ptr_result};
        return cxxtocresult;
    } catch (const std::invalid_argument& e) {
        iegen_err->type = strdup(IEGEN_STD_STDINVALIDARGUMENT);
        iegen_err->ptr = new std::invalid_argument(e);
    } catch (const std::exception& e) {
        iegen_err->type = strdup(IEGEN_STD_STDEXCEPTION);
        iegen_err->ptr = new std::exception(e);
    } catch (...) {
        iegen_err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}

char* _Nonnull _prop_get_IegenExceptions_ThrowExc_prop1(IEGenCObject cself, IEGenCObject* _Nonnull iegen_err) {
    auto ctocxxcself = static_cast<iegen::exceptions::ThrowExc*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->prop1();
        auto cxxtocresult = strdup(result.data());
        return cxxtocresult;
    } catch (const std::exception& e) {
        iegen_err->type = strdup(IEGEN_STD_STDEXCEPTION);
        iegen_err->ptr = new std::exception(e);
    } catch (...) {
        iegen_err->type = strdup("Uncaught Exception");
    }
    char* result {};
    return result;
}

void _prop_set_IegenExceptions_ThrowExc_prop1(IEGenCObject cself, char* _Nonnull s, IEGenCObject* _Nonnull iegen_err) {
    
    auto ctocxxcself = static_cast<iegen::exceptions::ThrowExc*>(cself.ptr);
    auto ctocxxs = std::string(s);
    free(s);
    try {
        ctocxxcself->setProp1(ctocxxs);
    } catch (const std::exception& e) {
        iegen_err->type = strdup(IEGEN_STD_STDEXCEPTION);
        iegen_err->ptr = new std::exception(e);
    } catch (...) {
        iegen_err->type = strdup("Uncaught Exception");
    }
}


/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 04/06/2022-15:20.
 * Please do not change it manually.
 */

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cxxabi.h>
#include <memory>
#include <type_traits>
#include "swift/wrappers/simple/c_holder.h"
#include "cxx/simple/holder.hpp"
#include "cxx/simple/task.hpp"

extern const char* IEGEN_STD_STDEXCEPTION;
extern const char* IEGEN_IEGEN_EXAMPLE_TASK;

const char* IEGEN_IEGEN_EXAMPLE_HOLDER = "iegen::example::Holder";

using namespace iegen::example;

void release_IegenExample_Holder(IEGenCObject cself, bool owner) {
    if (owner) {
        delete static_cast<iegen::example::Holder*>(cself.ptr);
    }
    free(cself.type);
}

IEGenCObject create_IegenExample_Holder(IEGenCObject* _Nonnull iegen_err) {
    try {
        auto this_object = new iegen::example::Holder();
        return {strdup(IEGEN_IEGEN_EXAMPLE_HOLDER), this_object};
    } catch (const std::exception& e) {
        iegen_err->type = strdup(IEGEN_STD_STDEXCEPTION);
        iegen_err->ptr = new std::exception(e);
    } catch (...) {
        iegen_err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}

IEGenCObject _prop_get_IegenExample_Holder_task(IEGenCObject cself, IEGenCObject* _Nonnull iegen_err) {
    auto ctocxxcself = static_cast<iegen::example::Holder*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->task();
        
        char* type_result = strdup(IEGEN_IEGEN_EXAMPLE_TASK);
        auto value_ptr_result = const_cast<iegen::example::Task*>(&result);
        IEGenCObject cxxtocresult = {type_result, value_ptr_result};
        return cxxtocresult;
    } catch (const std::exception& e) {
        iegen_err->type = strdup(IEGEN_STD_STDEXCEPTION);
        iegen_err->ptr = new std::exception(e);
    } catch (...) {
        iegen_err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}


/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 03/16/2022-09:09.
 * Please do not change it manually.
 */

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cxxabi.h>
#include <memory>
#include <type_traits>
#include "swift/wrappers/templates/c_stack.h"
#include "cxx/templates/stack.hpp"
#include "cxx/simple/project.hpp"
#include "cxx/simple/task.hpp"
#include "cxx/getters/number.hpp"

using namespace iegen::example;

void release_IegenExample_StackPrj(IEGenCObject cself, bool owner) {
    if (owner) {
        delete static_cast<iegen::example::Stack<iegen::example::Project>*>(cself.ptr);
    }
    free(cself.type);
}

IEGenCObject create_IegenExample_StackPrj(IEGenCObject* _Nonnull err) {
    try {
        auto this_object = new iegen::example::Stack<iegen::example::Project>();
        return {strdup("iegen::example::Stack<iegen::example::Project>"), this_object};
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}

IEGenCObject create_IegenExample_StackPrj_1(IEGenCObject st, IEGenCObject* _Nonnull err) {
    
    auto& ctocxxst = *static_cast<iegen::example::Project*>(st.ptr);
    try {
        auto this_object = new iegen::example::Stack<iegen::example::Project>(ctocxxst);
        return {strdup("iegen::example::Stack<iegen::example::Project>"), this_object};
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}

void _func_IegenExample_StackPrj_push(IEGenCObject cself, IEGenCObject item, IEGenCObject* _Nonnull err) {
    
    auto ctocxxitem = static_cast<iegen::example::Project*>(item.ptr);
  
    auto ctocxxcself = static_cast<iegen::example::Stack<iegen::example::Project>*>(cself.ptr);
    try {
        ctocxxcself->push(ctocxxitem);
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
}

void _func_IegenExample_StackPrj_pop(IEGenCObject cself, IEGenCObject* _Nonnull err) {
    auto ctocxxcself = static_cast<iegen::example::Stack<iegen::example::Project>*>(cself.ptr);
    try {
        ctocxxcself->pop();
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
}

IEGenCObject _func_IegenExample_StackPrj_top(IEGenCObject cself, IEGenCObject* _Nonnull err) {
    auto ctocxxcself = static_cast<iegen::example::Stack<iegen::example::Project>*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->top();
        
        char* type_result = strdup("iegen::example::Project");
        auto value_ptr_result = const_cast<iegen::example::Project*>(result);
        IEGenCObject cxxtocresult = {type_result, value_ptr_result};
        return cxxtocresult;
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}

bool _func_IegenExample_StackPrj_empty(IEGenCObject cself, IEGenCObject* _Nonnull err) {
    auto ctocxxcself = static_cast<iegen::example::Stack<iegen::example::Project>*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->empty();
        
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

void release_IegenExample_StackTask(IEGenCObject cself, bool owner) {
    if (owner) {
        delete static_cast<iegen::example::Stack<iegen::example::Task>*>(cself.ptr);
    }
    free(cself.type);
}

IEGenCObject create_IegenExample_StackTask(IEGenCObject* _Nonnull err) {
    try {
        auto this_object = new iegen::example::Stack<iegen::example::Task>();
        return {strdup("iegen::example::Stack<iegen::example::Task>"), this_object};
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}

IEGenCObject create_IegenExample_StackTask_1(IEGenCObject st, IEGenCObject* _Nonnull err) {
    
    auto& ctocxxst = *static_cast<iegen::example::Task*>(st.ptr);
    try {
        auto this_object = new iegen::example::Stack<iegen::example::Task>(ctocxxst);
        return {strdup("iegen::example::Stack<iegen::example::Task>"), this_object};
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}

void _func_IegenExample_StackTask_push(IEGenCObject cself, IEGenCObject item, IEGenCObject* _Nonnull err) {
    
    auto ctocxxitem = static_cast<iegen::example::Task*>(item.ptr);
  
    auto ctocxxcself = static_cast<iegen::example::Stack<iegen::example::Task>*>(cself.ptr);
    try {
        ctocxxcself->push(ctocxxitem);
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
}

void _func_IegenExample_StackTask_pop(IEGenCObject cself, IEGenCObject* _Nonnull err) {
    auto ctocxxcself = static_cast<iegen::example::Stack<iegen::example::Task>*>(cself.ptr);
    try {
        ctocxxcself->pop();
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
}

IEGenCObject _func_IegenExample_StackTask_top(IEGenCObject cself, IEGenCObject* _Nonnull err) {
    auto ctocxxcself = static_cast<iegen::example::Stack<iegen::example::Task>*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->top();
        
        char* type_result = strdup("iegen::example::Task");
        auto value_ptr_result = const_cast<iegen::example::Task*>(result);
        IEGenCObject cxxtocresult = {type_result, value_ptr_result};
        return cxxtocresult;
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}

bool _func_IegenExample_StackTask_empty(IEGenCObject cself, IEGenCObject* _Nonnull err) {
    auto ctocxxcself = static_cast<iegen::example::Stack<iegen::example::Task>*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->empty();
        
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

void release_IegenExample_StackNumInt(IEGenCObject cself, bool owner) {
    if (owner) {
        delete static_cast<iegen::example::Stack<iegen::example::Number<int>>*>(cself.ptr);
    }
    free(cself.type);
}

IEGenCObject create_IegenExample_StackNumInt(IEGenCObject* _Nonnull err) {
    try {
        auto this_object = new iegen::example::Stack<iegen::example::Number<int>>();
        return {strdup("iegen::example::Stack<iegen::example::Number<int>>"), this_object};
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}

IEGenCObject create_IegenExample_StackNumInt_1(IEGenCObject st, IEGenCObject* _Nonnull err) {
    
    auto& ctocxxst = *static_cast<iegen::example::Number<int>*>(st.ptr);
    try {
        auto this_object = new iegen::example::Stack<iegen::example::Number<int>>(ctocxxst);
        return {strdup("iegen::example::Stack<iegen::example::Number<int>>"), this_object};
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}

void _func_IegenExample_StackNumInt_push(IEGenCObject cself, IEGenCObject item, IEGenCObject* _Nonnull err) {
    
    auto ctocxxitem = static_cast<iegen::example::Number<int>*>(item.ptr);
  
    auto ctocxxcself = static_cast<iegen::example::Stack<iegen::example::Number<int>>*>(cself.ptr);
    try {
        ctocxxcself->push(ctocxxitem);
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
}

void _func_IegenExample_StackNumInt_pop(IEGenCObject cself, IEGenCObject* _Nonnull err) {
    auto ctocxxcself = static_cast<iegen::example::Stack<iegen::example::Number<int>>*>(cself.ptr);
    try {
        ctocxxcself->pop();
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
}

IEGenCObject _func_IegenExample_StackNumInt_top(IEGenCObject cself, IEGenCObject* _Nonnull err) {
    auto ctocxxcself = static_cast<iegen::example::Stack<iegen::example::Number<int>>*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->top();
        
        char* type_result = strdup("iegen::example::Number<int>");
        auto value_ptr_result = const_cast<iegen::example::Number<int>*>(result);
        IEGenCObject cxxtocresult = {type_result, value_ptr_result};
        return cxxtocresult;
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}

bool _func_IegenExample_StackNumInt_empty(IEGenCObject cself, IEGenCObject* _Nonnull err) {
    auto ctocxxcself = static_cast<iegen::example::Stack<iegen::example::Number<int>>*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->empty();
        
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


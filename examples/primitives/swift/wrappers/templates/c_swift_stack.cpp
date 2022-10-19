/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 10/17/2022-16:24.
 * Please do not change it manually.
 */

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cxxabi.h>
#include <memory>
#include <type_traits>
#include "swift/wrappers/templates/c_swift_stack.h"
#include "swift/wrappers/cppbind_wrapper_helper.hpp"
#include "cxx/templates/stack.hpp"
#include "cxx/simple/project.hpp"
#include "cxx/templates/stack_usage.hpp"
#include "cxx/simple/task.hpp"
#include "cxx/getters/number.hpp"

extern const char* CPPBIND_CPPBIND_EXAMPLE_MYSTACKPROJECT;
extern const char* CPPBIND_CPPBIND_EXAMPLE_PROJECT;
extern const char* CPPBIND_CPPBIND_EXAMPLE_MYSTACKTASK;
extern const char* CPPBIND_CPPBIND_EXAMPLE_TASK;
extern const char* CPPBIND_STD_STDEXCEPTION;
extern const char* CPPBIND_CPPBIND_EXAMPLE_NUMBERINT;

const char* CPPBIND_CPPBIND_EXAMPLE_STACKPRJ = "cppbind::example::Stack<cppbind::example::Project>";
const char* CPPBIND_CPPBIND_EXAMPLE_STACKTASK = "cppbind::example::Stack<cppbind::example::Task>";
const char* CPPBIND_CPPBIND_EXAMPLE_STACKNUMINT = "cppbind::example::Stack<cppbind::example::Number<int>>";

void release_CppbindExample_StackPrj(CppBindCObject cself, bool owner) {
    using namespace cppbind::example;
    static_assert(std::has_virtual_destructor<cppbind::example::Stack<cppbind::example::Project>>::value, "cppbind::example::Stack<cppbind::example::Project> type must have virtual destructor");
    if (owner) {
        if (strcmp(cself.type, CPPBIND_CPPBIND_EXAMPLE_STACKPRJ) == 0)
            delete static_cast<cppbind::example::Stack<cppbind::example::Project>*>(cself.ptr);
        else if (strcmp(cself.type, CPPBIND_CPPBIND_EXAMPLE_MYSTACKPROJECT) == 0)
            delete static_cast<cppbind::example::MyStack<cppbind::example::Project>*>(cself.ptr);
        else if (strcmp(cself.type, CPPBIND_CPPBIND_EXAMPLE_MYSTACKTASK) == 0)
            delete static_cast<cppbind::example::MyStack<cppbind::example::Task>*>(cself.ptr);
        else {
            std::cerr << "Unexpected object type: " << cself.type << std::endl;
            exit(1);
        }
    }
    free(cself.type);
}

cppbind::example::Stack<cppbind::example::Project>* recover_obj_from_CppbindExample_StackPrj(CppBindCObject cppbindObj) {
    if (cppbindObj.ptr) {
        if (strcmp(cppbindObj.type, CPPBIND_CPPBIND_EXAMPLE_STACKPRJ) == 0)
            return static_cast<cppbind::example::Stack<cppbind::example::Project>*>(cppbindObj.ptr);
        else if (strcmp(cppbindObj.type, CPPBIND_CPPBIND_EXAMPLE_MYSTACKPROJECT) == 0)
            return cppbind::safe_cast<cppbind::example::MyStack<cppbind::example::Project>, cppbind::example::Stack<cppbind::example::Project>>(cppbindObj.ptr);
        else if (strcmp(cppbindObj.type, CPPBIND_CPPBIND_EXAMPLE_MYSTACKTASK) == 0)
            return cppbind::safe_cast<cppbind::example::MyStack<cppbind::example::Task>, cppbind::example::Stack<cppbind::example::Project>>(cppbindObj.ptr);
        else {
            std::cerr << "Unexpected object type: " << cppbindObj.type << std::endl;
            exit(1);
        }
    }
    return nullptr;
}

CppBindCObject create_CppbindExample_StackPrj(CppBindCObject* _Nonnull cppbind_err) {
    using namespace cppbind::example;
    try {
        auto this_object = new cppbind::example::Stack<cppbind::example::Project>();
        return {strdup(CPPBIND_CPPBIND_EXAMPLE_STACKPRJ), this_object};
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    CppBindCObject result {};
    return result;
}

CppBindCObject create_CppbindExample_StackPrj1(CppBindCObject stack, CppBindCObject* _Nonnull cppbind_err) {
    using namespace cppbind::example;
    
    cppbind::example::Stack<cppbind::example::Project>* ctocxxstack_ptr = recover_obj_from_CppbindExample_StackPrj(stack);
    auto& ctocxxstack = *ctocxxstack_ptr;
    try {
        auto this_object = new cppbind::example::Stack<cppbind::example::Project>(ctocxxstack);
        return {strdup(CPPBIND_CPPBIND_EXAMPLE_STACKPRJ), this_object};
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    CppBindCObject result {};
    return result;
}

CppBindCObject create_CppbindExample_StackPrj2(CppBindCObject st, CppBindCObject* _Nonnull cppbind_err) {
    using namespace cppbind::example;
    
    auto ctocxxst = static_cast<cppbind::example::Project*>(st.ptr);
    try {
        auto this_object = new cppbind::example::Stack<cppbind::example::Project>(ctocxxst);
        return {strdup(CPPBIND_CPPBIND_EXAMPLE_STACKPRJ), this_object};
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    CppBindCObject result {};
    return result;
}

void _func_CppbindExample_StackPrj_push(CppBindCObject cself, CppBindCObject item, CppBindCObject* _Nonnull cppbind_err) {
    using namespace cppbind::example;
    
    auto ctocxxitem = static_cast<cppbind::example::Project*>(item.ptr);

    cppbind::example::Stack<cppbind::example::Project>* ctocxxcself = recover_obj_from_CppbindExample_StackPrj(cself);
    try {
        ctocxxcself->push(ctocxxitem);
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
}

void _func_CppbindExample_StackPrj_pop(CppBindCObject cself, CppBindCObject* _Nonnull cppbind_err) {
    using namespace cppbind::example;
    cppbind::example::Stack<cppbind::example::Project>* ctocxxcself = recover_obj_from_CppbindExample_StackPrj(cself);
    try {
        ctocxxcself->pop();
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
}

CppBindCObject _func_CppbindExample_StackPrj_top(CppBindCObject cself, CppBindCObject* _Nonnull cppbind_err) {
    using namespace cppbind::example;
    cppbind::example::Stack<cppbind::example::Project>* ctocxxcself = recover_obj_from_CppbindExample_StackPrj(cself);
    try {
        decltype(auto) result = ctocxxcself->top();
        
        char* type_result = strdup(CPPBIND_CPPBIND_EXAMPLE_PROJECT);
        auto value_ptr_result = result;
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

bool _func_CppbindExample_StackPrj_empty(CppBindCObject cself, CppBindCObject* _Nonnull cppbind_err) {
    using namespace cppbind::example;
    cppbind::example::Stack<cppbind::example::Project>* ctocxxcself = recover_obj_from_CppbindExample_StackPrj(cself);
    try {
        decltype(auto) result = ctocxxcself->empty();
        
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

void release_CppbindExample_StackTask(CppBindCObject cself, bool owner) {
    using namespace cppbind::example;
    static_assert(std::has_virtual_destructor<cppbind::example::Stack<cppbind::example::Task>>::value, "cppbind::example::Stack<cppbind::example::Task> type must have virtual destructor");
    if (owner) {
        if (strcmp(cself.type, CPPBIND_CPPBIND_EXAMPLE_STACKTASK) == 0)
            delete static_cast<cppbind::example::Stack<cppbind::example::Task>*>(cself.ptr);
        else if (strcmp(cself.type, CPPBIND_CPPBIND_EXAMPLE_MYSTACKPROJECT) == 0)
            delete static_cast<cppbind::example::MyStack<cppbind::example::Project>*>(cself.ptr);
        else if (strcmp(cself.type, CPPBIND_CPPBIND_EXAMPLE_MYSTACKTASK) == 0)
            delete static_cast<cppbind::example::MyStack<cppbind::example::Task>*>(cself.ptr);
        else {
            std::cerr << "Unexpected object type: " << cself.type << std::endl;
            exit(1);
        }
    }
    free(cself.type);
}

cppbind::example::Stack<cppbind::example::Task>* recover_obj_from_CppbindExample_StackTask(CppBindCObject cppbindObj) {
    if (cppbindObj.ptr) {
        if (strcmp(cppbindObj.type, CPPBIND_CPPBIND_EXAMPLE_STACKTASK) == 0)
            return static_cast<cppbind::example::Stack<cppbind::example::Task>*>(cppbindObj.ptr);
        else if (strcmp(cppbindObj.type, CPPBIND_CPPBIND_EXAMPLE_MYSTACKPROJECT) == 0)
            return cppbind::safe_cast<cppbind::example::MyStack<cppbind::example::Project>, cppbind::example::Stack<cppbind::example::Task>>(cppbindObj.ptr);
        else if (strcmp(cppbindObj.type, CPPBIND_CPPBIND_EXAMPLE_MYSTACKTASK) == 0)
            return cppbind::safe_cast<cppbind::example::MyStack<cppbind::example::Task>, cppbind::example::Stack<cppbind::example::Task>>(cppbindObj.ptr);
        else {
            std::cerr << "Unexpected object type: " << cppbindObj.type << std::endl;
            exit(1);
        }
    }
    return nullptr;
}

CppBindCObject create_CppbindExample_StackTask(CppBindCObject* _Nonnull cppbind_err) {
    using namespace cppbind::example;
    try {
        auto this_object = new cppbind::example::Stack<cppbind::example::Task>();
        return {strdup(CPPBIND_CPPBIND_EXAMPLE_STACKTASK), this_object};
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    CppBindCObject result {};
    return result;
}

CppBindCObject create_CppbindExample_StackTask1(CppBindCObject stack, CppBindCObject* _Nonnull cppbind_err) {
    using namespace cppbind::example;
    
    cppbind::example::Stack<cppbind::example::Task>* ctocxxstack_ptr = recover_obj_from_CppbindExample_StackTask(stack);
    auto& ctocxxstack = *ctocxxstack_ptr;
    try {
        auto this_object = new cppbind::example::Stack<cppbind::example::Task>(ctocxxstack);
        return {strdup(CPPBIND_CPPBIND_EXAMPLE_STACKTASK), this_object};
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    CppBindCObject result {};
    return result;
}

CppBindCObject create_CppbindExample_StackTask2(CppBindCObject st, CppBindCObject* _Nonnull cppbind_err) {
    using namespace cppbind::example;
    
    auto ctocxxst = static_cast<cppbind::example::Task*>(st.ptr);
    try {
        auto this_object = new cppbind::example::Stack<cppbind::example::Task>(ctocxxst);
        return {strdup(CPPBIND_CPPBIND_EXAMPLE_STACKTASK), this_object};
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    CppBindCObject result {};
    return result;
}

void _func_CppbindExample_StackTask_push(CppBindCObject cself, CppBindCObject item, CppBindCObject* _Nonnull cppbind_err) {
    using namespace cppbind::example;
    
    auto ctocxxitem = static_cast<cppbind::example::Task*>(item.ptr);

    cppbind::example::Stack<cppbind::example::Task>* ctocxxcself = recover_obj_from_CppbindExample_StackTask(cself);
    try {
        ctocxxcself->push(ctocxxitem);
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
}

void _func_CppbindExample_StackTask_pop(CppBindCObject cself, CppBindCObject* _Nonnull cppbind_err) {
    using namespace cppbind::example;
    cppbind::example::Stack<cppbind::example::Task>* ctocxxcself = recover_obj_from_CppbindExample_StackTask(cself);
    try {
        ctocxxcself->pop();
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
}

CppBindCObject _func_CppbindExample_StackTask_top(CppBindCObject cself, CppBindCObject* _Nonnull cppbind_err) {
    using namespace cppbind::example;
    cppbind::example::Stack<cppbind::example::Task>* ctocxxcself = recover_obj_from_CppbindExample_StackTask(cself);
    try {
        decltype(auto) result = ctocxxcself->top();
        
        char* type_result = strdup(CPPBIND_CPPBIND_EXAMPLE_TASK);
        auto value_ptr_result = result;
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

bool _func_CppbindExample_StackTask_empty(CppBindCObject cself, CppBindCObject* _Nonnull cppbind_err) {
    using namespace cppbind::example;
    cppbind::example::Stack<cppbind::example::Task>* ctocxxcself = recover_obj_from_CppbindExample_StackTask(cself);
    try {
        decltype(auto) result = ctocxxcself->empty();
        
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

void release_CppbindExample_StackNumInt(CppBindCObject cself, bool owner) {
    using namespace cppbind::example;
    static_assert(std::has_virtual_destructor<cppbind::example::Stack<cppbind::example::Number<int>>>::value, "cppbind::example::Stack<cppbind::example::Number<int>> type must have virtual destructor");
    if (owner) {
        if (strcmp(cself.type, CPPBIND_CPPBIND_EXAMPLE_STACKNUMINT) == 0)
            delete static_cast<cppbind::example::Stack<cppbind::example::Number<int>>*>(cself.ptr);
        else if (strcmp(cself.type, CPPBIND_CPPBIND_EXAMPLE_MYSTACKPROJECT) == 0)
            delete static_cast<cppbind::example::MyStack<cppbind::example::Project>*>(cself.ptr);
        else if (strcmp(cself.type, CPPBIND_CPPBIND_EXAMPLE_MYSTACKTASK) == 0)
            delete static_cast<cppbind::example::MyStack<cppbind::example::Task>*>(cself.ptr);
        else {
            std::cerr << "Unexpected object type: " << cself.type << std::endl;
            exit(1);
        }
    }
    free(cself.type);
}

cppbind::example::Stack<cppbind::example::Number<int>>* recover_obj_from_CppbindExample_StackNumInt(CppBindCObject cppbindObj) {
    if (cppbindObj.ptr) {
        if (strcmp(cppbindObj.type, CPPBIND_CPPBIND_EXAMPLE_STACKNUMINT) == 0)
            return static_cast<cppbind::example::Stack<cppbind::example::Number<int>>*>(cppbindObj.ptr);
        else if (strcmp(cppbindObj.type, CPPBIND_CPPBIND_EXAMPLE_MYSTACKPROJECT) == 0)
            return cppbind::safe_cast<cppbind::example::MyStack<cppbind::example::Project>, cppbind::example::Stack<cppbind::example::Number<int>>>(cppbindObj.ptr);
        else if (strcmp(cppbindObj.type, CPPBIND_CPPBIND_EXAMPLE_MYSTACKTASK) == 0)
            return cppbind::safe_cast<cppbind::example::MyStack<cppbind::example::Task>, cppbind::example::Stack<cppbind::example::Number<int>>>(cppbindObj.ptr);
        else {
            std::cerr << "Unexpected object type: " << cppbindObj.type << std::endl;
            exit(1);
        }
    }
    return nullptr;
}

CppBindCObject create_CppbindExample_StackNumInt(CppBindCObject* _Nonnull cppbind_err) {
    using namespace cppbind::example;
    try {
        auto this_object = new cppbind::example::Stack<cppbind::example::Number<int>>();
        return {strdup(CPPBIND_CPPBIND_EXAMPLE_STACKNUMINT), this_object};
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    CppBindCObject result {};
    return result;
}

CppBindCObject create_CppbindExample_StackNumInt1(CppBindCObject stack, CppBindCObject* _Nonnull cppbind_err) {
    using namespace cppbind::example;
    
    cppbind::example::Stack<cppbind::example::Number<int>>* ctocxxstack_ptr = recover_obj_from_CppbindExample_StackNumInt(stack);
    auto& ctocxxstack = *ctocxxstack_ptr;
    try {
        auto this_object = new cppbind::example::Stack<cppbind::example::Number<int>>(ctocxxstack);
        return {strdup(CPPBIND_CPPBIND_EXAMPLE_STACKNUMINT), this_object};
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    CppBindCObject result {};
    return result;
}

CppBindCObject create_CppbindExample_StackNumInt2(CppBindCObject st, CppBindCObject* _Nonnull cppbind_err) {
    using namespace cppbind::example;
    
    auto ctocxxst = static_cast<cppbind::example::Number<int>*>(st.ptr);
    try {
        auto this_object = new cppbind::example::Stack<cppbind::example::Number<int>>(ctocxxst);
        return {strdup(CPPBIND_CPPBIND_EXAMPLE_STACKNUMINT), this_object};
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    CppBindCObject result {};
    return result;
}

void _func_CppbindExample_StackNumInt_push(CppBindCObject cself, CppBindCObject item, CppBindCObject* _Nonnull cppbind_err) {
    using namespace cppbind::example;
    
    auto ctocxxitem = static_cast<cppbind::example::Number<int>*>(item.ptr);

    cppbind::example::Stack<cppbind::example::Number<int>>* ctocxxcself = recover_obj_from_CppbindExample_StackNumInt(cself);
    try {
        ctocxxcself->push(ctocxxitem);
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
}

void _func_CppbindExample_StackNumInt_pop(CppBindCObject cself, CppBindCObject* _Nonnull cppbind_err) {
    using namespace cppbind::example;
    cppbind::example::Stack<cppbind::example::Number<int>>* ctocxxcself = recover_obj_from_CppbindExample_StackNumInt(cself);
    try {
        ctocxxcself->pop();
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
}

CppBindCObject _func_CppbindExample_StackNumInt_top(CppBindCObject cself, CppBindCObject* _Nonnull cppbind_err) {
    using namespace cppbind::example;
    cppbind::example::Stack<cppbind::example::Number<int>>* ctocxxcself = recover_obj_from_CppbindExample_StackNumInt(cself);
    try {
        decltype(auto) result = ctocxxcself->top();
        
        char* type_result = strdup(CPPBIND_CPPBIND_EXAMPLE_NUMBERINT);
        auto value_ptr_result = result;
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

bool _func_CppbindExample_StackNumInt_empty(CppBindCObject cself, CppBindCObject* _Nonnull cppbind_err) {
    using namespace cppbind::example;
    cppbind::example::Stack<cppbind::example::Number<int>>* ctocxxcself = recover_obj_from_CppbindExample_StackNumInt(cself);
    try {
        decltype(auto) result = ctocxxcself->empty();
        
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


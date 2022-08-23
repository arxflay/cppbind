/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 08/17/2022-09:29.
 * Please do not change it manually.
 */

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cxxabi.h>
#include <memory>
#include <type_traits>
#include "swift/wrappers/factories/c_swift_school.h"
#include "cxx/factories/school.h"
#include "cxx/forward_decl/teacher.hpp"

extern const char* CPPBIND_STD_STDEXCEPTION;
extern const char* CPPBIND_CPPBIND_EXAMPLE_TEACHER;

const char* CPPBIND_CPPBIND_EXAMPLE_SCHOOL = "cppbind::example::School";

using namespace cppbind::example;

void release_CppbindExample_School(CppBindCObject cself, bool owner) {
    if (owner) {
        delete static_cast<std::shared_ptr<cppbind::example::School>*>(cself.ptr);
    }
    free(cself.type);
}

CppBindCObject func_CppbindExample_School_create(CppBindCDataArray teachers, CppBindCObject* _Nonnull cppbind_err) {
    std::vector<Teacher *> ctocxxteachers;

    auto data_teachers = reinterpret_cast<CppBindCObject*>(teachers.data);

    for (size_t _i_teachers = 0; _i_teachers < teachers.size; ++_i_teachers) {
        auto& value_teachers = data_teachers[_i_teachers];
        
        auto ctocxxvalue_teachers = static_cast<cppbind::example::Teacher*>(value_teachers.ptr);
        ctocxxteachers.emplace_back(ctocxxvalue_teachers);
    }
    try {
        auto this_object = cppbind::example::School::create(ctocxxteachers);
        return {strdup(CPPBIND_CPPBIND_EXAMPLE_SCHOOL), new std::shared_ptr<cppbind::example::School>(this_object)};
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    CppBindCObject result {};
    return result;
}

CppBindCObject func_CppbindExample_School_create1(CppBindCObject* _Nonnull cppbind_err) {
    try {
        auto this_object = cppbind::example::School::create();
        return {strdup(CPPBIND_CPPBIND_EXAMPLE_SCHOOL), new std::shared_ptr<cppbind::example::School>(this_object)};
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    CppBindCObject result {};
    return result;
}

void _func_CppbindExample_School_addTeacher(CppBindCObject cself, CppBindCObject teacher, CppBindCObject* _Nonnull cppbind_err) {
    
    auto ctocxxteacher = static_cast<cppbind::example::Teacher*>(teacher.ptr);

    std::shared_ptr<cppbind::example::School> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<cppbind::example::School>*>(cself.ptr);
    try {
        ctocxxcself->addTeacher(ctocxxteacher);
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
}

CppBindCDataArray _prop_get_CppbindExample_School_teachers(CppBindCObject cself, CppBindCObject* _Nonnull cppbind_err) {
    std::shared_ptr<cppbind::example::School> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<cppbind::example::School>*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->teachers();
        auto _data_cxxtocresult = new CppBindCObject [result.size()];
        CppBindCDataArray cxxtocresult = { _data_cxxtocresult, static_cast<long long>(result.size()) };
        for (int _i_result = 0; _i_result < result.size(); ++_i_result) {
            auto& value_result = result[_i_result];
            
            char* type_value_result = strdup(CPPBIND_CPPBIND_EXAMPLE_TEACHER);
            auto value_ptr_value_result = const_cast<cppbind::example::Teacher*>(value_result);
            CppBindCObject cxxtocvalue_result = {type_value_result, value_ptr_value_result};
            _data_cxxtocresult[_i_result] = cxxtocvalue_result;
        }
        return cxxtocresult;
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    CppBindCDataArray result {};
    return result;
}


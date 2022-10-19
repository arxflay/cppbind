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
#include "swift/wrappers/globs/c_swift_templateOverloadedUtils.h"
#include "swift/wrappers/cppbind_wrapper_helper.hpp"
#include "cxx/globs/utils.h"
#include <algorithm>

extern const char* CPPBIND_STD_STDEXCEPTION;

CppBindCDataArray _func__mergeInt(CppBindCDataArray first, CppBindCDataArray second, CppBindCObject* _Nonnull cppbind_err) {
    std::vector<int> ctocxxfirst;

    auto data_first = reinterpret_cast<int*>(first.data);

    for (size_t _i_first = 0; _i_first < first.size; ++_i_first) {
        auto& value_first = data_first[_i_first];
        
        ctocxxfirst.emplace_back(value_first);
    }
    std::vector<int> ctocxxsecond;

    auto data_second = reinterpret_cast<int*>(second.data);

    for (size_t _i_second = 0; _i_second < second.size; ++_i_second) {
        auto& value_second = data_second[_i_second];
        
        ctocxxsecond.emplace_back(value_second);
    }
    try {
        decltype(auto) result = ::merge<int>(ctocxxfirst, ctocxxsecond);
        auto _data_cxxtocresult = new int [result.size()];
        CppBindCDataArray cxxtocresult = { _data_cxxtocresult, static_cast<long long>(result.size()) };
        for (int _i_result = 0; _i_result < result.size(); ++_i_result) {
            auto& value_result = result[_i_result];
            
            _data_cxxtocresult[_i_result] = value_result;
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

CppBindCDataArray _func__mergeString(CppBindCDataArray first, CppBindCDataArray second, CppBindCObject* _Nonnull cppbind_err) {
    std::vector<std::string> ctocxxfirst;

    auto data_first = reinterpret_cast<char**>(first.data);

    for (size_t _i_first = 0; _i_first < first.size; ++_i_first) {
        auto& value_first = data_first[_i_first];
        auto ctocxxvalue_first = std::string(value_first);
        free(value_first);
        ctocxxfirst.emplace_back(ctocxxvalue_first);
    }
    std::vector<std::string> ctocxxsecond;

    auto data_second = reinterpret_cast<char**>(second.data);

    for (size_t _i_second = 0; _i_second < second.size; ++_i_second) {
        auto& value_second = data_second[_i_second];
        auto ctocxxvalue_second = std::string(value_second);
        free(value_second);
        ctocxxsecond.emplace_back(ctocxxvalue_second);
    }
    try {
        decltype(auto) result = ::merge<std::string>(ctocxxfirst, ctocxxsecond);
        auto _data_cxxtocresult = new char* [result.size()];
        CppBindCDataArray cxxtocresult = { _data_cxxtocresult, static_cast<long long>(result.size()) };
        for (int _i_result = 0; _i_result < result.size(); ++_i_result) {
            auto& value_result = result[_i_result];
            auto cxxtocvalue_result = strdup(value_result.data());
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

CppBindCDataArray _func__sum(CppBindCDataArray first, CppBindCDataArray second, CppBindCObject* _Nonnull cppbind_err) {
    ArrayInt ctocxxfirst {};
    auto data_first = reinterpret_cast<int*>(first.data);
    std::copy_n(data_first, 4, ctocxxfirst.begin());
    ArrayInt ctocxxsecond {};
    auto data_second = reinterpret_cast<int*>(second.data);
    std::copy_n(data_second, 4, ctocxxsecond.begin());
    try {
        decltype(auto) result = ::sum(ctocxxfirst, ctocxxsecond);
        auto _data_cxxtocresult = new int [result.size()];
        CppBindCDataArray cxxtocresult = { _data_cxxtocresult, static_cast<long long>(result.size()) };
        for (int _i_result = 0; _i_result < result.size(); ++_i_result) {
            auto& value_result = result[_i_result];
            
            _data_cxxtocresult[_i_result] = value_result;
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

CppBindCDataArray _func__sum1(CppBindCDataArray first, CppBindCDataArray second, CppBindCObject* _Nonnull cppbind_err) {
    std::array<float, 4> ctocxxfirst {};
    auto data_first = reinterpret_cast<float*>(first.data);
    std::copy_n(data_first, 4, ctocxxfirst.begin());
    std::array<float, 4> ctocxxsecond {};
    auto data_second = reinterpret_cast<float*>(second.data);
    std::copy_n(data_second, 4, ctocxxsecond.begin());
    try {
        decltype(auto) result = ::sum(ctocxxfirst, ctocxxsecond);
        auto _data_cxxtocresult = new float [result.size()];
        CppBindCDataArray cxxtocresult = { _data_cxxtocresult, static_cast<long long>(result.size()) };
        for (int _i_result = 0; _i_result < result.size(); ++_i_result) {
            auto& value_result = result[_i_result];
            
            _data_cxxtocresult[_i_result] = value_result;
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


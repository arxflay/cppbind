/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 02/07/2022-12:05.
 * Please do not change it manually.
 */

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cxxabi.h>
#include <memory>
#include <type_traits>
#include "swift/wrappers/containers/c_pair_examples.h"
#include "cxx/containers/pair.hpp"

using namespace iegen::example;

void release_PairExamples(IEGenCObject cself, bool owner) {
    free(cself.type);
    if (owner) {
        delete static_cast<iegen::example::PairExamples*>(cself.ptr);
    }
}

IEGenCObject create_PairExamples(IEGenCObject* _Nonnull err){
    try {
        auto this_object = new iegen::example::PairExamples();
        return {strdup("iegen::example::PairExamples"), this_object};
    }
    catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    }
    catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}

IEGenCDataPair _func_PairExamples_sumIntPairs(IEGenCObject cself, IEGenCDataPair p1, IEGenCDataPair p2, IEGenCObject* _Nonnull err){
    auto first_tmp_p1 = *reinterpret_cast<int*>(p1.first);
    auto second_tmp_p1 = *reinterpret_cast<int*>(p1.second);


    std::pair<int, int> ctocxxp1 { first_tmp_p1, second_tmp_p1 };
  
    auto first_tmp_p2 = *reinterpret_cast<int*>(p2.first);
    auto second_tmp_p2 = *reinterpret_cast<int*>(p2.second);


    std::pair<int, int> ctocxxp2 { first_tmp_p2, second_tmp_p2 };
  
    
    auto ctocxxcself = static_cast<iegen::example::PairExamples*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->sumIntPairs(ctocxxp1, ctocxxp2);
        auto _first_data_cxxtocresult = new int;
        auto _second_data_cxxtocresult = new int;
        const auto& first_result = result.first;
        const auto& second_result = result.second;


        *_first_data_cxxtocresult = first_result;
        *_second_data_cxxtocresult = second_result;
        IEGenCDataPair cxxtocresult = { _first_data_cxxtocresult, _second_data_cxxtocresult };
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    }
    catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    IEGenCDataPair result {};
    return result;
}

void _func_PairExamples_setNestedPair(IEGenCObject cself, IEGenCDataPair p, IEGenCObject* _Nonnull err){
    auto first_tmp_p = *reinterpret_cast<IEGenCDataPair*>(p.first);
    auto second_tmp_p = *reinterpret_cast<IEGenCDataPair*>(p.second);
    auto first_tmp_first_tmp_p = *reinterpret_cast<char**>(first_tmp_p.first);
    auto second_tmp_first_tmp_p = *reinterpret_cast<char**>(first_tmp_p.second);
    auto ctocxxfirst_tmp_first_tmp_p = std::string(first_tmp_first_tmp_p);
    free(first_tmp_first_tmp_p);
    auto ctocxxsecond_tmp_first_tmp_p = std::string(second_tmp_first_tmp_p);
    free(second_tmp_first_tmp_p);
    std::pair<std::string, std::string> ctocxxfirst_tmp_p { ctocxxfirst_tmp_first_tmp_p, ctocxxsecond_tmp_first_tmp_p };
    auto first_tmp_second_tmp_p = *reinterpret_cast<char**>(second_tmp_p.first);
    auto second_tmp_second_tmp_p = *reinterpret_cast<char**>(second_tmp_p.second);
    auto ctocxxfirst_tmp_second_tmp_p = std::string(first_tmp_second_tmp_p);
    free(first_tmp_second_tmp_p);
    auto ctocxxsecond_tmp_second_tmp_p = std::string(second_tmp_second_tmp_p);
    free(second_tmp_second_tmp_p);
    std::pair<std::string, std::string> ctocxxsecond_tmp_p { ctocxxfirst_tmp_second_tmp_p, ctocxxsecond_tmp_second_tmp_p };
    std::pair<std::pair<std::string, std::string>, std::pair<std::string, std::string>> ctocxxp { ctocxxfirst_tmp_p, ctocxxsecond_tmp_p };
  
    
    auto ctocxxcself = static_cast<iegen::example::PairExamples*>(cself.ptr);
    try {
        ctocxxcself->setNestedPair(ctocxxp);
    }
    catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    }
    catch (...) {
        err->type = strdup("Uncaught Exception");
    }
}

IEGenCDataPair _func_PairExamples_getNestedPair(IEGenCObject cself, IEGenCObject* _Nonnull err){
    
    auto ctocxxcself = static_cast<iegen::example::PairExamples*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->getNestedPair();
        auto _first_data_cxxtocresult = new IEGenCDataPair;
        auto _second_data_cxxtocresult = new IEGenCDataPair;
        const auto& first_result = result.first;
        const auto& second_result = result.second;
        auto _first_data_cxxtocfirst_result = new char*;
        auto _second_data_cxxtocfirst_result = new char*;
        const auto& first_first_result = first_result.first;
        const auto& second_first_result = first_result.second;
        auto cxxtocfirst_first_result = strdup(first_first_result.data());
        auto cxxtocsecond_first_result = strdup(second_first_result.data());
        *_first_data_cxxtocfirst_result = cxxtocfirst_first_result;
        *_second_data_cxxtocfirst_result = cxxtocsecond_first_result;
        IEGenCDataPair cxxtocfirst_result = { _first_data_cxxtocfirst_result, _second_data_cxxtocfirst_result };
        auto _first_data_cxxtocsecond_result = new char*;
        auto _second_data_cxxtocsecond_result = new char*;
        const auto& first_second_result = second_result.first;
        const auto& second_second_result = second_result.second;
        auto cxxtocfirst_second_result = strdup(first_second_result.data());
        auto cxxtocsecond_second_result = strdup(second_second_result.data());
        *_first_data_cxxtocsecond_result = cxxtocfirst_second_result;
        *_second_data_cxxtocsecond_result = cxxtocsecond_second_result;
        IEGenCDataPair cxxtocsecond_result = { _first_data_cxxtocsecond_result, _second_data_cxxtocsecond_result };
        *_first_data_cxxtocresult = cxxtocfirst_result;
        *_second_data_cxxtocresult = cxxtocsecond_result;
        IEGenCDataPair cxxtocresult = { _first_data_cxxtocresult, _second_data_cxxtocresult };
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    }
    catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    IEGenCDataPair result {};
    return result;
}

IEGenCDataPair _func_PairExamples_getStringPair(IEGenCObject cself, IEGenCObject* _Nonnull err){
    
    auto ctocxxcself = static_cast<iegen::example::PairExamples*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->getStringPair();
        auto _first_data_cxxtocresult = new char*;
        auto _second_data_cxxtocresult = new char*;
        const auto& first_result = result.first;
        const auto& second_result = result.second;
        auto cxxtocfirst_result = strdup(first_result.data());
        auto cxxtocsecond_result = strdup(second_result.data());
        *_first_data_cxxtocresult = cxxtocfirst_result;
        *_second_data_cxxtocresult = cxxtocsecond_result;
        IEGenCDataPair cxxtocresult = { _first_data_cxxtocresult, _second_data_cxxtocresult };
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    }
    catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    IEGenCDataPair result {};
    return result;
}

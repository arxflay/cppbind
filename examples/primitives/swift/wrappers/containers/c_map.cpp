/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 01/31/2022-10:17.
 * Please do not change it manually.
 */

#include <stdlib.h>
#include <string.h>
#include <cxxabi.h>
#include <memory>
#include "swift/wrappers/containers/c_map.h"
#include "cxx/containers/map.hpp"

using namespace iegen::example;

void release_MapItem(IEGenCObject cself, bool owner) {
    free(cself.type);
    if (owner) {
        delete static_cast<iegen::example::MapItem*>(cself.ptr);
    }
}
int _prop_get_MapItem_value(IEGenCObject cself){
    auto ctocxxcself = static_cast<iegen::example::MapItem*>(cself.ptr);
    const auto& result = ctocxxcself->value;
    
    return result;
}
void _prop_set_MapItem_value(IEGenCObject cself, int value){
    
    auto ctocxxcself = static_cast<iegen::example::MapItem*>(cself.ptr);
    
    ctocxxcself->value = value;
}


IEGenCObject create_MapItem(int _value, IEGenCErrorObj* _Nonnull err){
    
    try {
        auto this_object = new iegen::example::MapItem(_value);
        return {strdup("iegen::example::MapItem"), this_object};
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    IEGenCObject result {};
    return result;
}
void release_MapExamples(IEGenCObject cself, bool owner) {
    free(cself.type);
    if (owner) {
        delete static_cast<iegen::example::MapExamples*>(cself.ptr);
    }
}

IEGenCObject create_MapExamples(IEGenCErrorObj* _Nonnull err){
    try {
        auto this_object = new iegen::example::MapExamples();
        return {strdup("iegen::example::MapExamples"), this_object};
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    IEGenCObject result {};
    return result;
}

void _func_MapExamples_addStringPair(IEGenCObject cself, IEGenCDataPair info, IEGenCErrorObj* _Nonnull err){
    auto first_tmp_info = *reinterpret_cast<char**>(info.first);
    auto second_tmp_info = *reinterpret_cast<char**>(info.second);
    auto ctocxxfirst_tmp_info = std::string(first_tmp_info);
    free(first_tmp_info);
    auto ctocxxsecond_tmp_info = std::string(second_tmp_info);
    free(second_tmp_info);
    std::pair<std::string, std::string> ctocxxinfo { ctocxxfirst_tmp_info, ctocxxsecond_tmp_info };
  
    
    auto ctocxxcself = static_cast<iegen::example::MapExamples*>(cself.ptr);
    try {
        ctocxxcself->addStringPair(ctocxxinfo);
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
}

void _func_MapExamples_addIntMap(IEGenCObject cself, IEGenCDataMap info, IEGenCErrorObj* _Nonnull err){
    std::map<int, int> ctocxxinfo;

    for (size_t _i_info = 0; _i_info < info.size; ++_i_info) {
        auto ktmp_info = reinterpret_cast<int*>(info.keys)[_i_info];
        auto vtmp_info = reinterpret_cast<int*>(info.values)[_i_info];
        
        
        ctocxxinfo.insert({ ktmp_info, vtmp_info });
    }
  
    
    auto ctocxxcself = static_cast<iegen::example::MapExamples*>(cself.ptr);
    try {
        ctocxxcself->addIntMap(ctocxxinfo);
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
}

void _func_MapExamples_addStringMap(IEGenCObject cself, IEGenCDataMap info, IEGenCErrorObj* _Nonnull err){
    std::map<std::string, std::string> ctocxxinfo;

    for (size_t _i_info = 0; _i_info < info.size; ++_i_info) {
        auto ktmp_info = reinterpret_cast<char**>(info.keys)[_i_info];
        auto vtmp_info = reinterpret_cast<char**>(info.values)[_i_info];
        auto ctocxxktmp_info = std::string(ktmp_info);
        free(ktmp_info);
        auto ctocxxvtmp_info = std::string(vtmp_info);
        free(vtmp_info);
        ctocxxinfo.insert({ ctocxxktmp_info, ctocxxvtmp_info });
    }
  
    
    auto ctocxxcself = static_cast<iegen::example::MapExamples*>(cself.ptr);
    try {
        ctocxxcself->addStringMap(ctocxxinfo);
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
}

IEGenCDataMap _func_MapExamples_getStringMap(IEGenCObject cself, IEGenCErrorObj* _Nonnull err){
    
    auto ctocxxcself = static_cast<iegen::example::MapExamples*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->getStringMap();
        auto _k_data_cxxtocresult = new char* [result.size()];
        auto _v_data_cxxtocresult = new char* [result.size()];
        IEGenCDataMap cxxtocresult = { _k_data_cxxtocresult, _v_data_cxxtocresult, static_cast<long long>(result.size()) };
        size_t _i_result = 0;
        for (auto& value_result : result) {
            const auto& key_result = value_result.first;
            const auto& val_result = value_result.second;
            {
                auto cxxtockey_result = strdup(key_result.data());
                auto cxxtocval_result = strdup(val_result.data());
                _k_data_cxxtocresult[_i_result] = cxxtockey_result;
                _v_data_cxxtocresult[_i_result] = cxxtocval_result;
                _i_result += 1;
            }
        }
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    IEGenCDataMap result {};
    return result;
}

IEGenCDataMap _func_MapExamples_getIntMap(IEGenCObject cself, IEGenCErrorObj* _Nonnull err){
    
    auto ctocxxcself = static_cast<iegen::example::MapExamples*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->getIntMap();
        auto _k_data_cxxtocresult = new int [result.size()];
        auto _v_data_cxxtocresult = new int [result.size()];
        IEGenCDataMap cxxtocresult = { _k_data_cxxtocresult, _v_data_cxxtocresult, static_cast<long long>(result.size()) };
        size_t _i_result = 0;
        for (auto& value_result : result) {
            const auto& key_result = value_result.first;
            const auto& val_result = value_result.second;
            {
                
                
                _k_data_cxxtocresult[_i_result] = key_result;
                _v_data_cxxtocresult[_i_result] = val_result;
                _i_result += 1;
            }
        }
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    IEGenCDataMap result {};
    return result;
}

void _func_MapExamples_addMixedMap(IEGenCObject cself, IEGenCDataMap info, IEGenCErrorObj* _Nonnull err){
    std::map<std::string, MapItem> ctocxxinfo;

    for (size_t _i_info = 0; _i_info < info.size; ++_i_info) {
        auto ktmp_info = reinterpret_cast<char**>(info.keys)[_i_info];
        auto vtmp_info = reinterpret_cast<IEGenCObject*>(info.values)[_i_info];
        auto ctocxxktmp_info = std::string(ktmp_info);
        free(ktmp_info);
        
        auto& ctocxxvtmp_info = *static_cast<iegen::example::MapItem*>(vtmp_info.ptr);
        ctocxxinfo.insert({ ctocxxktmp_info, ctocxxvtmp_info });
    }
  
    
    auto ctocxxcself = static_cast<iegen::example::MapExamples*>(cself.ptr);
    try {
        ctocxxcself->addMixedMap(ctocxxinfo);
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
}

IEGenCDataMap _func_MapExamples_getMixedMap(IEGenCObject cself, IEGenCErrorObj* _Nonnull err){
    
    auto ctocxxcself = static_cast<iegen::example::MapExamples*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->getMixedMap();
        auto _k_data_cxxtocresult = new char* [result.size()];
        auto _v_data_cxxtocresult = new IEGenCObject [result.size()];
        IEGenCDataMap cxxtocresult = { _k_data_cxxtocresult, _v_data_cxxtocresult, static_cast<long long>(result.size()) };
        size_t _i_result = 0;
        for (auto& value_result : result) {
            const auto& key_result = value_result.first;
            const auto& val_result = value_result.second;
            {
                auto cxxtockey_result = strdup(key_result.data());
                
                char* type_val_result = strdup("iegen::example::MapItem");
                IEGenCObject cxxtocval_result = {type_val_result, const_cast<iegen::example::MapItem*>( new iegen::example::MapItem(val_result) )};
                _k_data_cxxtocresult[_i_result] = cxxtockey_result;
                _v_data_cxxtocresult[_i_result] = cxxtocval_result;
                _i_result += 1;
            }
        }
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    IEGenCDataMap result {};
    return result;
}

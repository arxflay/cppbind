/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 09/28/2022-13:21.
 * Please do not change it manually.
 */

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cxxabi.h>
#include <memory>
#include <type_traits>
#include "swift/wrappers/containers/c_swift_map.h"
#include "cxx/containers/map.hpp"

extern const char* CPPBIND_STD_STDEXCEPTION;

const char* CPPBIND_CPPBIND_EXAMPLE_MAPITEM = "cppbind::example::MapItem";
const char* CPPBIND_CPPBIND_EXAMPLE_MAPEXAMPLES = "cppbind::example::MapExamples";

void release_CppbindExample_MapItem(CppBindCObject cself, bool owner) {
    using namespace cppbind::example;
    if (owner) {
        delete static_cast<cppbind::example::MapItem*>(cself.ptr);
    }
    free(cself.type);
}

int _prop_get_CppbindExample_MapItem_value(CppBindCObject cself) {
    using namespace cppbind::example;
    auto ctocxxcself = static_cast<cppbind::example::MapItem*>(cself.ptr);
    decltype(auto) result = ctocxxcself->value;
    
    return result;
}

void _prop_set_CppbindExample_MapItem_value(CppBindCObject cself, int value) {
    using namespace cppbind::example;
    
    auto ctocxxcself = static_cast<cppbind::example::MapItem*>(cself.ptr);
    
    ctocxxcself->value = value;
}

CppBindCObject create_CppbindExample_MapItem(int _value, CppBindCObject* _Nonnull cppbind_err) {
    using namespace cppbind::example;
    try {
        auto this_object = new cppbind::example::MapItem(_value);
        return {strdup(CPPBIND_CPPBIND_EXAMPLE_MAPITEM), this_object};
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    CppBindCObject result {};
    return result;
}

void release_CppbindExample_MapExamples(CppBindCObject cself, bool owner) {
    using namespace cppbind::example;
    if (owner) {
        delete static_cast<cppbind::example::MapExamples*>(cself.ptr);
    }
    free(cself.type);
}

CppBindCObject create_CppbindExample_MapExamples(CppBindCObject* _Nonnull cppbind_err) {
    using namespace cppbind::example;
    try {
        auto this_object = new cppbind::example::MapExamples();
        return {strdup(CPPBIND_CPPBIND_EXAMPLE_MAPEXAMPLES), this_object};
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    CppBindCObject result {};
    return result;
}

void _func_CppbindExample_MapExamples_addStringPair(CppBindCObject cself, CppBindCDataPair info, CppBindCObject* _Nonnull cppbind_err) {
    using namespace cppbind::example;
    auto& first_tmp_info = *reinterpret_cast<char**>(info.first);
    auto& second_tmp_info = *reinterpret_cast<char**>(info.second);
    auto ctocxxfirst_tmp_info = std::string(first_tmp_info);
    free(first_tmp_info);
    auto ctocxxsecond_tmp_info = std::string(second_tmp_info);
    free(second_tmp_info);
    std::pair<std::string, std::string> ctocxxinfo { ctocxxfirst_tmp_info, ctocxxsecond_tmp_info };

    auto ctocxxcself = static_cast<cppbind::example::MapExamples*>(cself.ptr);
    try {
        ctocxxcself->addStringPair(ctocxxinfo);
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
}

void _func_CppbindExample_MapExamples_addIntMap(CppBindCObject cself, CppBindCDataMap info, CppBindCObject* _Nonnull cppbind_err) {
    using namespace cppbind::example;
    std::map<int, int> ctocxxinfo;

    for (size_t _i_info = 0; _i_info < info.size; ++_i_info) {
        auto ktmp_info = reinterpret_cast<int*>(info.keys)[_i_info];
        auto vtmp_info = reinterpret_cast<int*>(info.values)[_i_info];
        
        
        ctocxxinfo.insert({ ktmp_info, vtmp_info });
    }

    auto ctocxxcself = static_cast<cppbind::example::MapExamples*>(cself.ptr);
    try {
        ctocxxcself->addIntMap(ctocxxinfo);
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
}

void _func_CppbindExample_MapExamples_addStringMap(CppBindCObject cself, CppBindCDataMap info, CppBindCObject* _Nonnull cppbind_err) {
    using namespace cppbind::example;
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

    auto ctocxxcself = static_cast<cppbind::example::MapExamples*>(cself.ptr);
    try {
        ctocxxcself->addStringMap(ctocxxinfo);
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
}

CppBindCDataMap _func_CppbindExample_MapExamples_getStringMap(CppBindCObject cself, CppBindCObject* _Nonnull cppbind_err) {
    using namespace cppbind::example;
    auto ctocxxcself = static_cast<cppbind::example::MapExamples*>(cself.ptr);
    try {
        decltype(auto) result = ctocxxcself->getStringMap();
        auto _k_data_cxxtocresult = new char* [result.size()];
        auto _v_data_cxxtocresult = new char* [result.size()];
        CppBindCDataMap cxxtocresult = { _k_data_cxxtocresult, _v_data_cxxtocresult, static_cast<long long>(result.size()) };
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
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    CppBindCDataMap result {};
    return result;
}

CppBindCDataMap _func_CppbindExample_MapExamples_getIntMap(CppBindCObject cself, CppBindCObject* _Nonnull cppbind_err) {
    using namespace cppbind::example;
    auto ctocxxcself = static_cast<cppbind::example::MapExamples*>(cself.ptr);
    try {
        decltype(auto) result = ctocxxcself->getIntMap();
        auto _k_data_cxxtocresult = new int [result.size()];
        auto _v_data_cxxtocresult = new int [result.size()];
        CppBindCDataMap cxxtocresult = { _k_data_cxxtocresult, _v_data_cxxtocresult, static_cast<long long>(result.size()) };
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
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    CppBindCDataMap result {};
    return result;
}

void _func_CppbindExample_MapExamples_addMixedMap(CppBindCObject cself, CppBindCDataMap info, CppBindCObject* _Nonnull cppbind_err) {
    using namespace cppbind::example;
    std::map<std::string, MapItem> ctocxxinfo;

    for (size_t _i_info = 0; _i_info < info.size; ++_i_info) {
        auto ktmp_info = reinterpret_cast<char**>(info.keys)[_i_info];
        auto vtmp_info = reinterpret_cast<CppBindCObject*>(info.values)[_i_info];
        auto ctocxxktmp_info = std::string(ktmp_info);
        free(ktmp_info);
        
        auto& ctocxxvtmp_info = *static_cast<cppbind::example::MapItem*>(vtmp_info.ptr);
        ctocxxinfo.insert({ ctocxxktmp_info, ctocxxvtmp_info });
    }

    auto ctocxxcself = static_cast<cppbind::example::MapExamples*>(cself.ptr);
    try {
        ctocxxcself->addMixedMap(ctocxxinfo);
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
}

CppBindCDataMap _func_CppbindExample_MapExamples_getMixedMap(CppBindCObject cself, CppBindCObject* _Nonnull cppbind_err) {
    using namespace cppbind::example;
    auto ctocxxcself = static_cast<cppbind::example::MapExamples*>(cself.ptr);
    try {
        decltype(auto) result = ctocxxcself->getMixedMap();
        auto _k_data_cxxtocresult = new char* [result.size()];
        auto _v_data_cxxtocresult = new CppBindCObject [result.size()];
        CppBindCDataMap cxxtocresult = { _k_data_cxxtocresult, _v_data_cxxtocresult, static_cast<long long>(result.size()) };
        size_t _i_result = 0;
        for (auto& value_result : result) {
            const auto& key_result = value_result.first;
            const auto& val_result = value_result.second;
            {
                auto cxxtockey_result = strdup(key_result.data());
                
                char* type_val_result = strdup(CPPBIND_CPPBIND_EXAMPLE_MAPITEM);
                auto value_ptr_val_result = new cppbind::example::MapItem(val_result);
                CppBindCObject cxxtocval_result = {type_val_result, value_ptr_val_result};
                _k_data_cxxtocresult[_i_result] = cxxtockey_result;
                _v_data_cxxtocresult[_i_result] = cxxtocval_result;
                _i_result += 1;
            }
        }
        return cxxtocresult;
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    CppBindCDataMap result {};
    return result;
}

void _func_CppbindExample_MapExamples_checkComparatorArgument(CppBindCObject cself, CppBindCDataMap arg1, CppBindCObject* _Nonnull cppbind_err) {
    using namespace cppbind::example;
    std::map<int, int, std::greater<int>> ctocxxarg1;

    for (size_t _i_arg1 = 0; _i_arg1 < arg1.size; ++_i_arg1) {
        auto ktmp_arg1 = reinterpret_cast<int*>(arg1.keys)[_i_arg1];
        auto vtmp_arg1 = reinterpret_cast<int*>(arg1.values)[_i_arg1];
        
        
        ctocxxarg1.insert({ ktmp_arg1, vtmp_arg1 });
    }

    auto ctocxxcself = static_cast<cppbind::example::MapExamples*>(cself.ptr);
    try {
        ctocxxcself->checkComparatorArgument(ctocxxarg1);
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
}


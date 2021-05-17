#include <string.h>
#include <memory>
#include "swift/wrappers/containers/c_vector.h"
#include "cxx/containers/vector.hpp"


using namespace iegen::example;
void release_VectorItem(void* _Nonnull cself) {
    delete dynamic_cast<iegen::example::VectorItem*>(static_cast<iegen::example::VectorItem*>(cself));
}
int _prop_get_VectorItem_value(void* _Nonnull cself){
    auto c_to_cxx_cself = dynamic_cast<iegen::example::VectorItem*>(static_cast<iegen::example::VectorItem*>(cself));
    auto result = c_to_cxx_cself->value;
    
    return result;
}
void _prop_set_VectorItem_value(void* _Nonnull cself, int value){
    auto c_to_cxx_cself = dynamic_cast<iegen::example::VectorItem*>(static_cast<iegen::example::VectorItem*>(cself));
    
    c_to_cxx_cself->value = value;
}

void* _Nonnull create_VectorItem(int _value){
    
    auto this_object = new iegen::example::VectorItem(_value);
    return static_cast<iegen::example::VectorItem*>(this_object);
}

using namespace iegen::example;
void release_VectorExamples(void* _Nonnull cself) {
    delete dynamic_cast<iegen::example::VectorExamples*>(static_cast<iegen::example::VectorExamples*>(cself));
}
void* _Nonnull create_VectorExamples(){
    auto this_object = new iegen::example::VectorExamples();
    return static_cast<iegen::example::VectorExamples*>(this_object);
}
void _func_VectorExamples_addIntVector(void* _Nonnull cself , CDataArray v, ErrorObj* _Nonnull err){
    std::vector<int> c_to_cxx_v;

    auto data_v = reinterpret_cast<int*>(v.data);

    for (size_t _i = 0; _i < v.size; ++_i) {
        auto& value_v = data_v[_i];
        
        c_to_cxx_v.emplace_back(value_v);
    }
  
    auto c_to_cxx_cself = dynamic_cast<iegen::example::VectorExamples*>(static_cast<iegen::example::VectorExamples*>(cself));
    try {
      c_to_cxx_cself->addIntVector(c_to_cxx_v);
    }
    catch (const std::exception& e) {
        err->is_err = true;
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->is_err = true;
    }
}
void _func_VectorExamples_addObjVector(void* _Nonnull cself , CDataArray v, ErrorObj* _Nonnull err){
    std::vector<VectorItem *> c_to_cxx_v;

    auto data_v = reinterpret_cast<void* _Nonnull*>(v.data);

    for (size_t _i = 0; _i < v.size; ++_i) {
        auto& value_v = data_v[_i];
        
        // we might need to avoid dynamic_cast if there is no multiple inheritance
        auto c_to_cxx_value_v = dynamic_cast<iegen::example::VectorItem*>(static_cast<iegen::example::VectorItem*>(value_v));
        c_to_cxx_v.emplace_back(c_to_cxx_value_v);
    }
  
    auto c_to_cxx_cself = dynamic_cast<iegen::example::VectorExamples*>(static_cast<iegen::example::VectorExamples*>(cself));
    try {
      c_to_cxx_cself->addObjVector(c_to_cxx_v);
    }
    catch (const std::exception& e) {
        err->is_err = true;
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->is_err = true;
    }
}
void _func_VectorExamples_addStringVector(void* _Nonnull cself , CDataArray v, ErrorObj* _Nonnull err){
    std::vector<std::string> c_to_cxx_v;

    auto data_v = reinterpret_cast<char* _Nonnull*>(v.data);

    for (size_t _i = 0; _i < v.size; ++_i) {
        auto& value_v = data_v[_i];
        auto c_to_cxx_value_v = std::string(value_v);
        free(value_v);
        c_to_cxx_v.emplace_back(c_to_cxx_value_v);
    }
  
    auto c_to_cxx_cself = dynamic_cast<iegen::example::VectorExamples*>(static_cast<iegen::example::VectorExamples*>(cself));
    try {
      c_to_cxx_cself->addStringVector(c_to_cxx_v);
    }
    catch (const std::exception& e) {
        err->is_err = true;
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->is_err = true;
    }
}
CDataArray _func_VectorExamples_getStringVector(void* _Nonnull cself , ErrorObj* _Nonnull err){
    auto c_to_cxx_cself = dynamic_cast<iegen::example::VectorExamples*>(static_cast<iegen::example::VectorExamples*>(cself));
    try {
      const auto& result = c_to_cxx_cself->getStringVector();
      auto _data_cxx_to_c_result = new char* _Nonnull [result.size()];
    CDataArray cxx_to_c_result = { _data_cxx_to_c_result, (long long)result.size() };
    for (int _i = 0; _i < result.size(); ++_i) {
      auto& value_result = result[_i];
      auto cxx_to_c_value_result = strdup(value_result.c_str()); 
      _data_cxx_to_c_result[_i] = cxx_to_c_value_result;
    }
      return cxx_to_c_result;
    }
    catch (const std::exception& e) {
        err->is_err = true;
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->is_err = true;
    }
    CDataArray result;
    return result;
}
CDataArray _func_VectorExamples_getObjVector(void* _Nonnull cself , ErrorObj* _Nonnull err){
    auto c_to_cxx_cself = dynamic_cast<iegen::example::VectorExamples*>(static_cast<iegen::example::VectorExamples*>(cself));
    try {
      const auto& result = c_to_cxx_cself->getObjVector();
      auto _data_cxx_to_c_result = new void* _Nonnull [result.size()];
    CDataArray cxx_to_c_result = { _data_cxx_to_c_result, (long long)result.size() };
    for (int _i = 0; _i < result.size(); ++_i) {
      auto& value_result = result[_i];
      auto value_ptr_value_result = const_cast<iegen::example::VectorItem*>(value_result);
        auto cxx_to_c_value_result = static_cast<iegen::example::VectorItem*>(value_ptr_value_result);
      _data_cxx_to_c_result[_i] = cxx_to_c_value_result;
    }
      return cxx_to_c_result;
    }
    catch (const std::exception& e) {
        err->is_err = true;
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->is_err = true;
    }
    CDataArray result;
    return result;
}
CDataArray _func_VectorExamples_getIntVector(void* _Nonnull cself , ErrorObj* _Nonnull err){
    auto c_to_cxx_cself = dynamic_cast<iegen::example::VectorExamples*>(static_cast<iegen::example::VectorExamples*>(cself));
    try {
      const auto& result = c_to_cxx_cself->getIntVector();
      auto _data_cxx_to_c_result = new int [result.size()];
    CDataArray cxx_to_c_result = { _data_cxx_to_c_result, (long long)result.size() };
    for (int _i = 0; _i < result.size(); ++_i) {
      auto& value_result = result[_i];
      
      _data_cxx_to_c_result[_i] = value_result;
    }
      return cxx_to_c_result;
    }
    catch (const std::exception& e) {
        err->is_err = true;
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->is_err = true;
    }
    CDataArray result;
    return result;
}
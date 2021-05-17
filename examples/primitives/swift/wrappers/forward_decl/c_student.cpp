#include <string.h>
#include <memory>
#include "swift/wrappers/forward_decl/c_student.h"
#include "cxx/forward_decl/student.hpp"
#include "cxx/forward_decl/teacher.hpp"


using namespace iegen::example;
void release_Student(void* _Nonnull cself) {
    delete dynamic_cast<iegen::example::Student*>(static_cast<iegen::example::Student*>(cself));
}
void* _Nonnull create_Student(){
    auto this_object = new iegen::example::Student();
    return static_cast<iegen::example::Student*>(this_object);
}
void _func_Student_addTeacher(void* _Nonnull cself , void* _Nonnull t, ErrorObj* _Nonnull err){
    
    // we might need to avoid dynamic_cast if there is no multiple inheritance
    auto c_to_cxx_t = dynamic_cast<iegen::example::Teacher*>(static_cast<iegen::example::Teacher*>(t));
  
    auto c_to_cxx_cself = dynamic_cast<iegen::example::Student*>(static_cast<iegen::example::Student*>(cself));
    try {
      c_to_cxx_cself->addTeacher(c_to_cxx_t);
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
CDataArray _func_Student_teachers(void* _Nonnull cself , ErrorObj* _Nonnull err){
    auto c_to_cxx_cself = dynamic_cast<iegen::example::Student*>(static_cast<iegen::example::Student*>(cself));
    try {
      const auto& result = c_to_cxx_cself->teachers();
      auto _data_cxx_to_c_result = new void* _Nonnull [result.size()];
    CDataArray cxx_to_c_result = { _data_cxx_to_c_result, (long long)result.size() };
    for (int _i = 0; _i < result.size(); ++_i) {
      auto& value_result = result[_i];
      auto value_ptr_value_result = const_cast<iegen::example::Teacher*>(value_result);
        auto cxx_to_c_value_result = static_cast<iegen::example::Teacher*>(value_ptr_value_result);
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
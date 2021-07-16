/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 07/14/2021-05:42.
 * Please do not change it manually.
 */

#include <string.h>
#include <memory>
#include "swift/wrappers/forward_decl/c_teacher.h"
#include "cxx/forward_decl/teacher.hpp"
#include "cxx/forward_decl/student.hpp"


using namespace iegen::example;
void release_Teacher(void* _Nonnull cself) {
    delete dynamic_cast<iegen::example::Teacher*>(static_cast<iegen::example::Teacher*>(cself));
}

void* _Nonnull create_Teacher(){
    auto this_object = new iegen::example::Teacher();
    return static_cast<iegen::example::Teacher*>(this_object);
}

void _func_Teacher_addStudent(void* _Nonnull cself, void* _Nonnull s, ErrorObj* _Nonnull err){
    
    std::shared_ptr<iegen::example::Student> c_to_cxx_s;
    auto c_to_cxx_s_baseptr = *reinterpret_cast<std::shared_ptr<iegen::example::Student>*>(s);
    c_to_cxx_s = std::dynamic_pointer_cast<iegen::example::Student>(c_to_cxx_s_baseptr);
  
    auto c_to_cxx_cself = dynamic_cast<iegen::example::Teacher*>(static_cast<iegen::example::Teacher*>(cself));
    try {
      c_to_cxx_cself->addStudent(c_to_cxx_s);
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

CDataArray _func_Teacher_students(void* _Nonnull cself, ErrorObj* _Nonnull err){
    auto c_to_cxx_cself = dynamic_cast<iegen::example::Teacher*>(static_cast<iegen::example::Teacher*>(cself));
    try {
      const auto& result = c_to_cxx_cself->students();
      auto _data_cxx_to_c_result = new void* [result.size()];
    CDataArray cxx_to_c_result = { _data_cxx_to_c_result, (long long)result.size() };
    for (int _i = 0; _i < result.size(); ++_i) {
      auto& value_result = result[_i];
      
        void* cxx_to_c_value_result;
        std::shared_ptr<iegen::example::Student> cxx_to_c_value_result_baseptr = std::static_pointer_cast<iegen::example::Student>(value_result);
        cxx_to_c_value_result = reinterpret_cast<void*>(new std::shared_ptr<iegen::example::Student>(cxx_to_c_value_result_baseptr));
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
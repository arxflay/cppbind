#include <string.h>
#include <memory>
#include "swift/wrappers/getters/c_number.h"
#include "cxx/getters/number.hpp"

using namespace iegen::example;
void release_NumberInt(void* _Nonnull cself) {
    delete static_cast<std::shared_ptr<iegen::example::Number<int>>*>(cself);
}
void* _Nonnull create_NumberInt(int n){
    
    auto this_object = new iegen::example::Number<int>(n);
    return new std::shared_ptr<iegen::example::Number<int>>(this_object);
}
int _prop_get_NumberInt_num(void* _Nonnull cself){
    auto c_to_cxx_cself = std::dynamic_pointer_cast<iegen::example::Number<int>>(
              *static_cast<std::shared_ptr<iegen::example::Number<int>>*>(cself)
              );
    auto result = c_to_cxx_cself->num;
    
    return result;
}
void _prop_set_NumberInt_num(void* _Nonnull cself, int num){
    auto c_to_cxx_cself = std::dynamic_pointer_cast<iegen::example::Number<int>>(
              *static_cast<std::shared_ptr<iegen::example::Number<int>>*>(cself)
              );
    
    c_to_cxx_cself->num = num;
}

using namespace iegen::example;
void release_NumberDouble(void* _Nonnull cself) {
    delete static_cast<std::shared_ptr<iegen::example::Number<double>>*>(cself);
}
void* _Nonnull create_NumberDouble(double n){
    
    auto this_object = new iegen::example::Number<double>(n);
    return new std::shared_ptr<iegen::example::Number<double>>(this_object);
}
double _prop_get_NumberDouble_num(void* _Nonnull cself){
    auto c_to_cxx_cself = std::dynamic_pointer_cast<iegen::example::Number<double>>(
              *static_cast<std::shared_ptr<iegen::example::Number<double>>*>(cself)
              );
    auto result = c_to_cxx_cself->num;
    
    return result;
}
void _prop_set_NumberDouble_num(void* _Nonnull cself, double num){
    auto c_to_cxx_cself = std::dynamic_pointer_cast<iegen::example::Number<double>>(
              *static_cast<std::shared_ptr<iegen::example::Number<double>>*>(cself)
              );
    
    c_to_cxx_cself->num = num;
}

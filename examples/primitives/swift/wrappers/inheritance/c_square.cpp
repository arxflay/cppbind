#include <string.h>
#include <memory>
#include "swift/wrappers/inheritance/c_square.h"
#include "cxx/inheritance/square.hpp"


using namespace iegen::example;
void release_Square(void* _Nonnull cself) {
    delete dynamic_cast<iegen::example::Square*>(static_cast<iegen::example::Parallelogram*>(cself));
}
void* _Nonnull create_Square(double side){
    
    auto this_object = new iegen::example::Square(side);
    return static_cast<iegen::example::Parallelogram*>(this_object);
}
double _prop_get_Square_area(void* _Nonnull cself){
    auto c_to_cxx_cself = dynamic_cast<iegen::example::Square*>(static_cast<iegen::example::Parallelogram*>(cself));
    auto result = c_to_cxx_cself->area();
    
    return result;
}
double _func_Square_perimeter(void* _Nonnull cself ){
    auto c_to_cxx_cself = dynamic_cast<iegen::example::Square*>(static_cast<iegen::example::Parallelogram*>(cself));
    const auto& result = c_to_cxx_cself->perimeter();
    
    return result;
}
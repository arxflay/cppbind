/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 10/28/2021-10:21.
 * Please do not change it manually.
 */

#include <string.h>
#include <memory>
#include "swift/wrappers/inheritance/c_square.h"
#include "cxx/inheritance/square.hpp"
#include "cxx/inheritance/rhombus.hpp"
#include "cxx/inheritance/rectangle.hpp"

using namespace iegen::example;

void release_Square(void* _Nonnull cself) {
    delete dynamic_cast<iegen::example::Square*>(static_cast<iegen::example::Parallelogram*>(cself));
}

void* _Nonnull create_Square(double side){
    
    auto this_object = new iegen::example::Square(side);
    return static_cast<iegen::example::Parallelogram*>(this_object);
}

double _prop_get_Square_area(void* _Nonnull cself){
    // we might need to avoid dynamic_cast if there is no multiple inheritance
    auto c_to_cxx_cself = dynamic_cast<iegen::example::Square*>(static_cast<iegen::example::Parallelogram*>(cself));
    const auto& result = c_to_cxx_cself->area();
    
    return result;
}

double _func_Square_perimeter(void* _Nonnull cself, ErrorObj* _Nonnull err){
    
    // we might need to avoid dynamic_cast if there is no multiple inheritance
    auto c_to_cxx_cself = dynamic_cast<iegen::example::Square*>(static_cast<iegen::example::Parallelogram*>(cself));
    try {
        const auto& result = c_to_cxx_cself->perimeter();
        
        return result;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    double result;
    return result;
}
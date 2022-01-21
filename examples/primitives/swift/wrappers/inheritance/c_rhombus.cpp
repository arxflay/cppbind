/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 01/21/2022-13:49.
 * Please do not change it manually.
 */

#include <iostream>
#include <string.h>
#include <cxxabi.h>
#include <memory>
#include "swift/wrappers/inheritance/c_rhombus.h"
#include "cxx/inheritance/rhombus.hpp"
#include "cxx/inheritance/parallelogram.hpp"
#include "cxx/inheritance/square.hpp"

using namespace iegen::example;

void release_RhombusFigureImpl(CObject cself, bool owner){
    delete cself.type;
    if (owner) {
        delete static_cast<iegen::example::Rhombus*>(cself.ptr);
    }
}

CObject create_RhombusFigure(double diagonal1, double diagonal2, ErrorObj* _Nonnull err){
    
    
    try {
        auto this_object = new iegen::example::Rhombus(diagonal1, diagonal2);
        return {strdup("iegen::example::Rhombus"), this_object};
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    CObject result{};
    return result;
}

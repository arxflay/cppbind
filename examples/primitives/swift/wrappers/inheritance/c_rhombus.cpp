/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 02/03/2022-13:55.
 * Please do not change it manually.
 */

#include <stdlib.h>
#include <string.h>
#include <cxxabi.h>
#include <memory>
#include "swift/wrappers/inheritance/c_rhombus.h"
#include "cxx/inheritance/rhombus.hpp"
#include "cxx/inheritance/parallelogram.hpp"

using namespace iegen::example;

void release_RhombusFigureImpl(IEGenCObject cself, bool owner){
    free(cself.type);
    if (owner) {
        delete dynamic_cast<iegen::example::Rhombus*>(static_cast<iegen::example::Parallelogram*>(cself.ptr));
    }
}

IEGenCObject create_RhombusFigure(double diagonal1, double diagonal2, IEGenCObject* _Nonnull err){
    
    
    try {
        auto this_object = new iegen::example::Rhombus(diagonal1, diagonal2);
        return {strdup("iegen::example::Rhombus"), static_cast<iegen::example::Parallelogram*>(this_object)};
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

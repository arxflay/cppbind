/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 02/15/2022-10:56.
 * Please do not change it manually.
 */

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cxxabi.h>
#include <memory>
#include <type_traits>
#include "swift/wrappers/inheritance/c_parallelogram.h"
#include "cxx/inheritance/parallelogram.hpp"
#include "cxx/inheritance/rectangle.hpp"
#include "cxx/inheritance/square.hpp"
#include "cxx/inheritance/rhombus.hpp"

using namespace iegen::example;

void release_ParallelogramImpl(IEGenCObject cself, bool owner){
    static_assert(std::has_virtual_destructor<iegen::example::Parallelogram>::value, "iegen::example::Parallelogram type must have virtual destructor");
    free(cself.type);
    if (owner) {
        delete static_cast<iegen::example::Parallelogram*>(cself.ptr);
    }
}

double _prop_get_Parallelogram_area(IEGenCObject cself){iegen::example::Parallelogram* ctocxxcself = nullptr;
    if (cself.ptr) {
        if (strcmp(cself.type, "iegen::example::Parallelogram") == 0)
            ctocxxcself = static_cast<iegen::example::Parallelogram*>(cself.ptr);
        else if (strcmp(cself.type, "iegen::example::Rectangle") == 0)
            ctocxxcself = static_cast<iegen::example::Rectangle*>(cself.ptr);
        else if (strcmp(cself.type, "iegen::example::Rhombus") == 0)
            ctocxxcself = static_cast<iegen::example::Rhombus*>(cself.ptr);
        else if (strcmp(cself.type, "iegen::example::Square") == 0)
            ctocxxcself = static_cast<iegen::example::Square*>(cself.ptr);
        else {
            std::cerr << "Unexpected object type: " << cself.type << std::endl;
            exit(1);
        }
    }
    const auto& result = ctocxxcself->area();
    
    return result;
}

double _func_Parallelogram_perimeter(IEGenCObject cself, IEGenCObject* _Nonnull err){
    iegen::example::Parallelogram* ctocxxcself = nullptr;
    if (cself.ptr) {
        if (strcmp(cself.type, "iegen::example::Parallelogram") == 0)
            ctocxxcself = static_cast<iegen::example::Parallelogram*>(cself.ptr);
        else if (strcmp(cself.type, "iegen::example::Rectangle") == 0)
            ctocxxcself = static_cast<iegen::example::Rectangle*>(cself.ptr);
        else if (strcmp(cself.type, "iegen::example::Rhombus") == 0)
            ctocxxcself = static_cast<iegen::example::Rhombus*>(cself.ptr);
        else if (strcmp(cself.type, "iegen::example::Square") == 0)
            ctocxxcself = static_cast<iegen::example::Square*>(cself.ptr);
        else {
            std::cerr << "Unexpected object type: " << cself.type << std::endl;
            exit(1);
        }
    }
    try {
        const auto& result = ctocxxcself->perimeter();
        
        return result;
    }
    catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    }
    catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    double result {};
    return result;
}

bool _func_Parallelogram_equals(IEGenCObject cself, IEGenCObject p, IEGenCObject* _Nonnull err){
    iegen::example::Parallelogram* ctocxxp = nullptr;
    if (p.ptr) {
        if (strcmp(p.type, "iegen::example::Parallelogram") == 0)
            ctocxxp = static_cast<iegen::example::Parallelogram*>(p.ptr);
        else if (strcmp(p.type, "iegen::example::Rectangle") == 0)
            ctocxxp = static_cast<iegen::example::Rectangle*>(p.ptr);
        else if (strcmp(p.type, "iegen::example::Rhombus") == 0)
            ctocxxp = static_cast<iegen::example::Rhombus*>(p.ptr);
        else if (strcmp(p.type, "iegen::example::Square") == 0)
            ctocxxp = static_cast<iegen::example::Square*>(p.ptr);
        else {
            std::cerr << "Unexpected object type: " << p.type << std::endl;
            exit(1);
        }
    }
  
    iegen::example::Parallelogram* ctocxxcself = nullptr;
    if (cself.ptr) {
        if (strcmp(cself.type, "iegen::example::Parallelogram") == 0)
            ctocxxcself = static_cast<iegen::example::Parallelogram*>(cself.ptr);
        else if (strcmp(cself.type, "iegen::example::Rectangle") == 0)
            ctocxxcself = static_cast<iegen::example::Rectangle*>(cself.ptr);
        else if (strcmp(cself.type, "iegen::example::Rhombus") == 0)
            ctocxxcself = static_cast<iegen::example::Rhombus*>(cself.ptr);
        else if (strcmp(cself.type, "iegen::example::Square") == 0)
            ctocxxcself = static_cast<iegen::example::Square*>(cself.ptr);
        else {
            std::cerr << "Unexpected object type: " << cself.type << std::endl;
            exit(1);
        }
    }
    try {
        const auto& result = ctocxxcself->equals(ctocxxp);
        
        return result;
    }
    catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    }
    catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    bool result {};
    return result;
}

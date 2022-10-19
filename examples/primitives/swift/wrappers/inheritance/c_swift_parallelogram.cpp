/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 10/17/2022-16:24.
 * Please do not change it manually.
 */

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cxxabi.h>
#include <memory>
#include <type_traits>
#include "swift/wrappers/inheritance/c_swift_parallelogram.h"
#include "swift/wrappers/cppbind_wrapper_helper.hpp"
#include "cxx/inheritance/parallelogram.hpp"
#include "cxx/inheritance/rectangle.hpp"
#include "cxx/inheritance/rhombus.hpp"
#include "cxx/inheritance/square.hpp"

extern const char* CPPBIND_CPPBIND_EXAMPLE_RECTANGLE;
extern const char* CPPBIND_CPPBIND_EXAMPLE_RHOMBUSFIGURE;
extern const char* CPPBIND_CPPBIND_EXAMPLE_SQUARE;
extern const char* CPPBIND_STD_STDEXCEPTION;

const char* CPPBIND_CPPBIND_EXAMPLE_PARALLELOGRAM = "cppbind::example::Parallelogram";

void release_CppbindExample_ParallelogramImpl(CppBindCObject cself, bool owner) {
    using namespace cppbind::example;
    static_assert(std::has_virtual_destructor<cppbind::example::Parallelogram>::value, "cppbind::example::Parallelogram type must have virtual destructor");
    if (owner) {
        if (strcmp(cself.type, CPPBIND_CPPBIND_EXAMPLE_PARALLELOGRAM) == 0)
            delete static_cast<cppbind::example::Parallelogram*>(cself.ptr);
        else if (strcmp(cself.type, CPPBIND_CPPBIND_EXAMPLE_RECTANGLE) == 0)
            delete static_cast<cppbind::example::Rectangle*>(cself.ptr);
        else if (strcmp(cself.type, CPPBIND_CPPBIND_EXAMPLE_RHOMBUSFIGURE) == 0)
            delete static_cast<cppbind::example::Rhombus*>(cself.ptr);
        else if (strcmp(cself.type, CPPBIND_CPPBIND_EXAMPLE_SQUARE) == 0)
            delete static_cast<cppbind::example::Square*>(cself.ptr);
        else {
            std::cerr << "Unexpected object type: " << cself.type << std::endl;
            exit(1);
        }
    }
    free(cself.type);
}

cppbind::example::Parallelogram* recover_obj_from_CppbindExample_Parallelogram(CppBindCObject cppbindObj) {
    if (cppbindObj.ptr) {
        if (strcmp(cppbindObj.type, CPPBIND_CPPBIND_EXAMPLE_PARALLELOGRAM) == 0)
            return static_cast<cppbind::example::Parallelogram*>(cppbindObj.ptr);
        else if (strcmp(cppbindObj.type, CPPBIND_CPPBIND_EXAMPLE_RECTANGLE) == 0)
            return static_cast<cppbind::example::Rectangle*>(cppbindObj.ptr);
        else if (strcmp(cppbindObj.type, CPPBIND_CPPBIND_EXAMPLE_RHOMBUSFIGURE) == 0)
            return static_cast<cppbind::example::Rhombus*>(cppbindObj.ptr);
        else if (strcmp(cppbindObj.type, CPPBIND_CPPBIND_EXAMPLE_SQUARE) == 0)
            return static_cast<cppbind::example::Square*>(cppbindObj.ptr);
        else {
            std::cerr << "Unexpected object type: " << cppbindObj.type << std::endl;
            exit(1);
        }
    }
    return nullptr;
}

double _prop_get_CppbindExample_Parallelogram_area(CppBindCObject cself, CppBindCObject* _Nonnull cppbind_err) {
    using namespace cppbind::example;
    cppbind::example::Parallelogram* ctocxxcself = recover_obj_from_CppbindExample_Parallelogram(cself);
    try {
        decltype(auto) result = ctocxxcself->area();
        
        return result;
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    double result {};
    return result;
}

double _func_CppbindExample_Parallelogram_perimeter(CppBindCObject cself, CppBindCObject* _Nonnull cppbind_err) {
    using namespace cppbind::example;
    cppbind::example::Parallelogram* ctocxxcself = recover_obj_from_CppbindExample_Parallelogram(cself);
    try {
        decltype(auto) result = ctocxxcself->perimeter();
        
        return result;
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    double result {};
    return result;
}

bool _func_CppbindExample_Parallelogram_isEqualTo(CppBindCObject cself, CppBindCObject p, CppBindCObject* _Nonnull cppbind_err) {
    using namespace cppbind::example;
    
    cppbind::example::Parallelogram* ctocxxp = recover_obj_from_CppbindExample_Parallelogram(p);

    cppbind::example::Parallelogram* ctocxxcself = recover_obj_from_CppbindExample_Parallelogram(cself);
    try {
        decltype(auto) result = ctocxxcself->isEqualTo(ctocxxp);
        
        return result;
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    bool result {};
    return result;
}


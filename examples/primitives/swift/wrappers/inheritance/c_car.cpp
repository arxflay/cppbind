/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 03/04/2022-15:19.
 * Please do not change it manually.
 */

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cxxabi.h>
#include <memory>
#include <type_traits>
#include "swift/wrappers/inheritance/c_car.h"
#include "cxx/inheritance/car.hpp"

using namespace iegen::example;

void release_MyCar(IEGenCObject cself, bool owner) {
    free(cself.type);
    if (owner) {
        delete static_cast<std::shared_ptr<iegen::example::MyCar>*>(cself.ptr);
    }
}

IEGenCObject create_MyCar(int numberOfSeats, IEGenCObject* _Nonnull err) {
    try {
        auto this_object = new iegen::example::MyCar(numberOfSeats);
        return {strdup("iegen::example::MyCar"), new std::shared_ptr<iegen::example::MyCar>(this_object)};
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}

char* _Nonnull _func_MyCar_type(IEGenCObject cself, IEGenCObject* _Nonnull err) {
    
    std::shared_ptr<iegen::example::MyCar> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<iegen::example::MyCar>*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->type();
        auto cxxtocresult = strdup(result.data());
        return cxxtocresult;
    } catch (const std::exception& e) {
        err->type = strdup("std::exception");
        err->ptr = new std::exception(e);
    } catch (...) {
        err->type = strdup("Uncaught Exception");
    }
    char* result {};
    return result;
}


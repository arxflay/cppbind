/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 01/21/2022-15:15.
 * Please do not change it manually.
 */

#include <iostream>
#include <string.h>
#include <cxxabi.h>
#include <memory>
#include "swift/wrappers/inheritance/c_vehicle.h"
#include "cxx/inheritance/vehicle.hpp"


#include "cxx/inheritance/bicycle.hpp"

using namespace iegen::example;

void release_Vehicle(CObject cself, bool owner) {
    delete cself.type;
    if (owner) {
        delete static_cast<std::shared_ptr<iegen::example::Vehicle>*>(cself.ptr);
    }
}

int _prop_get_Vehicle_numberOfSeats(CObject cself){
    std::shared_ptr<iegen::example::Vehicle> ctocxxcself;
    if (strcmp(cself.type, "iegen::example::Vehicle") == 0)
        ctocxxcself = *static_cast<std::shared_ptr<iegen::example::Vehicle>*>(cself.ptr);
    else if (strcmp(cself.type, "iegen::example::Bicycle") == 0)
        ctocxxcself = *static_cast<std::shared_ptr<iegen::example::Bicycle>*>(cself.ptr);
    else {
        std::cerr << "Unexpected object type: " << cself.type << std::endl;
        exit(1);
    }
    const auto& result = ctocxxcself->numberOfSeats();
    
    return result;
}

char* _Nonnull _func_Vehicle_type(CObject cself, ErrorObj* _Nonnull err){
    
    std::shared_ptr<iegen::example::Vehicle> ctocxxcself;
    if (strcmp(cself.type, "iegen::example::Vehicle") == 0)
        ctocxxcself = *static_cast<std::shared_ptr<iegen::example::Vehicle>*>(cself.ptr);
    else if (strcmp(cself.type, "iegen::example::Bicycle") == 0)
        ctocxxcself = *static_cast<std::shared_ptr<iegen::example::Bicycle>*>(cself.ptr);
    else {
        std::cerr << "Unexpected object type: " << cself.type << std::endl;
        exit(1);
    }
    try {
        const auto& result = ctocxxcself->type();
        auto cxxtocresult = strdup(result.data());
        return cxxtocresult;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    char* result{};
    return result;
}

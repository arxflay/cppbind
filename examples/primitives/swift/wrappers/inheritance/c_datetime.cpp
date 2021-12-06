/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 11/25/2021-10:01.
 * Please do not change it manually.
 */

#include <string.h>
#include <memory>
#include "swift/wrappers/inheritance/c_datetime.h"
#include "cxx/inheritance/datetime.hpp"
#include "cxx/inheritance/time.hpp"
#include "cxx/inheritance/date.hpp"

using namespace iegen::example;

void release_DateTime(void* _Nonnull cself) {
    delete static_cast<std::shared_ptr<iegen::example::Base>*>(cself);
}

void* _Nonnull create_DateTime(int d, int mo, int y, int h, int mi, int s, ErrorObj* _Nonnull err){
    
    
    
    
    
    
    try {
        auto this_object = new iegen::example::DateTime(d, mo, y, h, mi, s);
        return new std::shared_ptr<iegen::example::Base>(this_object);
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    void* result = nullptr;
    return result;
}

char* _Nonnull _func_DateTime_value(void* _Nonnull cself, ErrorObj* _Nonnull err){
    
    std::shared_ptr<iegen::example::DateTime> c_to_cxx_cself;
    c_to_cxx_cself = std::dynamic_pointer_cast<iegen::example::DateTime>(*static_cast<std::shared_ptr<iegen::example::Base>*>(cself));
    try {
        const auto& result = c_to_cxx_cself->value();
        auto cxx_to_c_result = strdup(result.data());
        return cxx_to_c_result;
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
    char* result = nullptr;
    return result;
}

char* _Nonnull _prop_get_DateTime_datetime(void* _Nonnull cself){
    std::shared_ptr<iegen::example::DateTime> c_to_cxx_cself;
    c_to_cxx_cself = std::dynamic_pointer_cast<iegen::example::DateTime>(*static_cast<std::shared_ptr<iegen::example::Base>*>(cself));
    const auto& result = c_to_cxx_cself->datetime();
    auto cxx_to_c_result = strdup(result.data());
    return cxx_to_c_result;
}
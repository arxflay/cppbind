/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 11/18/2021-06:07.
 * Please do not change it manually.
 */

#include <string.h>
#include <memory>
#include "swift/wrappers/shared_ptr/c_shared_ptr.h"
#include "cxx/shared_ptr/shared_ptr.hpp"

using namespace Example;

void release_Car(void* _Nonnull cself) {
    delete static_cast<std::shared_ptr<Example::Car>*>(cself);
}

void* _Nonnull create_Car(int cost){
    
    auto this_object = new Example::Car(cost);
    return new std::shared_ptr<Example::Car>(this_object);
}

int _prop_get_Car_cost(void* _Nonnull cself){
    std::shared_ptr<Example::Car> c_to_cxx_cself;
    c_to_cxx_cself = *static_cast<std::shared_ptr<Example::Car>*>(cself);
    const auto& result = c_to_cxx_cself->cost();
    
    return result;
}

void _func_Car_setCostWithCarSharedPtr(void* _Nonnull cself, void* _Nonnull sp, ErrorObj* _Nonnull err){
    
    std::shared_ptr<Example::Car> c_to_cxx_sp;
    c_to_cxx_sp = *static_cast<std::shared_ptr<Example::Car>*>(sp);
  
    
    std::shared_ptr<Example::Car> c_to_cxx_cself;
    c_to_cxx_cself = *static_cast<std::shared_ptr<Example::Car>*>(cself);
    try {
        c_to_cxx_cself->setCostWithCarSharedPtr(c_to_cxx_sp);
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
}

void _func_Car_setCostWithCar(void* _Nonnull cself, void* _Nonnull sp, ErrorObj* _Nonnull err){
    std::shared_ptr<Example::Car> c_to_cxx_sp_shared_ptr;
    c_to_cxx_sp_shared_ptr = *static_cast<std::shared_ptr<Example::Car>*>(sp);
    auto& c_to_cxx_sp = *c_to_cxx_sp_shared_ptr.get();
  
    
    std::shared_ptr<Example::Car> c_to_cxx_cself;
    c_to_cxx_cself = *static_cast<std::shared_ptr<Example::Car>*>(cself);
    try {
        c_to_cxx_cself->setCostWithCar(c_to_cxx_sp);
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
}

void _func_Car_setCostWithCarConstSharedPtr(void* _Nonnull cself, void* _Nonnull sp, ErrorObj* _Nonnull err){
    
    std::shared_ptr<const Example::Car> c_to_cxx_sp;
    c_to_cxx_sp = *static_cast<std::shared_ptr<const Example::Car>*>(sp);
  
    
    std::shared_ptr<Example::Car> c_to_cxx_cself;
    c_to_cxx_cself = *static_cast<std::shared_ptr<Example::Car>*>(cself);
    try {
        c_to_cxx_cself->setCostWithCarConstSharedPtr(c_to_cxx_sp);
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
}

void* _Nonnull _func_Car_makeConstSharedPtr(void* _Nonnull cself, void* _Nonnull sp, ErrorObj* _Nonnull err){
    
    std::shared_ptr<Example::Car> c_to_cxx_sp;
    c_to_cxx_sp = *static_cast<std::shared_ptr<Example::Car>*>(sp);
  
    
    std::shared_ptr<Example::Car> c_to_cxx_cself;
    c_to_cxx_cself = *static_cast<std::shared_ptr<Example::Car>*>(cself);
    try {
        const auto& result = c_to_cxx_cself->makeConstSharedPtr(c_to_cxx_sp);
        
        void* cxx_to_c_result;
        cxx_to_c_result = reinterpret_cast<void*>(new std::shared_ptr<const Example::Car>(result));
        return cxx_to_c_result;
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

void _func_Car_setCostWithCarRef(void* _Nonnull cself, void* _Nonnull sp, ErrorObj* _Nonnull err){
    std::shared_ptr<Example::Car> c_to_cxx_sp_shared_ptr;
    c_to_cxx_sp_shared_ptr = *static_cast<std::shared_ptr<Example::Car>*>(sp);
    auto& c_to_cxx_sp = *c_to_cxx_sp_shared_ptr.get();
  
    
    std::shared_ptr<Example::Car> c_to_cxx_cself;
    c_to_cxx_cself = *static_cast<std::shared_ptr<Example::Car>*>(cself);
    try {
        c_to_cxx_cself->setCostWithCarRef(c_to_cxx_sp);
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
}

void _func_Car_setCostWithCarPtr(void* _Nonnull cself, void* _Nonnull sp, ErrorObj* _Nonnull err){
    std::shared_ptr<Example::Car> c_to_cxx_sp_shared_ptr;
    c_to_cxx_sp_shared_ptr = *static_cast<std::shared_ptr<Example::Car>*>(sp);
    auto c_to_cxx_sp = c_to_cxx_sp_shared_ptr.get();
  
    
    std::shared_ptr<Example::Car> c_to_cxx_cself;
    c_to_cxx_cself = *static_cast<std::shared_ptr<Example::Car>*>(cself);
    try {
        c_to_cxx_cself->setCostWithCarPtr(c_to_cxx_sp);
    }
    catch (const std::exception& e) {
        err->err_type = 1;
        err->err_ptr = new std::exception(e);
    }
    catch (...) {
        err->err_type = -1;
    }
}

void* _Nonnull _func_Car_getNewCarSharedPtr(void* _Nonnull cself, ErrorObj* _Nonnull err){
    
    std::shared_ptr<Example::Car> c_to_cxx_cself;
    c_to_cxx_cself = *static_cast<std::shared_ptr<Example::Car>*>(cself);
    try {
        const auto& result = c_to_cxx_cself->getNewCarSharedPtr();
        
        void* cxx_to_c_result;
        cxx_to_c_result = reinterpret_cast<void*>(new std::shared_ptr<Example::Car>(result));
        return cxx_to_c_result;
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
void release_CarUsage(void* _Nonnull cself) {
    delete static_cast<Example::CarUsage*>(cself);
}

void* _Nonnull create_CarUsage(void* _Nonnull car){
    std::shared_ptr<Example::Car> c_to_cxx_car_shared_ptr;
    c_to_cxx_car_shared_ptr = *static_cast<std::shared_ptr<Example::Car>*>(car);
    auto c_to_cxx_car = c_to_cxx_car_shared_ptr.get();
    auto this_object = new Example::CarUsage(c_to_cxx_car);
    return this_object;
}

void* _Nonnull _func_CarUsage_getCar(void* _Nonnull cself, ErrorObj* _Nonnull err){
    
    auto c_to_cxx_cself = static_cast<Example::CarUsage*>(cself);
    try {
        const auto& result = c_to_cxx_cself->getCar();
        
        std::shared_ptr<Example::Car> result_shared_ptr = std::make_shared<Example::Car>(result);
        void* cxx_to_c_result;
        cxx_to_c_result = reinterpret_cast<void*>(new std::shared_ptr<Example::Car>(result_shared_ptr));
        return cxx_to_c_result;
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
/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 09/07/2022-10:53.
 * Please do not change it manually.
 */

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cxxabi.h>
#include <memory>
#include <type_traits>
#include "swift/wrappers/inheritance/c_swift_usage.h"
#include "cxx/inheritance/usage.hpp"
#include "cxx/inheritance/parallelogram.hpp"
#include "cxx/inheritance/vehicle.hpp"
#include "cxx/inheritance/bicycle.hpp"
#include "cxx/inheritance/date.hpp"

extern const char* CPPBIND_STD_STDEXCEPTION;
extern const char* CPPBIND_CPPBIND_EXAMPLE_PARALLELOGRAM;
extern const char* CPPBIND_CPPBIND_EXAMPLE_VEHICLE;
extern const char* CPPBIND_CPPBIND_EXAMPLE_BICYCLE;
extern const char* CPPBIND_CPPBIND_EXAMPLE_MYDATE;

const char* CPPBIND_CPPBIND_EXAMPLE_GEOMETRICFIGURE = "cppbind::example::GeometricFigure";
const char* CPPBIND_CPPBIND_EXAMPLE_MYVEHICLE = "cppbind::example::MyVehicle";
const char* CPPBIND_CPPBIND_EXAMPLE_MYBICYCLE = "cppbind::example::MyBicycle";
const char* CPPBIND_CPPBIND_EXAMPLE_MYCALENDAR = "cppbind::example::MyCalendar";

cppbind::example::Parallelogram* recover_obj_from_CppbindExample_Parallelogram(CppBindCObject);
std::shared_ptr<cppbind::example::Vehicle> recover_obj_from_CppbindExample_Vehicle(CppBindCObject);
std::shared_ptr<cppbind::example::Date> recover_obj_from_CppbindExample_MyDate(CppBindCObject);

using namespace cppbind::example;

void release_CppbindExample_GeometricFigure(CppBindCObject cself, bool owner) {
    if (owner) {
        delete static_cast<cppbind::example::GeometricFigure*>(cself.ptr);
    }
    free(cself.type);
}

CppBindCObject create_CppbindExample_GeometricFigure(CppBindCObject p, CppBindCObject* _Nonnull cppbind_err) {
    
    cppbind::example::Parallelogram* ctocxxp = recover_obj_from_CppbindExample_Parallelogram(p);
    try {
        auto this_object = new cppbind::example::GeometricFigure(ctocxxp);
        return {strdup(CPPBIND_CPPBIND_EXAMPLE_GEOMETRICFIGURE), this_object};
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    CppBindCObject result {};
    return result;
}

CppBindCObject _prop_get_CppbindExample_GeometricFigure_parallelogram(CppBindCObject cself, CppBindCObject* _Nonnull cppbind_err) {
    auto ctocxxcself = static_cast<cppbind::example::GeometricFigure*>(cself.ptr);
    try {
        decltype(auto) result = ctocxxcself->parallelogram();
        
        char* type_result = nullptr;
        const char * name_result = typeid(*result).name();
        int status = 0;
        char* demangled_result = abi::__cxa_demangle(name_result, NULL, NULL, &status);
        if (status == 0) {
            type_result = demangled_result;
        } else {
            type_result = strdup(CPPBIND_CPPBIND_EXAMPLE_PARALLELOGRAM);
        }
        auto value_ptr_result = result;
        CppBindCObject cxxtocresult = {type_result, dynamic_cast<void*>(value_ptr_result)};
        return cxxtocresult;
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    CppBindCObject result {};
    return result;
}

void _prop_set_CppbindExample_GeometricFigure_parallelogram(CppBindCObject cself, CppBindCObject p, CppBindCObject* _Nonnull cppbind_err) {
    
    auto ctocxxcself = static_cast<cppbind::example::GeometricFigure*>(cself.ptr);
    
    cppbind::example::Parallelogram* ctocxxp = recover_obj_from_CppbindExample_Parallelogram(p);
    try {
        ctocxxcself->setParallelogram(ctocxxp);
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
}

CppBindCObject _prop_get_CppbindExample_GeometricFigure_nullableParallelogram(CppBindCObject cself, CppBindCObject* _Nonnull cppbind_err) {
    auto ctocxxcself = static_cast<cppbind::example::GeometricFigure*>(cself.ptr);
    try {
        decltype(auto) result = ctocxxcself->nullableParallelogram();
        
        char* type_result = nullptr;
        if (result) {
            const char * name_result = typeid(*result).name();
            int status = 0;
            char* demangled_result = abi::__cxa_demangle(name_result, NULL, NULL, &status);
            if (status == 0) {
                type_result = demangled_result;
            } else {
                type_result = strdup(CPPBIND_CPPBIND_EXAMPLE_PARALLELOGRAM);
            }
        } else {
            type_result = strdup(CPPBIND_CPPBIND_EXAMPLE_PARALLELOGRAM);
        }
        auto value_ptr_result = result;
        CppBindCObject cxxtocresult = {type_result, dynamic_cast<void*>(value_ptr_result)};
        return cxxtocresult;
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    CppBindCObject result {};
    return result;
}

void _prop_set_CppbindExample_GeometricFigure_nullableParallelogram(CppBindCObject cself, CppBindCObject p, CppBindCObject* _Nonnull cppbind_err) {
    
    auto ctocxxcself = static_cast<cppbind::example::GeometricFigure*>(cself.ptr);
    
    cppbind::example::Parallelogram* ctocxxp = recover_obj_from_CppbindExample_Parallelogram(p);
    try {
        ctocxxcself->setNullableParallelogram(ctocxxp);
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
}

void release_CppbindExample_MyVehicle(CppBindCObject cself, bool owner) {
    if (owner) {
        delete static_cast<std::shared_ptr<cppbind::example::MyVehicle>*>(cself.ptr);
    }
    free(cself.type);
}

CppBindCObject create_CppbindExample_MyVehicle(CppBindCObject v, CppBindCObject cv, CppBindCObject* _Nonnull cppbind_err) {
    
    std::shared_ptr<cppbind::example::Vehicle> ctocxxv;
    ctocxxv = recover_obj_from_CppbindExample_Vehicle(v);
    
    std::shared_ptr<const cppbind::example::Vehicle> ctocxxcv;
    ctocxxcv = recover_obj_from_CppbindExample_Vehicle(cv);
    try {
        auto this_object = new cppbind::example::MyVehicle(ctocxxv, ctocxxcv);
        return {strdup(CPPBIND_CPPBIND_EXAMPLE_MYVEHICLE), new std::shared_ptr<cppbind::example::MyVehicle>(this_object)};
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    CppBindCObject result {};
    return result;
}

CppBindCObject _prop_get_CppbindExample_MyVehicle_vehicle(CppBindCObject cself, CppBindCObject* _Nonnull cppbind_err) {
    std::shared_ptr<cppbind::example::MyVehicle> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<cppbind::example::MyVehicle>*>(cself.ptr);
    try {
        decltype(auto) result = ctocxxcself->vehicle();
        
        char* type_result = nullptr;
        void* cxxtocresult_ptr = nullptr;
        if (result) {
            
            auto& arg_pointee_result = *result.get();
            const char * name_result = typeid(arg_pointee_result).name();
            int status = 0;
            char* demangled_result = abi::__cxa_demangle(name_result, NULL, NULL, &status);
            if (status == 0) {
                type_result = demangled_result;
            } else {
                type_result = strdup(CPPBIND_CPPBIND_EXAMPLE_VEHICLE);
            }
            cxxtocresult_ptr = new std::shared_ptr<void>(std::dynamic_pointer_cast<void>(result));
        } else {
            type_result = strdup("cppbind::example::Vehicle");
        }
        CppBindCObject cxxtocresult = {type_result, cxxtocresult_ptr};
        return cxxtocresult;
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    CppBindCObject result {};
    return result;
}

void _prop_set_CppbindExample_MyVehicle_vehicle(CppBindCObject cself, CppBindCObject v, CppBindCObject* _Nonnull cppbind_err) {
    
    std::shared_ptr<cppbind::example::MyVehicle> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<cppbind::example::MyVehicle>*>(cself.ptr);
    
    std::shared_ptr<cppbind::example::Vehicle> ctocxxv = nullptr;
    if (v.ptr) {
        ctocxxv = recover_obj_from_CppbindExample_Vehicle(v);
    }
    try {
        ctocxxcself->setVehicle(ctocxxv);
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
}

CppBindCObject _prop_get_CppbindExample_MyVehicle_constVehicle(CppBindCObject cself, CppBindCObject* _Nonnull cppbind_err) {
    std::shared_ptr<cppbind::example::MyVehicle> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<cppbind::example::MyVehicle>*>(cself.ptr);
    try {
        decltype(auto) result = ctocxxcself->constVehicle();
        
        char* type_result = nullptr;
        void* cxxtocresult_ptr = nullptr;
        if (result) {
            
            auto& arg_pointee_result = *result.get();
            const char * name_result = typeid(arg_pointee_result).name();
            int status = 0;
            char* demangled_result = abi::__cxa_demangle(name_result, NULL, NULL, &status);
            if (status == 0) {
                type_result = demangled_result;
            } else {
                type_result = strdup(CPPBIND_CPPBIND_EXAMPLE_VEHICLE);
            }
            cxxtocresult_ptr = new std::shared_ptr<void>(std::dynamic_pointer_cast<void>(std::const_pointer_cast<cppbind::example::Vehicle>(result)));
        } else {
            type_result = strdup("cppbind::example::Vehicle");
        }
        CppBindCObject cxxtocresult = {type_result, cxxtocresult_ptr};
        return cxxtocresult;
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    CppBindCObject result {};
    return result;
}

void _prop_set_CppbindExample_MyVehicle_constVehicle(CppBindCObject cself, CppBindCObject v, CppBindCObject* _Nonnull cppbind_err) {
    
    std::shared_ptr<cppbind::example::MyVehicle> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<cppbind::example::MyVehicle>*>(cself.ptr);
    
    std::shared_ptr<const cppbind::example::Vehicle> ctocxxv = nullptr;
    if (v.ptr) {
        ctocxxv = recover_obj_from_CppbindExample_Vehicle(v);
    }
    try {
        ctocxxcself->setConstVehicle(ctocxxv);
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
}

void release_CppbindExample_MyBicycle(CppBindCObject cself, bool owner) {
    if (owner) {
        delete static_cast<std::shared_ptr<cppbind::example::MyBicycle>*>(cself.ptr);
    }
    free(cself.type);
}

CppBindCObject create_CppbindExample_MyBicycle(CppBindCObject b, CppBindCObject* _Nonnull cppbind_err) {
    
    std::shared_ptr<cppbind::example::Bicycle> ctocxxb;
    ctocxxb = *static_cast<std::shared_ptr<cppbind::example::Bicycle>*>(b.ptr);
    try {
        auto this_object = new cppbind::example::MyBicycle(ctocxxb);
        return {strdup(CPPBIND_CPPBIND_EXAMPLE_MYBICYCLE), new std::shared_ptr<cppbind::example::MyBicycle>(this_object)};
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    CppBindCObject result {};
    return result;
}

CppBindCObject _prop_get_CppbindExample_MyBicycle_bicycle(CppBindCObject cself, CppBindCObject* _Nonnull cppbind_err) {
    std::shared_ptr<cppbind::example::MyBicycle> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<cppbind::example::MyBicycle>*>(cself.ptr);
    try {
        decltype(auto) result = ctocxxcself->bicycle();
        
        char* type_result = strdup(CPPBIND_CPPBIND_EXAMPLE_BICYCLE);
        void* cxxtocresult_ptr = nullptr;
        cxxtocresult_ptr = new std::shared_ptr<void>(std::dynamic_pointer_cast<void>(std::const_pointer_cast<cppbind::example::Bicycle>(result)));
        CppBindCObject cxxtocresult = {type_result, cxxtocresult_ptr};
        return cxxtocresult;
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    CppBindCObject result {};
    return result;
}

void _prop_set_CppbindExample_MyBicycle_bicycle(CppBindCObject cself, CppBindCObject b, CppBindCObject* _Nonnull cppbind_err) {
    
    std::shared_ptr<cppbind::example::MyBicycle> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<cppbind::example::MyBicycle>*>(cself.ptr);
    
    std::shared_ptr<const cppbind::example::Bicycle> ctocxxb;
    ctocxxb = *static_cast<std::shared_ptr<const cppbind::example::Bicycle>*>(b.ptr);
    try {
        ctocxxcself->setBicycle(ctocxxb);
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
}

void release_CppbindExample_MyCalendar(CppBindCObject cself, bool owner) {
    if (owner) {
        delete static_cast<std::shared_ptr<cppbind::example::MyCalendar>*>(cself.ptr);
    }
    free(cself.type);
}

CppBindCObject create_CppbindExample_MyCalendar(CppBindCDataArray events, CppBindCObject* _Nonnull cppbind_err) {
    std::vector<std::shared_ptr<Date>> ctocxxevents;

    auto data_events = reinterpret_cast<CppBindCObject*>(events.data);

    for (size_t _i_events = 0; _i_events < events.size; ++_i_events) {
        auto& value_events = data_events[_i_events];
        
        std::shared_ptr<cppbind::example::Date> ctocxxvalue_events;
        ctocxxvalue_events = recover_obj_from_CppbindExample_MyDate(value_events);
        ctocxxevents.emplace_back(ctocxxvalue_events);
    }
    try {
        auto this_object = new cppbind::example::MyCalendar(ctocxxevents);
        return {strdup(CPPBIND_CPPBIND_EXAMPLE_MYCALENDAR), new std::shared_ptr<cppbind::example::MyCalendar>(this_object)};
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    CppBindCObject result {};
    return result;
}

void _func_CppbindExample_MyCalendar_addEvent(CppBindCObject cself, CppBindCObject e, CppBindCObject* _Nonnull cppbind_err) {
    
    std::shared_ptr<cppbind::example::Date> ctocxxe;
    ctocxxe = recover_obj_from_CppbindExample_MyDate(e);

    std::shared_ptr<cppbind::example::MyCalendar> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<cppbind::example::MyCalendar>*>(cself.ptr);
    try {
        ctocxxcself->addEvent(ctocxxe);
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
}

CppBindCDataArray _prop_get_CppbindExample_MyCalendar_events(CppBindCObject cself, CppBindCObject* _Nonnull cppbind_err) {
    std::shared_ptr<cppbind::example::MyCalendar> ctocxxcself;
    ctocxxcself = *static_cast<std::shared_ptr<cppbind::example::MyCalendar>*>(cself.ptr);
    try {
        decltype(auto) result = ctocxxcself->events();
        auto _data_cxxtocresult = new CppBindCObject [result.size()];
        CppBindCDataArray cxxtocresult = { _data_cxxtocresult, static_cast<long long>(result.size()) };
        for (int _i_result = 0; _i_result < result.size(); ++_i_result) {
            auto& value_result = result[_i_result];
            
            char* type_value_result = nullptr;
            void* cxxtocvalue_result_ptr = nullptr;

            auto& arg_pointee_value_result = *value_result.get();
            const char * name_value_result = typeid(arg_pointee_value_result).name();
            int status = 0;
            char* demangled_value_result = abi::__cxa_demangle(name_value_result, NULL, NULL, &status);
            if (status == 0) {
                type_value_result = demangled_value_result;
            } else {
                type_value_result = strdup(CPPBIND_CPPBIND_EXAMPLE_MYDATE);
            }
            cxxtocvalue_result_ptr = new std::shared_ptr<void>(std::dynamic_pointer_cast<void>(value_result));
            CppBindCObject cxxtocvalue_result = {type_value_result, cxxtocvalue_result_ptr};
            _data_cxxtocresult[_i_result] = cxxtocvalue_result;
        }
        return cxxtocresult;
    } catch (const std::exception& e) {
        cppbind_err->type = strdup(CPPBIND_STD_STDEXCEPTION);
        cppbind_err->ptr = new std::exception(e);
    } catch (...) {
        cppbind_err->type = strdup("Uncaught Exception");
    }
    CppBindCDataArray result {};
    return result;
}


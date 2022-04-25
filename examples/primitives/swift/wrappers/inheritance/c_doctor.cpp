/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 04/06/2022-15:19.
 * Please do not change it manually.
 */

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cxxabi.h>
#include <memory>
#include <type_traits>
#include "swift/wrappers/inheritance/c_doctor.h"
#include "cxx/inheritance/doctor.hpp"

extern const char* IEGEN_STD_STDEXCEPTION;

const char* IEGEN_IEGEN_EXAMPLE_DOCTOR = "iegen::example::Doctor";
const char* IEGEN_IEGEN_EXAMPLE_SURGEON = "iegen::example::Surgeon";
const char* IEGEN_IEGEN_EXAMPLE_GOODVIRTUALDOCTOR = "iegen::example::GoodVirtualDoctor";
const char* IEGEN_IEGEN_EXAMPLE_GOODDOCTOR = "iegen::example::GoodDoctor";
const char* IEGEN_IEGEN_EXAMPLE_GOODYOUNGDOCTOR = "iegen::example::GoodYoungDoctor";
const char* IEGEN_IEGEN_EXAMPLE_GOODOLDDOCTOR = "iegen::example::GoodOldDoctor";
const char* IEGEN_IEGEN_EXAMPLE_DOCTORINFO = "iegen::example::DoctorInfo";

using namespace iegen::example;

void release_IegenExample_Doctor(IEGenCObject cself, bool owner) {
    if (owner) {
        if (strcmp(cself.type, IEGEN_IEGEN_EXAMPLE_DOCTOR) == 0)
            delete static_cast<iegen::example::Doctor*>(cself.ptr);
        else if (strcmp(cself.type, IEGEN_IEGEN_EXAMPLE_SURGEON) == 0)
            delete static_cast<iegen::example::Surgeon*>(cself.ptr);
        else {
            std::cerr << "Unexpected object type: " << cself.type << std::endl;
            exit(1);
        }
    }
    free(cself.type);
}

iegen::example::Doctor* downcast_IegenExample_Doctor(IEGenCObject iegenObj) {
    if (iegenObj.ptr) {
        if (strcmp(iegenObj.type, IEGEN_IEGEN_EXAMPLE_DOCTOR) == 0)
            return static_cast<iegen::example::Doctor*>(iegenObj.ptr);
        else if (strcmp(iegenObj.type, IEGEN_IEGEN_EXAMPLE_SURGEON) == 0)
            return static_cast<iegen::example::Surgeon*>(iegenObj.ptr);
        else {
            std::cerr << "Unexpected object type: " << iegenObj.type << std::endl;
            exit(1);
        }
    }
    return nullptr;
}

IEGenCObject create_IegenExample_Doctor(char* _Nonnull doctor_name, IEGenCObject* _Nonnull iegen_err) {
    auto ctocxxdoctor_name = std::string(doctor_name);
    free(doctor_name);
    try {
        auto this_object = new iegen::example::Doctor(ctocxxdoctor_name);
        return {strdup(IEGEN_IEGEN_EXAMPLE_DOCTOR), this_object};
    } catch (const std::exception& e) {
        iegen_err->type = strdup(IEGEN_STD_STDEXCEPTION);
        iegen_err->ptr = new std::exception(e);
    } catch (...) {
        iegen_err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}

IEGenCObject create_IegenExample_Surgeon(char* _Nonnull surgeon_name, IEGenCObject* _Nonnull iegen_err) {
    auto ctocxxsurgeon_name = std::string(surgeon_name);
    free(surgeon_name);
    try {
        auto this_object = new iegen::example::Surgeon(ctocxxsurgeon_name);
        return {strdup(IEGEN_IEGEN_EXAMPLE_SURGEON), this_object};
    } catch (const std::exception& e) {
        iegen_err->type = strdup(IEGEN_STD_STDEXCEPTION);
        iegen_err->ptr = new std::exception(e);
    } catch (...) {
        iegen_err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}

void release_IegenExample_GoodVirtualDoctorImpl(IEGenCObject cself, bool owner) {
    static_assert(std::has_virtual_destructor<iegen::example::GoodVirtualDoctor>::value, "iegen::example::GoodVirtualDoctor type must have virtual destructor");
    if (owner) {
        if (strcmp(cself.type, IEGEN_IEGEN_EXAMPLE_GOODVIRTUALDOCTOR) == 0)
            delete static_cast<iegen::example::GoodVirtualDoctor*>(cself.ptr);
        else if (strcmp(cself.type, IEGEN_IEGEN_EXAMPLE_GOODYOUNGDOCTOR) == 0)
            delete static_cast<iegen::example::GoodYoungDoctor*>(cself.ptr);
        else {
            std::cerr << "Unexpected object type: " << cself.type << std::endl;
            exit(1);
        }
    }
    free(cself.type);
}

iegen::example::GoodVirtualDoctor* downcast_IegenExample_GoodVirtualDoctor(IEGenCObject iegenObj) {
    if (iegenObj.ptr) {
        if (strcmp(iegenObj.type, IEGEN_IEGEN_EXAMPLE_GOODVIRTUALDOCTOR) == 0)
            return static_cast<iegen::example::GoodVirtualDoctor*>(iegenObj.ptr);
        else if (strcmp(iegenObj.type, IEGEN_IEGEN_EXAMPLE_GOODYOUNGDOCTOR) == 0)
            return static_cast<iegen::example::GoodYoungDoctor*>(iegenObj.ptr);
        else {
            std::cerr << "Unexpected object type: " << iegenObj.type << std::endl;
            exit(1);
        }
    }
    return nullptr;
}

void release_IegenExample_GoodDoctor(IEGenCObject cself, bool owner) {
    if (owner) {
        if (strcmp(cself.type, IEGEN_IEGEN_EXAMPLE_GOODDOCTOR) == 0)
            delete static_cast<iegen::example::GoodDoctor*>(cself.ptr);
        else if (strcmp(cself.type, IEGEN_IEGEN_EXAMPLE_GOODOLDDOCTOR) == 0)
            delete static_cast<iegen::example::GoodOldDoctor*>(cself.ptr);
        else if (strcmp(cself.type, IEGEN_IEGEN_EXAMPLE_GOODYOUNGDOCTOR) == 0)
            delete static_cast<iegen::example::GoodYoungDoctor*>(cself.ptr);
        else {
            std::cerr << "Unexpected object type: " << cself.type << std::endl;
            exit(1);
        }
    }
    free(cself.type);
}

iegen::example::GoodDoctor* downcast_IegenExample_GoodDoctor(IEGenCObject iegenObj) {
    if (iegenObj.ptr) {
        if (strcmp(iegenObj.type, IEGEN_IEGEN_EXAMPLE_GOODDOCTOR) == 0)
            return static_cast<iegen::example::GoodDoctor*>(iegenObj.ptr);
        else if (strcmp(iegenObj.type, IEGEN_IEGEN_EXAMPLE_GOODOLDDOCTOR) == 0)
            return static_cast<iegen::example::GoodOldDoctor*>(iegenObj.ptr);
        else if (strcmp(iegenObj.type, IEGEN_IEGEN_EXAMPLE_GOODYOUNGDOCTOR) == 0)
            return static_cast<iegen::example::GoodYoungDoctor*>(iegenObj.ptr);
        else {
            std::cerr << "Unexpected object type: " << iegenObj.type << std::endl;
            exit(1);
        }
    }
    return nullptr;
}

IEGenCObject create_IegenExample_GoodDoctor(char* _Nonnull doctor_name, IEGenCObject* _Nonnull iegen_err) {
    auto ctocxxdoctor_name = std::string(doctor_name);
    free(doctor_name);
    try {
        auto this_object = new iegen::example::GoodDoctor(ctocxxdoctor_name);
        return {strdup(IEGEN_IEGEN_EXAMPLE_GOODDOCTOR), this_object};
    } catch (const std::exception& e) {
        iegen_err->type = strdup(IEGEN_STD_STDEXCEPTION);
        iegen_err->ptr = new std::exception(e);
    } catch (...) {
        iegen_err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}

IEGenCObject create_IegenExample_GoodYoungDoctor(char* _Nonnull doctor_name, IEGenCObject* _Nonnull iegen_err) {
    auto ctocxxdoctor_name = std::string(doctor_name);
    free(doctor_name);
    try {
        auto this_object = new iegen::example::GoodYoungDoctor(ctocxxdoctor_name);
        return {strdup(IEGEN_IEGEN_EXAMPLE_GOODYOUNGDOCTOR), this_object};
    } catch (const std::exception& e) {
        iegen_err->type = strdup(IEGEN_STD_STDEXCEPTION);
        iegen_err->ptr = new std::exception(e);
    } catch (...) {
        iegen_err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}

IEGenCObject create_IegenExample_GoodOldDoctor(char* _Nonnull doctor_name, IEGenCObject* _Nonnull iegen_err) {
    auto ctocxxdoctor_name = std::string(doctor_name);
    free(doctor_name);
    try {
        auto this_object = new iegen::example::GoodOldDoctor(ctocxxdoctor_name);
        return {strdup(IEGEN_IEGEN_EXAMPLE_GOODOLDDOCTOR), this_object};
    } catch (const std::exception& e) {
        iegen_err->type = strdup(IEGEN_STD_STDEXCEPTION);
        iegen_err->ptr = new std::exception(e);
    } catch (...) {
        iegen_err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}

void release_IegenExample_DoctorInfo(IEGenCObject cself, bool owner) {
    if (owner) {
        delete static_cast<iegen::example::DoctorInfo*>(cself.ptr);
    }
    free(cself.type);
}

IEGenCObject create_IegenExample_DoctorInfo(IEGenCObject s, IEGenCObject* _Nonnull iegen_err) {
    
    auto ctocxxs = static_cast<iegen::example::Surgeon*>(s.ptr);
    try {
        auto this_object = new iegen::example::DoctorInfo(ctocxxs);
        return {strdup(IEGEN_IEGEN_EXAMPLE_DOCTORINFO), this_object};
    } catch (const std::exception& e) {
        iegen_err->type = strdup(IEGEN_STD_STDEXCEPTION);
        iegen_err->ptr = new std::exception(e);
    } catch (...) {
        iegen_err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}

IEGenCObject create_IegenExample_DoctorInfo_1(IEGenCObject d, IEGenCObject* _Nonnull iegen_err) {
    
    auto ctocxxd = static_cast<iegen::example::GoodYoungDoctor*>(d.ptr);
    try {
        auto this_object = new iegen::example::DoctorInfo(ctocxxd);
        return {strdup(IEGEN_IEGEN_EXAMPLE_DOCTORINFO), this_object};
    } catch (const std::exception& e) {
        iegen_err->type = strdup(IEGEN_STD_STDEXCEPTION);
        iegen_err->ptr = new std::exception(e);
    } catch (...) {
        iegen_err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}

char* _Nonnull _func_IegenExample_DoctorInfo_getDoctorName(IEGenCObject cself, IEGenCObject d, IEGenCObject* _Nonnull iegen_err) {
    
    iegen::example::Doctor* ctocxxd = downcast_IegenExample_Doctor(d);
  
    auto ctocxxcself = static_cast<iegen::example::DoctorInfo*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->getDoctorName(ctocxxd);
        auto cxxtocresult = strdup(result.data());
        return cxxtocresult;
    } catch (const std::exception& e) {
        iegen_err->type = strdup(IEGEN_STD_STDEXCEPTION);
        iegen_err->ptr = new std::exception(e);
    } catch (...) {
        iegen_err->type = strdup("Uncaught Exception");
    }
    char* result {};
    return result;
}

char* _Nonnull _func_IegenExample_DoctorInfo_getSurgeonName(IEGenCObject cself, IEGenCObject s, IEGenCObject* _Nonnull iegen_err) {
    
    auto ctocxxs = static_cast<iegen::example::Surgeon*>(s.ptr);
  
    auto ctocxxcself = static_cast<iegen::example::DoctorInfo*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->getSurgeonName(ctocxxs);
        auto cxxtocresult = strdup(result.data());
        return cxxtocresult;
    } catch (const std::exception& e) {
        iegen_err->type = strdup(IEGEN_STD_STDEXCEPTION);
        iegen_err->ptr = new std::exception(e);
    } catch (...) {
        iegen_err->type = strdup("Uncaught Exception");
    }
    char* result {};
    return result;
}

IEGenCObject _func_IegenExample_DoctorInfo_getDoctor(IEGenCObject cself, IEGenCObject* _Nonnull iegen_err) {
    auto ctocxxcself = static_cast<iegen::example::DoctorInfo*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->getDoctor();
        
        char* type_result = strdup(IEGEN_IEGEN_EXAMPLE_DOCTOR);
        auto value_ptr_result = const_cast<iegen::example::Doctor*>(result);
        IEGenCObject cxxtocresult = {type_result, value_ptr_result};
        return cxxtocresult;
    } catch (const std::exception& e) {
        iegen_err->type = strdup(IEGEN_STD_STDEXCEPTION);
        iegen_err->ptr = new std::exception(e);
    } catch (...) {
        iegen_err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}

IEGenCObject _func_IegenExample_DoctorInfo_getGoodDoctor(IEGenCObject cself, IEGenCObject* _Nonnull iegen_err) {
    auto ctocxxcself = static_cast<iegen::example::DoctorInfo*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->getGoodDoctor();
        
        char* type_result = strdup(IEGEN_IEGEN_EXAMPLE_GOODDOCTOR);
        auto value_ptr_result = const_cast<iegen::example::GoodDoctor*>(result);
        IEGenCObject cxxtocresult = {type_result, value_ptr_result};
        return cxxtocresult;
    } catch (const std::exception& e) {
        iegen_err->type = strdup(IEGEN_STD_STDEXCEPTION);
        iegen_err->ptr = new std::exception(e);
    } catch (...) {
        iegen_err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}

IEGenCObject _func_IegenExample_DoctorInfo_getGoodVirtualDoctor(IEGenCObject cself, IEGenCObject* _Nonnull iegen_err) {
    auto ctocxxcself = static_cast<iegen::example::DoctorInfo*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->getGoodVirtualDoctor();
        
        char* type_result = nullptr;
        const char * name_result = typeid(*result).name();
        int status = 0;
        char* demangled_result = abi::__cxa_demangle(name_result, NULL, NULL, &status);
        if (status == 0) {
            type_result = demangled_result;
        } else {
            type_result = strdup(IEGEN_IEGEN_EXAMPLE_GOODVIRTUALDOCTOR);
        }
        auto value_ptr_result = const_cast<iegen::example::GoodVirtualDoctor*>(result);
        IEGenCObject cxxtocresult = {type_result, dynamic_cast<void*>(value_ptr_result)};
        return cxxtocresult;
    } catch (const std::exception& e) {
        iegen_err->type = strdup(IEGEN_STD_STDEXCEPTION);
        iegen_err->ptr = new std::exception(e);
    } catch (...) {
        iegen_err->type = strdup("Uncaught Exception");
    }
    IEGenCObject result {};
    return result;
}

char* _Nonnull _func_IegenExample_DoctorInfo_getGoodDoctorName(IEGenCObject cself, IEGenCObject d, IEGenCObject* _Nonnull iegen_err) {
    
    iegen::example::GoodDoctor* ctocxxd = downcast_IegenExample_GoodDoctor(d);
  
    auto ctocxxcself = static_cast<iegen::example::DoctorInfo*>(cself.ptr);
    try {
        const auto& result = ctocxxcself->getGoodDoctorName(ctocxxd);
        auto cxxtocresult = strdup(result.data());
        return cxxtocresult;
    } catch (const std::exception& e) {
        iegen_err->type = strdup(IEGEN_STD_STDEXCEPTION);
        iegen_err->ptr = new std::exception(e);
    } catch (...) {
        iegen_err->type = strdup("Uncaught Exception");
    }
    char* result {};
    return result;
}

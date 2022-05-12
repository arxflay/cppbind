/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 05/12/2022-10:29.
 * Please do not change it manually.
 */

#include "jni.h"
#include <iostream>
#include <cxxabi.h>
#include <string.h>
#include <type_traits>
#include "kotlin/wrappers/c_helpers.h"
#include "kotlin/wrappers/cppbind_wrapper_helper.hpp"
#include "cxx/inheritance/usage.hpp"
#include "cxx/inheritance/parallelogram.hpp"
#include "cxx/inheritance/vehicle.hpp"
#include "cxx/inheritance/bicycle.hpp"
#include "cxx/inheritance/date.hpp"

extern const char* CPPBIND_STD_STDEXCEPTION;
extern const char* CPPBIND_CPPBIND_EXAMPLE_IPARALLELOGRAM;
extern const char* CPPBIND_CPPBIND_EXAMPLE_VEHICLE;
extern const char* CPPBIND_CPPBIND_EXAMPLE_BICYCLE;
extern const char* CPPBIND_CPPBIND_EXAMPLE_DATE;

const char* CPPBIND_CPPBIND_EXAMPLE_GEOMETRICFIGURE = "cppbind::example::GeometricFigure";
const char* CPPBIND_CPPBIND_EXAMPLE_MYVEHICLE = "cppbind::example::MyVehicle";
const char* CPPBIND_CPPBIND_EXAMPLE_MYBICYCLE = "cppbind::example::MyBicycle";
const char* CPPBIND_CPPBIND_EXAMPLE_MYCALENDAR = "cppbind::example::MyCalendar";

cppbind::example::Parallelogram* recover_obj_from_CppbindExample_IParallelogram(jobjectid);
std::shared_ptr<cppbind::example::Vehicle> recover_obj_from_CppbindExample_Vehicle(jobjectid);
std::shared_ptr<cppbind::example::Date> recover_obj_from_CppbindExample_Date(jobjectid);

using namespace cppbind::example;


extern "C" JNIEXPORT void Java_com_examples_inheritance_GeometricFigure_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    delete static_cast<cppbind::example::GeometricFigure*>(cppbind_obj_id_ptr);
    free(cppbind_obj_id->type);
    delete cppbind_obj_id;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_GeometricFigure_jConstructor(JNIEnv* env, jobject obj, jobjectid p){
    
    cppbind::example::Parallelogram* jnitocxxp = recover_obj_from_CppbindExample_IParallelogram(p);
    try {
        cppbind::example::GeometricFigure* ptr = new cppbind::example::GeometricFigure(jnitocxxp);
        return reinterpret_cast<jlong>(new CppBindCObject {strdup(CPPBIND_CPPBIND_EXAMPLE_GEOMETRICFIGURE), ptr});
    }
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }
    jobjectid result {};
    return result;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_GeometricFigure_jParallelogram(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<cppbind::example::GeometricFigure*>(cppbind_obj_id_ptr);
    try {
        const auto& result = jnitocxxid->parallelogram();
        cppbind::example::Parallelogram* cxxtojniresult_ptr = const_cast<cppbind::example::Parallelogram*>(result);
        char* type_result = nullptr;
        const char* name_result = typeid(*result).name();
        int status = 0;
        char* demangled_result = abi::__cxa_demangle(name_result, NULL, NULL, &status);
        if (status == 0) {
            type_result = demangled_result;
        } else {
            type_result = strdup(CPPBIND_CPPBIND_EXAMPLE_IPARALLELOGRAM);
        }
        CppBindCObject* cppbind_obj_cxxtojniresult = new CppBindCObject {type_result, dynamic_cast<void*>(cxxtojniresult_ptr)};
        jobjectid cxxtojniresult = reinterpret_cast<jlong>(cppbind_obj_cxxtojniresult);
        return cxxtojniresult;
    }
    
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }

    jobjectid result {};
    return result;
}

extern "C" JNIEXPORT void Java_com_examples_inheritance_GeometricFigure_jSetparallelogram(JNIEnv* env, jobject obj, jobjectid id, jobjectid p){
    validateID(id);
    
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<cppbind::example::GeometricFigure*>(cppbind_obj_id_ptr);
    
    cppbind::example::Parallelogram* jnitocxxp = recover_obj_from_CppbindExample_IParallelogram(p);
    try {
       jnitocxxid->setParallelogram(jnitocxxp);
    }
    
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }
}


extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_GeometricFigure_jNullableparallelogram(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<cppbind::example::GeometricFigure*>(cppbind_obj_id_ptr);
    try {
        const auto& result = jnitocxxid->nullableParallelogram();
        cppbind::example::Parallelogram* cxxtojniresult_ptr = const_cast<cppbind::example::Parallelogram*>(result);
        char* type_result = nullptr;
        CppBindCObject* cppbind_obj_cxxtojniresult = nullptr;
        if (result) {
            const char* name_result = typeid(*result).name();
            int status = 0;
            char* demangled_result = abi::__cxa_demangle(name_result, NULL, NULL, &status);
            if (status == 0) {
                type_result = demangled_result;
            } else {
                type_result = strdup(CPPBIND_CPPBIND_EXAMPLE_IPARALLELOGRAM);
            }
            cppbind_obj_cxxtojniresult = new CppBindCObject {type_result, dynamic_cast<void*>(cxxtojniresult_ptr)};
        }
        jobjectid cxxtojniresult = reinterpret_cast<jlong>(cppbind_obj_cxxtojniresult);
        return cxxtojniresult;
    }
    
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }

    jobjectid result {};
    return result;
}

extern "C" JNIEXPORT void Java_com_examples_inheritance_GeometricFigure_jSetnullableparallelogram(JNIEnv* env, jobject obj, jobjectid id, jobjectid p){
    validateID(id);
    
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<cppbind::example::GeometricFigure*>(cppbind_obj_id_ptr);
    
    cppbind::example::Parallelogram* jnitocxxp = recover_obj_from_CppbindExample_IParallelogram(p);
    try {
       jnitocxxid->setNullableParallelogram(jnitocxxp);
    }
    
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }
}


extern "C" JNIEXPORT void Java_com_examples_inheritance_MyVehicle_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    delete static_cast<std::shared_ptr<cppbind::example::MyVehicle>*>(cppbind_obj_id_ptr);
    free(cppbind_obj_id->type);
    delete cppbind_obj_id;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_MyVehicle_jConstructor(JNIEnv* env, jobject obj, jobjectid v, jobjectid cv){
    
    std::shared_ptr<cppbind::example::Vehicle> jnitocxxv;
    jnitocxxv = recover_obj_from_CppbindExample_Vehicle(v);
    
    std::shared_ptr<const cppbind::example::Vehicle> jnitocxxcv;
    jnitocxxcv = recover_obj_from_CppbindExample_Vehicle(cv);
    try {
        cppbind::example::MyVehicle* obj_ptr = new cppbind::example::MyVehicle(jnitocxxv, jnitocxxcv);
        auto this_object = std::shared_ptr<cppbind::example::MyVehicle>(obj_ptr);
        return reinterpret_cast<jlong>(new CppBindCObject {strdup(CPPBIND_CPPBIND_EXAMPLE_MYVEHICLE), new std::shared_ptr<cppbind::example::MyVehicle>(this_object)});
    }
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }
    jobjectid result {};
    return result;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_MyVehicle_jVehicle(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    std::shared_ptr<cppbind::example::MyVehicle> jnitocxxid;
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    jnitocxxid = *static_cast<std::shared_ptr<cppbind::example::MyVehicle>*>(cppbind_obj_id_ptr);
    try {
        const auto& result = jnitocxxid->vehicle();
        
        char* type_result = nullptr;
        void* cxxtojniresult_ptr = nullptr;
        CppBindCObject* cppbind_obj_cxxtojniresult = nullptr;
        if (result) {
            
            auto& arg_pointee_result = *result.get();
            const char* name_result = typeid(arg_pointee_result).name();
            int status = 0;
            char* demangled_result = abi::__cxa_demangle(name_result, NULL, NULL, &status);
            if (status == 0) {
                type_result = demangled_result;
            } else {
                type_result = strdup(CPPBIND_CPPBIND_EXAMPLE_VEHICLE);
            }
            cxxtojniresult_ptr = new std::shared_ptr<void>(std::dynamic_pointer_cast<void>(std::const_pointer_cast<cppbind::example::Vehicle>(result)));
            cppbind_obj_cxxtojniresult = new CppBindCObject {type_result, cxxtojniresult_ptr};
        }
        jobjectid cxxtojniresult = reinterpret_cast<jlong>(cppbind_obj_cxxtojniresult);
        return cxxtojniresult;
    }
    
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }

    jobjectid result {};
    return result;
}

extern "C" JNIEXPORT void Java_com_examples_inheritance_MyVehicle_jSetvehicle(JNIEnv* env, jobject obj, jobjectid id, jobjectid v){
    validateID(id);
    
    std::shared_ptr<cppbind::example::MyVehicle> jnitocxxid;
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    jnitocxxid = *static_cast<std::shared_ptr<cppbind::example::MyVehicle>*>(cppbind_obj_id_ptr);
    
    std::shared_ptr<cppbind::example::Vehicle> jnitocxxv = nullptr;
    if (v) {
        jnitocxxv = recover_obj_from_CppbindExample_Vehicle(v);
    }
    try {
       jnitocxxid->setVehicle(jnitocxxv);
    }
    
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }
}


extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_MyVehicle_jConstvehicle(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    std::shared_ptr<cppbind::example::MyVehicle> jnitocxxid;
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    jnitocxxid = *static_cast<std::shared_ptr<cppbind::example::MyVehicle>*>(cppbind_obj_id_ptr);
    try {
        const auto& result = jnitocxxid->constVehicle();
        
        char* type_result = nullptr;
        void* cxxtojniresult_ptr = nullptr;
        CppBindCObject* cppbind_obj_cxxtojniresult = nullptr;
        if (result) {
            
            auto& arg_pointee_result = *result.get();
            const char* name_result = typeid(arg_pointee_result).name();
            int status = 0;
            char* demangled_result = abi::__cxa_demangle(name_result, NULL, NULL, &status);
            if (status == 0) {
                type_result = demangled_result;
            } else {
                type_result = strdup(CPPBIND_CPPBIND_EXAMPLE_VEHICLE);
            }
            cxxtojniresult_ptr = new std::shared_ptr<void>(std::dynamic_pointer_cast<void>(std::const_pointer_cast<cppbind::example::Vehicle>(result)));
            cppbind_obj_cxxtojniresult = new CppBindCObject {type_result, cxxtojniresult_ptr};
        }
        jobjectid cxxtojniresult = reinterpret_cast<jlong>(cppbind_obj_cxxtojniresult);
        return cxxtojniresult;
    }
    
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }

    jobjectid result {};
    return result;
}

extern "C" JNIEXPORT void Java_com_examples_inheritance_MyVehicle_jSetconstvehicle(JNIEnv* env, jobject obj, jobjectid id, jobjectid v){
    validateID(id);
    
    std::shared_ptr<cppbind::example::MyVehicle> jnitocxxid;
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    jnitocxxid = *static_cast<std::shared_ptr<cppbind::example::MyVehicle>*>(cppbind_obj_id_ptr);
    
    std::shared_ptr<const cppbind::example::Vehicle> jnitocxxv = nullptr;
    if (v) {
        jnitocxxv = recover_obj_from_CppbindExample_Vehicle(v);
    }
    try {
       jnitocxxid->setConstVehicle(jnitocxxv);
    }
    
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }
}


extern "C" JNIEXPORT void Java_com_examples_inheritance_MyBicycle_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    delete static_cast<std::shared_ptr<cppbind::example::MyBicycle>*>(cppbind_obj_id_ptr);
    free(cppbind_obj_id->type);
    delete cppbind_obj_id;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_MyBicycle_jConstructor(JNIEnv* env, jobject obj, jobjectid b){
    
    std::shared_ptr<cppbind::example::Bicycle> jnitocxxb;
    auto cppbind_obj_b = reinterpret_cast<CppBindCObject*>(b);
    auto cppbind_obj_b_ptr = cppbind_obj_b ? cppbind_obj_b->ptr : nullptr;
    jnitocxxb = *static_cast<std::shared_ptr<cppbind::example::Bicycle>*>(cppbind_obj_b_ptr);
    try {
        cppbind::example::MyBicycle* obj_ptr = new cppbind::example::MyBicycle(jnitocxxb);
        auto this_object = std::shared_ptr<cppbind::example::MyBicycle>(obj_ptr);
        return reinterpret_cast<jlong>(new CppBindCObject {strdup(CPPBIND_CPPBIND_EXAMPLE_MYBICYCLE), new std::shared_ptr<cppbind::example::MyBicycle>(this_object)});
    }
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }
    jobjectid result {};
    return result;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_MyBicycle_jBicycle(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    std::shared_ptr<cppbind::example::MyBicycle> jnitocxxid;
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    jnitocxxid = *static_cast<std::shared_ptr<cppbind::example::MyBicycle>*>(cppbind_obj_id_ptr);
    try {
        const auto& result = jnitocxxid->bicycle();
        
        char* type_result = strdup(CPPBIND_CPPBIND_EXAMPLE_BICYCLE);
        void* cxxtojniresult_ptr = nullptr;
        CppBindCObject* cppbind_obj_cxxtojniresult = nullptr;
        cxxtojniresult_ptr = new std::shared_ptr<void>(std::dynamic_pointer_cast<void>(std::const_pointer_cast<cppbind::example::Bicycle>(result)));
        cppbind_obj_cxxtojniresult = new CppBindCObject {type_result, cxxtojniresult_ptr};
        jobjectid cxxtojniresult = reinterpret_cast<jlong>(cppbind_obj_cxxtojniresult);
        return cxxtojniresult;
    }
    
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }

    jobjectid result {};
    return result;
}

extern "C" JNIEXPORT void Java_com_examples_inheritance_MyBicycle_jSetbicycle(JNIEnv* env, jobject obj, jobjectid id, jobjectid b){
    validateID(id);
    
    std::shared_ptr<cppbind::example::MyBicycle> jnitocxxid;
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    jnitocxxid = *static_cast<std::shared_ptr<cppbind::example::MyBicycle>*>(cppbind_obj_id_ptr);
    
    std::shared_ptr<const cppbind::example::Bicycle> jnitocxxb;
    auto cppbind_obj_b = reinterpret_cast<CppBindCObject*>(b);
    auto cppbind_obj_b_ptr = cppbind_obj_b ? cppbind_obj_b->ptr : nullptr;
    jnitocxxb = *static_cast<std::shared_ptr<const cppbind::example::Bicycle>*>(cppbind_obj_b_ptr);
    try {
       jnitocxxid->setBicycle(jnitocxxb);
    }
    
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }
}


extern "C" JNIEXPORT void Java_com_examples_inheritance_MyCalendar_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    delete static_cast<std::shared_ptr<cppbind::example::MyCalendar>*>(cppbind_obj_id_ptr);
    free(cppbind_obj_id->type);
    delete cppbind_obj_id;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_MyCalendar_jConstructor(JNIEnv* env, jobject obj, jobjectidArray events){
    
    std::vector<std::shared_ptr<Date>> jnitocxxevents;
    auto _jnitocxxevents = cppbind::getLongArray(env, events);
    for (auto& value__jnitocxxevents : _jnitocxxevents) {
        
        std::shared_ptr<cppbind::example::Date> jnitocxxvalue__jnitocxxevents;
        jnitocxxvalue__jnitocxxevents = recover_obj_from_CppbindExample_Date(value__jnitocxxevents);
        jnitocxxevents.emplace_back(jnitocxxvalue__jnitocxxevents);
    }
    try {
        cppbind::example::MyCalendar* obj_ptr = new cppbind::example::MyCalendar(jnitocxxevents);
        auto this_object = std::shared_ptr<cppbind::example::MyCalendar>(obj_ptr);
        return reinterpret_cast<jlong>(new CppBindCObject {strdup(CPPBIND_CPPBIND_EXAMPLE_MYCALENDAR), new std::shared_ptr<cppbind::example::MyCalendar>(this_object)});
    }
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }
    jobjectid result {};
    return result;
}


extern "C" JNIEXPORT void Java_com_examples_inheritance_MyCalendar_jAddevent(JNIEnv* env, jobject obj, jobjectid id, jobjectid e){
    

    std::shared_ptr<cppbind::example::Date> jnitocxxe;
    jnitocxxe = recover_obj_from_CppbindExample_Date(e);

    validateID(id);
    std::shared_ptr<cppbind::example::MyCalendar> jnitocxxid;
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    jnitocxxid = *static_cast<std::shared_ptr<cppbind::example::MyCalendar>*>(cppbind_obj_id_ptr);
    
    try {
        jnitocxxid->addEvent(jnitocxxe);
        return;
    }
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }


}

extern "C" JNIEXPORT jobjectidArray Java_com_examples_inheritance_MyCalendar_jEvents(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    std::shared_ptr<cppbind::example::MyCalendar> jnitocxxid;
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    jnitocxxid = *static_cast<std::shared_ptr<cppbind::example::MyCalendar>*>(cppbind_obj_id_ptr);
    try {
        const auto& result = jnitocxxid->events();
        
        jobjectidArray cxxtojniresult = env->NewLongArray(result.size());
        size_t index_result = 0;
        for (auto& value_result : result) {
            
            char* type_value_result = nullptr;
            void* cxxtojnivalue_result_ptr = nullptr;
            CppBindCObject* cppbind_obj_cxxtojnivalue_result = nullptr;

            auto& arg_pointee_value_result = *value_result.get();
            const char* name_value_result = typeid(arg_pointee_value_result).name();
            int status = 0;
            char* demangled_value_result = abi::__cxa_demangle(name_value_result, NULL, NULL, &status);
            if (status == 0) {
                type_value_result = demangled_value_result;
            } else {
                type_value_result = strdup(CPPBIND_CPPBIND_EXAMPLE_DATE);
            }
            cxxtojnivalue_result_ptr = new std::shared_ptr<void>(std::dynamic_pointer_cast<void>(std::const_pointer_cast<cppbind::example::Date>(value_result)));
            cppbind_obj_cxxtojnivalue_result = new CppBindCObject {type_value_result, cxxtojnivalue_result_ptr};
            jobjectid cxxtojnivalue_result = reinterpret_cast<jlong>(cppbind_obj_cxxtojnivalue_result);
            env->SetLongArrayRegion(cxxtojniresult, index_result, 1, &cxxtojnivalue_result);
            ++index_result ;
        }
        return cxxtojniresult;
    }
    
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }

    jobjectidArray result {};
    return result;
}

extern "C" JNIEXPORT jstring Java_com_examples_inheritance_UsageKt_jGettypebyid(JNIEnv* env, jclass cls, jobjectid id) {
    validateID(id);
    return env->NewStringUTF(reinterpret_cast<CppBindCObject*>(id)->type);
}

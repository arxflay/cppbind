/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 02/21/2022-14:15.
 * Please do not change it manually.
 */

#include "jni.h"
#include <iostream>
#include <cxxabi.h>
#include <string.h>
#include "kotlin/wrappers/c_helpers.h"
#include "kotlin/wrappers/iegen_wrapper_helper.hpp"
#include "cxx/inheritance/usage.hpp"
#include "cxx/inheritance/parallelogram.hpp"
#include "cxx/inheritance/vehicle.hpp"
#include "cxx/inheritance/bicycle.hpp"
#include "cxx/inheritance/date.hpp"

using namespace iegen::example;


extern "C" JNIEXPORT void Java_com_examples_inheritance_GeometricFigure_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = reinterpret_cast<iegen::example::GeometricFigure*>(iegen_obj_id_ptr);
    delete jnitocxxid;
    free(iegen_obj_id->type);
    delete iegen_obj_id;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_GeometricFigure_jConstructor(JNIEnv* env, jobject obj, jobjectid p){
    
    auto iegen_obj_p = reinterpret_cast<IEGenCObject*>(p);
    auto iegen_obj_p_ptr = iegen_obj_p ? iegen_obj_p->ptr : nullptr;
    auto jnitocxxp = reinterpret_cast<iegen::example::Parallelogram*>(iegen_obj_p_ptr);
    try {
        iegen::example::GeometricFigure* baseptr = new iegen::example::GeometricFigure(jnitocxxp);
        return reinterpret_cast<jlong>(new IEGenCObject {strdup("iegen::example::GeometricFigure"), baseptr});
    }
    catch (const std::exception& e) {
          jclass handlerCls = env->FindClass("com/examples/iegen/exceptionUtils/ExceptionHandler");
          jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
          env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
          jclass handlerCls = env->FindClass("com/examples/iegen/exceptionUtils/ExceptionHandler");
          jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
          env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }
    jobjectid result;
    return result;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_GeometricFigure_jParallelogram(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = reinterpret_cast<iegen::example::GeometricFigure*>(iegen_obj_id_ptr);
    try {
        const auto& result = jnitocxxid->parallelogram();
        iegen::example::Parallelogram* cxxtojniresult_baseptr = const_cast<iegen::example::Parallelogram*>(result);
        char* type_result = nullptr;
        const char* name_result = typeid(*result).name();
        int status = 0;
        char* demangled_result = abi::__cxa_demangle(name_result, NULL, NULL, &status);
        if (status == 0) {
            type_result = demangled_result;
        } else {
            type_result = strdup("iegen::example::Parallelogram");
        }
        IEGenCObject* iegen_obj_cxxtojniresult = new IEGenCObject {type_result, cxxtojniresult_baseptr};
        jobjectid cxxtojniresult = reinterpret_cast<jlong>(iegen_obj_cxxtojniresult);
        return cxxtojniresult;
    }
    
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/iegen/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/iegen/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }

    jobjectid result;
    return result;
}

extern "C" JNIEXPORT void Java_com_examples_inheritance_GeometricFigure_jSetparallelogram(JNIEnv* env, jobject obj, jobjectid id, jobjectid p){
    validateID(id);
    
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = reinterpret_cast<iegen::example::GeometricFigure*>(iegen_obj_id_ptr);
    
    auto iegen_obj_p = reinterpret_cast<IEGenCObject*>(p);
    auto iegen_obj_p_ptr = iegen_obj_p ? iegen_obj_p->ptr : nullptr;
    auto jnitocxxp = reinterpret_cast<iegen::example::Parallelogram*>(iegen_obj_p_ptr);
    try {
       jnitocxxid->setParallelogram(jnitocxxp);
    }
    
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/iegen/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/iegen/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }
}


extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_GeometricFigure_jNullableparallelogram(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = reinterpret_cast<iegen::example::GeometricFigure*>(iegen_obj_id_ptr);
    try {
        const auto& result = jnitocxxid->nullableParallelogram();
        iegen::example::Parallelogram* cxxtojniresult_baseptr = const_cast<iegen::example::Parallelogram*>(result);
        char* type_result = nullptr;
        IEGenCObject* iegen_obj_cxxtojniresult = nullptr;
        if (result) {
            const char* name_result = typeid(*result).name();
            int status = 0;
            char* demangled_result = abi::__cxa_demangle(name_result, NULL, NULL, &status);
            if (status == 0) {
                type_result = demangled_result;
            } else {
                type_result = strdup("iegen::example::Parallelogram");
            }
            iegen_obj_cxxtojniresult = new IEGenCObject {type_result, cxxtojniresult_baseptr};
        }
        jobjectid cxxtojniresult = reinterpret_cast<jlong>(iegen_obj_cxxtojniresult);
        return cxxtojniresult;
    }
    
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/iegen/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/iegen/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }

    jobjectid result;
    return result;
}

extern "C" JNIEXPORT void Java_com_examples_inheritance_GeometricFigure_jSetnullableparallelogram(JNIEnv* env, jobject obj, jobjectid id, jobjectid p){
    validateID(id);
    
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = reinterpret_cast<iegen::example::GeometricFigure*>(iegen_obj_id_ptr);
    
    auto iegen_obj_p = reinterpret_cast<IEGenCObject*>(p);
    auto iegen_obj_p_ptr = iegen_obj_p ? iegen_obj_p->ptr : nullptr;
    auto jnitocxxp = reinterpret_cast<iegen::example::Parallelogram*>(iegen_obj_p_ptr);
    try {
       jnitocxxid->setNullableParallelogram(jnitocxxp);
    }
    
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/iegen/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/iegen/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }
}


extern "C" JNIEXPORT void Java_com_examples_inheritance_MyVehicle_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    std::shared_ptr<iegen::example::MyVehicle>& jnitocxxid = *reinterpret_cast<std::shared_ptr<iegen::example::MyVehicle>*>(iegen_obj_id->ptr);
    delete &jnitocxxid;
    free(iegen_obj_id->type);
    delete iegen_obj_id;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_MyVehicle_jConstructor(JNIEnv* env, jobject obj, jobjectid v){
    
    auto iegen_obj_v = reinterpret_cast<IEGenCObject*>(v);
    std::shared_ptr<iegen::example::Vehicle>& jnitocxxv = *reinterpret_cast<std::shared_ptr<iegen::example::Vehicle>*>(iegen_obj_v->ptr);
    try {
        iegen::example::MyVehicle* obj_ptr = new iegen::example::MyVehicle(jnitocxxv);
        auto this_object = std::shared_ptr<iegen::example::MyVehicle>(obj_ptr);
        return reinterpret_cast<jlong>(new IEGenCObject {strdup("iegen::example::MyVehicle"), new std::shared_ptr<iegen::example::MyVehicle>(this_object)});
    }
    catch (const std::exception& e) {
          jclass handlerCls = env->FindClass("com/examples/iegen/exceptionUtils/ExceptionHandler");
          jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
          env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
          jclass handlerCls = env->FindClass("com/examples/iegen/exceptionUtils/ExceptionHandler");
          jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
          env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }
    jobjectid result;
    return result;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_MyVehicle_jVehicle(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    std::shared_ptr<iegen::example::MyVehicle>& jnitocxxid = *reinterpret_cast<std::shared_ptr<iegen::example::MyVehicle>*>(iegen_obj_id->ptr);
    try {
        const auto& result = jnitocxxid->vehicle();
        
        char* type_result = nullptr;
        void* cxxtojniresult_ptr;
        IEGenCObject* iegen_obj_cxxtojniresult = nullptr;
        if (result) {
            
            auto& arg_pointee_result = *result.get();
            const char* name_result = typeid(arg_pointee_result).name();
            int status = 0;
            char* demangled_result = abi::__cxa_demangle(name_result, NULL, NULL, &status);
            if (status == 0) {
                type_result = demangled_result;
            } else {
                type_result = strdup("iegen::example::Vehicle");
            }
            cxxtojniresult_ptr = new std::shared_ptr<iegen::example::Vehicle>(result);
            iegen_obj_cxxtojniresult = new IEGenCObject {type_result, cxxtojniresult_ptr};
        }
        jobjectid cxxtojniresult = reinterpret_cast<jlong>(iegen_obj_cxxtojniresult);
        return cxxtojniresult;
    }
    
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/iegen/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/iegen/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }

    jobjectid result;
    return result;
}

extern "C" JNIEXPORT void Java_com_examples_inheritance_MyVehicle_jSetvehicle(JNIEnv* env, jobject obj, jobjectid id, jobjectid v){
    validateID(id);
    
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    std::shared_ptr<iegen::example::MyVehicle>& jnitocxxid = *reinterpret_cast<std::shared_ptr<iegen::example::MyVehicle>*>(iegen_obj_id->ptr);
    
    auto iegen_obj_v = reinterpret_cast<IEGenCObject*>(v);
    std::shared_ptr<iegen::example::Vehicle> jnitocxxv = nullptr;
    if (iegen_obj_v) {
        jnitocxxv = *reinterpret_cast<std::shared_ptr<iegen::example::Vehicle>*>(iegen_obj_v->ptr);
    }
    try {
       jnitocxxid->setVehicle(jnitocxxv);
    }
    
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/iegen/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/iegen/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }
}


extern "C" JNIEXPORT void Java_com_examples_inheritance_MyBicycle_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    std::shared_ptr<iegen::example::MyBicycle>& jnitocxxid = *reinterpret_cast<std::shared_ptr<iegen::example::MyBicycle>*>(iegen_obj_id->ptr);
    delete &jnitocxxid;
    free(iegen_obj_id->type);
    delete iegen_obj_id;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_MyBicycle_jConstructor(JNIEnv* env, jobject obj, jobjectid b){
    
    auto iegen_obj_b = reinterpret_cast<IEGenCObject*>(b);
    std::shared_ptr<iegen::example::Bicycle> jnitocxxb = std::dynamic_pointer_cast<iegen::example::Bicycle>(*reinterpret_cast<std::shared_ptr<iegen::example::Vehicle>*>(iegen_obj_b->ptr));
    try {
        iegen::example::MyBicycle* obj_ptr = new iegen::example::MyBicycle(jnitocxxb);
        auto this_object = std::shared_ptr<iegen::example::MyBicycle>(obj_ptr);
        return reinterpret_cast<jlong>(new IEGenCObject {strdup("iegen::example::MyBicycle"), new std::shared_ptr<iegen::example::MyBicycle>(this_object)});
    }
    catch (const std::exception& e) {
          jclass handlerCls = env->FindClass("com/examples/iegen/exceptionUtils/ExceptionHandler");
          jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
          env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
          jclass handlerCls = env->FindClass("com/examples/iegen/exceptionUtils/ExceptionHandler");
          jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
          env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }
    jobjectid result;
    return result;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_MyBicycle_jBicycle(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    std::shared_ptr<iegen::example::MyBicycle>& jnitocxxid = *reinterpret_cast<std::shared_ptr<iegen::example::MyBicycle>*>(iegen_obj_id->ptr);
    try {
        const auto& result = jnitocxxid->bicycle();
        
        char* type_result = strdup("std::shared_ptr<const iegen::example::Bicycle>");
        void* cxxtojniresult_ptr;
        IEGenCObject* iegen_obj_cxxtojniresult;
        cxxtojniresult_ptr = new std::shared_ptr<const iegen::example::Vehicle>(std::static_pointer_cast<const iegen::example::Vehicle>(result));
        iegen_obj_cxxtojniresult = new IEGenCObject {type_result, cxxtojniresult_ptr};
        jobjectid cxxtojniresult = reinterpret_cast<jlong>(iegen_obj_cxxtojniresult);
        return cxxtojniresult;
    }
    
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/iegen/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/iegen/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }

    jobjectid result;
    return result;
}

extern "C" JNIEXPORT void Java_com_examples_inheritance_MyBicycle_jSetbicycle(JNIEnv* env, jobject obj, jobjectid id, jobjectid b){
    validateID(id);
    
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    std::shared_ptr<iegen::example::MyBicycle>& jnitocxxid = *reinterpret_cast<std::shared_ptr<iegen::example::MyBicycle>*>(iegen_obj_id->ptr);
    
    auto iegen_obj_b = reinterpret_cast<IEGenCObject*>(b);
    std::shared_ptr<const iegen::example::Bicycle> jnitocxxb = std::dynamic_pointer_cast<const iegen::example::Bicycle>(*reinterpret_cast<std::shared_ptr<const iegen::example::Vehicle>*>(iegen_obj_b->ptr));
    try {
       jnitocxxid->setBicycle(jnitocxxb);
    }
    
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/iegen/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/iegen/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }
}


extern "C" JNIEXPORT void Java_com_examples_inheritance_MyCalendar_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    std::shared_ptr<iegen::example::MyCalendar>& jnitocxxid = *reinterpret_cast<std::shared_ptr<iegen::example::MyCalendar>*>(iegen_obj_id->ptr);
    delete &jnitocxxid;
    free(iegen_obj_id->type);
    delete iegen_obj_id;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_MyCalendar_jConstructor(JNIEnv* env, jobject obj, jobjectidArray events){
    
    std::vector<std::shared_ptr<Date>> jnitocxxevents;
    auto _jnitocxxevents = iegen::getLongArray(env, events);
    for (auto& value__jnitocxxevents : _jnitocxxevents) {
        
        auto iegen_obj_value__jnitocxxevents = reinterpret_cast<IEGenCObject*>(value__jnitocxxevents);
        std::shared_ptr<iegen::example::Date> jnitocxxvalue__jnitocxxevents = std::dynamic_pointer_cast<iegen::example::Date>(*reinterpret_cast<std::shared_ptr<iegen::example::Base>*>(iegen_obj_value__jnitocxxevents->ptr));
        jnitocxxevents.emplace_back(jnitocxxvalue__jnitocxxevents);
    }
    try {
        iegen::example::MyCalendar* obj_ptr = new iegen::example::MyCalendar(jnitocxxevents);
        auto this_object = std::shared_ptr<iegen::example::MyCalendar>(obj_ptr);
        return reinterpret_cast<jlong>(new IEGenCObject {strdup("iegen::example::MyCalendar"), new std::shared_ptr<iegen::example::MyCalendar>(this_object)});
    }
    catch (const std::exception& e) {
          jclass handlerCls = env->FindClass("com/examples/iegen/exceptionUtils/ExceptionHandler");
          jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
          env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
          jclass handlerCls = env->FindClass("com/examples/iegen/exceptionUtils/ExceptionHandler");
          jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
          env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }
    jobjectid result;
    return result;
}


extern "C" JNIEXPORT void Java_com_examples_inheritance_MyCalendar_jAddevent(JNIEnv* env, jobject obj, jobjectid id, jobjectid e){
    

    auto iegen_obj_e = reinterpret_cast<IEGenCObject*>(e);
    std::shared_ptr<iegen::example::Date> jnitocxxe = std::dynamic_pointer_cast<iegen::example::Date>(*reinterpret_cast<std::shared_ptr<iegen::example::Base>*>(iegen_obj_e->ptr));

    validateID(id);
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    std::shared_ptr<iegen::example::MyCalendar>& jnitocxxid = *reinterpret_cast<std::shared_ptr<iegen::example::MyCalendar>*>(iegen_obj_id->ptr);
    
    try {
        jnitocxxid->addEvent(jnitocxxe);
        return;
    }
    catch (const std::exception& e) {
          jclass handlerCls = env->FindClass("com/examples/iegen/exceptionUtils/ExceptionHandler");
          jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
          env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
          jclass handlerCls = env->FindClass("com/examples/iegen/exceptionUtils/ExceptionHandler");
          jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
          env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }


}

extern "C" JNIEXPORT jobjectidArray Java_com_examples_inheritance_MyCalendar_jEvents(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    std::shared_ptr<iegen::example::MyCalendar>& jnitocxxid = *reinterpret_cast<std::shared_ptr<iegen::example::MyCalendar>*>(iegen_obj_id->ptr);
    try {
        const auto& result = jnitocxxid->events();
        
        jobjectidArray cxxtojniresult = env->NewLongArray(result.size());
        size_t index_result = 0;
        for (auto& value_result : result) {
            
            char* type_value_result = nullptr;
            void* cxxtojnivalue_result_ptr;
            IEGenCObject* iegen_obj_cxxtojnivalue_result;

            auto& arg_pointee_value_result = *value_result.get();
            const char* name_value_result = typeid(arg_pointee_value_result).name();
            int status = 0;
            char* demangled_value_result = abi::__cxa_demangle(name_value_result, NULL, NULL, &status);
            if (status == 0) {
                type_value_result = demangled_value_result;
            } else {
                type_value_result = strdup("iegen::example::Date");
            }
            cxxtojnivalue_result_ptr = new std::shared_ptr<iegen::example::Base>(std::static_pointer_cast<iegen::example::Base>(value_result));
            iegen_obj_cxxtojnivalue_result = new IEGenCObject {type_value_result, cxxtojnivalue_result_ptr};
            jobjectid cxxtojnivalue_result = reinterpret_cast<jlong>(iegen_obj_cxxtojnivalue_result);
            env->SetLongArrayRegion(cxxtojniresult, index_result, 1, &cxxtojnivalue_result);
            ++index_result ;
        }
        return cxxtojniresult;
    }
    
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/iegen/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/iegen/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }

    jobjectidArray result;
    return result;
}

extern "C" JNIEXPORT jstring Java_com_examples_inheritance_UsageKt_jGettypebyid(JNIEnv* env, jclass cls, jobjectid id) {
    validateID(id);
    return env->NewStringUTF(reinterpret_cast<IEGenCObject*>(id)->type);
}

/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 12/07/2021-12:27.
 * Please do not change it manually.
 */

#include "jni.h"
#include <iostream>
#include "kotlin/wrappers/iegen_wrapper_helper.hpp"
#include "cxx/inheritance/bicycle.hpp"
#include "cxx/inheritance/vehicle.hpp"

using namespace iegen::example;


extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_Bicycle_jConstructor(JNIEnv* env, jobject obj, jint numberOfSeats){
    
    try {
        iegen::example::Bicycle* obj_ptr = new iegen::example::Bicycle(numberOfSeats);
        auto this_object = std::shared_ptr<iegen::example::Bicycle>(obj_ptr);
        std::shared_ptr<iegen::example::Vehicle> baseptr = std::dynamic_pointer_cast<iegen::example::Vehicle>(this_object);
        return reinterpret_cast<jlong>(new std::shared_ptr<iegen::example::Vehicle>(baseptr));
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


extern "C" JNIEXPORT jstring Java_com_examples_inheritance_Bicycle_jType(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    std::shared_ptr<iegen::example::Bicycle> jni_to_cxx_id = std::dynamic_pointer_cast<iegen::example::Bicycle>(*reinterpret_cast<std::shared_ptr<iegen::example::Vehicle>*>(id));
    
    try {
        const auto& result = jni_to_cxx_id->type();
        jstring cxx_to_jni_result = env->NewStringUTF(result.data());
        return cxx_to_jni_result;
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

    jstring result;
    return result;
}
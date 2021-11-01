/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 10/28/2021-14:03.
 * Please do not change it manually.
 */

#include "jni.h"
#include <iostream>
#include "kotlin/wrappers/iegen_wrapper_helper.hpp"
#include "cxx/inheritance/vehicle.hpp"

using namespace iegen::example;


extern "C" JNIEXPORT void Java_com_examples_inheritance_Vehicle_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    
    std::shared_ptr<iegen::example::Vehicle>& jni_to_cxx_id = *reinterpret_cast<std::shared_ptr<iegen::example::Vehicle>*>(id);
    delete &jni_to_cxx_id;
}

extern "C" JNIEXPORT jint Java_com_examples_inheritance_Vehicle_jNumberofseats(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    std::shared_ptr<iegen::example::Vehicle>& jni_to_cxx_id = *reinterpret_cast<std::shared_ptr<iegen::example::Vehicle>*>(id);
    try {
        const auto& result = jni_to_cxx_id->numberOfSeats();
        
        return result;
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

    jint result;
    return result;
}


extern "C" JNIEXPORT jstring Java_com_examples_inheritance_Vehicle_jType(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    std::shared_ptr<iegen::example::Vehicle>& jni_to_cxx_id = *reinterpret_cast<std::shared_ptr<iegen::example::Vehicle>*>(id);
    
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
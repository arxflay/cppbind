/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 12/24/2021-10:40.
 * Please do not change it manually.
 */

#include "jni.h"
#include <iostream>
#include "kotlin/wrappers/iegen_wrapper_helper.hpp"
#include "cxx/overloads/utils.hpp"

using namespace iegen::example;


extern "C" JNIEXPORT void Java_com_examples_overloads_Utils_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    
    std::shared_ptr<iegen::example::Utils>& jnitocxxid = *reinterpret_cast<std::shared_ptr<iegen::example::Utils>*>(id);
    delete &jnitocxxid;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_overloads_Utils_jConstructor(JNIEnv* env, jobject obj){
    try {
        iegen::example::Utils* obj_ptr = new iegen::example::Utils();
        auto this_object = std::shared_ptr<iegen::example::Utils>(obj_ptr);
        return reinterpret_cast<jlong>(new std::shared_ptr<iegen::example::Utils>(this_object));
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


extern "C" JNIEXPORT jint Java_com_examples_overloads_Utils_jSum(JNIEnv* env, jobject obj, jint first, jint second){
    




    
    try {
        const auto& result = iegen::example::Utils::sum(first, second);
        
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


extern "C" JNIEXPORT jfloat Java_com_examples_overloads_Utils_jSum_11(JNIEnv* env, jobject obj, jfloat first, jfloat second){
    




    
    try {
        const auto& result = iegen::example::Utils::sum(first, second);
        
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

    jfloat result;
    return result;
}


extern "C" JNIEXPORT jstring Java_com_examples_overloads_Utils_jConcatenate(JNIEnv* env, jobject obj, jobjectid id, jstring first, jstring second){
    
    jstring jjnitocxxfirstStr = (jstring)first;
    auto jnitocxxfirst_cstr = env->GetStringUTFChars(jjnitocxxfirstStr, 0);
    std::string jnitocxxfirst = jnitocxxfirst_cstr;
    env->ReleaseStringUTFChars(jjnitocxxfirstStr, jnitocxxfirst_cstr);

    jstring jjnitocxxsecondStr = (jstring)second;
    auto jnitocxxsecond_cstr = env->GetStringUTFChars(jjnitocxxsecondStr, 0);
    std::string jnitocxxsecond = jnitocxxsecond_cstr;
    env->ReleaseStringUTFChars(jjnitocxxsecondStr, jnitocxxsecond_cstr);

    validateID(id);
    std::shared_ptr<iegen::example::Utils>& jnitocxxid = *reinterpret_cast<std::shared_ptr<iegen::example::Utils>*>(id);
    
    try {
        const auto& result = jnitocxxid->concatenate(jnitocxxfirst, jnitocxxsecond);
        jstring cxxtojniresult = env->NewStringUTF(result.data());
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

    jstring result;
    return result;
}


extern "C" JNIEXPORT jstring Java_com_examples_overloads_Utils_jConcatenate_11(JNIEnv* env, jobject obj, jobjectid id, jstring first, jstring second, jstring third){
    
    jstring jjnitocxxfirstStr = (jstring)first;
    auto jnitocxxfirst_cstr = env->GetStringUTFChars(jjnitocxxfirstStr, 0);
    std::string jnitocxxfirst = jnitocxxfirst_cstr;
    env->ReleaseStringUTFChars(jjnitocxxfirstStr, jnitocxxfirst_cstr);

    jstring jjnitocxxsecondStr = (jstring)second;
    auto jnitocxxsecond_cstr = env->GetStringUTFChars(jjnitocxxsecondStr, 0);
    std::string jnitocxxsecond = jnitocxxsecond_cstr;
    env->ReleaseStringUTFChars(jjnitocxxsecondStr, jnitocxxsecond_cstr);

    jstring jjnitocxxthirdStr = (jstring)third;
    auto jnitocxxthird_cstr = env->GetStringUTFChars(jjnitocxxthirdStr, 0);
    std::string jnitocxxthird = jnitocxxthird_cstr;
    env->ReleaseStringUTFChars(jjnitocxxthirdStr, jnitocxxthird_cstr);

    validateID(id);
    std::shared_ptr<iegen::example::Utils>& jnitocxxid = *reinterpret_cast<std::shared_ptr<iegen::example::Utils>*>(id);
    
    try {
        const auto& result = jnitocxxid->concatenate(jnitocxxfirst, jnitocxxsecond, jnitocxxthird);
        jstring cxxtojniresult = env->NewStringUTF(result.data());
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

    jstring result;
    return result;
}


extern "C" JNIEXPORT jint Java_com_examples_overloads_Utils_jMinus(JNIEnv* env, jobject obj, jint first, jint second){
    




    
    try {
        const auto& result = iegen::example::Utils::sub(first, second);
        
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


extern "C" JNIEXPORT jfloat Java_com_examples_overloads_Utils_jMinus_11(JNIEnv* env, jobject obj, jfloat first, jfloat second){
    




    
    try {
        const auto& result = iegen::example::Utils::sub(first, second);
        
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

    jfloat result;
    return result;
}

/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 03/24/2022-08:40.
 * Please do not change it manually.
 */

#include "jni.h"
#include <iostream>
#include <cxxabi.h>
#include <string.h>
#include <type_traits>
#include "kotlin/wrappers/c_helpers.h"
#include "kotlin/wrappers/iegen_wrapper_helper.hpp"
#include "cxx/exceptions/exceptions.hpp"

using namespace iegen::exceptions;


extern "C" JNIEXPORT void Java_com_examples_exceptions_NoThrowExc_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    delete static_cast<iegen::exceptions::NoThrowExc*>(iegen_obj_id_ptr);
    free(iegen_obj_id->type);
    delete iegen_obj_id;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_exceptions_NoThrowExc_jConstructor(JNIEnv* env, jobject obj, jboolean do_throw){
    
    try {
        iegen::exceptions::NoThrowExc* ptr = new iegen::exceptions::NoThrowExc(do_throw);
        return reinterpret_cast<jlong>(new IEGenCObject {strdup("iegen::exceptions::NoThrowExc"), ptr});
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
    jobjectid result {};
    return result;
}


extern "C" JNIEXPORT void Java_com_examples_exceptions_NoThrowExc_jNoop(JNIEnv* env, jobject obj){
    
    
    try {
        iegen::exceptions::NoThrowExc::noop();
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

extern "C" JNIEXPORT jstring Java_com_examples_exceptions_NoThrowExc_jProp(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<iegen::exceptions::NoThrowExc*>(iegen_obj_id_ptr);
    try {
        const auto& result = jnitocxxid->prop();
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

    jstring result {};
    return result;
}

extern "C" JNIEXPORT void Java_com_examples_exceptions_NoThrowExc_jSetprop(JNIEnv* env, jobject obj, jobjectid id, jstring s){
    validateID(id);
    
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<iegen::exceptions::NoThrowExc*>(iegen_obj_id_ptr);
    jstring jjnitocxxsStr = static_cast<jstring>(s);
    auto jnitocxxs_cstr = env->GetStringUTFChars(jjnitocxxsStr, 0);
    std::string jnitocxxs = jnitocxxs_cstr;
    env->ReleaseStringUTFChars(jjnitocxxsStr, jnitocxxs_cstr);
    try {
       jnitocxxid->setProp(jnitocxxs);
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


extern "C" JNIEXPORT jstring Java_com_examples_exceptions_No_1throw_1exceptionsKt_jGettypebyid(JNIEnv* env, jclass cls, jobjectid id) {
    validateID(id);
    return env->NewStringUTF(reinterpret_cast<IEGenCObject*>(id)->type);
}

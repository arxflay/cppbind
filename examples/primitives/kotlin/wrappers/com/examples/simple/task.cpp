/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 09/02/2021-07:34.
 * Please do not change it manually.
 */

#include "jni.h"
#include <iostream>
#include "kotlin/wrappers/iegen_wrapper_helper.hpp"
#include "cxx/simple/task.hpp"

using namespace iegen::example;


extern "C" JNIEXPORT void Java_com_examples_simple_Task_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    
    auto jni_to_cxx_id = reinterpret_cast<iegen::example::Task*>(id);
    delete jni_to_cxx_id;
}
extern "C" JNIEXPORT jobjectid Java_com_examples_simple_Task_jConstructor(JNIEnv* env, jobject obj, jstring title){
    jstring jjni_to_cxx_titleStr = (jstring)title;
    auto jni_to_cxx_title_cstr = env->GetStringUTFChars(jjni_to_cxx_titleStr, 0);
    const std::string & jni_to_cxx_title = jni_to_cxx_title_cstr;
    env->ReleaseStringUTFChars(jjni_to_cxx_titleStr, jni_to_cxx_title_cstr);
    iegen::example::Task* baseptr = new iegen::example::Task(jni_to_cxx_title);
    return reinterpret_cast<jlong>(baseptr);
}

extern "C" JNIEXPORT jstring Java_com_examples_simple_Task_jTitle(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    auto jni_to_cxx_id = reinterpret_cast<iegen::example::Task*>(id);
    try {
        auto result = jni_to_cxx_id->title();
        jstring cxx_to_jni_result = env->NewStringUTF(result.c_str());
        return cxx_to_jni_result;
    }
    
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }

    jstring result;
    return result;
}
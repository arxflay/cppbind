/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 07/29/2021-08:47.
 * Please do not change it manually.
 */

#include "jni.h"
#include <iostream>
#include "kotlin/wrappers/iegen_wrapper_helper.hpp"
#include "cxx/simple/root.hpp"

using namespace iegen::example;


extern "C" JNIEXPORT void Java_com_examples_simple_Root_jSet_1this(JNIEnv* env, jobject obj, jobjectid id, jobject self){
}
extern "C" JNIEXPORT void Java_com_examples_simple_Root_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    iegen::example::Root* this_object = reinterpret_cast<iegen::example::Root*>(id);
    delete this_object;
}
extern "C" JNIEXPORT jobjectid Java_com_examples_simple_Root_jConstructor(JNIEnv* env, jobject obj, jstring _path){
    jstring jjni_to_cxx__pathStr = (jstring)_path;
    auto jni_to_cxx__path_cstr = env->GetStringUTFChars(jjni_to_cxx__pathStr, 0);
    const std::string & jni_to_cxx__path = jni_to_cxx__path_cstr;
    env->ReleaseStringUTFChars(jjni_to_cxx__pathStr, jni_to_cxx__path_cstr);
    iegen::example::Root* baseptr = new iegen::example::Root(jni_to_cxx__path);
    return reinterpret_cast<jlong>(baseptr);
}


extern "C" JNIEXPORT void Java_com_examples_simple_Root_jUpdatepath(JNIEnv* env, jobject obj, jobjectid id, jstring _path){
    
    jstring jjni_to_cxx__pathStr = (jstring)_path;
    auto jni_to_cxx__path_cstr = env->GetStringUTFChars(jjni_to_cxx__pathStr, 0);
    const std::string & jni_to_cxx__path = jni_to_cxx__path_cstr;
    env->ReleaseStringUTFChars(jjni_to_cxx__pathStr, jni_to_cxx__path_cstr);

    validateID(id);
    iegen::example::Root* this_object = reinterpret_cast<iegen::example::Root*>(id);
    void* err_ptr = nullptr;

    try {
      this_object->setPath(jni_to_cxx__path);
      return;
    }
    catch (const std::exception& e) {
          err_ptr = new std::exception(e);
          jclass handlerCls = env->FindClass("exceptionUtils/ExceptionHandler");
          jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
          env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
          jclass handlerCls = env->FindClass("exceptionUtils/ExceptionHandler");
          jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
          env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Excepiton"));
    }


}

extern "C" JNIEXPORT jstring Java_com_examples_simple_Root_jPath(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    iegen::example::Root* this_object = reinterpret_cast<iegen::example::Root*>(id);
    auto result = this_object->path;
    jstring cxx_to_jni_result = env->NewStringUTF(result.c_str());
    return cxx_to_jni_result;
}

extern "C" JNIEXPORT void Java_com_examples_simple_Root_jSetpath(JNIEnv* env, jobject obj, jobjectid id, jstring value){
    validateID(id);
    iegen::example::Root* this_object = reinterpret_cast<iegen::example::Root*>(id);
    
    jstring jjni_to_cxx_valueStr = (jstring)value;
    auto jni_to_cxx_value_cstr = env->GetStringUTFChars(jjni_to_cxx_valueStr, 0);
    std::string jni_to_cxx_value = jni_to_cxx_value_cstr;
    env->ReleaseStringUTFChars(jjni_to_cxx_valueStr, jni_to_cxx_value_cstr);
    this_object->path = jni_to_cxx_value;
}

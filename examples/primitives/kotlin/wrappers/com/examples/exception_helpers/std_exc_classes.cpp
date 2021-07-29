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
#include <stdexcept>
#include <new>
#include <typeinfo>


using namespace std;


extern "C" JNIEXPORT void Java_com_examples_exception_1helpers_StdException_jSet_1this(JNIEnv* env, jobject obj, jobjectid id, jobject self){
}
extern "C" JNIEXPORT void Java_com_examples_exception_1helpers_StdException_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    std::exception* this_object = reinterpret_cast<std::exception*>(id);
    delete this_object;
}


extern "C" JNIEXPORT jstring Java_com_examples_exception_1helpers_StdException_jWhat(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    std::exception* this_object = reinterpret_cast<std::exception*>(id);
    void* err_ptr = nullptr;

    try {
      auto result = this_object->what();
      jstring cxx_to_jni_result = env->NewStringUTF(result);
      return cxx_to_jni_result;
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

    jstring result;
    return result;
}
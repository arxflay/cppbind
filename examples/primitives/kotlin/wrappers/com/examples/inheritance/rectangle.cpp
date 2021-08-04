/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 08/04/2021-13:58.
 * Please do not change it manually.
 */

#include "jni.h"
#include <iostream>
#include "kotlin/wrappers/iegen_wrapper_helper.hpp"
#include "cxx/inheritance/rectangle.hpp"
#include "cxx/inheritance/parallelogram.hpp"

using namespace iegen::example;


extern "C" JNIEXPORT void Java_com_examples_inheritance_Rectangle_jSet_1this(JNIEnv* env, jobject obj, jobjectid id, jobject self){
}
extern "C" JNIEXPORT void Java_com_examples_inheritance_Rectangle_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    iegen::example::Parallelogram* baseptr = reinterpret_cast<iegen::example::Parallelogram*>(id);
    iegen::example::Rectangle* this_object = dynamic_cast<iegen::example::Rectangle*>(baseptr);
    delete this_object;
}
extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_Rectangle_1impl_jConstructor(JNIEnv* env, jobject obj, jdouble length, jdouble width){
    
    
    iegen::example::Parallelogram* baseptr = new iegen::example::Rectangle(length, width);
    return reinterpret_cast<jlong>(baseptr);
}

extern "C" JNIEXPORT jdouble Java_com_examples_inheritance_RectangleHelper_jArea(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    iegen::example::Parallelogram* baseptr = reinterpret_cast<iegen::example::Parallelogram*>(id);
    iegen::example::Rectangle* this_object = dynamic_cast<iegen::example::Rectangle*>(baseptr);
    void* err_ptr = nullptr;
    try {
        auto result = this_object->area();
        
        return result;
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

    jdouble result;
    return result;
}


extern "C" JNIEXPORT jdouble Java_com_examples_inheritance_RectangleHelper_jPerimeter(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    iegen::example::Parallelogram* baseptr = reinterpret_cast<iegen::example::Parallelogram*>(id);
    iegen::example::Rectangle* this_object = dynamic_cast<iegen::example::Rectangle*>(baseptr);
    void* err_ptr = nullptr;

    try {
      auto result = this_object->perimeter();
      
      return result;
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

    jdouble result;
    return result;
}

extern "C" JNIEXPORT jdouble Java_com_examples_inheritance_RectangleHelper_jLength(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    iegen::example::Parallelogram* baseptr = reinterpret_cast<iegen::example::Parallelogram*>(id);
    iegen::example::Rectangle* this_object = dynamic_cast<iegen::example::Rectangle*>(baseptr);
    void* err_ptr = nullptr;
    try {
        auto result = this_object->length();
        
        return result;
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

    jdouble result;
    return result;
}

extern "C" JNIEXPORT jdouble Java_com_examples_inheritance_RectangleHelper_jWidth(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    iegen::example::Parallelogram* baseptr = reinterpret_cast<iegen::example::Parallelogram*>(id);
    iegen::example::Rectangle* this_object = dynamic_cast<iegen::example::Rectangle*>(baseptr);
    void* err_ptr = nullptr;
    try {
        auto result = this_object->width();
        
        return result;
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

    jdouble result;
    return result;
}
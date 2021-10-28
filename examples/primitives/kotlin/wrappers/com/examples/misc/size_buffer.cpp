/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 10/26/2021-15:54.
 * Please do not change it manually.
 */

#include "jni.h"
#include <iostream>
#include "kotlin/wrappers/iegen_wrapper_helper.hpp"
#include "cxx/misc/size_buffer.hpp"

using namespace iegen::example;


extern "C" JNIEXPORT void Java_com_examples_misc_SizeUsage_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    
    auto jni_to_cxx_id = reinterpret_cast<iegen::example::SizeUsage*>(id);
    delete jni_to_cxx_id;
}


extern "C" JNIEXPORT jfloatArray Java_com_examples_misc_SizeUsage_jMultiplyby(JNIEnv* env, jobject obj, jfloatArray size, jint n){
    
    jfloat *elems = env->GetFloatArrayElements(size, 0);
    jfloat width_size = elems[0];
    jfloat height_size = elems[1];
    env->ReleaseFloatArrayElements(size, elems, 0);
    SizeF jni_to_cxx_size = SizeF(width_size, height_size);



    
    try {
        auto result = iegen::example::SizeUsage::multiplyBy(jni_to_cxx_size, n);
        jfloat width_result = result.width;
        jfloat height_result = result.height;
        jfloatArray cxx_to_jni_result = env->NewFloatArray(2);
        jfloat carray[] = {width_result, height_result};
        env->SetFloatArrayRegion(cxx_to_jni_result, 0 , 2, carray);
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

    jfloatArray result;
    return result;
}


extern "C" JNIEXPORT jfloatArray Java_com_examples_misc_SizeUsage_jDoublesizef(JNIEnv* env, jobject obj, jfloatArray resolution){
    
    jfloat *elems = env->GetFloatArrayElements(resolution, 0);
    jfloat width_resolution = elems[0];
    jfloat height_resolution = elems[1];
    env->ReleaseFloatArrayElements(resolution, elems, 0);
    const SizeF & jni_to_cxx_resolution = SizeF(width_resolution, height_resolution);

    
    try {
        auto result = iegen::example::SizeUsage::doubleSizeF(jni_to_cxx_resolution);
        jfloat width_result = result.width;
        jfloat height_result = result.height;
        jfloatArray cxx_to_jni_result = env->NewFloatArray(2);
        jfloat carray[] = {width_result, height_result};
        env->SetFloatArrayRegion(cxx_to_jni_result, 0 , 2, carray);
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

    jfloatArray result;
    return result;
}

extern "C" JNIEXPORT void Java_com_examples_misc_BufferUsage_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    
    auto jni_to_cxx_id = reinterpret_cast<iegen::example::BufferUsage*>(id);
    delete jni_to_cxx_id;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_misc_BufferUsage_jConstructor(JNIEnv* env, jobject obj){
    iegen::example::BufferUsage* baseptr = new iegen::example::BufferUsage();
    return reinterpret_cast<jlong>(baseptr);
}


extern "C" JNIEXPORT jstring Java_com_examples_misc_BufferUsage_jUsage1(JNIEnv* env, jobject obj, jobjectid id, jobjectid b){
    
    auto jni_to_cxx_b = *reinterpret_cast<iegen::example::Buffer<int>*>(b);

    validateID(id);
    auto jni_to_cxx_id = reinterpret_cast<iegen::example::BufferUsage*>(id);
    
    try {
        auto result = jni_to_cxx_id->usage1(jni_to_cxx_b);
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


extern "C" JNIEXPORT jobjectid Java_com_examples_misc_BufferUsage_jUsage2(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    auto jni_to_cxx_id = reinterpret_cast<iegen::example::BufferUsage*>(id);
    
    try {
        auto result = jni_to_cxx_id->usage2();
        jobjectid cxx_to_jni_result = reinterpret_cast<jlong>(result);
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

    jobjectid result;
    return result;
}
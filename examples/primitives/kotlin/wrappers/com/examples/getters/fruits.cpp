/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 08/09/2021-10:32.
 * Please do not change it manually.
 */

#include "jni.h"
#include <iostream>
#include "kotlin/wrappers/iegen_wrapper_helper.hpp"
#include "cxx/getters/fruits.hpp"

using namespace iegen::example;


extern "C" JNIEXPORT void Java_com_examples_getters_Fruit_jSet_1this(JNIEnv* env, jobject obj, jobjectid id, jobject self){
}
extern "C" JNIEXPORT void Java_com_examples_getters_Fruit_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    iegen::example::Fruit* this_object = reinterpret_cast<iegen::example::Fruit*>(id);
    delete this_object;
}

extern "C" JNIEXPORT jint Java_com_examples_getters_Fruit_jType(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    iegen::example::Fruit* this_object = reinterpret_cast<iegen::example::Fruit*>(id);
    void* err_ptr = nullptr;
    try {
        auto result = this_object->type();
        jint cxx_to_jni_result = (jint)result;
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

    jint result;
    return result;
}
extern "C" JNIEXPORT jobjectid Java_com_examples_getters_Apple_jConstructor(JNIEnv* env, jobject obj){
    iegen::example::Fruit* baseptr = new iegen::example::Apple();
    return reinterpret_cast<jlong>(baseptr);
}

extern "C" JNIEXPORT jint Java_com_examples_getters_Apple_jType(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    iegen::example::Fruit* baseptr = reinterpret_cast<iegen::example::Fruit*>(id);
    iegen::example::Apple* this_object = dynamic_cast<iegen::example::Apple*>(baseptr);
    void* err_ptr = nullptr;
    try {
        auto result = this_object->type();
        jint cxx_to_jni_result = (jint)result;
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

    jint result;
    return result;
}
extern "C" JNIEXPORT jobjectid Java_com_examples_getters_Pineapple_jConstructor(JNIEnv* env, jobject obj){
    iegen::example::Fruit* baseptr = new iegen::example::Pineapple();
    return reinterpret_cast<jlong>(baseptr);
}

extern "C" JNIEXPORT jint Java_com_examples_getters_Pineapple_jType(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    iegen::example::Fruit* baseptr = reinterpret_cast<iegen::example::Fruit*>(id);
    iegen::example::Pineapple* this_object = dynamic_cast<iegen::example::Pineapple*>(baseptr);
    void* err_ptr = nullptr;
    try {
        auto result = this_object->type();
        jint cxx_to_jni_result = (jint)result;
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

    jint result;
    return result;
}

extern "C" JNIEXPORT void Java_com_examples_getters_Fruits_jSet_1this(JNIEnv* env, jobject obj, jobjectid id, jobject self){
}
extern "C" JNIEXPORT void Java_com_examples_getters_Fruits_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    iegen::example::Fruits* this_object = reinterpret_cast<iegen::example::Fruits*>(id);
    delete this_object;
}
extern "C" JNIEXPORT jobjectid Java_com_examples_getters_Fruits_jConstructor(JNIEnv* env, jobject obj, jobjectidArray fruits){
    
    std::vector<Fruit *> jni_to_cxx_fruits;
    auto _jni_to_cxx_fruits = iegen::getLongArray(env, fruits);
    for (auto& value__jni_to_cxx_fruits : _jni_to_cxx_fruits) {
        
        auto jni_to_cxx_value__jni_to_cxx_fruits =  reinterpret_cast<iegen::example::Fruit*>(value__jni_to_cxx_fruits);
        jni_to_cxx_fruits.emplace_back(jni_to_cxx_value__jni_to_cxx_fruits);
    }
    iegen::example::Fruits* baseptr = new iegen::example::Fruits(jni_to_cxx_fruits);
    return reinterpret_cast<jlong>(baseptr);
}

extern "C" JNIEXPORT jobjectidArray Java_com_examples_getters_Fruits_jFruitsApple(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    iegen::example::Fruits* this_object = reinterpret_cast<iegen::example::Fruits*>(id);
    void* err_ptr = nullptr;
    try {
        auto result = this_object->fruits<iegen::example::Apple>();
        
        jobjectidArray cxx_to_jni_result = env->NewLongArray(result.size());
        size_t index_result = 0;
        for (auto& value_result : result) {
            

            iegen::example::Fruit* cxx_to_jni_value_result_baseptr = value_result;
            jobjectid cxx_to_jni_value_result = reinterpret_cast<jlong>(cxx_to_jni_value_result_baseptr);
            env->SetLongArrayRegion(cxx_to_jni_result, index_result, 1, &cxx_to_jni_value_result);
            ++index_result ;
        }
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

    jobjectidArray result;
    return result;
}

extern "C" JNIEXPORT jobjectidArray Java_com_examples_getters_Fruits_jFruitsPineapple(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    iegen::example::Fruits* this_object = reinterpret_cast<iegen::example::Fruits*>(id);
    void* err_ptr = nullptr;
    try {
        auto result = this_object->fruits<iegen::example::Pineapple>();
        
        jobjectidArray cxx_to_jni_result = env->NewLongArray(result.size());
        size_t index_result = 0;
        for (auto& value_result : result) {
            

            iegen::example::Fruit* cxx_to_jni_value_result_baseptr = value_result;
            jobjectid cxx_to_jni_value_result = reinterpret_cast<jlong>(cxx_to_jni_value_result_baseptr);
            env->SetLongArrayRegion(cxx_to_jni_result, index_result, 1, &cxx_to_jni_value_result);
            ++index_result ;
        }
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

    jobjectidArray result;
    return result;
}

extern "C" JNIEXPORT jobjectidArray Java_com_examples_getters_Fruits_jAllfruitsApplePineapple(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    iegen::example::Fruits* this_object = reinterpret_cast<iegen::example::Fruits*>(id);
    void* err_ptr = nullptr;
    try {
        auto result = this_object->allFruits<iegen::example::Apple, iegen::example::Pineapple>();
        
        jobjectidArray cxx_to_jni_result = env->NewLongArray(result.size());
        size_t index_result = 0;
        for (auto& value_result : result) {
            

            iegen::example::Fruit* cxx_to_jni_value_result_baseptr = value_result;
            jobjectid cxx_to_jni_value_result = reinterpret_cast<jlong>(cxx_to_jni_value_result_baseptr);
            env->SetLongArrayRegion(cxx_to_jni_result, index_result, 1, &cxx_to_jni_value_result);
            ++index_result ;
        }
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

    jobjectidArray result;
    return result;
}
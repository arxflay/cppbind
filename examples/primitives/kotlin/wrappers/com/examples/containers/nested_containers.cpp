/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 09/09/2021-14:59.
 * Please do not change it manually.
 */

#include "jni.h"
#include <iostream>
#include "kotlin/wrappers/iegen_wrapper_helper.hpp"
#include "cxx/containers/nested_containers.hpp"

using namespace iegen::example;


extern "C" JNIEXPORT void Java_com_examples_containers_NestedExamples_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    iegen::example::NestedExamples* this_object = reinterpret_cast<iegen::example::NestedExamples*>(id);
    delete this_object;
}
extern "C" JNIEXPORT jobjectid Java_com_examples_containers_NestedExamples_jConstructor(JNIEnv* env, jobject obj){
    iegen::example::NestedExamples* baseptr = new iegen::example::NestedExamples();
    return reinterpret_cast<jlong>(baseptr);
}


extern "C" JNIEXPORT void Java_com_examples_containers_NestedExamples_jSetnestedintvector(JNIEnv* env, jobject obj, jobjectid id, jobjectArray v){
    

    std::vector<std::vector<int> > jni_to_cxx_v;
    auto _jni_to_cxx_v = iegen::getObjectArray(env, v);
    for (auto& value__jni_to_cxx_v : _jni_to_cxx_v) {
        
        std::vector<int> jni_to_cxx_value__jni_to_cxx_v;
        auto _jni_to_cxx_value__jni_to_cxx_v = iegen::getIntArray(env, value__jni_to_cxx_v);
        for (auto& value__jni_to_cxx_value__jni_to_cxx_v : _jni_to_cxx_value__jni_to_cxx_v) {
            
            jni_to_cxx_value__jni_to_cxx_v.emplace_back(value__jni_to_cxx_value__jni_to_cxx_v);
        }
        jni_to_cxx_v.emplace_back(jni_to_cxx_value__jni_to_cxx_v);
    }

    validateID(id);
    iegen::example::NestedExamples* this_object = reinterpret_cast<iegen::example::NestedExamples*>(id);
    
    try {
      this_object->setNestedIntVector(jni_to_cxx_v);
      return;
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


}


extern "C" JNIEXPORT jobjectArray Java_com_examples_containers_NestedExamples_jGetnestedintvector(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    iegen::example::NestedExamples* this_object = reinterpret_cast<iegen::example::NestedExamples*>(id);
    
    try {
      auto result = this_object->getNestedIntVector();
      
    jobjectArray cxx_to_jni_result = env->NewObjectArray(result.size(), env->FindClass("java/lang/Object"), NULL);
    size_t index_result = 0;
    for (auto& value_result : result) {
        
        jintArray cxx_to_jni_value_result = env->NewIntArray(value_result.size());
        size_t index_value_result = 0;
        for (auto& value_value_result : value_result) {
            
            env->SetIntArrayRegion(cxx_to_jni_value_result, index_value_result, 1, &value_value_result);
            ++index_value_result ;
        }
        env->SetObjectArrayElement(cxx_to_jni_result, index_result, cxx_to_jni_value_result);
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

    jobjectArray result;
    return result;
}
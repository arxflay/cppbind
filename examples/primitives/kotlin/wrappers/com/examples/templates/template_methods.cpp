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
#include "cxx/templates/template_methods.hpp"
#include "cxx/simple/project.hpp"
#include "cxx/simple/root.hpp"

using namespace iegen::example;


extern "C" JNIEXPORT void Java_com_examples_templates_TemplateMethods_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    
    auto jni_to_cxx_id = reinterpret_cast<iegen::example::TemplateMethods*>(id);
    delete jni_to_cxx_id;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_templates_TemplateMethods_jConstructor(JNIEnv* env, jobject obj){
    iegen::example::TemplateMethods* baseptr = new iegen::example::TemplateMethods();
    return reinterpret_cast<jlong>(baseptr);
}


extern "C" JNIEXPORT jint Java_com_examples_templates_TemplateMethods_jMaxInt(JNIEnv* env, jobject obj, jobjectid id, jint arg0, jint arg1){
    




    validateID(id);
    auto jni_to_cxx_id = reinterpret_cast<iegen::example::TemplateMethods*>(id);
    
    try {
        auto result = jni_to_cxx_id->max<int>(arg0, arg1);
        
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


extern "C" JNIEXPORT jstring Java_com_examples_templates_TemplateMethods_jMaxString(JNIEnv* env, jobject obj, jobjectid id, jstring arg0, jstring arg1){
    
    jstring jjni_to_cxx_arg0Str = (jstring)arg0;
    auto jni_to_cxx_arg0_cstr = env->GetStringUTFChars(jjni_to_cxx_arg0Str, 0);
    std::string jni_to_cxx_arg0 = jni_to_cxx_arg0_cstr;
    env->ReleaseStringUTFChars(jjni_to_cxx_arg0Str, jni_to_cxx_arg0_cstr);

    jstring jjni_to_cxx_arg1Str = (jstring)arg1;
    auto jni_to_cxx_arg1_cstr = env->GetStringUTFChars(jjni_to_cxx_arg1Str, 0);
    std::string jni_to_cxx_arg1 = jni_to_cxx_arg1_cstr;
    env->ReleaseStringUTFChars(jjni_to_cxx_arg1Str, jni_to_cxx_arg1_cstr);

    validateID(id);
    auto jni_to_cxx_id = reinterpret_cast<iegen::example::TemplateMethods*>(id);
    
    try {
        auto result = jni_to_cxx_id->max<std::string>(jni_to_cxx_arg0, jni_to_cxx_arg1);
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


extern "C" JNIEXPORT jobject Java_com_examples_templates_TemplateMethods_jMakepairProjectProject(JNIEnv* env, jobject obj, jobjectid id, jobjectid arg0, jobjectid arg1){
    

    auto jni_to_cxx_arg0 = reinterpret_cast<iegen::example::Project*>(arg0);


    auto jni_to_cxx_arg1 = reinterpret_cast<iegen::example::Project*>(arg1);

    validateID(id);
    auto jni_to_cxx_id = reinterpret_cast<iegen::example::TemplateMethods*>(id);
    
    try {
        auto result = jni_to_cxx_id->makePair<iegen::example::Project, iegen::example::Project>(jni_to_cxx_arg0, jni_to_cxx_arg1);
        auto first_result = result.first;
        auto second_result = result.second;

        iegen::example::Project* cxx_to_jni_first_result_baseptr = first_result;
        jobjectid cxx_to_jni_first_result = reinterpret_cast<jlong>(cxx_to_jni_first_result_baseptr);

        iegen::example::Project* cxx_to_jni_second_result_baseptr = second_result;
        jobjectid cxx_to_jni_second_result = reinterpret_cast<jlong>(cxx_to_jni_second_result_baseptr);
        jobject first_result_obj = iegen::longToObject(env, cxx_to_jni_first_result);
        jobject second_result_obj = iegen::longToObject(env, cxx_to_jni_second_result);
        jobject cxx_to_jni_result = iegen::make_jni_object_pair(env, first_result_obj, second_result_obj);
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

    jobject result;
    return result;
}


extern "C" JNIEXPORT jobject Java_com_examples_templates_TemplateMethods_jMakepairRootProject(JNIEnv* env, jobject obj, jobjectid id, jobjectid arg0, jobjectid arg1){
    

    auto jni_to_cxx_arg0 = reinterpret_cast<iegen::example::Root*>(arg0);


    auto jni_to_cxx_arg1 = reinterpret_cast<iegen::example::Project*>(arg1);

    validateID(id);
    auto jni_to_cxx_id = reinterpret_cast<iegen::example::TemplateMethods*>(id);
    
    try {
        auto result = jni_to_cxx_id->makePair<iegen::example::Root, iegen::example::Project>(jni_to_cxx_arg0, jni_to_cxx_arg1);
        auto first_result = result.first;
        auto second_result = result.second;

        iegen::example::Root* cxx_to_jni_first_result_baseptr = first_result;
        jobjectid cxx_to_jni_first_result = reinterpret_cast<jlong>(cxx_to_jni_first_result_baseptr);

        iegen::example::Project* cxx_to_jni_second_result_baseptr = second_result;
        jobjectid cxx_to_jni_second_result = reinterpret_cast<jlong>(cxx_to_jni_second_result_baseptr);
        jobject first_result_obj = iegen::longToObject(env, cxx_to_jni_first_result);
        jobject second_result_obj = iegen::longToObject(env, cxx_to_jni_second_result);
        jobject cxx_to_jni_result = iegen::make_jni_object_pair(env, first_result_obj, second_result_obj);
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

    jobject result;
    return result;
}
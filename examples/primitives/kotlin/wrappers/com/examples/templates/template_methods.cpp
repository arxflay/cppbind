/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 02/21/2022-14:15.
 * Please do not change it manually.
 */

#include "jni.h"
#include <iostream>
#include <cxxabi.h>
#include <string.h>
#include "kotlin/wrappers/c_helpers.h"
#include "kotlin/wrappers/iegen_wrapper_helper.hpp"
#include "cxx/templates/template_methods.hpp"
#include "cxx/simple/project.hpp"
#include "cxx/simple/root.hpp"

using namespace iegen::example;


extern "C" JNIEXPORT void Java_com_examples_templates_TemplateMethods_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = reinterpret_cast<iegen::example::TemplateMethods*>(iegen_obj_id_ptr);
    delete jnitocxxid;
    free(iegen_obj_id->type);
    delete iegen_obj_id;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_templates_TemplateMethods_jConstructor(JNIEnv* env, jobject obj){
    try {
        iegen::example::TemplateMethods* baseptr = new iegen::example::TemplateMethods();
        return reinterpret_cast<jlong>(new IEGenCObject {strdup("iegen::example::TemplateMethods"), baseptr});
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


extern "C" JNIEXPORT jint Java_com_examples_templates_TemplateMethods_jMaxInt(JNIEnv* env, jobject obj, jobjectid id, jint arg0, jint arg1){
    




    validateID(id);
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = reinterpret_cast<iegen::example::TemplateMethods*>(iegen_obj_id_ptr);
    
    try {
        const auto& result = jnitocxxid->max<int>(arg0, arg1);
        
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
    
    jstring jjnitocxxarg0Str = (jstring)arg0;
    auto jnitocxxarg0_cstr = env->GetStringUTFChars(jjnitocxxarg0Str, 0);
    std::string jnitocxxarg0 = jnitocxxarg0_cstr;
    env->ReleaseStringUTFChars(jjnitocxxarg0Str, jnitocxxarg0_cstr);

    jstring jjnitocxxarg1Str = (jstring)arg1;
    auto jnitocxxarg1_cstr = env->GetStringUTFChars(jjnitocxxarg1Str, 0);
    std::string jnitocxxarg1 = jnitocxxarg1_cstr;
    env->ReleaseStringUTFChars(jjnitocxxarg1Str, jnitocxxarg1_cstr);

    validateID(id);
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = reinterpret_cast<iegen::example::TemplateMethods*>(iegen_obj_id_ptr);
    
    try {
        const auto& result = jnitocxxid->max<std::string>(jnitocxxarg0, jnitocxxarg1);
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


extern "C" JNIEXPORT jobject Java_com_examples_templates_TemplateMethods_jMakepairProjectProject(JNIEnv* env, jobject obj, jobjectid id, jobjectid arg0, jobjectid arg1){
    

    auto iegen_obj_arg0 = reinterpret_cast<IEGenCObject*>(arg0);
    auto iegen_obj_arg0_ptr = iegen_obj_arg0 ? iegen_obj_arg0->ptr : nullptr;
    auto jnitocxxarg0 = reinterpret_cast<iegen::example::Project*>(iegen_obj_arg0_ptr);


    auto iegen_obj_arg1 = reinterpret_cast<IEGenCObject*>(arg1);
    auto iegen_obj_arg1_ptr = iegen_obj_arg1 ? iegen_obj_arg1->ptr : nullptr;
    auto jnitocxxarg1 = reinterpret_cast<iegen::example::Project*>(iegen_obj_arg1_ptr);

    validateID(id);
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = reinterpret_cast<iegen::example::TemplateMethods*>(iegen_obj_id_ptr);
    
    try {
        const auto& result = jnitocxxid->makePair<iegen::example::Project, iegen::example::Project>(jnitocxxarg0, jnitocxxarg1);
        auto first_result = result.first;
        auto second_result = result.second;
        iegen::example::Project* cxxtojnifirst_result_baseptr = const_cast<iegen::example::Project*>(first_result);
        char* type_first_result = strdup("iegen::example::Project");
        IEGenCObject* iegen_obj_cxxtojnifirst_result = new IEGenCObject {type_first_result, cxxtojnifirst_result_baseptr};
        jobjectid cxxtojnifirst_result = reinterpret_cast<jlong>(iegen_obj_cxxtojnifirst_result);
        iegen::example::Project* cxxtojnisecond_result_baseptr = const_cast<iegen::example::Project*>(second_result);
        char* type_second_result = strdup("iegen::example::Project");
        IEGenCObject* iegen_obj_cxxtojnisecond_result = new IEGenCObject {type_second_result, cxxtojnisecond_result_baseptr};
        jobjectid cxxtojnisecond_result = reinterpret_cast<jlong>(iegen_obj_cxxtojnisecond_result);
        jobject first_result_obj = iegen::longToObject(env, cxxtojnifirst_result);
        jobject second_result_obj = iegen::longToObject(env, cxxtojnisecond_result);
        jobject cxxtojniresult = iegen::make_jni_object_pair(env, first_result_obj, second_result_obj);
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

    jobject result;
    return result;
}


extern "C" JNIEXPORT jobject Java_com_examples_templates_TemplateMethods_jMakepairRootProject(JNIEnv* env, jobject obj, jobjectid id, jobjectid arg0, jobjectid arg1){
    

    auto iegen_obj_arg0 = reinterpret_cast<IEGenCObject*>(arg0);
    auto iegen_obj_arg0_ptr = iegen_obj_arg0 ? iegen_obj_arg0->ptr : nullptr;
    auto jnitocxxarg0 = reinterpret_cast<iegen::example::Root*>(iegen_obj_arg0_ptr);


    auto iegen_obj_arg1 = reinterpret_cast<IEGenCObject*>(arg1);
    auto iegen_obj_arg1_ptr = iegen_obj_arg1 ? iegen_obj_arg1->ptr : nullptr;
    auto jnitocxxarg1 = reinterpret_cast<iegen::example::Project*>(iegen_obj_arg1_ptr);

    validateID(id);
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = reinterpret_cast<iegen::example::TemplateMethods*>(iegen_obj_id_ptr);
    
    try {
        const auto& result = jnitocxxid->makePair<iegen::example::Root, iegen::example::Project>(jnitocxxarg0, jnitocxxarg1);
        auto first_result = result.first;
        auto second_result = result.second;
        iegen::example::Root* cxxtojnifirst_result_baseptr = const_cast<iegen::example::Root*>(first_result);
        char* type_first_result = strdup("iegen::example::Root");
        IEGenCObject* iegen_obj_cxxtojnifirst_result = new IEGenCObject {type_first_result, cxxtojnifirst_result_baseptr};
        jobjectid cxxtojnifirst_result = reinterpret_cast<jlong>(iegen_obj_cxxtojnifirst_result);
        iegen::example::Project* cxxtojnisecond_result_baseptr = const_cast<iegen::example::Project*>(second_result);
        char* type_second_result = strdup("iegen::example::Project");
        IEGenCObject* iegen_obj_cxxtojnisecond_result = new IEGenCObject {type_second_result, cxxtojnisecond_result_baseptr};
        jobjectid cxxtojnisecond_result = reinterpret_cast<jlong>(iegen_obj_cxxtojnisecond_result);
        jobject first_result_obj = iegen::longToObject(env, cxxtojnifirst_result);
        jobject second_result_obj = iegen::longToObject(env, cxxtojnisecond_result);
        jobject cxxtojniresult = iegen::make_jni_object_pair(env, first_result_obj, second_result_obj);
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

    jobject result;
    return result;
}

extern "C" JNIEXPORT jstring Java_com_examples_templates_Template_1methodsKt_jGettypebyid(JNIEnv* env, jclass cls, jobjectid id) {
    validateID(id);
    return env->NewStringUTF(reinterpret_cast<IEGenCObject*>(id)->type);
}

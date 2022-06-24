/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 06/09/2022-13:09.
 * Please do not change it manually.
 */

#include "jni.h"
#include <iostream>
#include <cxxabi.h>
#include <string.h>
#include <type_traits>
#include "kotlin/wrappers/c_helpers.h"
#include "kotlin/wrappers/cppbind_wrapper_helper.hpp"
#include "cxx/globs/utils.hpp"
#include "cxx/simple/task.hpp"
#include "cxx/simple/root.hpp"

extern const char* CPPBIND_CPPBIND_EXAMPLE_TASK;
extern const char* CPPBIND_STD_STDEXCEPTION;



extern "C" JNIEXPORT jobjectid Java_com_examples_globs_complex_ComplexDefaultsKt_jSinglecomplexdefaultvalue_11(JNIEnv* env, jclass cls){
    
    
    try {
        const auto& result = ::singleComplexDefaultValue();
        cppbind::example::Task* cxxtojniresult_ptr = const_cast<cppbind::example::Task*>(new cppbind::example::Task(result));
        char* type_result = strdup(CPPBIND_CPPBIND_EXAMPLE_TASK);
        CppBindCObject* cppbind_obj_cxxtojniresult = new CppBindCObject {type_result, cxxtojniresult_ptr};
        jobjectid cxxtojniresult = reinterpret_cast<jlong>(cppbind_obj_cxxtojniresult);
        return cxxtojniresult;
    }
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }

    jobjectid result {};
    return result;
}


extern "C" JNIEXPORT jobjectid Java_com_examples_globs_complex_ComplexDefaultsKt_jSinglecomplexdefaultvalue(JNIEnv* env, jclass cls, jobjectid task, ...){
    

    auto cppbind_obj_task = reinterpret_cast<CppBindCObject*>(task);
    auto cppbind_obj_task_ptr = cppbind_obj_task ? cppbind_obj_task->ptr : nullptr;
    auto& jnitocxxtask = *static_cast<cppbind::example::Task*>(cppbind_obj_task_ptr);
    
    try {
        const auto& result = ::singleComplexDefaultValue(jnitocxxtask);
        cppbind::example::Task* cxxtojniresult_ptr = const_cast<cppbind::example::Task*>(new cppbind::example::Task(result));
        char* type_result = strdup(CPPBIND_CPPBIND_EXAMPLE_TASK);
        CppBindCObject* cppbind_obj_cxxtojniresult = new CppBindCObject {type_result, cxxtojniresult_ptr};
        jobjectid cxxtojniresult = reinterpret_cast<jlong>(cppbind_obj_cxxtojniresult);
        return cxxtojniresult;
    }
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }

    jobjectid result {};
    return result;
}

extern "C" JNIEXPORT jstring Java_com_examples_globs_complex_ComplexDefaultsKt_jMultiplemixeddefaultvalues_11(JNIEnv* env, jclass cls){
    
    
    try {
        const auto& result = ::multipleMixedDefaultValues();
        jstring cxxtojniresult = env->NewStringUTF(result.data());
        return cxxtojniresult;
    }
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }

    jstring result {};
    return result;
}


extern "C" JNIEXPORT jstring Java_com_examples_globs_complex_ComplexDefaultsKt_jMultiplemixeddefaultvalues_12(JNIEnv* env, jclass cls, jobjectid task, jint i, ...){
    

    auto cppbind_obj_task = reinterpret_cast<CppBindCObject*>(task);
    auto cppbind_obj_task_ptr = cppbind_obj_task ? cppbind_obj_task->ptr : nullptr;
    auto& jnitocxxtask = *static_cast<cppbind::example::Task*>(cppbind_obj_task_ptr);
    
    try {
        const auto& result = ::multipleMixedDefaultValues(jnitocxxtask, i);
        jstring cxxtojniresult = env->NewStringUTF(result.data());
        return cxxtojniresult;
    }
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }

    jstring result {};
    return result;
}


extern "C" JNIEXPORT jstring Java_com_examples_globs_complex_ComplexDefaultsKt_jMultiplemixeddefaultvalues(JNIEnv* env, jclass cls, jobjectid task, jint i, jobjectid r, ...){
    

    auto cppbind_obj_task = reinterpret_cast<CppBindCObject*>(task);
    auto cppbind_obj_task_ptr = cppbind_obj_task ? cppbind_obj_task->ptr : nullptr;
    auto& jnitocxxtask = *static_cast<cppbind::example::Task*>(cppbind_obj_task_ptr);

    auto cppbind_obj_r = reinterpret_cast<CppBindCObject*>(r);
    auto cppbind_obj_r_ptr = cppbind_obj_r ? cppbind_obj_r->ptr : nullptr;
    auto& jnitocxxr = *static_cast<cppbind::example::Root*>(cppbind_obj_r_ptr);
    
    try {
        const auto& result = ::multipleMixedDefaultValues(jnitocxxtask, i, jnitocxxr);
        jstring cxxtojniresult = env->NewStringUTF(result.data());
        return cxxtojniresult;
    }
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }

    jstring result {};
    return result;
}

extern "C" JNIEXPORT jstring Java_com_examples_globs_complex_ComplexDefaultsKt_jGettypebyid(JNIEnv* env, jclass cls, jobjectid id) {
    validateID(id);
    return env->NewStringUTF(reinterpret_cast<CppBindCObject*>(id)->type);
}
/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 07/11/2022-15:10.
 * Please do not change it manually.
 */

#include "jni.h"
#include <iostream>
#include <cxxabi.h>
#include <string.h>
#include <type_traits>
#include "kotlin/wrappers/c_helpers.h"
#include "kotlin/wrappers/cppbind_wrapper_helper.hpp"
#include "cxx/globs/utils.h"
#include <algorithm>

extern const char* CPPBIND_STD_STDEXCEPTION;



extern "C" JNIEXPORT jintArray Java_com_examples_globs_TemplateOverloadedUtilsKt_jMergeInt(JNIEnv* env, jclass, jintArray first, jintArray second, ...){
    

    std::vector<int> jnitocxxfirst;
    auto _jnitocxxfirst = cppbind::getIntArray(env, first);
    for (auto& value__jnitocxxfirst : _jnitocxxfirst) {
        
        jnitocxxfirst.emplace_back(value__jnitocxxfirst);
    }

    std::vector<int> jnitocxxsecond;
    auto _jnitocxxsecond = cppbind::getIntArray(env, second);
    for (auto& value__jnitocxxsecond : _jnitocxxsecond) {
        
        jnitocxxsecond.emplace_back(value__jnitocxxsecond);
    }
    
    try {
        const auto& result = ::merge<int>(jnitocxxfirst, jnitocxxsecond);
        
        jintArray cxxtojniresult = env->NewIntArray(result.size());
        size_t index_result = 0;
        for (auto& value_result : result) {
            
            env->SetIntArrayRegion(cxxtojniresult, index_result, 1, &value_result);
            ++index_result ;
        }
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

    jintArray result {};
    return result;
}

extern "C" JNIEXPORT jobjectArray Java_com_examples_globs_TemplateOverloadedUtilsKt_jMergeString(JNIEnv* env, jclass, jobjectArray first, jobjectArray second, ...){
    

    std::vector<std::string> jnitocxxfirst;
    auto _jnitocxxfirst = cppbind::getObjectArray(env, first);
    for (auto& value__jnitocxxfirst : _jnitocxxfirst) {
        jstring jjnitocxxvalue__jnitocxxfirstStr = static_cast<jstring>(value__jnitocxxfirst);
        auto jnitocxxvalue__jnitocxxfirst_cstr = env->GetStringUTFChars(jjnitocxxvalue__jnitocxxfirstStr, 0);
        std::string jnitocxxvalue__jnitocxxfirst = jnitocxxvalue__jnitocxxfirst_cstr;
        env->ReleaseStringUTFChars(jjnitocxxvalue__jnitocxxfirstStr, jnitocxxvalue__jnitocxxfirst_cstr);
        jnitocxxfirst.emplace_back(jnitocxxvalue__jnitocxxfirst);
    }

    std::vector<std::string> jnitocxxsecond;
    auto _jnitocxxsecond = cppbind::getObjectArray(env, second);
    for (auto& value__jnitocxxsecond : _jnitocxxsecond) {
        jstring jjnitocxxvalue__jnitocxxsecondStr = static_cast<jstring>(value__jnitocxxsecond);
        auto jnitocxxvalue__jnitocxxsecond_cstr = env->GetStringUTFChars(jjnitocxxvalue__jnitocxxsecondStr, 0);
        std::string jnitocxxvalue__jnitocxxsecond = jnitocxxvalue__jnitocxxsecond_cstr;
        env->ReleaseStringUTFChars(jjnitocxxvalue__jnitocxxsecondStr, jnitocxxvalue__jnitocxxsecond_cstr);
        jnitocxxsecond.emplace_back(jnitocxxvalue__jnitocxxsecond);
    }
    
    try {
        const auto& result = ::merge<std::string>(jnitocxxfirst, jnitocxxsecond);
        
        jobjectArray cxxtojniresult = env->NewObjectArray(result.size(), env->FindClass("java/lang/Object"), NULL);
        size_t index_result = 0;
        for (auto& value_result : result) {
            jstring cxxtojnivalue_result = env->NewStringUTF(value_result.data());
            env->SetObjectArrayElement(cxxtojniresult, index_result, cxxtojnivalue_result);
            ++index_result ;
        }
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

    jobjectArray result {};
    return result;
}

extern "C" JNIEXPORT jintArray Java_com_examples_globs_TemplateOverloadedUtilsKt_jSum(JNIEnv* env, jclass, jintArray first, jintArray second, ...){
    

    std::vector<int> _jnitocxxfirst;
    auto __jnitocxxfirst = cppbind::getIntArray(env, first);
    for (auto& value___jnitocxxfirst : __jnitocxxfirst) {
        
        _jnitocxxfirst.emplace_back(value___jnitocxxfirst);
    }
    ArrayInt jnitocxxfirst {};
    std::copy_n(std::make_move_iterator(_jnitocxxfirst.begin()), 4, jnitocxxfirst.begin());

    std::vector<int> _jnitocxxsecond;
    auto __jnitocxxsecond = cppbind::getIntArray(env, second);
    for (auto& value___jnitocxxsecond : __jnitocxxsecond) {
        
        _jnitocxxsecond.emplace_back(value___jnitocxxsecond);
    }
    ArrayInt jnitocxxsecond {};
    std::copy_n(std::make_move_iterator(_jnitocxxsecond.begin()), 4, jnitocxxsecond.begin());
    
    try {
        const auto& result = ::sum(jnitocxxfirst, jnitocxxsecond);
        
        jintArray cxxtojniresult = env->NewIntArray(result.size());
        size_t index_result = 0;
        for (auto& value_result : result) {
            
            env->SetIntArrayRegion(cxxtojniresult, index_result, 1, &value_result);
            ++index_result ;
        }
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

    jintArray result {};
    return result;
}

extern "C" JNIEXPORT jfloatArray Java_com_examples_globs_TemplateOverloadedUtilsKt_jSum_11(JNIEnv* env, jclass, jfloatArray first, jfloatArray second, ...){
    

    std::vector<float> _jnitocxxfirst;
    auto __jnitocxxfirst = cppbind::getFloatArray(env, first);
    for (auto& value___jnitocxxfirst : __jnitocxxfirst) {
        
        _jnitocxxfirst.emplace_back(value___jnitocxxfirst);
    }
    std::array<float, 4> jnitocxxfirst {};
    std::copy_n(std::make_move_iterator(_jnitocxxfirst.begin()), 4, jnitocxxfirst.begin());

    std::vector<float> _jnitocxxsecond;
    auto __jnitocxxsecond = cppbind::getFloatArray(env, second);
    for (auto& value___jnitocxxsecond : __jnitocxxsecond) {
        
        _jnitocxxsecond.emplace_back(value___jnitocxxsecond);
    }
    std::array<float, 4> jnitocxxsecond {};
    std::copy_n(std::make_move_iterator(_jnitocxxsecond.begin()), 4, jnitocxxsecond.begin());
    
    try {
        const auto& result = ::sum(jnitocxxfirst, jnitocxxsecond);
        
        jfloatArray cxxtojniresult = env->NewFloatArray(result.size());
        size_t index_result = 0;
        for (auto& value_result : result) {
            
            env->SetFloatArrayRegion(cxxtojniresult, index_result, 1, &value_result);
            ++index_result ;
        }
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

    jfloatArray result {};
    return result;
}

extern "C" JNIEXPORT jstring Java_com_examples_globs_TemplateOverloadedUtilsKt_jGettypebyid(JNIEnv* env, jclass, jobjectid id) {
    validateID(id);
    return env->NewStringUTF(reinterpret_cast<CppBindCObject*>(id)->type);
}

/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 03/04/2022-07:10.
 * Please do not change it manually.
 */

#include "jni.h"
#include <iostream>
#include <cxxabi.h>
#include <string.h>
#include <type_traits>
#include "kotlin/wrappers/c_helpers.h"
#include "kotlin/wrappers/iegen_wrapper_helper.hpp"
#include "cxx/templates/pair.hpp"
#include "cxx/overloads/employee.hpp"
#include "cxx/forward_decl/student.hpp"

using namespace iegen::example;


extern "C" JNIEXPORT void Java_com_examples_templates_PairEmployee_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<iegen::example::Pair<std::string, std::shared_ptr<iegen::example::Employee>>*>(iegen_obj_id_ptr);
    delete jnitocxxid;
    free(iegen_obj_id->type);
    delete iegen_obj_id;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_templates_PairEmployee_jConstructor(JNIEnv* env, jobject obj, jstring first, jobjectid second){
    jstring jjnitocxxfirstStr = (jstring)first;
    auto jnitocxxfirst_cstr = env->GetStringUTFChars(jjnitocxxfirstStr, 0);
    std::string jnitocxxfirst = jnitocxxfirst_cstr;
    env->ReleaseStringUTFChars(jjnitocxxfirstStr, jnitocxxfirst_cstr);
    
    auto iegen_obj_second = reinterpret_cast<IEGenCObject*>(second);
    auto iegen_obj_second_ptr = iegen_obj_second ? iegen_obj_second->ptr : nullptr;
    std::shared_ptr<iegen::example::Employee> jnitocxxsecond;
    jnitocxxsecond = *static_cast<std::shared_ptr<iegen::example::Employee>*>(iegen_obj_second_ptr);
    try {
        iegen::example::Pair<std::string, std::shared_ptr<iegen::example::Employee>>* ptr = new iegen::example::Pair<std::string, std::shared_ptr<iegen::example::Employee>>(jnitocxxfirst, jnitocxxsecond);
        return reinterpret_cast<jlong>(new IEGenCObject {strdup("iegen::example::Pair<std::string, std::shared_ptr<iegen::example::Employee>>"), ptr});
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
    jobjectid result {};
    return result;
}

extern "C" JNIEXPORT jstring Java_com_examples_templates_PairEmployee_jFirst(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<iegen::example::Pair<std::string, std::shared_ptr<iegen::example::Employee>>*>(iegen_obj_id_ptr);
    try {
        const auto& result = jnitocxxid->first();
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

    jstring result {};
    return result;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_templates_PairEmployee_jSecond(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<iegen::example::Pair<std::string, std::shared_ptr<iegen::example::Employee>>*>(iegen_obj_id_ptr);
    try {
        const auto& result = jnitocxxid->second();
        
        char* type_result = strdup("iegen::example::Employee");
        void* cxxtojniresult_ptr = nullptr;
        IEGenCObject* iegen_obj_cxxtojniresult = nullptr;
        cxxtojniresult_ptr = new std::shared_ptr<iegen::example::Employee>(result);
        iegen_obj_cxxtojniresult = new IEGenCObject {type_result, cxxtojniresult_ptr};
        jobjectid cxxtojniresult = reinterpret_cast<jlong>(iegen_obj_cxxtojniresult);
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

    jobjectid result {};
    return result;
}

extern "C" JNIEXPORT void Java_com_examples_templates_PairStudent_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<iegen::example::Pair<std::string, std::shared_ptr<iegen::example::Student>>*>(iegen_obj_id_ptr);
    delete jnitocxxid;
    free(iegen_obj_id->type);
    delete iegen_obj_id;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_templates_PairStudent_jConstructor(JNIEnv* env, jobject obj, jstring first, jobjectid second){
    jstring jjnitocxxfirstStr = (jstring)first;
    auto jnitocxxfirst_cstr = env->GetStringUTFChars(jjnitocxxfirstStr, 0);
    std::string jnitocxxfirst = jnitocxxfirst_cstr;
    env->ReleaseStringUTFChars(jjnitocxxfirstStr, jnitocxxfirst_cstr);
    
    auto iegen_obj_second = reinterpret_cast<IEGenCObject*>(second);
    auto iegen_obj_second_ptr = iegen_obj_second ? iegen_obj_second->ptr : nullptr;
    std::shared_ptr<iegen::example::Student> jnitocxxsecond;
    jnitocxxsecond = *static_cast<std::shared_ptr<iegen::example::Student>*>(iegen_obj_second_ptr);
    try {
        iegen::example::Pair<std::string, std::shared_ptr<iegen::example::Student>>* ptr = new iegen::example::Pair<std::string, std::shared_ptr<iegen::example::Student>>(jnitocxxfirst, jnitocxxsecond);
        return reinterpret_cast<jlong>(new IEGenCObject {strdup("iegen::example::Pair<std::string, std::shared_ptr<iegen::example::Student>>"), ptr});
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
    jobjectid result {};
    return result;
}

extern "C" JNIEXPORT jstring Java_com_examples_templates_PairStudent_jFirst(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<iegen::example::Pair<std::string, std::shared_ptr<iegen::example::Student>>*>(iegen_obj_id_ptr);
    try {
        const auto& result = jnitocxxid->first();
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

    jstring result {};
    return result;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_templates_PairStudent_jSecond(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<iegen::example::Pair<std::string, std::shared_ptr<iegen::example::Student>>*>(iegen_obj_id_ptr);
    try {
        const auto& result = jnitocxxid->second();
        
        char* type_result = strdup("iegen::example::Student");
        void* cxxtojniresult_ptr = nullptr;
        IEGenCObject* iegen_obj_cxxtojniresult = nullptr;
        cxxtojniresult_ptr = new std::shared_ptr<iegen::example::Student>(result);
        iegen_obj_cxxtojniresult = new IEGenCObject {type_result, cxxtojniresult_ptr};
        jobjectid cxxtojniresult = reinterpret_cast<jlong>(iegen_obj_cxxtojniresult);
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

    jobjectid result {};
    return result;
}

extern "C" JNIEXPORT jstring Java_com_examples_templates_PairKt_jGettypebyid(JNIEnv* env, jclass cls, jobjectid id) {
    validateID(id);
    return env->NewStringUTF(reinterpret_cast<IEGenCObject*>(id)->type);
}

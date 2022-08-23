/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 08/18/2022-11:02.
 * Please do not change it manually.
 */

#include "jni.h"
#include <iostream>
#include <cxxabi.h>
#include <string.h>
#include <type_traits>
#include "kotlin/wrappers/c_helpers.h"
#include "kotlin/wrappers/cppbind_wrapper_helper.hpp"
#include "cxx/nullables/nullable_utils.hpp"

extern const char* CPPBIND_STD_STDEXCEPTION;

const char* CPPBIND_CPPBIND_EXAMPLE_NULLABLE_NUMBERINT = "cppbind::example::nullable::NumberInt";
const char* CPPBIND_CPPBIND_EXAMPLE_NULLABLE_NUMBERDOUBLE = "cppbind::example::nullable::NumberDouble";
const char* CPPBIND_CPPBIND_EXAMPLE_NULLABLE_UTILS = "cppbind::example::nullable::Utils";

using namespace cppbind::example::nullable;


extern "C" JNIEXPORT void Java_com_examples_nullables_NumberInt_jFinalize(JNIEnv*, jobject, jobjectid id){
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    delete static_cast<std::shared_ptr<cppbind::example::nullable::NumberInt>*>(cppbind_obj_id_ptr);
    free(cppbind_obj_id->type);
    delete cppbind_obj_id;
}

extern "C" JNIEXPORT jlong Java_com_examples_nullables_NumberInt_jGetcxxid(JNIEnv*, jobject, jobjectid id) {
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id->ptr;
    return reinterpret_cast<jlong>(static_cast<std::shared_ptr<cppbind::example::nullable::NumberInt>*>(cppbind_obj_id_ptr)->get());
}

extern "C" JNIEXPORT jobjectid Java_com_examples_nullables_NumberInt_jConstructor([[maybe_unused]] JNIEnv* env, jobject, jint val_, ...){
    
    try {
        cppbind::example::nullable::NumberInt* this_object = new cppbind::example::nullable::NumberInt(val_);
        return reinterpret_cast<jlong>(new CppBindCObject {strdup(CPPBIND_CPPBIND_EXAMPLE_NULLABLE_NUMBERINT), new std::shared_ptr<cppbind::example::nullable::NumberInt>(this_object)});
    }
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }
    jobjectid result {};
    return result;
}
extern "C" JNIEXPORT jint Java_com_examples_nullables_NumberInt_jValue([[maybe_unused]] JNIEnv* env, jobject, jobjectid id){
    validateID(id);
    
    std::shared_ptr<cppbind::example::nullable::NumberInt> jnitocxxid;
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    jnitocxxid = *static_cast<std::shared_ptr<cppbind::example::nullable::NumberInt>*>(cppbind_obj_id_ptr);
    const auto& result = jnitocxxid->value;
    
    return result;
}

extern "C" JNIEXPORT void Java_com_examples_nullables_NumberDouble_jFinalize(JNIEnv*, jobject, jobjectid id){
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    delete static_cast<cppbind::example::nullable::NumberDouble*>(cppbind_obj_id_ptr);
    free(cppbind_obj_id->type);
    delete cppbind_obj_id;
}

extern "C" JNIEXPORT jlong Java_com_examples_nullables_NumberDouble_jGetcxxid(JNIEnv*, jobject, jobjectid id) {
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id->ptr;
    return reinterpret_cast<jlong>(static_cast<cppbind::example::nullable::NumberDouble*>(cppbind_obj_id_ptr));
}

extern "C" JNIEXPORT jobjectid Java_com_examples_nullables_NumberDouble_jConstructor([[maybe_unused]] JNIEnv* env, jobject, jdouble val_, ...){
    
    try {
        cppbind::example::nullable::NumberDouble* this_object = new cppbind::example::nullable::NumberDouble(val_);
        return reinterpret_cast<jlong>(new CppBindCObject {strdup(CPPBIND_CPPBIND_EXAMPLE_NULLABLE_NUMBERDOUBLE), this_object});
    }
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }
    jobjectid result {};
    return result;
}
extern "C" JNIEXPORT jdouble Java_com_examples_nullables_NumberDouble_jValue([[maybe_unused]] JNIEnv* env, jobject, jobjectid id){
    validateID(id);
    
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<cppbind::example::nullable::NumberDouble*>(cppbind_obj_id_ptr);
    const auto& result = jnitocxxid->value;
    
    return result;
}

extern "C" JNIEXPORT void Java_com_examples_nullables_Utils_jFinalize(JNIEnv*, jobject, jobjectid id){
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    delete static_cast<std::shared_ptr<cppbind::example::nullable::Utils>*>(cppbind_obj_id_ptr);
    free(cppbind_obj_id->type);
    delete cppbind_obj_id;
}

extern "C" JNIEXPORT jlong Java_com_examples_nullables_Utils_jGetcxxid(JNIEnv*, jobject, jobjectid id) {
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id->ptr;
    return reinterpret_cast<jlong>(static_cast<std::shared_ptr<cppbind::example::nullable::Utils>*>(cppbind_obj_id_ptr)->get());
}

extern "C" JNIEXPORT jobjectid Java_com_examples_nullables_Utils_jConstructor([[maybe_unused]] JNIEnv* env, jobject, jobjectid num, ...){
    
    auto cppbind_obj_num = reinterpret_cast<CppBindCObject*>(num);
    auto cppbind_obj_num_ptr = cppbind_obj_num ? cppbind_obj_num->ptr : nullptr;
    auto jnitocxxnum = static_cast<cppbind::example::nullable::NumberDouble*>(cppbind_obj_num_ptr);
    try {
        cppbind::example::nullable::Utils* this_object = new cppbind::example::nullable::Utils(jnitocxxnum);
        return reinterpret_cast<jlong>(new CppBindCObject {strdup(CPPBIND_CPPBIND_EXAMPLE_NULLABLE_UTILS), new std::shared_ptr<cppbind::example::nullable::Utils>(this_object)});
    }
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }
    jobjectid result {};
    return result;
}


extern "C" JNIEXPORT jobjectid Java_com_examples_nullables_Utils_jMax([[maybe_unused]] JNIEnv* env, jobject, jobjectid first, jobjectid second, ...){
    

    auto cppbind_obj_first = reinterpret_cast<CppBindCObject*>(first);
    auto cppbind_obj_first_ptr = cppbind_obj_first ? cppbind_obj_first->ptr : nullptr;
    auto jnitocxxfirst = static_cast<cppbind::example::nullable::NumberDouble*>(cppbind_obj_first_ptr);


    auto cppbind_obj_second = reinterpret_cast<CppBindCObject*>(second);
    auto cppbind_obj_second_ptr = cppbind_obj_second ? cppbind_obj_second->ptr : nullptr;
    auto jnitocxxsecond = static_cast<cppbind::example::nullable::NumberDouble*>(cppbind_obj_second_ptr);

    
    try {
        const auto& result = cppbind::example::nullable::Utils::max(jnitocxxfirst, jnitocxxsecond);
        cppbind::example::nullable::NumberDouble* cxxtojniresult_ptr = const_cast<cppbind::example::nullable::NumberDouble*>(result);
        char* type_result = strdup(CPPBIND_CPPBIND_EXAMPLE_NULLABLE_NUMBERDOUBLE);
        CppBindCObject* cppbind_obj_cxxtojniresult = nullptr;
        if (result) {
            cppbind_obj_cxxtojniresult = new CppBindCObject {type_result, cxxtojniresult_ptr};
        }
        jobjectid cxxtojniresult = reinterpret_cast<jlong>(cppbind_obj_cxxtojniresult);
        return cxxtojniresult;
    }
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }

    jobjectid result {};
    return result;
}


extern "C" JNIEXPORT jobjectid Java_com_examples_nullables_Utils_jMax1([[maybe_unused]] JNIEnv* env, jobject, jobjectid first, jobjectid second, ...){
    

    std::shared_ptr<cppbind::example::nullable::NumberInt> jnitocxxfirst = nullptr;
    if (first) {
        auto cppbind_obj_first = reinterpret_cast<CppBindCObject*>(first);
        auto cppbind_obj_first_ptr = cppbind_obj_first ? cppbind_obj_first->ptr : nullptr;
        jnitocxxfirst = *static_cast<std::shared_ptr<cppbind::example::nullable::NumberInt>*>(cppbind_obj_first_ptr);
    }


    std::shared_ptr<cppbind::example::nullable::NumberInt> jnitocxxsecond = nullptr;
    if (second) {
        auto cppbind_obj_second = reinterpret_cast<CppBindCObject*>(second);
        auto cppbind_obj_second_ptr = cppbind_obj_second ? cppbind_obj_second->ptr : nullptr;
        jnitocxxsecond = *static_cast<std::shared_ptr<cppbind::example::nullable::NumberInt>*>(cppbind_obj_second_ptr);
    }

    
    try {
        const auto& result = cppbind::example::nullable::Utils::max(jnitocxxfirst, jnitocxxsecond);
        
        char* type_result = strdup(CPPBIND_CPPBIND_EXAMPLE_NULLABLE_NUMBERINT);
        void* cxxtojniresult_ptr = nullptr;
        CppBindCObject* cppbind_obj_cxxtojniresult = nullptr;
        if (result) {
            cxxtojniresult_ptr = new std::shared_ptr<cppbind::example::nullable::NumberInt>(result);
            cppbind_obj_cxxtojniresult = new CppBindCObject {type_result, cxxtojniresult_ptr};
        }
        jobjectid cxxtojniresult = reinterpret_cast<jlong>(cppbind_obj_cxxtojniresult);
        return cxxtojniresult;
    }
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }

    jobjectid result {};
    return result;
}


extern "C" JNIEXPORT void Java_com_examples_nullables_Utils_jChecknonnullarg([[maybe_unused]] JNIEnv* env, jobject, jobjectid number, ...){
    

    auto cppbind_obj_number = reinterpret_cast<CppBindCObject*>(number);
    auto cppbind_obj_number_ptr = cppbind_obj_number ? cppbind_obj_number->ptr : nullptr;
    auto jnitocxxnumber = static_cast<cppbind::example::nullable::NumberDouble*>(cppbind_obj_number_ptr);

    
    try {
        cppbind::example::nullable::Utils::checkNonnullArg(jnitocxxnumber);
        return;
    }
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }


}


extern "C" JNIEXPORT jobjectid Java_com_examples_nullables_Utils_jChecknonnullreturn([[maybe_unused]] JNIEnv* env, jobject){
    
    
    try {
        const auto& result = cppbind::example::nullable::Utils::checkNonnullReturn();
        cppbind::example::nullable::NumberDouble* cxxtojniresult_ptr = const_cast<cppbind::example::nullable::NumberDouble*>(result);
        char* type_result = strdup(CPPBIND_CPPBIND_EXAMPLE_NULLABLE_NUMBERDOUBLE);
        CppBindCObject* cppbind_obj_cxxtojniresult = new CppBindCObject {type_result, cxxtojniresult_ptr};
        jobjectid cxxtojniresult = reinterpret_cast<jlong>(cppbind_obj_cxxtojniresult);
        return cxxtojniresult;
    }
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }

    jobjectid result {};
    return result;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_nullables_Utils_jNullable([[maybe_unused]] JNIEnv* env, jobject, jobjectid id){
    validateID(id);
    
    std::shared_ptr<cppbind::example::nullable::Utils> jnitocxxid;
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    jnitocxxid = *static_cast<std::shared_ptr<cppbind::example::nullable::Utils>*>(cppbind_obj_id_ptr);
    try {
        const auto& result = jnitocxxid->nullable();
        cppbind::example::nullable::NumberDouble* cxxtojniresult_ptr = const_cast<cppbind::example::nullable::NumberDouble*>(result);
        char* type_result = strdup(CPPBIND_CPPBIND_EXAMPLE_NULLABLE_NUMBERDOUBLE);
        CppBindCObject* cppbind_obj_cxxtojniresult = nullptr;
        if (result) {
            cppbind_obj_cxxtojniresult = new CppBindCObject {type_result, cxxtojniresult_ptr};
        }
        jobjectid cxxtojniresult = reinterpret_cast<jlong>(cppbind_obj_cxxtojniresult);
        return cxxtojniresult;
    }
    
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }

    jobjectid result {};
    return result;
}

extern "C" JNIEXPORT void Java_com_examples_nullables_Utils_jSetnullable([[maybe_unused]] JNIEnv* env, jobject, jobjectid id, jobjectid num, ...){
    validateID(id);
    
    std::shared_ptr<cppbind::example::nullable::Utils> jnitocxxid;
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    jnitocxxid = *static_cast<std::shared_ptr<cppbind::example::nullable::Utils>*>(cppbind_obj_id_ptr);
    
    auto cppbind_obj_num = reinterpret_cast<CppBindCObject*>(num);
    auto cppbind_obj_num_ptr = cppbind_obj_num ? cppbind_obj_num->ptr : nullptr;
    auto jnitocxxnum = static_cast<cppbind::example::nullable::NumberDouble*>(cppbind_obj_num_ptr);
    try {
       jnitocxxid->setNullable(jnitocxxnum);
    }
    
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }
}


extern "C" JNIEXPORT jobjectid Java_com_examples_nullables_Utils_jNonnull([[maybe_unused]] JNIEnv* env, jobject, jobjectid id){
    validateID(id);
    
    std::shared_ptr<cppbind::example::nullable::Utils> jnitocxxid;
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    jnitocxxid = *static_cast<std::shared_ptr<cppbind::example::nullable::Utils>*>(cppbind_obj_id_ptr);
    try {
        const auto& result = jnitocxxid->nonNull();
        cppbind::example::nullable::NumberDouble* cxxtojniresult_ptr = const_cast<cppbind::example::nullable::NumberDouble*>(result);
        char* type_result = strdup(CPPBIND_CPPBIND_EXAMPLE_NULLABLE_NUMBERDOUBLE);
        CppBindCObject* cppbind_obj_cxxtojniresult = new CppBindCObject {type_result, cxxtojniresult_ptr};
        jobjectid cxxtojniresult = reinterpret_cast<jlong>(cppbind_obj_cxxtojniresult);
        return cxxtojniresult;
    }
    
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }

    jobjectid result {};
    return result;
}

extern "C" JNIEXPORT void Java_com_examples_nullables_Utils_jSetnonnull([[maybe_unused]] JNIEnv* env, jobject, jobjectid id, jobjectid num, ...){
    validateID(id);
    
    std::shared_ptr<cppbind::example::nullable::Utils> jnitocxxid;
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    jnitocxxid = *static_cast<std::shared_ptr<cppbind::example::nullable::Utils>*>(cppbind_obj_id_ptr);
    
    auto cppbind_obj_num = reinterpret_cast<CppBindCObject*>(num);
    auto cppbind_obj_num_ptr = cppbind_obj_num ? cppbind_obj_num->ptr : nullptr;
    auto jnitocxxnum = static_cast<cppbind::example::nullable::NumberDouble*>(cppbind_obj_num_ptr);
    try {
       jnitocxxid->setNonNull(jnitocxxnum);
    }
    
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }
}

extern "C" JNIEXPORT jobjectid Java_com_examples_nullables_Utils_jNumdouble([[maybe_unused]] JNIEnv* env, jobject, jobjectid id){
    validateID(id);
    
    std::shared_ptr<cppbind::example::nullable::Utils> jnitocxxid;
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    jnitocxxid = *static_cast<std::shared_ptr<cppbind::example::nullable::Utils>*>(cppbind_obj_id_ptr);
    const auto& result = jnitocxxid->numDouble;
    cppbind::example::nullable::NumberDouble* cxxtojniresult_ptr = const_cast<cppbind::example::nullable::NumberDouble*>(result);
    char* type_result = strdup(CPPBIND_CPPBIND_EXAMPLE_NULLABLE_NUMBERDOUBLE);
    CppBindCObject* cppbind_obj_cxxtojniresult = nullptr;
    if (result) {
        cppbind_obj_cxxtojniresult = new CppBindCObject {type_result, cxxtojniresult_ptr};
    }
    jobjectid cxxtojniresult = reinterpret_cast<jlong>(cppbind_obj_cxxtojniresult);
    return cxxtojniresult;
}

extern "C" JNIEXPORT void Java_com_examples_nullables_Utils_jSetnumdouble([[maybe_unused]] JNIEnv* env, jobject, jobjectid id, jobjectid value, ...){
    validateID(id);
    
    std::shared_ptr<cppbind::example::nullable::Utils> jnitocxxid;
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    jnitocxxid = *static_cast<std::shared_ptr<cppbind::example::nullable::Utils>*>(cppbind_obj_id_ptr);

    
    auto cppbind_obj_value = reinterpret_cast<CppBindCObject*>(value);
    auto cppbind_obj_value_ptr = cppbind_obj_value ? cppbind_obj_value->ptr : nullptr;
    auto jnitocxxvalue = static_cast<cppbind::example::nullable::NumberDouble*>(cppbind_obj_value_ptr);
    jnitocxxid->numDouble = jnitocxxvalue;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_nullables_Utils_jNumint([[maybe_unused]] JNIEnv* env, jobject, jobjectid id){
    validateID(id);
    
    std::shared_ptr<cppbind::example::nullable::Utils> jnitocxxid;
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    jnitocxxid = *static_cast<std::shared_ptr<cppbind::example::nullable::Utils>*>(cppbind_obj_id_ptr);
    const auto& result = jnitocxxid->numInt;
    
    char* type_result = strdup(CPPBIND_CPPBIND_EXAMPLE_NULLABLE_NUMBERINT);
    void* cxxtojniresult_ptr = nullptr;
    CppBindCObject* cppbind_obj_cxxtojniresult = nullptr;
    cxxtojniresult_ptr = new std::shared_ptr<cppbind::example::nullable::NumberInt>(result);
    cppbind_obj_cxxtojniresult = new CppBindCObject {type_result, cxxtojniresult_ptr};
    jobjectid cxxtojniresult = reinterpret_cast<jlong>(cppbind_obj_cxxtojniresult);
    return cxxtojniresult;
}

extern "C" JNIEXPORT void Java_com_examples_nullables_Utils_jSetnumint([[maybe_unused]] JNIEnv* env, jobject, jobjectid id, jobjectid value, ...){
    validateID(id);
    
    std::shared_ptr<cppbind::example::nullable::Utils> jnitocxxid;
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    jnitocxxid = *static_cast<std::shared_ptr<cppbind::example::nullable::Utils>*>(cppbind_obj_id_ptr);

    
    std::shared_ptr<cppbind::example::nullable::NumberInt> jnitocxxvalue;
    auto cppbind_obj_value = reinterpret_cast<CppBindCObject*>(value);
    auto cppbind_obj_value_ptr = cppbind_obj_value ? cppbind_obj_value->ptr : nullptr;
    jnitocxxvalue = *static_cast<std::shared_ptr<cppbind::example::nullable::NumberInt>*>(cppbind_obj_value_ptr);
    jnitocxxid->numInt = jnitocxxvalue;
}


extern "C" JNIEXPORT jstring Java_com_examples_nullables_Nullable_1utilsKt_jReversestring(JNIEnv* env, jclass, jstring s, ...){
    
    auto deleter = [&env, &s](const char * ptr) {
        env->ReleaseStringUTFChars(s, ptr);
    };
    std::unique_ptr<const char, decltype(deleter)> jnitocxxs_unique_ptr(
                                                                  s ? env->GetStringUTFChars(s, NULL) : nullptr,
                                                                  deleter);
    const char * jnitocxxs = jnitocxxs_unique_ptr.get();
    
    try {
        const auto& result = cppbind::example::nullable::reverseString(jnitocxxs);
        jstring cxxtojniresult = env->NewStringUTF(result);
        return cxxtojniresult;
    }
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }

    jstring result {};
    return result;
}

extern "C" JNIEXPORT jstring Java_com_examples_nullables_Nullable_1utilsKt_jGettypebyid(JNIEnv* env, jclass, jobjectid id) {
    validateID(id);
    return env->NewStringUTF(reinterpret_cast<CppBindCObject*>(id)->type);
}

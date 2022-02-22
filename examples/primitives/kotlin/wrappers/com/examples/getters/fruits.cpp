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
#include "cxx/getters/fruits.hpp"

using namespace iegen::example;


extern "C" JNIEXPORT void Java_com_examples_getters_Fruit_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = reinterpret_cast<iegen::example::Fruit*>(iegen_obj_id_ptr);
    delete jnitocxxid;
    free(iegen_obj_id->type);
    delete iegen_obj_id;
}

extern "C" JNIEXPORT jint Java_com_examples_getters_Fruit_jType(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = reinterpret_cast<iegen::example::Fruit*>(iegen_obj_id_ptr);
    try {
        const auto& result = jnitocxxid->type();
        jint cxxtojniresult = (jint)result;
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

    jint result;
    return result;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_getters_Apple_jConstructor(JNIEnv* env, jobject obj){
    try {
        iegen::example::Fruit* baseptr = new iegen::example::Apple();
        return reinterpret_cast<jlong>(new IEGenCObject {strdup("iegen::example::Apple"), baseptr});
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

extern "C" JNIEXPORT jint Java_com_examples_getters_Apple_jType(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto base_id = reinterpret_cast<iegen::example::Fruit*>(iegen_obj_id_ptr);
    auto jnitocxxid = dynamic_cast<iegen::example::Apple*>(base_id);
    try {
        const auto& result = jnitocxxid->type();
        jint cxxtojniresult = (jint)result;
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

    jint result;
    return result;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_getters_Pineapple_jConstructor(JNIEnv* env, jobject obj){
    try {
        iegen::example::Fruit* baseptr = new iegen::example::Pineapple();
        return reinterpret_cast<jlong>(new IEGenCObject {strdup("iegen::example::Pineapple"), baseptr});
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

extern "C" JNIEXPORT jint Java_com_examples_getters_Pineapple_jType(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto base_id = reinterpret_cast<iegen::example::Fruit*>(iegen_obj_id_ptr);
    auto jnitocxxid = dynamic_cast<iegen::example::Pineapple*>(base_id);
    try {
        const auto& result = jnitocxxid->type();
        jint cxxtojniresult = (jint)result;
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

    jint result;
    return result;
}

extern "C" JNIEXPORT void Java_com_examples_getters_Fruits_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = reinterpret_cast<iegen::example::Fruits*>(iegen_obj_id_ptr);
    delete jnitocxxid;
    free(iegen_obj_id->type);
    delete iegen_obj_id;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_getters_Fruits_jConstructor(JNIEnv* env, jobject obj, jobjectidArray fruits){
    
    std::vector<Fruit *> jnitocxxfruits;
    auto _jnitocxxfruits = iegen::getLongArray(env, fruits);
    for (auto& value__jnitocxxfruits : _jnitocxxfruits) {
        
        auto iegen_obj_value__jnitocxxfruits = reinterpret_cast<IEGenCObject*>(value__jnitocxxfruits);
        auto iegen_obj_value__jnitocxxfruits_ptr = iegen_obj_value__jnitocxxfruits ? iegen_obj_value__jnitocxxfruits->ptr : nullptr;
        auto jnitocxxvalue__jnitocxxfruits = reinterpret_cast<iegen::example::Fruit*>(iegen_obj_value__jnitocxxfruits_ptr);
        jnitocxxfruits.emplace_back(jnitocxxvalue__jnitocxxfruits);
    }
    try {
        iegen::example::Fruits* baseptr = new iegen::example::Fruits(jnitocxxfruits);
        return reinterpret_cast<jlong>(new IEGenCObject {strdup("iegen::example::Fruits"), baseptr});
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

extern "C" JNIEXPORT jobjectidArray Java_com_examples_getters_Fruits_jFruitsApple(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = reinterpret_cast<iegen::example::Fruits*>(iegen_obj_id_ptr);
    try {
        const auto& result = jnitocxxid->fruits<iegen::example::Apple>();
        
        jobjectidArray cxxtojniresult = env->NewLongArray(result.size());
        size_t index_result = 0;
        for (auto& value_result : result) {
            iegen::example::Fruit* cxxtojnivalue_result_baseptr = const_cast<iegen::example::Apple*>(value_result);
            char* type_value_result = strdup("iegen::example::Apple");
            IEGenCObject* iegen_obj_cxxtojnivalue_result = new IEGenCObject {type_value_result, cxxtojnivalue_result_baseptr};
            jobjectid cxxtojnivalue_result = reinterpret_cast<jlong>(iegen_obj_cxxtojnivalue_result);
            env->SetLongArrayRegion(cxxtojniresult, index_result, 1, &cxxtojnivalue_result);
            ++index_result ;
        }
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

    jobjectidArray result;
    return result;
}

extern "C" JNIEXPORT jobjectidArray Java_com_examples_getters_Fruits_jFruitsPineapple(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = reinterpret_cast<iegen::example::Fruits*>(iegen_obj_id_ptr);
    try {
        const auto& result = jnitocxxid->fruits<iegen::example::Pineapple>();
        
        jobjectidArray cxxtojniresult = env->NewLongArray(result.size());
        size_t index_result = 0;
        for (auto& value_result : result) {
            iegen::example::Fruit* cxxtojnivalue_result_baseptr = const_cast<iegen::example::Pineapple*>(value_result);
            char* type_value_result = strdup("iegen::example::Pineapple");
            IEGenCObject* iegen_obj_cxxtojnivalue_result = new IEGenCObject {type_value_result, cxxtojnivalue_result_baseptr};
            jobjectid cxxtojnivalue_result = reinterpret_cast<jlong>(iegen_obj_cxxtojnivalue_result);
            env->SetLongArrayRegion(cxxtojniresult, index_result, 1, &cxxtojnivalue_result);
            ++index_result ;
        }
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

    jobjectidArray result;
    return result;
}

extern "C" JNIEXPORT jobjectidArray Java_com_examples_getters_Fruits_jAllfruitsApplePineapple(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = reinterpret_cast<iegen::example::Fruits*>(iegen_obj_id_ptr);
    try {
        const auto& result = jnitocxxid->allFruits<iegen::example::Apple, iegen::example::Pineapple>();
        
        jobjectidArray cxxtojniresult = env->NewLongArray(result.size());
        size_t index_result = 0;
        for (auto& value_result : result) {
            iegen::example::Fruit* cxxtojnivalue_result_baseptr = const_cast<iegen::example::Fruit*>(value_result);
            char* type_value_result = nullptr;
            const char* name_value_result = typeid(*value_result).name();
            int status = 0;
            char* demangled_value_result = abi::__cxa_demangle(name_value_result, NULL, NULL, &status);
            if (status == 0) {
                type_value_result = demangled_value_result;
            } else {
                type_value_result = strdup("iegen::example::Fruit");
            }
            IEGenCObject* iegen_obj_cxxtojnivalue_result = new IEGenCObject {type_value_result, cxxtojnivalue_result_baseptr};
            jobjectid cxxtojnivalue_result = reinterpret_cast<jlong>(iegen_obj_cxxtojnivalue_result);
            env->SetLongArrayRegion(cxxtojniresult, index_result, 1, &cxxtojnivalue_result);
            ++index_result ;
        }
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

    jobjectidArray result;
    return result;
}

extern "C" JNIEXPORT void Java_com_examples_getters_Fruits_jSetallfruitsApplePineapple(JNIEnv* env, jobject obj, jobjectid id, jobjectidArray arg0){
    validateID(id);
    
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = reinterpret_cast<iegen::example::Fruits*>(iegen_obj_id_ptr);
    
    std::vector<Fruit *> jnitocxxarg0;
    auto _jnitocxxarg0 = iegen::getLongArray(env, arg0);
    for (auto& value__jnitocxxarg0 : _jnitocxxarg0) {
        
        auto iegen_obj_value__jnitocxxarg0 = reinterpret_cast<IEGenCObject*>(value__jnitocxxarg0);
        auto iegen_obj_value__jnitocxxarg0_ptr = iegen_obj_value__jnitocxxarg0 ? iegen_obj_value__jnitocxxarg0->ptr : nullptr;
        auto jnitocxxvalue__jnitocxxarg0 = reinterpret_cast<iegen::example::Fruit*>(iegen_obj_value__jnitocxxarg0_ptr);
        jnitocxxarg0.emplace_back(jnitocxxvalue__jnitocxxarg0);
    }
    try {
       jnitocxxid->setAllFruits<iegen::example::Apple, iegen::example::Pineapple>(jnitocxxarg0);
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
}


extern "C" JNIEXPORT jstring Java_com_examples_getters_FruitsKt_jGettypebyid(JNIEnv* env, jclass cls, jobjectid id) {
    validateID(id);
    return env->NewStringUTF(reinterpret_cast<IEGenCObject*>(id)->type);
}

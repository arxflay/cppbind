/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 04/07/2022-06:11.
 * Please do not change it manually.
 */

#include "jni.h"
#include <iostream>
#include <cxxabi.h>
#include <string.h>
#include <type_traits>
#include "kotlin/wrappers/c_helpers.h"
#include "kotlin/wrappers/iegen_wrapper_helper.hpp"
#include "cxx/getters/fruits.hpp"

extern const char* IEGEN_STD_STDEXCEPTION;

const char* IEGEN_IEGEN_EXAMPLE_FRUIT = "iegen::example::Fruit";
const char* IEGEN_IEGEN_EXAMPLE_APPLE = "iegen::example::Apple";
const char* IEGEN_IEGEN_EXAMPLE_PINEAPPLE = "iegen::example::Pineapple";
const char* IEGEN_IEGEN_EXAMPLE_FRUITS = "iegen::example::Fruits";

using namespace iegen::example;


extern "C" JNIEXPORT void Java_com_examples_getters_Fruit_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    static_assert(std::has_virtual_destructor<iegen::example::Fruit>::value, "iegen::example::Fruit type must have virtual destructor");
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    if (strcmp(iegen_obj_id->type, IEGEN_IEGEN_EXAMPLE_FRUIT) == 0)
        delete static_cast<iegen::example::Fruit*>(iegen_obj_id_ptr);
    else if (strcmp(iegen_obj_id->type, IEGEN_IEGEN_EXAMPLE_APPLE) == 0)
        delete static_cast<iegen::example::Apple*>(iegen_obj_id_ptr);
    else if (strcmp(iegen_obj_id->type, IEGEN_IEGEN_EXAMPLE_PINEAPPLE) == 0)
        delete static_cast<iegen::example::Pineapple*>(iegen_obj_id_ptr);
    else {
        std::cerr << "Unexpected object type: " << iegen_obj_id->type << std::endl;
        exit(1);
    }
    free(iegen_obj_id->type);
    delete iegen_obj_id;
}

iegen::example::Fruit* downcast_IegenExample_Fruit(jobjectid id) {
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    if (iegen_obj_id_ptr) {
        if (strcmp(iegen_obj_id->type, IEGEN_IEGEN_EXAMPLE_FRUIT) == 0)
            return static_cast<iegen::example::Fruit*>(iegen_obj_id_ptr);
        else if (strcmp(iegen_obj_id->type, IEGEN_IEGEN_EXAMPLE_APPLE) == 0)
            return static_cast<iegen::example::Apple*>(iegen_obj_id_ptr);
        else if (strcmp(iegen_obj_id->type, IEGEN_IEGEN_EXAMPLE_PINEAPPLE) == 0)
            return static_cast<iegen::example::Pineapple*>(iegen_obj_id_ptr);
        else {
            std::cerr << "Unexpected object type: " << iegen_obj_id->type << std::endl;
            exit(1);
        }
    }
    return nullptr;
}

extern "C" JNIEXPORT jint Java_com_examples_getters_Fruit_jType(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    iegen::example::Fruit* jnitocxxid = downcast_IegenExample_Fruit(id);
    try {
        const auto& result = jnitocxxid->type();
        jint cxxtojniresult = static_cast<jint>(result);
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

    jint result {};
    return result;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_getters_Apple_jConstructor(JNIEnv* env, jobject obj){
    try {
        iegen::example::Apple* ptr = new iegen::example::Apple();
        return reinterpret_cast<jlong>(new IEGenCObject {strdup(IEGEN_IEGEN_EXAMPLE_APPLE), ptr});
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

extern "C" JNIEXPORT jint Java_com_examples_getters_Apple_jType(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<iegen::example::Apple*>(iegen_obj_id_ptr);
    try {
        const auto& result = jnitocxxid->type();
        jint cxxtojniresult = static_cast<jint>(result);
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

    jint result {};
    return result;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_getters_Pineapple_jConstructor(JNIEnv* env, jobject obj){
    try {
        iegen::example::Pineapple* ptr = new iegen::example::Pineapple();
        return reinterpret_cast<jlong>(new IEGenCObject {strdup(IEGEN_IEGEN_EXAMPLE_PINEAPPLE), ptr});
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

extern "C" JNIEXPORT jint Java_com_examples_getters_Pineapple_jType(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<iegen::example::Pineapple*>(iegen_obj_id_ptr);
    try {
        const auto& result = jnitocxxid->type();
        jint cxxtojniresult = static_cast<jint>(result);
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

    jint result {};
    return result;
}

extern "C" JNIEXPORT void Java_com_examples_getters_Fruits_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    delete static_cast<iegen::example::Fruits*>(iegen_obj_id_ptr);
    free(iegen_obj_id->type);
    delete iegen_obj_id;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_getters_Fruits_jConstructor(JNIEnv* env, jobject obj, jobjectidArray fruits){
    
    std::vector<Fruit *> jnitocxxfruits;
    auto _jnitocxxfruits = iegen::getLongArray(env, fruits);
    for (auto& value__jnitocxxfruits : _jnitocxxfruits) {
        
        iegen::example::Fruit* jnitocxxvalue__jnitocxxfruits = downcast_IegenExample_Fruit(value__jnitocxxfruits);
        jnitocxxfruits.emplace_back(jnitocxxvalue__jnitocxxfruits);
    }
    try {
        iegen::example::Fruits* ptr = new iegen::example::Fruits(jnitocxxfruits);
        return reinterpret_cast<jlong>(new IEGenCObject {strdup(IEGEN_IEGEN_EXAMPLE_FRUITS), ptr});
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

extern "C" JNIEXPORT jobjectidArray Java_com_examples_getters_Fruits_jFruitsApple(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<iegen::example::Fruits*>(iegen_obj_id_ptr);
    try {
        const auto& result = jnitocxxid->fruits<iegen::example::Apple>();
        
        jobjectidArray cxxtojniresult = env->NewLongArray(result.size());
        size_t index_result = 0;
        for (auto& value_result : result) {
            iegen::example::Apple* cxxtojnivalue_result_ptr = const_cast<iegen::example::Apple*>(value_result);
            char* type_value_result = strdup(IEGEN_IEGEN_EXAMPLE_APPLE);
            IEGenCObject* iegen_obj_cxxtojnivalue_result = new IEGenCObject {type_value_result, dynamic_cast<void*>(cxxtojnivalue_result_ptr)};
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

    jobjectidArray result {};
    return result;
}

extern "C" JNIEXPORT jobjectidArray Java_com_examples_getters_Fruits_jFruitsPineapple(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<iegen::example::Fruits*>(iegen_obj_id_ptr);
    try {
        const auto& result = jnitocxxid->fruits<iegen::example::Pineapple>();
        
        jobjectidArray cxxtojniresult = env->NewLongArray(result.size());
        size_t index_result = 0;
        for (auto& value_result : result) {
            iegen::example::Pineapple* cxxtojnivalue_result_ptr = const_cast<iegen::example::Pineapple*>(value_result);
            char* type_value_result = strdup(IEGEN_IEGEN_EXAMPLE_PINEAPPLE);
            IEGenCObject* iegen_obj_cxxtojnivalue_result = new IEGenCObject {type_value_result, dynamic_cast<void*>(cxxtojnivalue_result_ptr)};
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

    jobjectidArray result {};
    return result;
}

extern "C" JNIEXPORT jobjectidArray Java_com_examples_getters_Fruits_jAllfruitsApplePineapple(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<iegen::example::Fruits*>(iegen_obj_id_ptr);
    try {
        const auto& result = jnitocxxid->allFruits<iegen::example::Apple, iegen::example::Pineapple>();
        
        jobjectidArray cxxtojniresult = env->NewLongArray(result.size());
        size_t index_result = 0;
        for (auto& value_result : result) {
            iegen::example::Fruit* cxxtojnivalue_result_ptr = const_cast<iegen::example::Fruit*>(value_result);
            char* type_value_result = nullptr;
            const char* name_value_result = typeid(*value_result).name();
            int status = 0;
            char* demangled_value_result = abi::__cxa_demangle(name_value_result, NULL, NULL, &status);
            if (status == 0) {
                type_value_result = demangled_value_result;
            } else {
                type_value_result = strdup(IEGEN_IEGEN_EXAMPLE_FRUIT);
            }
            IEGenCObject* iegen_obj_cxxtojnivalue_result = new IEGenCObject {type_value_result, dynamic_cast<void*>(cxxtojnivalue_result_ptr)};
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

    jobjectidArray result {};
    return result;
}

extern "C" JNIEXPORT void Java_com_examples_getters_Fruits_jSetallfruitsApplePineapple(JNIEnv* env, jobject obj, jobjectid id, jobjectidArray fruits){
    validateID(id);
    
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<iegen::example::Fruits*>(iegen_obj_id_ptr);
    
    std::vector<Fruit *> jnitocxxfruits;
    auto _jnitocxxfruits = iegen::getLongArray(env, fruits);
    for (auto& value__jnitocxxfruits : _jnitocxxfruits) {
        
        iegen::example::Fruit* jnitocxxvalue__jnitocxxfruits = downcast_IegenExample_Fruit(value__jnitocxxfruits);
        jnitocxxfruits.emplace_back(jnitocxxvalue__jnitocxxfruits);
    }
    try {
       jnitocxxid->setAllFruits<iegen::example::Apple, iegen::example::Pineapple>(jnitocxxfruits);
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

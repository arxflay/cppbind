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
#include "cxx/typedefs/queue_int_shared.hpp"

extern const char* IEGEN_STD_STDEXCEPTION;

const char* IEGEN_IEGEN_EXAMPLE_QUEUEINTSHARED = "iegen::example::QueueIntShared";
const char* IEGEN_IEGEN_EXAMPLE_QUEUEINTSHAREDUSAGE = "iegen::example::QueueIntSharedUsage";

using namespace iegen::example;


extern "C" JNIEXPORT void Java_com_examples_typedefs_QueueIntShared_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    delete static_cast<std::shared_ptr<iegen::example::QueueIntShared>*>(iegen_obj_id_ptr);
    free(iegen_obj_id->type);
    delete iegen_obj_id;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_typedefs_QueueIntShared_jConstructor(JNIEnv* env, jobject obj){
    try {
        iegen::example::QueueIntShared* obj_ptr = new iegen::example::QueueIntShared();
        auto this_object = std::shared_ptr<iegen::example::QueueIntShared>(obj_ptr);
        return reinterpret_cast<jlong>(new IEGenCObject {strdup(IEGEN_IEGEN_EXAMPLE_QUEUEINTSHARED), new std::shared_ptr<iegen::example::QueueIntShared>(this_object)});
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


extern "C" JNIEXPORT void Java_com_examples_typedefs_QueueIntShared_jPush_1back(JNIEnv* env, jobject obj, jobjectid id, jint element){
    


    validateID(id);
    std::shared_ptr<iegen::example::QueueIntShared> jnitocxxid;
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    jnitocxxid = *static_cast<std::shared_ptr<iegen::example::QueueIntShared>*>(iegen_obj_id_ptr);
    
    try {
        jnitocxxid->push_back(element);
        return;
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


extern "C" JNIEXPORT jint Java_com_examples_typedefs_QueueIntShared_jGet_1size(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    std::shared_ptr<iegen::example::QueueIntShared> jnitocxxid;
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    jnitocxxid = *static_cast<std::shared_ptr<iegen::example::QueueIntShared>*>(iegen_obj_id_ptr);
    
    try {
        const auto& result = jnitocxxid->get_size();
        
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

    jint result {};
    return result;
}

extern "C" JNIEXPORT void Java_com_examples_typedefs_QueueIntSharedUsage_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    delete static_cast<iegen::example::QueueIntSharedUsage*>(iegen_obj_id_ptr);
    free(iegen_obj_id->type);
    delete iegen_obj_id;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_typedefs_QueueIntSharedUsage_jConstructor(JNIEnv* env, jobject obj, jobjectid q){
    
    std::shared_ptr<iegen::example::QueueIntShared> jnitocxxq;
    auto iegen_obj_q = reinterpret_cast<IEGenCObject*>(q);
    auto iegen_obj_q_ptr = iegen_obj_q ? iegen_obj_q->ptr : nullptr;
    jnitocxxq = *static_cast<std::shared_ptr<iegen::example::QueueIntShared>*>(iegen_obj_q_ptr);
    try {
        iegen::example::QueueIntSharedUsage* ptr = new iegen::example::QueueIntSharedUsage(jnitocxxq);
        return reinterpret_cast<jlong>(new IEGenCObject {strdup(IEGEN_IEGEN_EXAMPLE_QUEUEINTSHAREDUSAGE), ptr});
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


extern "C" JNIEXPORT jint Java_com_examples_typedefs_QueueIntSharedUsage_jGetsize(JNIEnv* env, jobject obj, jobjectid q){
    

    std::shared_ptr<iegen::example::QueueIntShared> jnitocxxq;
    auto iegen_obj_q = reinterpret_cast<IEGenCObject*>(q);
    auto iegen_obj_q_ptr = iegen_obj_q ? iegen_obj_q->ptr : nullptr;
    jnitocxxq = *static_cast<std::shared_ptr<iegen::example::QueueIntShared>*>(iegen_obj_q_ptr);

    
    try {
        const auto& result = iegen::example::QueueIntSharedUsage::getSize(jnitocxxq);
        
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

    jint result {};
    return result;
}


extern "C" JNIEXPORT jint Java_com_examples_typedefs_QueueIntSharedUsage_jGetlastelement(JNIEnv* env, jobject obj, jobjectid q){
    

    std::shared_ptr<iegen::example::QueueIntShared> jnitocxxq;
    auto iegen_obj_q = reinterpret_cast<IEGenCObject*>(q);
    auto iegen_obj_q_ptr = iegen_obj_q ? iegen_obj_q->ptr : nullptr;
    jnitocxxq = *static_cast<std::shared_ptr<iegen::example::QueueIntShared>*>(iegen_obj_q_ptr);

    
    try {
        const auto& result = iegen::example::QueueIntSharedUsage::getLastElement(jnitocxxq);
        
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

    jint result {};
    return result;
}


extern "C" JNIEXPORT jint Java_com_examples_typedefs_QueueIntSharedUsage_jGetfirstelement(JNIEnv* env, jobject obj, jobjectid q){
    

    std::shared_ptr<const iegen::example::QueueIntShared> jnitocxxq;
    auto iegen_obj_q = reinterpret_cast<IEGenCObject*>(q);
    auto iegen_obj_q_ptr = iegen_obj_q ? iegen_obj_q->ptr : nullptr;
    jnitocxxq = *static_cast<std::shared_ptr<const iegen::example::QueueIntShared>*>(iegen_obj_q_ptr);

    
    try {
        const auto& result = iegen::example::QueueIntSharedUsage::getFirstElement(jnitocxxq);
        
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

    jint result {};
    return result;
}


extern "C" JNIEXPORT jobjectid Java_com_examples_typedefs_QueueIntSharedUsage_jGetinvqueue(JNIEnv* env, jobject obj, jintArray v){
    

    std::vector<int> jnitocxxv;
    auto _jnitocxxv = iegen::getIntArray(env, v);
    for (auto& value__jnitocxxv : _jnitocxxv) {
        
        jnitocxxv.emplace_back(value__jnitocxxv);
    }

    
    try {
        const auto& result = iegen::example::QueueIntSharedUsage::getInvQueue(jnitocxxv);
        
        char* type_result = strdup(IEGEN_IEGEN_EXAMPLE_QUEUEINTSHARED);
        void* cxxtojniresult_ptr = nullptr;
        IEGenCObject* iegen_obj_cxxtojniresult = nullptr;
        cxxtojniresult_ptr = new std::shared_ptr<iegen::example::QueueIntShared>(result);
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


extern "C" JNIEXPORT jobjectid Java_com_examples_typedefs_QueueIntSharedUsage_jGetsavedqueue(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<iegen::example::QueueIntSharedUsage*>(iegen_obj_id_ptr);
    
    try {
        const auto& result = jnitocxxid->getSavedQueue();
        
        char* type_result = strdup(IEGEN_IEGEN_EXAMPLE_QUEUEINTSHARED);
        void* cxxtojniresult_ptr = nullptr;
        IEGenCObject* iegen_obj_cxxtojniresult = nullptr;
        cxxtojniresult_ptr = new std::shared_ptr<iegen::example::QueueIntShared>(result);
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
extern "C" JNIEXPORT jobjectid Java_com_examples_typedefs_QueueIntSharedUsage_jSaved_1queue(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<iegen::example::QueueIntSharedUsage*>(iegen_obj_id_ptr);
    const auto& result = jnitocxxid->saved_queue;
    
    char* type_result = strdup(IEGEN_IEGEN_EXAMPLE_QUEUEINTSHARED);
    void* cxxtojniresult_ptr = nullptr;
    IEGenCObject* iegen_obj_cxxtojniresult = nullptr;
    cxxtojniresult_ptr = new std::shared_ptr<iegen::example::QueueIntShared>(result);
    iegen_obj_cxxtojniresult = new IEGenCObject {type_result, cxxtojniresult_ptr};
    jobjectid cxxtojniresult = reinterpret_cast<jlong>(iegen_obj_cxxtojniresult);
    return cxxtojniresult;
}

extern "C" JNIEXPORT jstring Java_com_examples_typedefs_Queue_1int_1sharedKt_jGettypebyid(JNIEnv* env, jclass cls, jobjectid id) {
    validateID(id);
    return env->NewStringUTF(reinterpret_cast<IEGenCObject*>(id)->type);
}

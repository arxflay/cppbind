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
#include "cxx/templates/stack.hpp"
#include "cxx/templates/container.hpp"
#include "cxx/simple/project.hpp"
#include "cxx/simple/task.hpp"
#include "cxx/getters/number.hpp"

extern const char* IEGEN_STD_STDEXCEPTION;
extern const char* IEGEN_IEGEN_EXAMPLE_PROJECT;
extern const char* IEGEN_IEGEN_EXAMPLE_TASK;
extern const char* IEGEN_IEGEN_EXAMPLE_NUMBERINT;

const char* IEGEN_IEGEN_EXAMPLE_STACKPRJ = "iegen::example::Stack<iegen::example::Project>";
const char* IEGEN_IEGEN_EXAMPLE_STACKTASK = "iegen::example::Stack<iegen::example::Task>";
const char* IEGEN_IEGEN_EXAMPLE_STACKNUMINT = "iegen::example::Stack<iegen::example::Number<int>>";

using namespace iegen::example;


extern "C" JNIEXPORT void Java_com_examples_templates_StackPrj_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    delete static_cast<iegen::example::Stack<iegen::example::Project>*>(iegen_obj_id_ptr);
    free(iegen_obj_id->type);
    delete iegen_obj_id;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_templates_StackPrj_jConstructor(JNIEnv* env, jobject obj){
    try {
        iegen::example::Stack<iegen::example::Project>* ptr = new iegen::example::Stack<iegen::example::Project>();
        return reinterpret_cast<jlong>(new IEGenCObject {strdup(IEGEN_IEGEN_EXAMPLE_STACKPRJ), ptr});
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

extern "C" JNIEXPORT jobjectid Java_com_examples_templates_StackPrj_jConstructor_11(JNIEnv* env, jobject obj, jobjectid st){
    
    auto iegen_obj_st = reinterpret_cast<IEGenCObject*>(st);
    auto iegen_obj_st_ptr = iegen_obj_st ? iegen_obj_st->ptr : nullptr;
    auto& jnitocxxst = *static_cast<iegen::example::Project*>(iegen_obj_st_ptr);
    try {
        iegen::example::Stack<iegen::example::Project>* ptr = new iegen::example::Stack<iegen::example::Project>(jnitocxxst);
        return reinterpret_cast<jlong>(new IEGenCObject {strdup(IEGEN_IEGEN_EXAMPLE_STACKPRJ), ptr});
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


extern "C" JNIEXPORT void Java_com_examples_templates_StackPrj_jPush(JNIEnv* env, jobject obj, jobjectid id, jobjectid item){
    

    auto iegen_obj_item = reinterpret_cast<IEGenCObject*>(item);
    auto iegen_obj_item_ptr = iegen_obj_item ? iegen_obj_item->ptr : nullptr;
    auto jnitocxxitem = static_cast<iegen::example::Project*>(iegen_obj_item_ptr);

    validateID(id);
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<iegen::example::Stack<iegen::example::Project>*>(iegen_obj_id_ptr);
    
    try {
        jnitocxxid->push(jnitocxxitem);
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


extern "C" JNIEXPORT void Java_com_examples_templates_StackPrj_jPop(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<iegen::example::Stack<iegen::example::Project>*>(iegen_obj_id_ptr);
    
    try {
        jnitocxxid->pop();
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


extern "C" JNIEXPORT jobjectid Java_com_examples_templates_StackPrj_jTop(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<iegen::example::Stack<iegen::example::Project>*>(iegen_obj_id_ptr);
    
    try {
        const auto& result = jnitocxxid->top();
        iegen::example::Project* cxxtojniresult_ptr = const_cast<iegen::example::Project*>(result);
        char* type_result = strdup(IEGEN_IEGEN_EXAMPLE_PROJECT);
        IEGenCObject* iegen_obj_cxxtojniresult = new IEGenCObject {type_result, cxxtojniresult_ptr};
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


extern "C" JNIEXPORT jboolean Java_com_examples_templates_StackPrj_jEmpty(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<iegen::example::Stack<iegen::example::Project>*>(iegen_obj_id_ptr);
    
    try {
        const auto& result = jnitocxxid->empty();
        
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

    jboolean result {};
    return result;
}

extern "C" JNIEXPORT void Java_com_examples_templates_StackTask_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    delete static_cast<iegen::example::Stack<iegen::example::Task>*>(iegen_obj_id_ptr);
    free(iegen_obj_id->type);
    delete iegen_obj_id;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_templates_StackTask_jConstructor(JNIEnv* env, jobject obj){
    try {
        iegen::example::Stack<iegen::example::Task>* ptr = new iegen::example::Stack<iegen::example::Task>();
        return reinterpret_cast<jlong>(new IEGenCObject {strdup(IEGEN_IEGEN_EXAMPLE_STACKTASK), ptr});
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

extern "C" JNIEXPORT jobjectid Java_com_examples_templates_StackTask_jConstructor_11(JNIEnv* env, jobject obj, jobjectid st){
    
    auto iegen_obj_st = reinterpret_cast<IEGenCObject*>(st);
    auto iegen_obj_st_ptr = iegen_obj_st ? iegen_obj_st->ptr : nullptr;
    auto& jnitocxxst = *static_cast<iegen::example::Task*>(iegen_obj_st_ptr);
    try {
        iegen::example::Stack<iegen::example::Task>* ptr = new iegen::example::Stack<iegen::example::Task>(jnitocxxst);
        return reinterpret_cast<jlong>(new IEGenCObject {strdup(IEGEN_IEGEN_EXAMPLE_STACKTASK), ptr});
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


extern "C" JNIEXPORT void Java_com_examples_templates_StackTask_jPush(JNIEnv* env, jobject obj, jobjectid id, jobjectid item){
    

    auto iegen_obj_item = reinterpret_cast<IEGenCObject*>(item);
    auto iegen_obj_item_ptr = iegen_obj_item ? iegen_obj_item->ptr : nullptr;
    auto jnitocxxitem = static_cast<iegen::example::Task*>(iegen_obj_item_ptr);

    validateID(id);
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<iegen::example::Stack<iegen::example::Task>*>(iegen_obj_id_ptr);
    
    try {
        jnitocxxid->push(jnitocxxitem);
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


extern "C" JNIEXPORT void Java_com_examples_templates_StackTask_jPop(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<iegen::example::Stack<iegen::example::Task>*>(iegen_obj_id_ptr);
    
    try {
        jnitocxxid->pop();
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


extern "C" JNIEXPORT jobjectid Java_com_examples_templates_StackTask_jTop(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<iegen::example::Stack<iegen::example::Task>*>(iegen_obj_id_ptr);
    
    try {
        const auto& result = jnitocxxid->top();
        iegen::example::Task* cxxtojniresult_ptr = const_cast<iegen::example::Task*>(result);
        char* type_result = strdup(IEGEN_IEGEN_EXAMPLE_TASK);
        IEGenCObject* iegen_obj_cxxtojniresult = new IEGenCObject {type_result, cxxtojniresult_ptr};
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


extern "C" JNIEXPORT jboolean Java_com_examples_templates_StackTask_jEmpty(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<iegen::example::Stack<iegen::example::Task>*>(iegen_obj_id_ptr);
    
    try {
        const auto& result = jnitocxxid->empty();
        
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

    jboolean result {};
    return result;
}

extern "C" JNIEXPORT void Java_com_examples_templates_StackNumInt_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    delete static_cast<iegen::example::Stack<iegen::example::Number<int>>*>(iegen_obj_id_ptr);
    free(iegen_obj_id->type);
    delete iegen_obj_id;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_templates_StackNumInt_jConstructor(JNIEnv* env, jobject obj){
    try {
        iegen::example::Stack<iegen::example::Number<int>>* ptr = new iegen::example::Stack<iegen::example::Number<int>>();
        return reinterpret_cast<jlong>(new IEGenCObject {strdup(IEGEN_IEGEN_EXAMPLE_STACKNUMINT), ptr});
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

extern "C" JNIEXPORT jobjectid Java_com_examples_templates_StackNumInt_jConstructor_11(JNIEnv* env, jobject obj, jobjectid st){
    
    auto iegen_obj_st = reinterpret_cast<IEGenCObject*>(st);
    auto iegen_obj_st_ptr = iegen_obj_st ? iegen_obj_st->ptr : nullptr;
    auto& jnitocxxst = *static_cast<iegen::example::Number<int>*>(iegen_obj_st_ptr);
    try {
        iegen::example::Stack<iegen::example::Number<int>>* ptr = new iegen::example::Stack<iegen::example::Number<int>>(jnitocxxst);
        return reinterpret_cast<jlong>(new IEGenCObject {strdup(IEGEN_IEGEN_EXAMPLE_STACKNUMINT), ptr});
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


extern "C" JNIEXPORT void Java_com_examples_templates_StackNumInt_jPush(JNIEnv* env, jobject obj, jobjectid id, jobjectid item){
    

    auto iegen_obj_item = reinterpret_cast<IEGenCObject*>(item);
    auto iegen_obj_item_ptr = iegen_obj_item ? iegen_obj_item->ptr : nullptr;
    auto jnitocxxitem = static_cast<iegen::example::Number<int>*>(iegen_obj_item_ptr);

    validateID(id);
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<iegen::example::Stack<iegen::example::Number<int>>*>(iegen_obj_id_ptr);
    
    try {
        jnitocxxid->push(jnitocxxitem);
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


extern "C" JNIEXPORT void Java_com_examples_templates_StackNumInt_jPop(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<iegen::example::Stack<iegen::example::Number<int>>*>(iegen_obj_id_ptr);
    
    try {
        jnitocxxid->pop();
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


extern "C" JNIEXPORT jobjectid Java_com_examples_templates_StackNumInt_jTop(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<iegen::example::Stack<iegen::example::Number<int>>*>(iegen_obj_id_ptr);
    
    try {
        const auto& result = jnitocxxid->top();
        iegen::example::Number<int>* cxxtojniresult_ptr = const_cast<iegen::example::Number<int>*>(result);
        char* type_result = strdup(IEGEN_IEGEN_EXAMPLE_NUMBERINT);
        IEGenCObject* iegen_obj_cxxtojniresult = new IEGenCObject {type_result, cxxtojniresult_ptr};
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


extern "C" JNIEXPORT jboolean Java_com_examples_templates_StackNumInt_jEmpty(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<iegen::example::Stack<iegen::example::Number<int>>*>(iegen_obj_id_ptr);
    
    try {
        const auto& result = jnitocxxid->empty();
        
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

    jboolean result {};
    return result;
}

extern "C" JNIEXPORT jstring Java_com_examples_templates_StackKt_jGettypebyid(JNIEnv* env, jclass cls, jobjectid id) {
    validateID(id);
    return env->NewStringUTF(reinterpret_cast<IEGenCObject*>(id)->type);
}

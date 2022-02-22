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
#include "cxx/exceptions/exceptions.hpp"
#include "cxx/simple/task.hpp"

using namespace iegen::exceptions;


extern "C" JNIEXPORT void Java_com_examples_exceptions_Throw_1exceptionsKt_jThrowexc(JNIEnv* env, jclass cls, jboolean do_throw){
    
    
    void* err_ptr = nullptr;
    try {
        iegen::exceptions::throwExc(do_throw);
        return;
    }catch (const std::invalid_argument& e) {
        err_ptr = new std::invalid_argument(e);
        jclass excCls = env->FindClass("com/examples/iegen/exception_helpers/StdInvalidArgument");
        jmethodID constructor = env->GetMethodID(excCls, "<init>", "(JZ)V");
        jobject excObj = env->NewObject(excCls, constructor, reinterpret_cast<jobjectid>(
                                        new IEGenCObject {strdup("std::invalid_argument"), err_ptr}), true);
        env->Throw(jthrowable(excObj));
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

extern "C" JNIEXPORT void Java_com_examples_exceptions_ThrowExc_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = reinterpret_cast<iegen::exceptions::ThrowExc*>(iegen_obj_id_ptr);
    delete jnitocxxid;
    free(iegen_obj_id->type);
    delete iegen_obj_id;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_exceptions_ThrowExc_jConstructor(JNIEnv* env, jobject obj, jboolean do_throw){
    
    void* err_ptr = nullptr;
    try {
        iegen::exceptions::ThrowExc* baseptr = new iegen::exceptions::ThrowExc(do_throw);
        return reinterpret_cast<jlong>(new IEGenCObject {strdup("iegen::exceptions::ThrowExc"), baseptr});
    }catch (const std::invalid_argument& e) {
        err_ptr = new std::invalid_argument(e);
        jclass excCls = env->FindClass("com/examples/iegen/exception_helpers/StdInvalidArgument");
        jmethodID constructor = env->GetMethodID(excCls, "<init>", "(JZ)V");
        jobject excObj = env->NewObject(excCls, constructor, reinterpret_cast<jobjectid>(
                                        new IEGenCObject {strdup("std::invalid_argument"), err_ptr}), true);
        env->Throw(jthrowable(excObj));
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


extern "C" JNIEXPORT jint Java_com_examples_exceptions_ThrowExc_jGetbykey(JNIEnv* env, jobject obj, jmapobject m, jint key){
    

    std::map<int, int> jnitocxxm;
    auto _jnitocxxm = iegen::extract_jni_pair(env, m);
    auto tmp_key_jnitocxxm = iegen::getIntArray(env, _jnitocxxm.first);
    auto tmp_val_jnitocxxm = iegen::getIntArray(env, _jnitocxxm.second);
    for (size_t i = 0; i < tmp_key_jnitocxxm.size(); ++i) {
        auto ktmp_m = tmp_key_jnitocxxm[i];
        auto vtmp_m = tmp_val_jnitocxxm[i];
        
        
        jnitocxxm.insert({ ktmp_m, vtmp_m });
    }



    
    void* err_ptr = nullptr;
    try {
        const auto& result = iegen::exceptions::ThrowExc::getByKey(jnitocxxm, key);
        
        return result;
    }catch (const std::out_of_range& e) {
        err_ptr = new std::out_of_range(e);
        jclass excCls = env->FindClass("com/examples/iegen/exception_helpers/StdOutOfRange");
        jmethodID constructor = env->GetMethodID(excCls, "<init>", "(JZ)V");
        jobject excObj = env->NewObject(excCls, constructor, reinterpret_cast<jobjectid>(
                                        new IEGenCObject {strdup("std::out_of_range"), err_ptr}), true);
        env->Throw(jthrowable(excObj));
    }catch (const iegen::example::SystemError& e) {
        err_ptr = new iegen::example::SystemError(e);
        jclass excCls = env->FindClass("com/examples/exceptions/SystemError");
        jmethodID constructor = env->GetMethodID(excCls, "<init>", "(JZ)V");
        jobject excObj = env->NewObject(excCls, constructor, reinterpret_cast<jobjectid>(
                                        new IEGenCObject {strdup("iegen::example::SystemError"), err_ptr}), true);
        env->Throw(jthrowable(excObj));
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


extern "C" JNIEXPORT jstring Java_com_examples_exceptions_ThrowExc_jThrowswithreturnvaluestring(JNIEnv* env, jobject obj){
    
    
    void* err_ptr = nullptr;
    try {
        const auto& result = iegen::exceptions::ThrowExc::throwsWithReturnValueString();
        jstring cxxtojniresult = env->NewStringUTF(result.data());
        return cxxtojniresult;
    }catch (const std::invalid_argument& e) {
        err_ptr = new std::invalid_argument(e);
        jclass excCls = env->FindClass("com/examples/iegen/exception_helpers/StdInvalidArgument");
        jmethodID constructor = env->GetMethodID(excCls, "<init>", "(JZ)V");
        jobject excObj = env->NewObject(excCls, constructor, reinterpret_cast<jobjectid>(
                                        new IEGenCObject {strdup("std::invalid_argument"), err_ptr}), true);
        env->Throw(jthrowable(excObj));
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


extern "C" JNIEXPORT jobjectid Java_com_examples_exceptions_ThrowExc_jThrowswithreturnvalueptr(JNIEnv* env, jobject obj){
    
    
    void* err_ptr = nullptr;
    try {
        const auto& result = iegen::exceptions::ThrowExc::throwsWithReturnValuePtr();
        iegen::example::Task* cxxtojniresult_baseptr = const_cast<iegen::example::Task*>(result);
        char* type_result = strdup("iegen::example::Task");
        IEGenCObject* iegen_obj_cxxtojniresult = new IEGenCObject {type_result, cxxtojniresult_baseptr};
        jobjectid cxxtojniresult = reinterpret_cast<jlong>(iegen_obj_cxxtojniresult);
        return cxxtojniresult;
    }catch (const std::invalid_argument& e) {
        err_ptr = new std::invalid_argument(e);
        jclass excCls = env->FindClass("com/examples/iegen/exception_helpers/StdInvalidArgument");
        jmethodID constructor = env->GetMethodID(excCls, "<init>", "(JZ)V");
        jobject excObj = env->NewObject(excCls, constructor, reinterpret_cast<jobjectid>(
                                        new IEGenCObject {strdup("std::invalid_argument"), err_ptr}), true);
        env->Throw(jthrowable(excObj));
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

extern "C" JNIEXPORT jstring Java_com_examples_exceptions_ThrowExc_jProp(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = reinterpret_cast<iegen::exceptions::ThrowExc*>(iegen_obj_id_ptr);
    void* err_ptr = nullptr;
    try {
        const auto& result = jnitocxxid->prop();
        jstring cxxtojniresult = env->NewStringUTF(result.data());
        return cxxtojniresult;
    }
    catch (const std::invalid_argument& e) {
        err_ptr = new std::invalid_argument(e);
        jclass excCls = env->FindClass("com/examples/iegen/exception_helpers/StdInvalidArgument");
        jmethodID constructor = env->GetMethodID(excCls, "<init>", "(JZ)V");
        jobject excObj = env->NewObject(excCls, constructor, reinterpret_cast<jobjectid>(
                                        new IEGenCObject {strdup("std::invalid_argument"), err_ptr}), true);
        env->Throw(jthrowable(excObj));
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

extern "C" JNIEXPORT void Java_com_examples_exceptions_ThrowExc_jSetprop(JNIEnv* env, jobject obj, jobjectid id, jstring s){
    validateID(id);
    
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = reinterpret_cast<iegen::exceptions::ThrowExc*>(iegen_obj_id_ptr);
    jstring jjnitocxxsStr = (jstring)s;
    auto jnitocxxs_cstr = env->GetStringUTFChars(jjnitocxxsStr, 0);
    std::string jnitocxxs = jnitocxxs_cstr;
    env->ReleaseStringUTFChars(jjnitocxxsStr, jnitocxxs_cstr);
    void* err_ptr = nullptr;
    try {
       jnitocxxid->setProp(jnitocxxs);
    }
    catch (const std::invalid_argument& e) {
        err_ptr = new std::invalid_argument(e);
        jclass excCls = env->FindClass("com/examples/iegen/exception_helpers/StdInvalidArgument");
        jmethodID constructor = env->GetMethodID(excCls, "<init>", "(JZ)V");
        jobject excObj = env->NewObject(excCls, constructor, reinterpret_cast<jobjectid>(
                                        new IEGenCObject {strdup("std::invalid_argument"), err_ptr}), true);
        env->Throw(jthrowable(excObj));
    }catch (const std::out_of_range& e) {
        err_ptr = new std::out_of_range(e);
        jclass excCls = env->FindClass("com/examples/iegen/exception_helpers/StdOutOfRange");
        jmethodID constructor = env->GetMethodID(excCls, "<init>", "(JZ)V");
        jobject excObj = env->NewObject(excCls, constructor, reinterpret_cast<jobjectid>(
                                        new IEGenCObject {strdup("std::out_of_range"), err_ptr}), true);
        env->Throw(jthrowable(excObj));
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


extern "C" JNIEXPORT jstring Java_com_examples_exceptions_Throw_1exceptionsKt_jGettypebyid(JNIEnv* env, jclass cls, jobjectid id) {
    validateID(id);
    return env->NewStringUTF(reinterpret_cast<IEGenCObject*>(id)->type);
}

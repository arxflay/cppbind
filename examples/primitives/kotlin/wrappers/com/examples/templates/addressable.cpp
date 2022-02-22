/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 02/15/2022-08:37.
 * Please do not change it manually.
 */

#include "jni.h"
#include <iostream>
#include <cxxabi.h>
#include <string.h>
#include "kotlin/wrappers/c_helpers.h"
#include "kotlin/wrappers/iegen_wrapper_helper.hpp"
#include "cxx/templates/addressable.hpp"
#include "cxx/simple/root.hpp"

using namespace iegen::example;


extern "C" JNIEXPORT void Java_com_examples_templates_AddressableImplRoot_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    std::shared_ptr<iegen::example::Addressable<iegen::example::Root>>& jnitocxxid = *reinterpret_cast<std::shared_ptr<iegen::example::Addressable<iegen::example::Root>>*>(iegen_obj_id->ptr);
    delete &jnitocxxid;
    free(iegen_obj_id->type);
    delete iegen_obj_id;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_templates_AddressableImplRoot_jConstructor(JNIEnv* env, jobject obj, jobjectid parent, jstring name){
    
    auto iegen_obj_parent = reinterpret_cast<IEGenCObject*>(parent);
    auto iegen_obj_parent_ptr = iegen_obj_parent ? iegen_obj_parent->ptr : nullptr;
    auto& jnitocxxparent = *reinterpret_cast<iegen::example::Root*>(iegen_obj_parent_ptr);
    jstring jjnitocxxnameStr = (jstring)name;
    auto jnitocxxname_cstr = env->GetStringUTFChars(jjnitocxxnameStr, 0);
    std::string jnitocxxname = jnitocxxname_cstr;
    env->ReleaseStringUTFChars(jjnitocxxnameStr, jnitocxxname_cstr);
    try {
        iegen::example::Addressable<iegen::example::Root>* obj_ptr = new iegen::example::Addressable<iegen::example::Root>(jnitocxxparent, jnitocxxname);
        auto this_object = std::shared_ptr<iegen::example::Addressable<iegen::example::Root>>(obj_ptr);
        return reinterpret_cast<jlong>(new IEGenCObject {strdup("iegen::example::Addressable<iegen::example::Root>"), new std::shared_ptr<iegen::example::Addressable<iegen::example::Root>>(this_object)});
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


extern "C" JNIEXPORT jstring Java_com_examples_templates_IAddressableRootHelper_jAbspath(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    std::shared_ptr<iegen::example::Addressable<iegen::example::Root>>& jnitocxxid = *reinterpret_cast<std::shared_ptr<iegen::example::Addressable<iegen::example::Root>>*>(iegen_obj_id->ptr);
    
    try {
        const auto& result = jnitocxxid->absPath();
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

extern "C" JNIEXPORT jstring Java_com_examples_templates_AddressableKt_jGettypebyid(JNIEnv* env, jclass cls, jobjectid id) {
    validateID(id);
    return env->NewStringUTF(reinterpret_cast<IEGenCObject*>(id)->type);
}

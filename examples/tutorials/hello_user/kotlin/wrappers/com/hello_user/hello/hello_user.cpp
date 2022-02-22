/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 02/21/2022-14:13.
 * Please do not change it manually.
 */

#include "jni.h"
#include <iostream>
#include <cxxabi.h>
#include <string.h>
#include "kotlin/wrappers/c_helpers.h"
#include "kotlin/wrappers/iegen_wrapper_helper.hpp"
#include "cxx/hello_user.hpp"



extern "C" JNIEXPORT void Java_com_hello_1user_hello_UserInfo_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = reinterpret_cast<UserInfo*>(iegen_obj_id_ptr);
    delete jnitocxxid;
    free(iegen_obj_id->type);
    delete iegen_obj_id;
}

extern "C" JNIEXPORT jobjectid Java_com_hello_1user_hello_UserInfo_jConstructor(JNIEnv* env, jobject obj, jstring user_name, jlong user_age){
    jstring jjnitocxxuser_nameStr = (jstring)user_name;
    auto jnitocxxuser_name_cstr = env->GetStringUTFChars(jjnitocxxuser_nameStr, 0);
    std::string jnitocxxuser_name = jnitocxxuser_name_cstr;
    env->ReleaseStringUTFChars(jjnitocxxuser_nameStr, jnitocxxuser_name_cstr);
    
    try {
        UserInfo* baseptr = new UserInfo(jnitocxxuser_name, user_age);
        return reinterpret_cast<jlong>(new IEGenCObject {strdup("UserInfo"), baseptr});
    }
    catch (const std::exception& e) {
          jclass handlerCls = env->FindClass("com/hello_user/iegen/exceptionUtils/ExceptionHandler");
          jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
          env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
          jclass handlerCls = env->FindClass("com/hello_user/iegen/exceptionUtils/ExceptionHandler");
          jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
          env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }
    jobjectid result;
    return result;
}
extern "C" JNIEXPORT jlong Java_com_hello_1user_hello_UserInfo_jAge(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = reinterpret_cast<UserInfo*>(iegen_obj_id_ptr);
    const auto& result = jnitocxxid->age;
    
    return result;
}
extern "C" JNIEXPORT jstring Java_com_hello_1user_hello_UserInfo_jName(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = reinterpret_cast<UserInfo*>(iegen_obj_id_ptr);
    const auto& result = jnitocxxid->name;
    jstring cxxtojniresult = env->NewStringUTF(result.data());
    return cxxtojniresult;
}
extern "C" JNIEXPORT jboolean Java_com_hello_1user_hello_UserInfo_jWant_1a_1drink(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = reinterpret_cast<UserInfo*>(iegen_obj_id_ptr);
    const auto& result = jnitocxxid->want_a_drink;
    
    return result;
}

extern "C" JNIEXPORT void Java_com_hello_1user_hello_UserInfo_jSetwant_1a_1drink(JNIEnv* env, jobject obj, jobjectid id, jboolean value){
    validateID(id);
    
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = reinterpret_cast<UserInfo*>(iegen_obj_id_ptr);
    
    
    jnitocxxid->want_a_drink = value;
}


extern "C" JNIEXPORT void Java_com_hello_1user_hello_Host_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = reinterpret_cast<Host*>(iegen_obj_id_ptr);
    delete jnitocxxid;
    free(iegen_obj_id->type);
    delete iegen_obj_id;
}

extern "C" JNIEXPORT jobjectid Java_com_hello_1user_hello_Host_jConstructor(JNIEnv* env, jobject obj){
    try {
        Host* baseptr = new Host();
        return reinterpret_cast<jlong>(new IEGenCObject {strdup("Host"), baseptr});
    }
    catch (const std::exception& e) {
          jclass handlerCls = env->FindClass("com/hello_user/iegen/exceptionUtils/ExceptionHandler");
          jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
          env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
          jclass handlerCls = env->FindClass("com/hello_user/iegen/exceptionUtils/ExceptionHandler");
          jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
          env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }
    jobjectid result;
    return result;
}


extern "C" JNIEXPORT jstring Java_com_hello_1user_hello_Host_jHello(JNIEnv* env, jobject obj, jobjectid id, jobjectid user){
    

    auto iegen_obj_user = reinterpret_cast<IEGenCObject*>(user);
    auto iegen_obj_user_ptr = iegen_obj_user ? iegen_obj_user->ptr : nullptr;
    auto& jnitocxxuser = *reinterpret_cast<UserInfo*>(iegen_obj_user_ptr);

    validateID(id);
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = reinterpret_cast<Host*>(iegen_obj_id_ptr);
    
    try {
        const auto& result = jnitocxxid->hello(jnitocxxuser);
        jstring cxxtojniresult = env->NewStringUTF(result.data());
        return cxxtojniresult;
    }
    catch (const std::exception& e) {
          jclass handlerCls = env->FindClass("com/hello_user/iegen/exceptionUtils/ExceptionHandler");
          jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
          env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
          jclass handlerCls = env->FindClass("com/hello_user/iegen/exceptionUtils/ExceptionHandler");
          jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
          env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }

    jstring result;
    return result;
}


extern "C" JNIEXPORT jstring Java_com_hello_1user_hello_Host_jWelcome(JNIEnv* env, jobject obj, jobjectid id, jobjectid user){
    

    auto iegen_obj_user = reinterpret_cast<IEGenCObject*>(user);
    auto iegen_obj_user_ptr = iegen_obj_user ? iegen_obj_user->ptr : nullptr;
    auto& jnitocxxuser = *reinterpret_cast<UserInfo*>(iegen_obj_user_ptr);

    validateID(id);
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = reinterpret_cast<Host*>(iegen_obj_id_ptr);
    
    try {
        const auto& result = jnitocxxid->welcome(jnitocxxuser);
        jstring cxxtojniresult = env->NewStringUTF(result.data());
        return cxxtojniresult;
    }
    catch (const std::exception& e) {
          jclass handlerCls = env->FindClass("com/hello_user/iegen/exceptionUtils/ExceptionHandler");
          jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
          env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
          jclass handlerCls = env->FindClass("com/hello_user/iegen/exceptionUtils/ExceptionHandler");
          jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
          env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }

    jstring result;
    return result;
}

extern "C" JNIEXPORT jstring Java_com_hello_1user_hello_Hello_1userKt_jGettypebyid(JNIEnv* env, jclass cls, jobjectid id) {
    validateID(id);
    return env->NewStringUTF(reinterpret_cast<IEGenCObject*>(id)->type);
}

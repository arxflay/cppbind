/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 03/24/2022-08:41.
 * Please do not change it manually.
 */

#include "jni.h"
#include <iostream>
#include <cxxabi.h>
#include <string.h>
#include <type_traits>
#include "kotlin/wrappers/c_helpers.h"
#include "kotlin/wrappers/iegen_wrapper_helper.hpp"
#include "cxx/inheritance/doctor.hpp"

using namespace iegen::example;


extern "C" JNIEXPORT void Java_com_examples_inheritance_Doctor_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    if (strcmp(iegen_obj_id->type, "iegen::example::Doctor") == 0)
        delete static_cast<iegen::example::Doctor*>(iegen_obj_id_ptr);
    else if (strcmp(iegen_obj_id->type, "iegen::example::Surgeon") == 0)
        delete static_cast<iegen::example::Surgeon*>(iegen_obj_id_ptr);
    else {
        std::cerr << "Unexpected object type: " << iegen_obj_id->type << std::endl;
        exit(1);
    }
    free(iegen_obj_id->type);
    delete iegen_obj_id;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_Doctor_jConstructor(JNIEnv* env, jobject obj, jstring doctor_name){
    jstring jjnitocxxdoctor_nameStr = static_cast<jstring>(doctor_name);
    auto jnitocxxdoctor_name_cstr = env->GetStringUTFChars(jjnitocxxdoctor_nameStr, 0);
    std::string jnitocxxdoctor_name = jnitocxxdoctor_name_cstr;
    env->ReleaseStringUTFChars(jjnitocxxdoctor_nameStr, jnitocxxdoctor_name_cstr);
    try {
        iegen::example::Doctor* ptr = new iegen::example::Doctor(jnitocxxdoctor_name);
        return reinterpret_cast<jlong>(new IEGenCObject {strdup("iegen::example::Doctor"), ptr});
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

extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_Surgeon_jConstructor(JNIEnv* env, jobject obj, jstring surgeon_name){
    jstring jjnitocxxsurgeon_nameStr = static_cast<jstring>(surgeon_name);
    auto jnitocxxsurgeon_name_cstr = env->GetStringUTFChars(jjnitocxxsurgeon_nameStr, 0);
    std::string jnitocxxsurgeon_name = jnitocxxsurgeon_name_cstr;
    env->ReleaseStringUTFChars(jjnitocxxsurgeon_nameStr, jnitocxxsurgeon_name_cstr);
    try {
        iegen::example::Surgeon* ptr = new iegen::example::Surgeon(jnitocxxsurgeon_name);
        return reinterpret_cast<jlong>(new IEGenCObject {strdup("iegen::example::Surgeon"), ptr});
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

extern "C" JNIEXPORT void Java_com_examples_inheritance_GoodVirtualDoctorImpl_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    static_assert(std::has_virtual_destructor<iegen::example::GoodVirtualDoctor>::value, "iegen::example::GoodVirtualDoctor type must have virtual destructor");
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    if (strcmp(iegen_obj_id->type, "iegen::example::GoodVirtualDoctor") == 0)
        delete static_cast<iegen::example::GoodVirtualDoctor*>(iegen_obj_id_ptr);
    else if (strcmp(iegen_obj_id->type, "iegen::example::GoodYoungDoctor") == 0)
        delete static_cast<iegen::example::GoodYoungDoctor*>(iegen_obj_id_ptr);
    else {
        std::cerr << "Unexpected object type: " << iegen_obj_id->type << std::endl;
        exit(1);
    }
    free(iegen_obj_id->type);
    delete iegen_obj_id;
}

extern "C" JNIEXPORT void Java_com_examples_inheritance_GoodDoctor_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    if (strcmp(iegen_obj_id->type, "iegen::example::GoodDoctor") == 0)
        delete static_cast<iegen::example::GoodDoctor*>(iegen_obj_id_ptr);
    else if (strcmp(iegen_obj_id->type, "iegen::example::GoodOldDoctor") == 0)
        delete static_cast<iegen::example::GoodOldDoctor*>(iegen_obj_id_ptr);
    else if (strcmp(iegen_obj_id->type, "iegen::example::GoodYoungDoctor") == 0)
        delete static_cast<iegen::example::GoodYoungDoctor*>(iegen_obj_id_ptr);
    else {
        std::cerr << "Unexpected object type: " << iegen_obj_id->type << std::endl;
        exit(1);
    }
    free(iegen_obj_id->type);
    delete iegen_obj_id;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_GoodDoctor_jConstructor(JNIEnv* env, jobject obj, jstring doctor_name){
    jstring jjnitocxxdoctor_nameStr = static_cast<jstring>(doctor_name);
    auto jnitocxxdoctor_name_cstr = env->GetStringUTFChars(jjnitocxxdoctor_nameStr, 0);
    std::string jnitocxxdoctor_name = jnitocxxdoctor_name_cstr;
    env->ReleaseStringUTFChars(jjnitocxxdoctor_nameStr, jnitocxxdoctor_name_cstr);
    try {
        iegen::example::GoodDoctor* ptr = new iegen::example::GoodDoctor(jnitocxxdoctor_name);
        return reinterpret_cast<jlong>(new IEGenCObject {strdup("iegen::example::GoodDoctor"), ptr});
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

extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_GoodYoungDoctor_jConstructor(JNIEnv* env, jobject obj, jstring doctor_name){
    jstring jjnitocxxdoctor_nameStr = static_cast<jstring>(doctor_name);
    auto jnitocxxdoctor_name_cstr = env->GetStringUTFChars(jjnitocxxdoctor_nameStr, 0);
    std::string jnitocxxdoctor_name = jnitocxxdoctor_name_cstr;
    env->ReleaseStringUTFChars(jjnitocxxdoctor_nameStr, jnitocxxdoctor_name_cstr);
    try {
        iegen::example::GoodYoungDoctor* ptr = new iegen::example::GoodYoungDoctor(jnitocxxdoctor_name);
        return reinterpret_cast<jlong>(new IEGenCObject {strdup("iegen::example::GoodYoungDoctor"), ptr});
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

extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_GoodOldDoctor_jConstructor(JNIEnv* env, jobject obj, jstring doctor_name){
    jstring jjnitocxxdoctor_nameStr = static_cast<jstring>(doctor_name);
    auto jnitocxxdoctor_name_cstr = env->GetStringUTFChars(jjnitocxxdoctor_nameStr, 0);
    std::string jnitocxxdoctor_name = jnitocxxdoctor_name_cstr;
    env->ReleaseStringUTFChars(jjnitocxxdoctor_nameStr, jnitocxxdoctor_name_cstr);
    try {
        iegen::example::GoodOldDoctor* ptr = new iegen::example::GoodOldDoctor(jnitocxxdoctor_name);
        return reinterpret_cast<jlong>(new IEGenCObject {strdup("iegen::example::GoodOldDoctor"), ptr});
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

extern "C" JNIEXPORT void Java_com_examples_inheritance_DoctorInfo_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    delete static_cast<iegen::example::DoctorInfo*>(iegen_obj_id_ptr);
    free(iegen_obj_id->type);
    delete iegen_obj_id;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_DoctorInfo_jConstructor(JNIEnv* env, jobject obj, jobjectid s){
    
    auto iegen_obj_s = reinterpret_cast<IEGenCObject*>(s);
    auto iegen_obj_s_ptr = iegen_obj_s ? iegen_obj_s->ptr : nullptr;
    auto jnitocxxs = static_cast<iegen::example::Surgeon*>(iegen_obj_s_ptr);
    try {
        iegen::example::DoctorInfo* ptr = new iegen::example::DoctorInfo(jnitocxxs);
        return reinterpret_cast<jlong>(new IEGenCObject {strdup("iegen::example::DoctorInfo"), ptr});
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

extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_DoctorInfo_jConstructor_11(JNIEnv* env, jobject obj, jobjectid d){
    
    auto iegen_obj_d = reinterpret_cast<IEGenCObject*>(d);
    auto iegen_obj_d_ptr = iegen_obj_d ? iegen_obj_d->ptr : nullptr;
    auto jnitocxxd = static_cast<iegen::example::GoodYoungDoctor*>(iegen_obj_d_ptr);
    try {
        iegen::example::DoctorInfo* ptr = new iegen::example::DoctorInfo(jnitocxxd);
        return reinterpret_cast<jlong>(new IEGenCObject {strdup("iegen::example::DoctorInfo"), ptr});
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


extern "C" JNIEXPORT jstring Java_com_examples_inheritance_DoctorInfo_jGetdoctorname(JNIEnv* env, jobject obj, jobjectid id, jobjectid d){
    

    auto iegen_obj_d = reinterpret_cast<IEGenCObject*>(d);
    auto iegen_obj_d_ptr = iegen_obj_d ? iegen_obj_d->ptr : nullptr;
    iegen::example::Doctor* jnitocxxd = nullptr;
    if (iegen_obj_d_ptr) {
        if (strcmp(iegen_obj_d->type, "iegen::example::Doctor") == 0)
            jnitocxxd = static_cast<iegen::example::Doctor*>(iegen_obj_d_ptr);
        else if (strcmp(iegen_obj_d->type, "iegen::example::Surgeon") == 0)
            jnitocxxd = static_cast<iegen::example::Surgeon*>(iegen_obj_d_ptr);
        else {
            std::cerr << "Unexpected object type: " << iegen_obj_d->type << std::endl;
            exit(1);
        }
    }

    validateID(id);
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<iegen::example::DoctorInfo*>(iegen_obj_id_ptr);
    
    try {
        const auto& result = jnitocxxid->getDoctorName(jnitocxxd);
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


extern "C" JNIEXPORT jstring Java_com_examples_inheritance_DoctorInfo_jGetsurgeonname(JNIEnv* env, jobject obj, jobjectid id, jobjectid s){
    

    auto iegen_obj_s = reinterpret_cast<IEGenCObject*>(s);
    auto iegen_obj_s_ptr = iegen_obj_s ? iegen_obj_s->ptr : nullptr;
    auto jnitocxxs = static_cast<iegen::example::Surgeon*>(iegen_obj_s_ptr);

    validateID(id);
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<iegen::example::DoctorInfo*>(iegen_obj_id_ptr);
    
    try {
        const auto& result = jnitocxxid->getSurgeonName(jnitocxxs);
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


extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_DoctorInfo_jGetdoctor(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<iegen::example::DoctorInfo*>(iegen_obj_id_ptr);
    
    try {
        const auto& result = jnitocxxid->getDoctor();
        iegen::example::Doctor* cxxtojniresult_ptr = const_cast<iegen::example::Doctor*>(result);
        char* type_result = strdup("iegen::example::Doctor");
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


extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_DoctorInfo_jGetgooddoctor(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<iegen::example::DoctorInfo*>(iegen_obj_id_ptr);
    
    try {
        const auto& result = jnitocxxid->getGoodDoctor();
        iegen::example::GoodDoctor* cxxtojniresult_ptr = const_cast<iegen::example::GoodDoctor*>(result);
        char* type_result = strdup("iegen::example::GoodDoctor");
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


extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_DoctorInfo_jGetgoodvirtualdoctor(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<iegen::example::DoctorInfo*>(iegen_obj_id_ptr);
    
    try {
        const auto& result = jnitocxxid->getGoodVirtualDoctor();
        iegen::example::GoodVirtualDoctor* cxxtojniresult_ptr = const_cast<iegen::example::GoodVirtualDoctor*>(result);
        char* type_result = nullptr;
        const char* name_result = typeid(*result).name();
        int status = 0;
        char* demangled_result = abi::__cxa_demangle(name_result, NULL, NULL, &status);
        if (status == 0) {
            type_result = demangled_result;
        } else {
            type_result = strdup("iegen::example::GoodVirtualDoctor");
        }
        IEGenCObject* iegen_obj_cxxtojniresult = new IEGenCObject {type_result, dynamic_cast<void*>(cxxtojniresult_ptr)};
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


extern "C" JNIEXPORT jstring Java_com_examples_inheritance_DoctorInfo_jGetgooddoctorname(JNIEnv* env, jobject obj, jobjectid id, jobjectid d){
    

    auto iegen_obj_d = reinterpret_cast<IEGenCObject*>(d);
    auto iegen_obj_d_ptr = iegen_obj_d ? iegen_obj_d->ptr : nullptr;
    iegen::example::GoodDoctor* jnitocxxd = nullptr;
    if (iegen_obj_d_ptr) {
        if (strcmp(iegen_obj_d->type, "iegen::example::GoodDoctor") == 0)
            jnitocxxd = static_cast<iegen::example::GoodDoctor*>(iegen_obj_d_ptr);
        else if (strcmp(iegen_obj_d->type, "iegen::example::GoodOldDoctor") == 0)
            jnitocxxd = static_cast<iegen::example::GoodOldDoctor*>(iegen_obj_d_ptr);
        else if (strcmp(iegen_obj_d->type, "iegen::example::GoodYoungDoctor") == 0)
            jnitocxxd = static_cast<iegen::example::GoodYoungDoctor*>(iegen_obj_d_ptr);
        else {
            std::cerr << "Unexpected object type: " << iegen_obj_d->type << std::endl;
            exit(1);
        }
    }

    validateID(id);
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<iegen::example::DoctorInfo*>(iegen_obj_id_ptr);
    
    try {
        const auto& result = jnitocxxid->getGoodDoctorName(jnitocxxd);
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

extern "C" JNIEXPORT jstring Java_com_examples_inheritance_DoctorKt_jGettypebyid(JNIEnv* env, jclass cls, jobjectid id) {
    validateID(id);
    return env->NewStringUTF(reinterpret_cast<IEGenCObject*>(id)->type);
}

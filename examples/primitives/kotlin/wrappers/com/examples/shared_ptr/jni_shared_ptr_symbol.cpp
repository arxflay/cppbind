/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 10/18/2022-06:17.
 * Please do not change it manually.
 */

#include "jni.h"
#include <iostream>
#include <cxxabi.h>
#include <string.h>
#include <type_traits>
#include "kotlin/wrappers/c_helpers.h"
#include "kotlin/wrappers/cppbind_wrapper_helper.hpp"
#include "cxx/shared_ptr/shared_ptr_symbol.hpp"

extern const char* CPPBIND_STD_STDEXCEPTION;

const char* CPPBIND_CPPBIND_EXAMPLE_ISIGNSHARED = "cppbind::example::SignShared";
const char* CPPBIND_CPPBIND_EXAMPLE_TEXTSHARED = "cppbind::example::TextShared";
const char* CPPBIND_CPPBIND_EXAMPLE_DIGITSHARED = "cppbind::example::DigitShared";
const char* CPPBIND_CPPBIND_EXAMPLE_SYMBOLUSAGESHARED = "cppbind::example::SymbolUsageShared";


extern "C" JNIEXPORT void Java_com_examples_shared_1ptr_SignSharedImpl_jFinalize(JNIEnv*, jobject, jobjectid id){
    using namespace cppbind::example;
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    if (strcmp(cppbind_obj_id->type, CPPBIND_CPPBIND_EXAMPLE_ISIGNSHARED) == 0)
        delete static_cast<std::shared_ptr<cppbind::example::SignShared>*>(cppbind_obj_id_ptr);
    else if (strcmp(cppbind_obj_id->type, CPPBIND_CPPBIND_EXAMPLE_DIGITSHARED) == 0)
        delete static_cast<std::shared_ptr<cppbind::example::DigitShared>*>(cppbind_obj_id_ptr);
    else {
        std::cerr << "Unexpected object type: " << cppbind_obj_id->type << std::endl;
        exit(1);
    }
    free(cppbind_obj_id->type);
    delete cppbind_obj_id;
}

std::shared_ptr<cppbind::example::SignShared> recover_obj_from_CppbindExample_ISignShared(jobjectid id) {
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    if (cppbind_obj_id_ptr) {
        if (strcmp(cppbind_obj_id->type, CPPBIND_CPPBIND_EXAMPLE_ISIGNSHARED) == 0)
            return *static_cast<std::shared_ptr<cppbind::example::SignShared>*>(cppbind_obj_id_ptr);
        else if (strcmp(cppbind_obj_id->type, CPPBIND_CPPBIND_EXAMPLE_DIGITSHARED) == 0)
           return *static_cast<std::shared_ptr<cppbind::example::DigitShared>*>(cppbind_obj_id_ptr);
        else {
            std::cerr << "Unexpected object type: " << cppbind_obj_id->type << std::endl;
            exit(1);
        }
    }
    return nullptr;
}

extern "C" JNIEXPORT jlong Java_com_examples_shared_1ptr_SignSharedImpl_jGetcxxid(JNIEnv*, jobject, jobjectid id) {
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id->ptr;
    if (strcmp(cppbind_obj_id->type, CPPBIND_CPPBIND_EXAMPLE_ISIGNSHARED) == 0)
        return reinterpret_cast<jlong>(static_cast<std::shared_ptr<cppbind::example::SignShared>*>(cppbind_obj_id_ptr)->get());
    else if (strcmp(cppbind_obj_id->type, CPPBIND_CPPBIND_EXAMPLE_DIGITSHARED) == 0)
        return reinterpret_cast<jlong>(static_cast<std::shared_ptr<cppbind::example::DigitShared>*>(cppbind_obj_id_ptr)->get());
    else {
        std::cerr << "Unexpected object type: " << cppbind_obj_id->type << std::endl;
        exit(1);
    }
}

extern "C" JNIEXPORT jobjectid Java_com_examples_shared_1ptr_SignSharedImpl_jConstructor([[maybe_unused]] JNIEnv* env, jobject){
    using namespace cppbind::example;
    try {
        cppbind::example::SignShared* this_object = new cppbind::example::SignShared();
        return reinterpret_cast<jlong>(new CppBindCObject {strdup(CPPBIND_CPPBIND_EXAMPLE_ISIGNSHARED), new std::shared_ptr<cppbind::example::SignShared>(this_object)});
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


extern "C" JNIEXPORT jstring Java_com_examples_shared_1ptr_ISignSharedHelper_jTypename([[maybe_unused]] JNIEnv* env, jobject, jobjectid id){
    using namespace cppbind::example;
    
    validateID(id);
    std::shared_ptr<cppbind::example::SignShared> jnitocxxid;
    jnitocxxid = recover_obj_from_CppbindExample_ISignShared(id);
    
    try {
        decltype(auto) result = jnitocxxid->typeName();
        jstring cxxtojniresult = env->NewStringUTF(result.data());
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

extern "C" JNIEXPORT void Java_com_examples_shared_1ptr_TextShared_jFinalize(JNIEnv*, jobject, jobjectid id){
    using namespace cppbind::example;
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    if (strcmp(cppbind_obj_id->type, CPPBIND_CPPBIND_EXAMPLE_TEXTSHARED) == 0)
        delete static_cast<std::shared_ptr<cppbind::example::TextShared>*>(cppbind_obj_id_ptr);
    else if (strcmp(cppbind_obj_id->type, CPPBIND_CPPBIND_EXAMPLE_DIGITSHARED) == 0)
        delete static_cast<std::shared_ptr<cppbind::example::DigitShared>*>(cppbind_obj_id_ptr);
    else {
        std::cerr << "Unexpected object type: " << cppbind_obj_id->type << std::endl;
        exit(1);
    }
    free(cppbind_obj_id->type);
    delete cppbind_obj_id;
}

std::shared_ptr<cppbind::example::TextShared> recover_obj_from_CppbindExample_TextShared(jobjectid id) {
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    if (cppbind_obj_id_ptr) {
        if (strcmp(cppbind_obj_id->type, CPPBIND_CPPBIND_EXAMPLE_TEXTSHARED) == 0)
            return *static_cast<std::shared_ptr<cppbind::example::TextShared>*>(cppbind_obj_id_ptr);
        else if (strcmp(cppbind_obj_id->type, CPPBIND_CPPBIND_EXAMPLE_DIGITSHARED) == 0)
           return *static_cast<std::shared_ptr<cppbind::example::DigitShared>*>(cppbind_obj_id_ptr);
        else {
            std::cerr << "Unexpected object type: " << cppbind_obj_id->type << std::endl;
            exit(1);
        }
    }
    return nullptr;
}

extern "C" JNIEXPORT jlong Java_com_examples_shared_1ptr_TextShared_jGetcxxid(JNIEnv*, jobject, jobjectid id) {
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id->ptr;
    if (strcmp(cppbind_obj_id->type, CPPBIND_CPPBIND_EXAMPLE_TEXTSHARED) == 0)
        return reinterpret_cast<jlong>(static_cast<std::shared_ptr<cppbind::example::TextShared>*>(cppbind_obj_id_ptr)->get());
    else if (strcmp(cppbind_obj_id->type, CPPBIND_CPPBIND_EXAMPLE_DIGITSHARED) == 0)
        return reinterpret_cast<jlong>(static_cast<std::shared_ptr<cppbind::example::DigitShared>*>(cppbind_obj_id_ptr)->get());
    else {
        std::cerr << "Unexpected object type: " << cppbind_obj_id->type << std::endl;
        exit(1);
    }
}

extern "C" JNIEXPORT jobjectid Java_com_examples_shared_1ptr_TextShared_jConstructor([[maybe_unused]] JNIEnv* env, jobject){
    using namespace cppbind::example;
    try {
        cppbind::example::TextShared* this_object = new cppbind::example::TextShared();
        return reinterpret_cast<jlong>(new CppBindCObject {strdup(CPPBIND_CPPBIND_EXAMPLE_TEXTSHARED), new std::shared_ptr<cppbind::example::TextShared>(this_object)});
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


extern "C" JNIEXPORT jstring Java_com_examples_shared_1ptr_TextShared_jTypename([[maybe_unused]] JNIEnv* env, jobject, jobjectid id){
    using namespace cppbind::example;
    
    validateID(id);
    std::shared_ptr<cppbind::example::TextShared> jnitocxxid;
    jnitocxxid = recover_obj_from_CppbindExample_TextShared(id);
    
    try {
        decltype(auto) result = jnitocxxid->typeName();
        jstring cxxtojniresult = env->NewStringUTF(result.data());
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


extern "C" JNIEXPORT jobjectid Java_com_examples_shared_1ptr_DigitShared_jConstructor([[maybe_unused]] JNIEnv* env, jobject){
    using namespace cppbind::example;
    try {
        cppbind::example::DigitShared* this_object = new cppbind::example::DigitShared();
        return reinterpret_cast<jlong>(new CppBindCObject {strdup(CPPBIND_CPPBIND_EXAMPLE_DIGITSHARED), new std::shared_ptr<cppbind::example::DigitShared>(this_object)});
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


extern "C" JNIEXPORT jstring Java_com_examples_shared_1ptr_DigitShared_jTypename([[maybe_unused]] JNIEnv* env, jobject, jobjectid id){
    using namespace cppbind::example;
    
    validateID(id);
    std::shared_ptr<cppbind::example::DigitShared> jnitocxxid;
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    jnitocxxid = *static_cast<std::shared_ptr<cppbind::example::DigitShared>*>(cppbind_obj_id_ptr);
    
    try {
        decltype(auto) result = jnitocxxid->typeName();
        jstring cxxtojniresult = env->NewStringUTF(result.data());
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

extern "C" JNIEXPORT void Java_com_examples_shared_1ptr_SymbolUsageShared_jFinalize(JNIEnv*, jobject, jobjectid id){
    using namespace cppbind::example;
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    delete static_cast<cppbind::example::SymbolUsageShared*>(cppbind_obj_id_ptr);
    free(cppbind_obj_id->type);
    delete cppbind_obj_id;
}

extern "C" JNIEXPORT jlong Java_com_examples_shared_1ptr_SymbolUsageShared_jGetcxxid(JNIEnv*, jobject, jobjectid id) {
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id->ptr;
    return reinterpret_cast<jlong>(static_cast<cppbind::example::SymbolUsageShared*>(cppbind_obj_id_ptr));
}

extern "C" JNIEXPORT jobjectid Java_com_examples_shared_1ptr_SymbolUsageShared_jConstructor([[maybe_unused]] JNIEnv* env, jobject){
    using namespace cppbind::example;
    try {
        cppbind::example::SymbolUsageShared* this_object = new cppbind::example::SymbolUsageShared();
        return reinterpret_cast<jlong>(new CppBindCObject {strdup(CPPBIND_CPPBIND_EXAMPLE_SYMBOLUSAGESHARED), this_object});
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

extern "C" JNIEXPORT jobjectid Java_com_examples_shared_1ptr_SymbolUsageShared_jConstructor1([[maybe_unused]] JNIEnv* env, jobject, jobjectid d, ...){
    using namespace cppbind::example;
    
    std::shared_ptr<cppbind::example::DigitShared> jnitocxxd;
    auto cppbind_obj_d = reinterpret_cast<CppBindCObject*>(d);
    auto cppbind_obj_d_ptr = cppbind_obj_d ? cppbind_obj_d->ptr : nullptr;
    jnitocxxd = *static_cast<std::shared_ptr<cppbind::example::DigitShared>*>(cppbind_obj_d_ptr);
    try {
        cppbind::example::SymbolUsageShared* this_object = new cppbind::example::SymbolUsageShared(jnitocxxd);
        return reinterpret_cast<jlong>(new CppBindCObject {strdup(CPPBIND_CPPBIND_EXAMPLE_SYMBOLUSAGESHARED), this_object});
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


extern "C" JNIEXPORT jstring Java_com_examples_shared_1ptr_SymbolUsageShared_jGettexttype([[maybe_unused]] JNIEnv* env, jobject, jobjectid id, jobjectid t, ...){
    using namespace cppbind::example;
    

    std::shared_ptr<cppbind::example::TextShared> jnitocxxt;
    jnitocxxt = recover_obj_from_CppbindExample_TextShared(t);

    validateID(id);
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<cppbind::example::SymbolUsageShared*>(cppbind_obj_id_ptr);
    
    try {
        decltype(auto) result = jnitocxxid->getTextType(jnitocxxt);
        jstring cxxtojniresult = env->NewStringUTF(result.data());
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


extern "C" JNIEXPORT jstring Java_com_examples_shared_1ptr_SymbolUsageShared_jGetsigntype([[maybe_unused]] JNIEnv* env, jobject, jobjectid id, jobjectid s, ...){
    using namespace cppbind::example;
    

    std::shared_ptr<cppbind::example::SignShared> jnitocxxs;
    jnitocxxs = recover_obj_from_CppbindExample_ISignShared(s);

    validateID(id);
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<cppbind::example::SymbolUsageShared*>(cppbind_obj_id_ptr);
    
    try {
        decltype(auto) result = jnitocxxid->getSignType(jnitocxxs);
        jstring cxxtojniresult = env->NewStringUTF(result.data());
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


extern "C" JNIEXPORT jint Java_com_examples_shared_1ptr_SymbolUsageShared_jGettextid([[maybe_unused]] JNIEnv* env, jobject, jobjectid id, jobjectid t, ...){
    using namespace cppbind::example;
    

    std::shared_ptr<cppbind::example::TextShared> jnitocxxt;
    jnitocxxt = recover_obj_from_CppbindExample_TextShared(t);

    validateID(id);
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<cppbind::example::SymbolUsageShared*>(cppbind_obj_id_ptr);
    
    try {
        decltype(auto) result = jnitocxxid->getTextId(jnitocxxt);
        
        return result;
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

    jint result {};
    return result;
}


extern "C" JNIEXPORT jint Java_com_examples_shared_1ptr_SymbolUsageShared_jGetsignid([[maybe_unused]] JNIEnv* env, jobject, jobjectid id, jobjectid s, ...){
    using namespace cppbind::example;
    

    std::shared_ptr<cppbind::example::SignShared> jnitocxxs;
    jnitocxxs = recover_obj_from_CppbindExample_ISignShared(s);

    validateID(id);
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<cppbind::example::SymbolUsageShared*>(cppbind_obj_id_ptr);
    
    try {
        decltype(auto) result = jnitocxxid->getSignId(jnitocxxs);
        
        return result;
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

    jint result {};
    return result;
}


extern "C" JNIEXPORT jobjectid Java_com_examples_shared_1ptr_SymbolUsageShared_jGettextptr([[maybe_unused]] JNIEnv* env, jobject, jobjectid id){
    using namespace cppbind::example;
    
    validateID(id);
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<cppbind::example::SymbolUsageShared*>(cppbind_obj_id_ptr);
    
    try {
        decltype(auto) result = jnitocxxid->getTextPtr();
        
        char* type_result = nullptr;
        void* cxxtojniresult_ptr = nullptr;
        CppBindCObject* cppbind_obj_cxxtojniresult = nullptr;

        auto& arg_pointee_result = *result.get();
        const char* name_result = typeid(arg_pointee_result).name();
        int status = 0;
        char* demangled_result = abi::__cxa_demangle(name_result, NULL, NULL, &status);
        if (status == 0) {
            type_result = demangled_result;
        } else {
            type_result = strdup(CPPBIND_CPPBIND_EXAMPLE_TEXTSHARED);
        }
        cxxtojniresult_ptr = new std::shared_ptr<void>(std::dynamic_pointer_cast<void>(result));
        cppbind_obj_cxxtojniresult = new CppBindCObject {type_result, cxxtojniresult_ptr};
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


extern "C" JNIEXPORT jobjectid Java_com_examples_shared_1ptr_SymbolUsageShared_jGetsignptr([[maybe_unused]] JNIEnv* env, jobject, jobjectid id){
    using namespace cppbind::example;
    
    validateID(id);
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<cppbind::example::SymbolUsageShared*>(cppbind_obj_id_ptr);
    
    try {
        decltype(auto) result = jnitocxxid->getSignPtr();
        
        char* type_result = nullptr;
        void* cxxtojniresult_ptr = nullptr;
        CppBindCObject* cppbind_obj_cxxtojniresult = nullptr;

        auto& arg_pointee_result = *result.get();
        const char* name_result = typeid(arg_pointee_result).name();
        int status = 0;
        char* demangled_result = abi::__cxa_demangle(name_result, NULL, NULL, &status);
        if (status == 0) {
            type_result = demangled_result;
        } else {
            type_result = strdup(CPPBIND_CPPBIND_EXAMPLE_ISIGNSHARED);
        }
        cxxtojniresult_ptr = new std::shared_ptr<void>(std::dynamic_pointer_cast<void>(result));
        cppbind_obj_cxxtojniresult = new CppBindCObject {type_result, cxxtojniresult_ptr};
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

extern "C" JNIEXPORT jstring Java_com_examples_shared_1ptr_Shared_1ptr_1symbolKt_jGettypebyid(JNIEnv* env, jclass, jobjectid id) {
    validateID(id);
    return env->NewStringUTF(reinterpret_cast<CppBindCObject*>(id)->type);
}

/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 06/22/2022-14:16.
 * Please do not change it manually.
 */

#include "jni.h"
#include <iostream>
#include <cxxabi.h>
#include <string.h>
#include <type_traits>
#include "kotlin/wrappers/c_helpers.h"
#include "kotlin/wrappers/cppbind_wrapper_helper.hpp"
#include "cxx/exceptions/exceptions.hpp"
#include <stdexcept>
#include <new>
#include <typeinfo>


extern const char* CPPBIND_CPPBIND_EXAMPLE_FILEERROR;
extern const char* CPPBIND_CPPBIND_EXAMPLE_SYSTEMERROR;

const char* CPPBIND_STD_STDEXCEPTION = "std::exception";
const char* CPPBIND_STD_STDLOGICERROR = "std::logic_error";
const char* CPPBIND_STD_STDRUNTIMEERROR = "std::runtime_error";
const char* CPPBIND_STD_STDDOMAINERROR = "std::domain_error";
const char* CPPBIND_STD_STDINVALIDARGUMENT = "std::invalid_argument";
const char* CPPBIND_STD_STDLENGTHERROR = "std::length_error";
const char* CPPBIND_STD_STDOUTOFRANGE = "std::out_of_range";
const char* CPPBIND_STD_STDRANGEERROR = "std::range_error";
const char* CPPBIND_STD_STDOVERFLOWERROR = "std::overflow_error";
const char* CPPBIND_STD_STDUNDERFLOWERROR = "std::underflow_error";
const char* CPPBIND_STD_STDBADALLOC = "std::bad_alloc";
const char* CPPBIND_STD_STDBADCAST = "std::bad_cast";
const char* CPPBIND_STD_STDBADTYPEID = "std::bad_typeid";

using namespace std;


extern "C" JNIEXPORT void Java_com_examples_cppbind_exception_1helpers_StdException_jFinalize(JNIEnv*, jobject, jobjectid id){
    static_assert(std::has_virtual_destructor<std::exception>::value, "std::exception type must have virtual destructor");
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    if (strcmp(cppbind_obj_id->type, CPPBIND_STD_STDEXCEPTION) == 0)
        delete static_cast<std::exception*>(cppbind_obj_id_ptr);
    else if (strcmp(cppbind_obj_id->type, CPPBIND_CPPBIND_EXAMPLE_FILEERROR) == 0)
        delete static_cast<cppbind::example::FileError*>(cppbind_obj_id_ptr);
    else if (strcmp(cppbind_obj_id->type, CPPBIND_STD_STDDOMAINERROR) == 0)
        delete static_cast<std::domain_error*>(cppbind_obj_id_ptr);
    else if (strcmp(cppbind_obj_id->type, CPPBIND_STD_STDINVALIDARGUMENT) == 0)
        delete static_cast<std::invalid_argument*>(cppbind_obj_id_ptr);
    else if (strcmp(cppbind_obj_id->type, CPPBIND_STD_STDLENGTHERROR) == 0)
        delete static_cast<std::length_error*>(cppbind_obj_id_ptr);
    else if (strcmp(cppbind_obj_id->type, CPPBIND_STD_STDOUTOFRANGE) == 0)
        delete static_cast<std::out_of_range*>(cppbind_obj_id_ptr);
    else if (strcmp(cppbind_obj_id->type, CPPBIND_STD_STDOVERFLOWERROR) == 0)
        delete static_cast<std::overflow_error*>(cppbind_obj_id_ptr);
    else if (strcmp(cppbind_obj_id->type, CPPBIND_STD_STDRANGEERROR) == 0)
        delete static_cast<std::range_error*>(cppbind_obj_id_ptr);
    else if (strcmp(cppbind_obj_id->type, CPPBIND_STD_STDUNDERFLOWERROR) == 0)
        delete static_cast<std::underflow_error*>(cppbind_obj_id_ptr);
    else if (strcmp(cppbind_obj_id->type, CPPBIND_CPPBIND_EXAMPLE_SYSTEMERROR) == 0)
        delete static_cast<cppbind::example::SystemError*>(cppbind_obj_id_ptr);
    else if (strcmp(cppbind_obj_id->type, CPPBIND_STD_STDBADALLOC) == 0)
        delete static_cast<std::bad_alloc*>(cppbind_obj_id_ptr);
    else if (strcmp(cppbind_obj_id->type, CPPBIND_STD_STDBADCAST) == 0)
        delete static_cast<std::bad_cast*>(cppbind_obj_id_ptr);
    else if (strcmp(cppbind_obj_id->type, CPPBIND_STD_STDBADTYPEID) == 0)
        delete static_cast<std::bad_typeid*>(cppbind_obj_id_ptr);
    else if (strcmp(cppbind_obj_id->type, CPPBIND_STD_STDLOGICERROR) == 0)
        delete static_cast<std::logic_error*>(cppbind_obj_id_ptr);
    else if (strcmp(cppbind_obj_id->type, CPPBIND_STD_STDRUNTIMEERROR) == 0)
        delete static_cast<std::runtime_error*>(cppbind_obj_id_ptr);
    else {
        std::cerr << "Unexpected object type: " << cppbind_obj_id->type << std::endl;
        exit(1);
    }
    free(cppbind_obj_id->type);
    delete cppbind_obj_id;
}

std::exception* recover_obj_from_Std_StdException(jobjectid id) {
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    if (cppbind_obj_id_ptr) {
        if (strcmp(cppbind_obj_id->type, CPPBIND_STD_STDEXCEPTION) == 0)
            return static_cast<std::exception*>(cppbind_obj_id_ptr);
        else if (strcmp(cppbind_obj_id->type, CPPBIND_CPPBIND_EXAMPLE_FILEERROR) == 0)
            return static_cast<cppbind::example::FileError*>(cppbind_obj_id_ptr);
        else if (strcmp(cppbind_obj_id->type, CPPBIND_STD_STDDOMAINERROR) == 0)
            return static_cast<std::domain_error*>(cppbind_obj_id_ptr);
        else if (strcmp(cppbind_obj_id->type, CPPBIND_STD_STDINVALIDARGUMENT) == 0)
            return static_cast<std::invalid_argument*>(cppbind_obj_id_ptr);
        else if (strcmp(cppbind_obj_id->type, CPPBIND_STD_STDLENGTHERROR) == 0)
            return static_cast<std::length_error*>(cppbind_obj_id_ptr);
        else if (strcmp(cppbind_obj_id->type, CPPBIND_STD_STDOUTOFRANGE) == 0)
            return static_cast<std::out_of_range*>(cppbind_obj_id_ptr);
        else if (strcmp(cppbind_obj_id->type, CPPBIND_STD_STDOVERFLOWERROR) == 0)
            return static_cast<std::overflow_error*>(cppbind_obj_id_ptr);
        else if (strcmp(cppbind_obj_id->type, CPPBIND_STD_STDRANGEERROR) == 0)
            return static_cast<std::range_error*>(cppbind_obj_id_ptr);
        else if (strcmp(cppbind_obj_id->type, CPPBIND_STD_STDUNDERFLOWERROR) == 0)
            return static_cast<std::underflow_error*>(cppbind_obj_id_ptr);
        else if (strcmp(cppbind_obj_id->type, CPPBIND_CPPBIND_EXAMPLE_SYSTEMERROR) == 0)
            return static_cast<cppbind::example::SystemError*>(cppbind_obj_id_ptr);
        else if (strcmp(cppbind_obj_id->type, CPPBIND_STD_STDBADALLOC) == 0)
            return static_cast<std::bad_alloc*>(cppbind_obj_id_ptr);
        else if (strcmp(cppbind_obj_id->type, CPPBIND_STD_STDBADCAST) == 0)
            return static_cast<std::bad_cast*>(cppbind_obj_id_ptr);
        else if (strcmp(cppbind_obj_id->type, CPPBIND_STD_STDBADTYPEID) == 0)
            return static_cast<std::bad_typeid*>(cppbind_obj_id_ptr);
        else if (strcmp(cppbind_obj_id->type, CPPBIND_STD_STDLOGICERROR) == 0)
            return static_cast<std::logic_error*>(cppbind_obj_id_ptr);
        else if (strcmp(cppbind_obj_id->type, CPPBIND_STD_STDRUNTIMEERROR) == 0)
            return static_cast<std::runtime_error*>(cppbind_obj_id_ptr);
        else {
            std::cerr << "Unexpected object type: " << cppbind_obj_id->type << std::endl;
            exit(1);
        }
    }
    return nullptr;
}

extern "C" JNIEXPORT jlong Java_com_examples_cppbind_exception_1helpers_StdException_jGetcxxid(JNIEnv*, jobject, jobjectid id) {
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id->ptr;
    if (strcmp(cppbind_obj_id->type, CPPBIND_STD_STDEXCEPTION) == 0)
        return reinterpret_cast<jlong>(static_cast<std::exception*>(cppbind_obj_id_ptr));
    else if (strcmp(cppbind_obj_id->type, CPPBIND_CPPBIND_EXAMPLE_FILEERROR) == 0)
        return reinterpret_cast<jlong>(static_cast<cppbind::example::FileError*>(cppbind_obj_id_ptr));
    else if (strcmp(cppbind_obj_id->type, CPPBIND_STD_STDDOMAINERROR) == 0)
        return reinterpret_cast<jlong>(static_cast<std::domain_error*>(cppbind_obj_id_ptr));
    else if (strcmp(cppbind_obj_id->type, CPPBIND_STD_STDINVALIDARGUMENT) == 0)
        return reinterpret_cast<jlong>(static_cast<std::invalid_argument*>(cppbind_obj_id_ptr));
    else if (strcmp(cppbind_obj_id->type, CPPBIND_STD_STDLENGTHERROR) == 0)
        return reinterpret_cast<jlong>(static_cast<std::length_error*>(cppbind_obj_id_ptr));
    else if (strcmp(cppbind_obj_id->type, CPPBIND_STD_STDOUTOFRANGE) == 0)
        return reinterpret_cast<jlong>(static_cast<std::out_of_range*>(cppbind_obj_id_ptr));
    else if (strcmp(cppbind_obj_id->type, CPPBIND_STD_STDOVERFLOWERROR) == 0)
        return reinterpret_cast<jlong>(static_cast<std::overflow_error*>(cppbind_obj_id_ptr));
    else if (strcmp(cppbind_obj_id->type, CPPBIND_STD_STDRANGEERROR) == 0)
        return reinterpret_cast<jlong>(static_cast<std::range_error*>(cppbind_obj_id_ptr));
    else if (strcmp(cppbind_obj_id->type, CPPBIND_STD_STDUNDERFLOWERROR) == 0)
        return reinterpret_cast<jlong>(static_cast<std::underflow_error*>(cppbind_obj_id_ptr));
    else if (strcmp(cppbind_obj_id->type, CPPBIND_CPPBIND_EXAMPLE_SYSTEMERROR) == 0)
        return reinterpret_cast<jlong>(static_cast<cppbind::example::SystemError*>(cppbind_obj_id_ptr));
    else if (strcmp(cppbind_obj_id->type, CPPBIND_STD_STDBADALLOC) == 0)
        return reinterpret_cast<jlong>(static_cast<std::bad_alloc*>(cppbind_obj_id_ptr));
    else if (strcmp(cppbind_obj_id->type, CPPBIND_STD_STDBADCAST) == 0)
        return reinterpret_cast<jlong>(static_cast<std::bad_cast*>(cppbind_obj_id_ptr));
    else if (strcmp(cppbind_obj_id->type, CPPBIND_STD_STDBADTYPEID) == 0)
        return reinterpret_cast<jlong>(static_cast<std::bad_typeid*>(cppbind_obj_id_ptr));
    else if (strcmp(cppbind_obj_id->type, CPPBIND_STD_STDLOGICERROR) == 0)
        return reinterpret_cast<jlong>(static_cast<std::logic_error*>(cppbind_obj_id_ptr));
    else if (strcmp(cppbind_obj_id->type, CPPBIND_STD_STDRUNTIMEERROR) == 0)
        return reinterpret_cast<jlong>(static_cast<std::runtime_error*>(cppbind_obj_id_ptr));
    else {
        std::cerr << "Unexpected object type: " << cppbind_obj_id->type << std::endl;
        exit(1);
    }
}


extern "C" JNIEXPORT jstring Java_com_examples_cppbind_exception_1helpers_StdException_jWhat([[maybe_unused]] JNIEnv* env, jobject, jobjectid id){
    
    validateID(id);
    std::exception* jnitocxxid = recover_obj_from_Std_StdException(id);
    
    try {
        const auto& result = jnitocxxid->what();
        jstring cxxtojniresult = env->NewStringUTF(result);
        return cxxtojniresult;
    }
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }

    jstring result {};
    return result;
}


std::logic_error* recover_obj_from_Std_StdLogicError(jobjectid id) {
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    if (cppbind_obj_id_ptr) {
        if (strcmp(cppbind_obj_id->type, CPPBIND_STD_STDLOGICERROR) == 0)
            return static_cast<std::logic_error*>(cppbind_obj_id_ptr);
        else if (strcmp(cppbind_obj_id->type, CPPBIND_STD_STDDOMAINERROR) == 0)
            return static_cast<std::domain_error*>(cppbind_obj_id_ptr);
        else if (strcmp(cppbind_obj_id->type, CPPBIND_STD_STDINVALIDARGUMENT) == 0)
            return static_cast<std::invalid_argument*>(cppbind_obj_id_ptr);
        else if (strcmp(cppbind_obj_id->type, CPPBIND_STD_STDLENGTHERROR) == 0)
            return static_cast<std::length_error*>(cppbind_obj_id_ptr);
        else if (strcmp(cppbind_obj_id->type, CPPBIND_STD_STDOUTOFRANGE) == 0)
            return static_cast<std::out_of_range*>(cppbind_obj_id_ptr);
        else {
            std::cerr << "Unexpected object type: " << cppbind_obj_id->type << std::endl;
            exit(1);
        }
    }
    return nullptr;
}



std::runtime_error* recover_obj_from_Std_StdRuntimeError(jobjectid id) {
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    if (cppbind_obj_id_ptr) {
        if (strcmp(cppbind_obj_id->type, CPPBIND_STD_STDRUNTIMEERROR) == 0)
            return static_cast<std::runtime_error*>(cppbind_obj_id_ptr);
        else if (strcmp(cppbind_obj_id->type, CPPBIND_STD_STDOVERFLOWERROR) == 0)
            return static_cast<std::overflow_error*>(cppbind_obj_id_ptr);
        else if (strcmp(cppbind_obj_id->type, CPPBIND_STD_STDRANGEERROR) == 0)
            return static_cast<std::range_error*>(cppbind_obj_id_ptr);
        else if (strcmp(cppbind_obj_id->type, CPPBIND_STD_STDUNDERFLOWERROR) == 0)
            return static_cast<std::underflow_error*>(cppbind_obj_id_ptr);
        else {
            std::cerr << "Unexpected object type: " << cppbind_obj_id->type << std::endl;
            exit(1);
        }
    }
    return nullptr;
}






















extern "C" JNIEXPORT jstring Java_com_examples_cppbind_exception_1helpers_Std_1exc_1classesKt_jGettypebyid(JNIEnv* env, jclass, jobjectid id) {
    validateID(id);
    return env->NewStringUTF(reinterpret_cast<CppBindCObject*>(id)->type);
}

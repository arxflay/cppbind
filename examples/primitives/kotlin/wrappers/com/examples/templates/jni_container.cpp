/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 09/07/2022-09:16.
 * Please do not change it manually.
 */

#include "jni.h"
#include <iostream>
#include <cxxabi.h>
#include <string.h>
#include <type_traits>
#include "kotlin/wrappers/c_helpers.h"
#include "kotlin/wrappers/cppbind_wrapper_helper.hpp"
#include "cxx/templates/container.hpp"
#include "cxx/templates/stack.hpp"
#include "cxx/simple/project.hpp"
#include "cxx/simple/task.hpp"
#include "cxx/getters/number.hpp"

extern const char* CPPBIND_CPPBIND_EXAMPLE_STACKPRJ;
extern const char* CPPBIND_CPPBIND_EXAMPLE_PROJECT;
extern const char* CPPBIND_CPPBIND_EXAMPLE_STACKTASK;
extern const char* CPPBIND_CPPBIND_EXAMPLE_TASK;
extern const char* CPPBIND_CPPBIND_EXAMPLE_STACKNUMINT;
extern const char* CPPBIND_CPPBIND_EXAMPLE_NUMBERINT;
extern const char* CPPBIND_STD_STDEXCEPTION;

const char* CPPBIND_CPPBIND_EXAMPLE_ICONTAINER = "cppbind::example::Container";
const char* CPPBIND_CPPBIND_EXAMPLE_CONTAINERHOLDER = "cppbind::example::ContainerHolder";

using namespace cppbind::example;


extern "C" JNIEXPORT void Java_com_examples_templates_ContainerImpl_jFinalize(JNIEnv*, jobject, jobjectid id){
    static_assert(std::has_virtual_destructor<cppbind::example::Container>::value, "cppbind::example::Container type must have virtual destructor");
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    if (strcmp(cppbind_obj_id->type, CPPBIND_CPPBIND_EXAMPLE_ICONTAINER) == 0)
        delete static_cast<cppbind::example::Container*>(cppbind_obj_id_ptr);
    else if (strcmp(cppbind_obj_id->type, CPPBIND_CPPBIND_EXAMPLE_STACKPRJ) == 0)
        delete static_cast<cppbind::example::Stack<cppbind::example::Project>*>(cppbind_obj_id_ptr);
    else if (strcmp(cppbind_obj_id->type, CPPBIND_CPPBIND_EXAMPLE_STACKTASK) == 0)
        delete static_cast<cppbind::example::Stack<cppbind::example::Task>*>(cppbind_obj_id_ptr);
    else if (strcmp(cppbind_obj_id->type, CPPBIND_CPPBIND_EXAMPLE_STACKNUMINT) == 0)
        delete static_cast<cppbind::example::Stack<cppbind::example::Number<int>>*>(cppbind_obj_id_ptr);
    else {
        std::cerr << "Unexpected object type: " << cppbind_obj_id->type << std::endl;
        exit(1);
    }
    free(cppbind_obj_id->type);
    delete cppbind_obj_id;
}

cppbind::example::Container* recover_obj_from_CppbindExample_IContainer(jobjectid id) {
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    if (cppbind_obj_id_ptr) {
        if (strcmp(cppbind_obj_id->type, CPPBIND_CPPBIND_EXAMPLE_ICONTAINER) == 0)
            return static_cast<cppbind::example::Container*>(cppbind_obj_id_ptr);
        else if (strcmp(cppbind_obj_id->type, CPPBIND_CPPBIND_EXAMPLE_STACKPRJ) == 0)
            return static_cast<cppbind::example::Stack<cppbind::example::Project>*>(cppbind_obj_id_ptr);
        else if (strcmp(cppbind_obj_id->type, CPPBIND_CPPBIND_EXAMPLE_STACKTASK) == 0)
            return static_cast<cppbind::example::Stack<cppbind::example::Task>*>(cppbind_obj_id_ptr);
        else if (strcmp(cppbind_obj_id->type, CPPBIND_CPPBIND_EXAMPLE_STACKNUMINT) == 0)
            return static_cast<cppbind::example::Stack<cppbind::example::Number<int>>*>(cppbind_obj_id_ptr);
        else {
            std::cerr << "Unexpected object type: " << cppbind_obj_id->type << std::endl;
            exit(1);
        }
    }
    return nullptr;
}

extern "C" JNIEXPORT jlong Java_com_examples_templates_ContainerImpl_jGetcxxid(JNIEnv*, jobject, jobjectid id) {
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id->ptr;
    if (strcmp(cppbind_obj_id->type, CPPBIND_CPPBIND_EXAMPLE_ICONTAINER) == 0)
        return reinterpret_cast<jlong>(static_cast<cppbind::example::Container*>(cppbind_obj_id_ptr));
    else if (strcmp(cppbind_obj_id->type, CPPBIND_CPPBIND_EXAMPLE_STACKPRJ) == 0)
        return reinterpret_cast<jlong>(static_cast<cppbind::example::Stack<cppbind::example::Project>*>(cppbind_obj_id_ptr));
    else if (strcmp(cppbind_obj_id->type, CPPBIND_CPPBIND_EXAMPLE_STACKTASK) == 0)
        return reinterpret_cast<jlong>(static_cast<cppbind::example::Stack<cppbind::example::Task>*>(cppbind_obj_id_ptr));
    else if (strcmp(cppbind_obj_id->type, CPPBIND_CPPBIND_EXAMPLE_STACKNUMINT) == 0)
        return reinterpret_cast<jlong>(static_cast<cppbind::example::Stack<cppbind::example::Number<int>>*>(cppbind_obj_id_ptr));
    else {
        std::cerr << "Unexpected object type: " << cppbind_obj_id->type << std::endl;
        exit(1);
    }
}


extern "C" JNIEXPORT void Java_com_examples_templates_ContainerHolder_jFinalize(JNIEnv*, jobject, jobjectid id){
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    delete static_cast<cppbind::example::ContainerHolder*>(cppbind_obj_id_ptr);
    free(cppbind_obj_id->type);
    delete cppbind_obj_id;
}

extern "C" JNIEXPORT jlong Java_com_examples_templates_ContainerHolder_jGetcxxid(JNIEnv*, jobject, jobjectid id) {
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id->ptr;
    return reinterpret_cast<jlong>(static_cast<cppbind::example::ContainerHolder*>(cppbind_obj_id_ptr));
}

extern "C" JNIEXPORT jobjectid Java_com_examples_templates_ContainerHolder_jConstructor([[maybe_unused]] JNIEnv* env, jobject, jobjectid container, ...){
    
    cppbind::example::Container* jnitocxxcontainer = recover_obj_from_CppbindExample_IContainer(container);
    try {
        cppbind::example::ContainerHolder* this_object = new cppbind::example::ContainerHolder(jnitocxxcontainer);
        return reinterpret_cast<jlong>(new CppBindCObject {strdup(CPPBIND_CPPBIND_EXAMPLE_CONTAINERHOLDER), this_object});
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

extern "C" JNIEXPORT jobjectid Java_com_examples_templates_ContainerHolder_jContainer([[maybe_unused]] JNIEnv* env, jobject, jobjectid id){
    validateID(id);
    
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<cppbind::example::ContainerHolder*>(cppbind_obj_id_ptr);
    try {
        decltype(auto) result = jnitocxxid->container();
        cppbind::example::Container* cxxtojniresult_ptr = result;
        char* type_result = nullptr;
        const char* name_result = typeid(*result).name();
        int status = 0;
        char* demangled_result = abi::__cxa_demangle(name_result, NULL, NULL, &status);
        if (status == 0) {
            type_result = demangled_result;
        } else {
            type_result = strdup(CPPBIND_CPPBIND_EXAMPLE_ICONTAINER);
        }
        CppBindCObject* cppbind_obj_cxxtojniresult = new CppBindCObject {type_result, dynamic_cast<void*>(cxxtojniresult_ptr)};
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

extern "C" JNIEXPORT jstring Java_com_examples_templates_ContainerKt_jGettypebyid(JNIEnv* env, jclass, jobjectid id) {
    validateID(id);
    return env->NewStringUTF(reinterpret_cast<CppBindCObject*>(id)->type);
}

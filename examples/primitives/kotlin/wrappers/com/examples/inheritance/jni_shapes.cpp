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
#include "cxx/inheritance/shapes.hpp"

extern const char* CPPBIND_STD_STDEXCEPTION;

const char* CPPBIND_CPPBIND_EXAMPLE_SHAPE = "cppbind::example::Shape";
const char* CPPBIND_CPPBIND_EXAMPLE_CIRCLE = "cppbind::example::Circle";
const char* CPPBIND_CPPBIND_EXAMPLE_REGULARTRIANGLE = "cppbind::example::RegularTriangle";


extern "C" JNIEXPORT void Java_com_examples_inheritance_Shape_jFinalize(JNIEnv*, jobject, jobjectid id){
    using namespace cppbind::example;
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    if (strcmp(cppbind_obj_id->type, CPPBIND_CPPBIND_EXAMPLE_SHAPE) == 0)
        delete static_cast<std::shared_ptr<cppbind::example::Shape>*>(cppbind_obj_id_ptr);
    else if (strcmp(cppbind_obj_id->type, CPPBIND_CPPBIND_EXAMPLE_CIRCLE) == 0)
        delete static_cast<std::shared_ptr<cppbind::example::Circle>*>(cppbind_obj_id_ptr);
    else {
        std::cerr << "Unexpected object type: " << cppbind_obj_id->type << std::endl;
        exit(1);
    }
    free(cppbind_obj_id->type);
    delete cppbind_obj_id;
}

std::shared_ptr<cppbind::example::Shape> recover_obj_from_CppbindExample_Shape(jobjectid id) {
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    if (cppbind_obj_id_ptr) {
        if (strcmp(cppbind_obj_id->type, CPPBIND_CPPBIND_EXAMPLE_SHAPE) == 0)
            return *static_cast<std::shared_ptr<cppbind::example::Shape>*>(cppbind_obj_id_ptr);
        else if (strcmp(cppbind_obj_id->type, CPPBIND_CPPBIND_EXAMPLE_CIRCLE) == 0)
           return *static_cast<std::shared_ptr<cppbind::example::Circle>*>(cppbind_obj_id_ptr);
        else {
            std::cerr << "Unexpected object type: " << cppbind_obj_id->type << std::endl;
            exit(1);
        }
    }
    return nullptr;
}

extern "C" JNIEXPORT jlong Java_com_examples_inheritance_Shape_jGetcxxid(JNIEnv*, jobject, jobjectid id) {
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id->ptr;
    if (strcmp(cppbind_obj_id->type, CPPBIND_CPPBIND_EXAMPLE_SHAPE) == 0)
        return reinterpret_cast<jlong>(static_cast<std::shared_ptr<cppbind::example::Shape>*>(cppbind_obj_id_ptr)->get());
    else if (strcmp(cppbind_obj_id->type, CPPBIND_CPPBIND_EXAMPLE_CIRCLE) == 0)
        return reinterpret_cast<jlong>(static_cast<std::shared_ptr<cppbind::example::Circle>*>(cppbind_obj_id_ptr)->get());
    else {
        std::cerr << "Unexpected object type: " << cppbind_obj_id->type << std::endl;
        exit(1);
    }
}


extern "C" JNIEXPORT jdouble Java_com_examples_inheritance_Shape_jArea([[maybe_unused]] JNIEnv* env, jobject, jobjectid id){
    using namespace cppbind::example;
    
    validateID(id);
    std::shared_ptr<cppbind::example::Shape> jnitocxxid;
    jnitocxxid = recover_obj_from_CppbindExample_Shape(id);
    
    try {
        decltype(auto) result = jnitocxxid->area();
        
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

    jdouble result {};
    return result;
}


extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_Shape_jThisobject([[maybe_unused]] JNIEnv* env, jobject, jobjectid id){
    using namespace cppbind::example;
    
    validateID(id);
    std::shared_ptr<cppbind::example::Shape> jnitocxxid;
    jnitocxxid = recover_obj_from_CppbindExample_Shape(id);
    
    try {
        decltype(auto) result = jnitocxxid->thisObject();
        std::shared_ptr<cppbind::example::Shape> result_shared_ptr = result.shared_from_this();
        char* type_result_shared_ptr = nullptr;
        void* cxxtojniresult_ptr = nullptr;
        CppBindCObject* cppbind_obj_cxxtojniresult = nullptr;

        auto& arg_pointee_result_shared_ptr = *result_shared_ptr.get();
        const char* name_result_shared_ptr = typeid(arg_pointee_result_shared_ptr).name();
        int status = 0;
        char* demangled_result_shared_ptr = abi::__cxa_demangle(name_result_shared_ptr, NULL, NULL, &status);
        if (status == 0) {
            type_result_shared_ptr = demangled_result_shared_ptr;
        } else {
            type_result_shared_ptr = strdup(CPPBIND_CPPBIND_EXAMPLE_SHAPE);
        }
        cxxtojniresult_ptr = new std::shared_ptr<void>(std::dynamic_pointer_cast<void>(result_shared_ptr));
        cppbind_obj_cxxtojniresult = new CppBindCObject {type_result_shared_ptr, cxxtojniresult_ptr};
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



extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_Circle_jCreate([[maybe_unused]] JNIEnv* env, jobject, jdouble r, ...){
    using namespace cppbind::example;
    


    
    try {
        decltype(auto) result = cppbind::example::Circle::create(r);
        
        char* type_result = strdup(CPPBIND_CPPBIND_EXAMPLE_CIRCLE);
        void* cxxtojniresult_ptr = nullptr;
        CppBindCObject* cppbind_obj_cxxtojniresult = nullptr;
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


extern "C" JNIEXPORT jdouble Java_com_examples_inheritance_Circle_jArea([[maybe_unused]] JNIEnv* env, jobject, jobjectid id){
    using namespace cppbind::example;
    
    validateID(id);
    std::shared_ptr<cppbind::example::Circle> jnitocxxid;
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    jnitocxxid = *static_cast<std::shared_ptr<cppbind::example::Circle>*>(cppbind_obj_id_ptr);
    
    try {
        decltype(auto) result = jnitocxxid->area();
        
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

    jdouble result {};
    return result;
}


extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_Circle_jIncrementradius([[maybe_unused]] JNIEnv* env, jobject, jobjectid id, jdouble value, ...){
    using namespace cppbind::example;
    


    validateID(id);
    std::shared_ptr<cppbind::example::Circle> jnitocxxid;
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    jnitocxxid = *static_cast<std::shared_ptr<cppbind::example::Circle>*>(cppbind_obj_id_ptr);
    
    try {
        decltype(auto) result = jnitocxxid->incrementRadius(value);
        std::shared_ptr<cppbind::example::Circle> result_shared_ptr = std::dynamic_pointer_cast<cppbind::example::Circle>(result->shared_from_this());
        char* type_result_shared_ptr = strdup(CPPBIND_CPPBIND_EXAMPLE_CIRCLE);
        void* cxxtojniresult_ptr = nullptr;
        CppBindCObject* cppbind_obj_cxxtojniresult = nullptr;
        cxxtojniresult_ptr = new std::shared_ptr<void>(std::dynamic_pointer_cast<void>(result_shared_ptr));
        cppbind_obj_cxxtojniresult = new CppBindCObject {type_result_shared_ptr, cxxtojniresult_ptr};
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

extern "C" JNIEXPORT void Java_com_examples_inheritance_RegularTriangle_jFinalize(JNIEnv*, jobject, jobjectid id){
    using namespace cppbind::example;
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    delete static_cast<std::shared_ptr<cppbind::example::RegularTriangle>*>(cppbind_obj_id_ptr);
    free(cppbind_obj_id->type);
    delete cppbind_obj_id;
}

extern "C" JNIEXPORT jlong Java_com_examples_inheritance_RegularTriangle_jGetcxxid(JNIEnv*, jobject, jobjectid id) {
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id->ptr;
    return reinterpret_cast<jlong>(static_cast<std::shared_ptr<cppbind::example::RegularTriangle>*>(cppbind_obj_id_ptr)->get());
}

extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_RegularTriangle_jConstructor([[maybe_unused]] JNIEnv* env, jobject, jdouble side, ...){
    using namespace cppbind::example;
    
    try {
        cppbind::example::RegularTriangle* this_object = new cppbind::example::RegularTriangle(side);
        return reinterpret_cast<jlong>(new CppBindCObject {strdup(CPPBIND_CPPBIND_EXAMPLE_REGULARTRIANGLE), new std::shared_ptr<cppbind::example::RegularTriangle>(this_object)});
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


extern "C" JNIEXPORT jdouble Java_com_examples_inheritance_RegularTriangle_jArea([[maybe_unused]] JNIEnv* env, jobject, jobjectid id){
    using namespace cppbind::example;
    
    validateID(id);
    std::shared_ptr<cppbind::example::RegularTriangle> jnitocxxid;
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    jnitocxxid = *static_cast<std::shared_ptr<cppbind::example::RegularTriangle>*>(cppbind_obj_id_ptr);
    
    try {
        decltype(auto) result = jnitocxxid->area();
        
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

    jdouble result {};
    return result;
}


extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_RegularTriangle_jIncrementside([[maybe_unused]] JNIEnv* env, jobject, jobjectid id, jdouble value, ...){
    using namespace cppbind::example;
    


    validateID(id);
    std::shared_ptr<cppbind::example::RegularTriangle> jnitocxxid;
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    jnitocxxid = *static_cast<std::shared_ptr<cppbind::example::RegularTriangle>*>(cppbind_obj_id_ptr);
    
    try {
        decltype(auto) result = jnitocxxid->incrementSide(value);
        std::shared_ptr<cppbind::example::RegularTriangle> result_shared_ptr = std::dynamic_pointer_cast<cppbind::example::RegularTriangle>(result.shared_from_this());
        char* type_result_shared_ptr = strdup(CPPBIND_CPPBIND_EXAMPLE_REGULARTRIANGLE);
        void* cxxtojniresult_ptr = nullptr;
        CppBindCObject* cppbind_obj_cxxtojniresult = nullptr;
        cxxtojniresult_ptr = new std::shared_ptr<void>(std::dynamic_pointer_cast<void>(result_shared_ptr));
        cppbind_obj_cxxtojniresult = new CppBindCObject {type_result_shared_ptr, cxxtojniresult_ptr};
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


extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_RegularTriangle_jMultiplyside([[maybe_unused]] JNIEnv* env, jobject, jobjectid id, jdouble value, ...){
    using namespace cppbind::example;
    


    validateID(id);
    std::shared_ptr<cppbind::example::RegularTriangle> jnitocxxid;
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    jnitocxxid = *static_cast<std::shared_ptr<cppbind::example::RegularTriangle>*>(cppbind_obj_id_ptr);
    
    try {
        decltype(auto) result = jnitocxxid->multiplySide(value);
        
        std::shared_ptr<cppbind::example::RegularTriangle> result_shared_ptr = std::make_shared<cppbind::example::RegularTriangle>(result);

        char* type_result_shared_ptr = strdup(CPPBIND_CPPBIND_EXAMPLE_REGULARTRIANGLE);
        void* cxxtojniresult_ptr = nullptr;
        CppBindCObject* cppbind_obj_cxxtojniresult = nullptr;
        cxxtojniresult_ptr = new std::shared_ptr<void>(std::dynamic_pointer_cast<void>(result_shared_ptr));
        cppbind_obj_cxxtojniresult = new CppBindCObject {type_result_shared_ptr, cxxtojniresult_ptr};
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

extern "C" JNIEXPORT jstring Java_com_examples_inheritance_ShapesKt_jGettypebyid(JNIEnv* env, jclass, jobjectid id) {
    validateID(id);
    return env->NewStringUTF(reinterpret_cast<CppBindCObject*>(id)->type);
}

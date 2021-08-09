/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 08/09/2021-10:32.
 * Please do not change it manually.
 */

#include "jni.h"
#include <iostream>
#include "kotlin/wrappers/iegen_wrapper_helper.hpp"
#include "cxx/exceptions/exceptions.hpp"

using namespace iegen::exceptions;


extern "C" JNIEXPORT void Java_com_examples_exceptions_ThrowExc_jSet_1this(JNIEnv* env, jobject obj, jobjectid id, jobject self){
}
extern "C" JNIEXPORT void Java_com_examples_exceptions_ThrowExc_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    iegen::exceptions::ThrowExc* this_object = reinterpret_cast<iegen::exceptions::ThrowExc*>(id);
    delete this_object;
}


extern "C" JNIEXPORT jint Java_com_examples_exceptions_ThrowExc_jGetbykey(JNIEnv* env, jobject obj, jmapobject m, jint key){
    

    std::map<int, int> jni_to_cxx_m;
    auto _jni_to_cxx_m = iegen::extract_jni_pair(env, m);
    auto tmp_key_jni_to_cxx_m = iegen::getIntArray(env, _jni_to_cxx_m.first);
    auto tmp_val_jni_to_cxx_m = iegen::getIntArray(env, _jni_to_cxx_m.second);
    for (size_t i = 0; i < tmp_key_jni_to_cxx_m.size(); ++i) {
        auto ktmp_m = tmp_key_jni_to_cxx_m[i];
        auto vtmp_m = tmp_val_jni_to_cxx_m[i];
        
        
        jni_to_cxx_m.insert({ ktmp_m, vtmp_m });
    }



    void* err_ptr = nullptr;

    try {
      auto result = iegen::exceptions::ThrowExc::getByKey(jni_to_cxx_m, key);
      
      return result;
    }catch (const std::out_of_range& e) {
        err_ptr = new std::out_of_range(e);
        jclass excCls = env->FindClass("com/examples/exception_helpers/StdOutOfRange");
        jmethodID constructor = env->GetMethodID(excCls, "<init>", "(J)V");
        jobject excObj = env->NewObject(excCls, constructor, reinterpret_cast<jobjectid>(err_ptr));
        env->Throw(jthrowable(excObj));
    }catch (const iegen::example::SystemError& e) {
        err_ptr = new iegen::example::SystemError(e);
        jclass excCls = env->FindClass("com/examples/exceptions/SystemError");
        jmethodID constructor = env->GetMethodID(excCls, "<init>", "(J)V");
        jobject excObj = env->NewObject(excCls, constructor, reinterpret_cast<jobjectid>(err_ptr));
        env->Throw(jthrowable(excObj));
    }
    catch (const std::exception& e) {
          jclass handlerCls = env->FindClass("exceptionUtils/ExceptionHandler");
          jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
          env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
          jclass handlerCls = env->FindClass("exceptionUtils/ExceptionHandler");
          jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
          env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }

    jint result;
    return result;
}
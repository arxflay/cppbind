/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 07/29/2021-08:47.
 * Please do not change it manually.
 */

#include "jni.h"
#include <iostream>
#include "kotlin/wrappers/iegen_wrapper_helper.hpp"
#include "cxx/exceptions/exceptions.hpp"

using namespace iegen::example;

using namespace iegen::exceptions;

extern "C" JNIEXPORT jobjectid Java_com_examples_exceptions_SystemError_jConstructor(JNIEnv* env, jobject obj, jstring message){
    jstring jjni_to_cxx_messageStr = (jstring)message;
    auto jni_to_cxx_message_cstr = env->GetStringUTFChars(jjni_to_cxx_messageStr, 0);
    const std::string & jni_to_cxx_message = jni_to_cxx_message_cstr;
    env->ReleaseStringUTFChars(jjni_to_cxx_messageStr, jni_to_cxx_message_cstr);
    std::exception* baseptr = new iegen::example::SystemError(jni_to_cxx_message);
    return reinterpret_cast<jlong>(baseptr);
}


extern "C" JNIEXPORT jstring Java_com_examples_exceptions_SystemError_jWhat(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    std::exception* baseptr = reinterpret_cast<std::exception*>(id);
    iegen::example::SystemError* this_object = dynamic_cast<iegen::example::SystemError*>(baseptr);
    void* err_ptr = nullptr;

    try {
      auto result = this_object->what();
      jstring cxx_to_jni_result = env->NewStringUTF(result);
      return cxx_to_jni_result;
    }
    catch (const std::exception& e) {
          err_ptr = new std::exception(e);
          jclass handlerCls = env->FindClass("exceptionUtils/ExceptionHandler");
          jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
          env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
          jclass handlerCls = env->FindClass("exceptionUtils/ExceptionHandler");
          jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
          env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Excepiton"));
    }

    jstring result;
    return result;
}
extern "C" JNIEXPORT jobjectid Java_com_examples_exceptions_FileError_jConstructor(JNIEnv* env, jobject obj, jstring message){
    jstring jjni_to_cxx_messageStr = (jstring)message;
    auto jni_to_cxx_message_cstr = env->GetStringUTFChars(jjni_to_cxx_messageStr, 0);
    const std::string & jni_to_cxx_message = jni_to_cxx_message_cstr;
    env->ReleaseStringUTFChars(jjni_to_cxx_messageStr, jni_to_cxx_message_cstr);
    std::exception* baseptr = new iegen::example::FileError(jni_to_cxx_message);
    return reinterpret_cast<jlong>(baseptr);
}


extern "C" JNIEXPORT jstring Java_com_examples_exceptions_FileError_jWhat(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    std::exception* baseptr = reinterpret_cast<std::exception*>(id);
    iegen::example::FileError* this_object = dynamic_cast<iegen::example::FileError*>(baseptr);
    void* err_ptr = nullptr;

    try {
      auto result = this_object->what();
      jstring cxx_to_jni_result = env->NewStringUTF(result);
      return cxx_to_jni_result;
    }
    catch (const std::exception& e) {
          err_ptr = new std::exception(e);
          jclass handlerCls = env->FindClass("exceptionUtils/ExceptionHandler");
          jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
          env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
          jclass handlerCls = env->FindClass("exceptionUtils/ExceptionHandler");
          jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
          env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Excepiton"));
    }

    jstring result;
    return result;
}

extern "C" JNIEXPORT void Java_com_examples_exceptions_SimpleBaseException_jSet_1this(JNIEnv* env, jobject obj, jobjectid id, jobject self){
}
extern "C" JNIEXPORT void Java_com_examples_exceptions_SimpleBaseException_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    iegen::example::SimpleBaseException* this_object = reinterpret_cast<iegen::example::SimpleBaseException*>(id);
    delete this_object;
}
extern "C" JNIEXPORT jobjectid Java_com_examples_exceptions_SimpleBaseException_jConstructor(JNIEnv* env, jobject obj, jint err_num){
    
    iegen::example::SimpleBaseException* baseptr = new iegen::example::SimpleBaseException(err_num);
    return reinterpret_cast<jlong>(baseptr);
}


extern "C" JNIEXPORT jint Java_com_examples_exceptions_SimpleBaseException_jErrnum(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    iegen::example::SimpleBaseException* this_object = reinterpret_cast<iegen::example::SimpleBaseException*>(id);
    void* err_ptr = nullptr;

    try {
      auto result = this_object->errNum();
      
      return result;
    }
    catch (const std::exception& e) {
          err_ptr = new std::exception(e);
          jclass handlerCls = env->FindClass("exceptionUtils/ExceptionHandler");
          jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
          env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
          jclass handlerCls = env->FindClass("exceptionUtils/ExceptionHandler");
          jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
          env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Excepiton"));
    }

    jint result;
    return result;
}
extern "C" JNIEXPORT jobjectid Java_com_examples_exceptions_SimpleChildException_jConstructor(JNIEnv* env, jobject obj, jint err_num){
    
    iegen::example::SimpleBaseException* baseptr = new iegen::example::SimpleChildException(err_num);
    return reinterpret_cast<jlong>(baseptr);
}


extern "C" JNIEXPORT jint Java_com_examples_exceptions_SimpleChildException_jErrnum(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    iegen::example::SimpleBaseException* baseptr = reinterpret_cast<iegen::example::SimpleBaseException*>(id);
    iegen::example::SimpleChildException* this_object = dynamic_cast<iegen::example::SimpleChildException*>(baseptr);
    void* err_ptr = nullptr;

    try {
      auto result = this_object->errNum();
      
      return result;
    }
    catch (const std::exception& e) {
          err_ptr = new std::exception(e);
          jclass handlerCls = env->FindClass("exceptionUtils/ExceptionHandler");
          jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
          env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
          jclass handlerCls = env->FindClass("exceptionUtils/ExceptionHandler");
          jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
          env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Excepiton"));
    }

    jint result;
    return result;
}

extern "C" JNIEXPORT void Java_com_examples_exceptions_Integer_jSet_1this(JNIEnv* env, jobject obj, jobjectid id, jobject self){
}
extern "C" JNIEXPORT void Java_com_examples_exceptions_Integer_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    iegen::exceptions::Integer* this_object = reinterpret_cast<iegen::exceptions::Integer*>(id);
    delete this_object;
}
extern "C" JNIEXPORT jobjectid Java_com_examples_exceptions_Integer_jConstructor(JNIEnv* env, jobject obj, jint n){
    
    iegen::exceptions::Integer* baseptr = new iegen::exceptions::Integer(n);
    return reinterpret_cast<jlong>(baseptr);
}

extern "C" JNIEXPORT jint Java_com_examples_exceptions_Integer_jValue(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    iegen::exceptions::Integer* this_object = reinterpret_cast<iegen::exceptions::Integer*>(id);
    void* err_ptr = nullptr;
    try {
        auto result = this_object->value();
        
        return result;
    }
    
    catch (const std::exception& e) {
        err_ptr = new std::exception(e);
        jclass handlerCls = env->FindClass("exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Excepiton"));
    }

    jint result;
    return result;
}

extern "C" JNIEXPORT void Java_com_examples_exceptions_Exc_jSet_1this(JNIEnv* env, jobject obj, jobjectid id, jobject self){
}
extern "C" JNIEXPORT void Java_com_examples_exceptions_Exc_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    iegen::exceptions::Exc* this_object = reinterpret_cast<iegen::exceptions::Exc*>(id);
    delete this_object;
}


extern "C" JNIEXPORT jint Java_com_examples_exceptions_Exc_jGetbykey(JNIEnv* env, jobject obj, jmapobject m, jint key){
    

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
      auto result = iegen::exceptions::Exc::getByKey(jni_to_cxx_m, key);
      
      return result;
    }catch (const std::out_of_range& e) {
        err_ptr = new std::out_of_range(e);
        jclass excCls = env->FindClass("com/examples/exception_helpers/StdOutOfRange");
        jmethodID constructor = env->GetMethodID(excCls, "<init>", "(J)V");
        jobject excObj = env->NewObject(excCls, constructor, reinterpret_cast<jobjectid>(err_ptr));
        env->Throw(jthrowable(excObj));
    }catch (const std::invalid_argument& e) {
        err_ptr = new std::invalid_argument(e);
        jclass excCls = env->FindClass("com/examples/exception_helpers/StdInvalidArgument");
        jmethodID constructor = env->GetMethodID(excCls, "<init>", "(J)V");
        jobject excObj = env->NewObject(excCls, constructor, reinterpret_cast<jobjectid>(err_ptr));
        env->Throw(jthrowable(excObj));
    }catch (const std::length_error& e) {
        err_ptr = new std::length_error(e);
        jclass excCls = env->FindClass("com/examples/exception_helpers/StdLengthError");
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
          err_ptr = new std::exception(e);
          jclass handlerCls = env->FindClass("exceptionUtils/ExceptionHandler");
          jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
          env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
          jclass handlerCls = env->FindClass("exceptionUtils/ExceptionHandler");
          jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
          env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Excepiton"));
    }

    jint result;
    return result;
}


extern "C" JNIEXPORT void Java_com_examples_exceptions_Exc_jNoop(JNIEnv* env, jobject obj){
    
    void* err_ptr = nullptr;

    try {
      iegen::exceptions::Exc::noop();
      return;
    }
    catch (const std::exception& e) {
          err_ptr = new std::exception(e);
          jclass handlerCls = env->FindClass("exceptionUtils/ExceptionHandler");
          jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
          env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
          jclass handlerCls = env->FindClass("exceptionUtils/ExceptionHandler");
          jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
          env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Excepiton"));
    }


}


extern "C" JNIEXPORT jobjectid Java_com_examples_exceptions_Exc_jReturninteger(JNIEnv* env, jobject obj, jboolean do_throw){
    


    void* err_ptr = nullptr;

    try {
      auto result = iegen::exceptions::Exc::returnInteger(do_throw);
      

    iegen::exceptions::Integer* cxx_to_jni_result_baseptr = result;
    jobjectid cxx_to_jni_result = reinterpret_cast<jlong>(cxx_to_jni_result_baseptr);
      return cxx_to_jni_result;
    }catch (const std::out_of_range& e) {
        err_ptr = new std::out_of_range(e);
        jclass excCls = env->FindClass("com/examples/exception_helpers/StdOutOfRange");
        jmethodID constructor = env->GetMethodID(excCls, "<init>", "(J)V");
        jobject excObj = env->NewObject(excCls, constructor, reinterpret_cast<jobjectid>(err_ptr));
        env->Throw(jthrowable(excObj));
    }
    catch (const std::exception& e) {
          err_ptr = new std::exception(e);
          jclass handlerCls = env->FindClass("exceptionUtils/ExceptionHandler");
          jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
          env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
          jclass handlerCls = env->FindClass("exceptionUtils/ExceptionHandler");
          jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
          env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Excepiton"));
    }

    jobjectid result;
    return result;
}


extern "C" JNIEXPORT void Java_com_examples_exceptions_Exc_jRaiseerrorbytype(JNIEnv* env, jobject obj, jstring err_type){
    
    jstring jjni_to_cxx_err_typeStr = (jstring)err_type;
    auto jni_to_cxx_err_type_cstr = env->GetStringUTFChars(jjni_to_cxx_err_typeStr, 0);
    const std::string & jni_to_cxx_err_type = jni_to_cxx_err_type_cstr;
    env->ReleaseStringUTFChars(jjni_to_cxx_err_typeStr, jni_to_cxx_err_type_cstr);

    void* err_ptr = nullptr;

    try {
      iegen::exceptions::Exc::raiseErrorByType(jni_to_cxx_err_type);
      return;
    }catch (const std::runtime_error& e) {
        err_ptr = new std::runtime_error(e);
        jclass excCls = env->FindClass("com/examples/exception_helpers/StdRuntimeError");
        jmethodID constructor = env->GetMethodID(excCls, "<init>", "(J)V");
        jobject excObj = env->NewObject(excCls, constructor, reinterpret_cast<jobjectid>(err_ptr));
        env->Throw(jthrowable(excObj));
    }catch (const iegen::example::FileError& e) {
        err_ptr = new iegen::example::FileError(e);
        jclass excCls = env->FindClass("com/examples/exceptions/FileError");
        jmethodID constructor = env->GetMethodID(excCls, "<init>", "(J)V");
        jobject excObj = env->NewObject(excCls, constructor, reinterpret_cast<jobjectid>(err_ptr));
        env->Throw(jthrowable(excObj));
    }catch (const iegen::example::SystemError& e) {
        err_ptr = new iegen::example::SystemError(e);
        jclass excCls = env->FindClass("com/examples/exceptions/SystemError");
        jmethodID constructor = env->GetMethodID(excCls, "<init>", "(J)V");
        jobject excObj = env->NewObject(excCls, constructor, reinterpret_cast<jobjectid>(err_ptr));
        env->Throw(jthrowable(excObj));
    }catch (const iegen::example::SimpleChildException& e) {
        err_ptr = new iegen::example::SimpleChildException(e);
        jclass excCls = env->FindClass("com/examples/exceptions/SimpleChildException");
        jmethodID constructor = env->GetMethodID(excCls, "<init>", "(J)V");
        jobject excObj = env->NewObject(excCls, constructor, reinterpret_cast<jobjectid>(err_ptr));
        env->Throw(jthrowable(excObj));
    }catch (const iegen::example::SimpleBaseException& e) {
        err_ptr = new iegen::example::SimpleBaseException(e);
        jclass excCls = env->FindClass("com/examples/exceptions/SimpleBaseException");
        jmethodID constructor = env->GetMethodID(excCls, "<init>", "(J)V");
        jobject excObj = env->NewObject(excCls, constructor, reinterpret_cast<jobjectid>(err_ptr));
        env->Throw(jthrowable(excObj));
    }catch (const std::exception& e) {
        err_ptr = new std::exception(e);
        jclass excCls = env->FindClass("com/examples/exception_helpers/StdException");
        jmethodID constructor = env->GetMethodID(excCls, "<init>", "(J)V");
        jobject excObj = env->NewObject(excCls, constructor, reinterpret_cast<jobjectid>(err_ptr));
        env->Throw(jthrowable(excObj));
    }
    catch (...) {
          jclass handlerCls = env->FindClass("exceptionUtils/ExceptionHandler");
          jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
          env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Excepiton"));
    }


}
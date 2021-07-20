/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 07/20/2021-14:36.
 * Please do not change it manually.
 */

#include "jni.h"
#include <iostream>
#include "kotlin/wrappers/iegen_wrapper_helper.hpp"
#include "cxx/optionals/optionals.hpp"
#include "cxx/simple/task.hpp"
#include "cxx/simple/project.hpp"
#include "cxx/getters/person.hpp"
#include "cxx/enums/color.hpp"


using namespace iegen::example;
extern "C" JNIEXPORT void Java_com_examples_optionals_Optionals_jSet_1this(JNIEnv* env, jobject obj, jobjectid id, jobject self){
}
extern "C" JNIEXPORT void Java_com_examples_optionals_Optionals_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    iegen::example::Optionals* this_object = reinterpret_cast<iegen::example::Optionals*>(id);
    delete this_object;
}
extern "C" JNIEXPORT jobjectid Java_com_examples_optionals_Optionals_jConstructor(JNIEnv* env, jobject obj){
    iegen::example::Optionals* baseptr = new iegen::example::Optionals();
    return reinterpret_cast<jlong>(baseptr);
}


extern "C" JNIEXPORT jobjectid Java_com_examples_optionals_Optionals_jOptionalptrwithnullptrdefault(JNIEnv* env, jobject obj, jobjectid id, jobjectid task){
    

    auto jni_to_cxx_task =  reinterpret_cast<iegen::example::Task*>(task);

    validateID(id);
    iegen::example::Optionals* this_object = reinterpret_cast<iegen::example::Optionals*>(id);
    
    auto result = this_object->optionalPtrWithNullptrDefault(jni_to_cxx_task);


    iegen::example::Task* cxx_to_jni_result_baseptr = result;
    jobjectid cxx_to_jni_result = reinterpret_cast<jlong>(cxx_to_jni_result_baseptr);
    return cxx_to_jni_result;
}


extern "C" JNIEXPORT jobjectid Java_com_examples_optionals_Optionals_jOptionalfdptrwithnullptrdefault(JNIEnv* env, jobject obj, jobjectid id, jobjectid project){
    

    auto jni_to_cxx_project =  reinterpret_cast<iegen::example::Project*>(project);

    validateID(id);
    iegen::example::Optionals* this_object = reinterpret_cast<iegen::example::Optionals*>(id);
    
    auto result = this_object->optionalFDPtrWithNullptrDefault(jni_to_cxx_project);


    iegen::example::Project* cxx_to_jni_result_baseptr = result;
    jobjectid cxx_to_jni_result = reinterpret_cast<jlong>(cxx_to_jni_result_baseptr);
    return cxx_to_jni_result;
}


extern "C" JNIEXPORT jobjectid Java_com_examples_optionals_Optionals_jOptionalsharedptrwithnullptrdefault(JNIEnv* env, jobject obj, jobjectid id, jobjectid person){
    

    std::shared_ptr<iegen::example::Person> jni_to_cxx_person;
    if (!person) {
        jni_to_cxx_person = std::shared_ptr<iegen::example::Person>(nullptr);
    } else {
        jni_to_cxx_person = *reinterpret_cast<std::shared_ptr<iegen::example::Person>*>(person);
    }

    validateID(id);
    iegen::example::Optionals* this_object = reinterpret_cast<iegen::example::Optionals*>(id);
    
    auto result = this_object->optionalSharedPtrWithNullptrDefault(jni_to_cxx_person);

    jobjectid cxx_to_jni_result;
    if (!result) {
        cxx_to_jni_result = 0;
    } else {
        cxx_to_jni_result = reinterpret_cast<jlong>(new std::shared_ptr<iegen::example::Person>(result));
    }
    return cxx_to_jni_result;
}


extern "C" JNIEXPORT jint Java_com_examples_optionals_Optionals_jOptionalintwithdefault(JNIEnv* env, jobject obj, jobjectid id, jint value){
    


    validateID(id);
    iegen::example::Optionals* this_object = reinterpret_cast<iegen::example::Optionals*>(id);
    
    auto result = this_object->optionalIntWithDefault(value);

    return result;
}


extern "C" JNIEXPORT jlong Java_com_examples_optionals_Optionals_jOptionallongwithdefault(JNIEnv* env, jobject obj, jobjectid id, jlong value){
    


    validateID(id);
    iegen::example::Optionals* this_object = reinterpret_cast<iegen::example::Optionals*>(id);
    
    auto result = this_object->optionalLongWithDefault(value);

    return result;
}


extern "C" JNIEXPORT jdouble Java_com_examples_optionals_Optionals_jOptionaldoublewithdefault(JNIEnv* env, jobject obj, jobjectid id, jdouble value){
    


    validateID(id);
    iegen::example::Optionals* this_object = reinterpret_cast<iegen::example::Optionals*>(id);
    
    auto result = this_object->optionalDoubleWithDefault(value);

    return result;
}


extern "C" JNIEXPORT jfloat Java_com_examples_optionals_Optionals_jOptionalfloatwithdefault(JNIEnv* env, jobject obj, jobjectid id, jfloat value){
    


    validateID(id);
    iegen::example::Optionals* this_object = reinterpret_cast<iegen::example::Optionals*>(id);
    
    auto result = this_object->optionalFloatWithDefault(value);

    return result;
}


extern "C" JNIEXPORT jboolean Java_com_examples_optionals_Optionals_jOptionalboolwithdefault(JNIEnv* env, jobject obj, jobjectid id, jboolean value){
    


    validateID(id);
    iegen::example::Optionals* this_object = reinterpret_cast<iegen::example::Optionals*>(id);
    
    auto result = this_object->optionalBoolWithDefault(value);

    return result;
}


extern "C" JNIEXPORT jstring Java_com_examples_optionals_Optionals_jOptionalstringwithdefault(JNIEnv* env, jobject obj, jobjectid id, jstring optionalStr){
    
    jstring jjni_to_cxx_optionalStrStr = (jstring)optionalStr;
    auto jni_to_cxx_optionalStr_cstr = env->GetStringUTFChars(jjni_to_cxx_optionalStrStr, 0);
    std::string jni_to_cxx_optionalStr = jni_to_cxx_optionalStr_cstr;
    env->ReleaseStringUTFChars(jjni_to_cxx_optionalStrStr, jni_to_cxx_optionalStr_cstr);

    validateID(id);
    iegen::example::Optionals* this_object = reinterpret_cast<iegen::example::Optionals*>(id);
    
    auto result = this_object->optionalStringWithDefault(jni_to_cxx_optionalStr);
    jstring cxx_to_jni_result = env->NewStringUTF(result.c_str());
    return cxx_to_jni_result;
}


extern "C" JNIEXPORT jbyte Java_com_examples_optionals_Optionals_jOptionalcharwithdefault(JNIEnv* env, jobject obj, jobjectid id, jbyte symbol){
    
    char jni_to_cxx_symbol = (char)symbol;

    validateID(id);
    iegen::example::Optionals* this_object = reinterpret_cast<iegen::example::Optionals*>(id);
    
    auto result = this_object->optionalCharWithDefault(jni_to_cxx_symbol);
    jbyte cxx_to_jni_result = (jbyte)result;
    return cxx_to_jni_result;
}


extern "C" JNIEXPORT jstring Java_com_examples_optionals_Optionals_jOptionalcharpointerwithdefault(JNIEnv* env, jobject obj, jobjectid id, jstring optionalStr){
    
    auto deleter = [&env, &optionalStr](const char * ptr) {
        env->ReleaseStringUTFChars(optionalStr, ptr);
    };
    std::unique_ptr<const char, decltype(deleter)> jni_to_cxx_optionalStr_unique_ptr(
                                                                  env->GetStringUTFChars(optionalStr, NULL),
                                                                  deleter);
    const char * jni_to_cxx_optionalStr = jni_to_cxx_optionalStr_unique_ptr.get()

    validateID(id);
    iegen::example::Optionals* this_object = reinterpret_cast<iegen::example::Optionals*>(id);
    
    auto result = this_object->optionalCharPointerWithDefault(jni_to_cxx_optionalStr);
    jstring cxx_to_jni_result = env->NewStringUTF(result);
    return cxx_to_jni_result;
}


extern "C" JNIEXPORT jint Java_com_examples_optionals_Optionals_jOptionalenumwithdefault(JNIEnv* env, jobject obj, jobjectid id, jint c){
    
    auto jni_to_cxx_c = (iegen::example::Color)c;

    validateID(id);
    iegen::example::Optionals* this_object = reinterpret_cast<iegen::example::Optionals*>(id);
    
    auto result = this_object->optionalEnumWithDefault(jni_to_cxx_c);
    jint cxx_to_jni_result = (jint)result;
    return cxx_to_jni_result;
}
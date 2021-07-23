/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 07/22/2021-15:52.
 * Please do not change it manually.
 */

#include "jni.h"
#include <iostream>
#include "kotlin/wrappers/iegen_wrapper_helper.hpp"
#include "cxx/getters/many_type_template_getter.hpp"

using namespace iegen::example;


extern "C" JNIEXPORT void Java_com_examples_getters_Foo_jSet_1this(JNIEnv* env, jobject obj, jobjectid id, jobject self){
}
extern "C" JNIEXPORT void Java_com_examples_getters_Foo_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    iegen::example::Foo* this_object = reinterpret_cast<iegen::example::Foo*>(id);
    delete this_object;
}

extern "C" JNIEXPORT jint Java_com_examples_getters_Foo_jValue(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    iegen::example::Foo* this_object = reinterpret_cast<iegen::example::Foo*>(id);
    auto result = this_object->value;
    
    return result;
}

extern "C" JNIEXPORT void Java_com_examples_getters_Foo_jSetvalue(JNIEnv* env, jobject obj, jobjectid id, jint value){
    validateID(id);
    iegen::example::Foo* this_object = reinterpret_cast<iegen::example::Foo*>(id);
    
    
    this_object->value = value;
}


extern "C" JNIEXPORT void Java_com_examples_getters_Bar_jSet_1this(JNIEnv* env, jobject obj, jobjectid id, jobject self){
}
extern "C" JNIEXPORT void Java_com_examples_getters_Bar_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    iegen::example::Bar* this_object = reinterpret_cast<iegen::example::Bar*>(id);
    delete this_object;
}

extern "C" JNIEXPORT jint Java_com_examples_getters_Bar_jValue(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    iegen::example::Bar* this_object = reinterpret_cast<iegen::example::Bar*>(id);
    auto result = this_object->value;
    
    return result;
}

extern "C" JNIEXPORT void Java_com_examples_getters_Bar_jSetvalue(JNIEnv* env, jobject obj, jobjectid id, jint value){
    validateID(id);
    iegen::example::Bar* this_object = reinterpret_cast<iegen::example::Bar*>(id);
    
    
    this_object->value = value;
}


extern "C" JNIEXPORT void Java_com_examples_getters_ManyTypeTemplateGetter_jSet_1this(JNIEnv* env, jobject obj, jobjectid id, jobject self){
}
extern "C" JNIEXPORT void Java_com_examples_getters_ManyTypeTemplateGetter_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    iegen::example::ManyTypeTemplateGetter* this_object = reinterpret_cast<iegen::example::ManyTypeTemplateGetter*>(id);
    delete this_object;
}
extern "C" JNIEXPORT jobjectid Java_com_examples_getters_ManyTypeTemplateGetter_jConstructor(JNIEnv* env, jobject obj, jint v){
    
    iegen::example::ManyTypeTemplateGetter* baseptr = new iegen::example::ManyTypeTemplateGetter(v);
    return reinterpret_cast<jlong>(baseptr);
}

extern "C" JNIEXPORT jobject Java_com_examples_getters_ManyTypeTemplateGetter_jPairFooBar(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    iegen::example::ManyTypeTemplateGetter* this_object = reinterpret_cast<iegen::example::ManyTypeTemplateGetter*>(id);
    auto result = this_object->pair<iegen::example::Foo, iegen::example::Bar>();
    auto first_result = result.first;
    auto second_result = result.second;


    iegen::example::Foo* cxx_to_jni_first_result_baseptr = first_result;
    jobjectid cxx_to_jni_first_result = reinterpret_cast<jlong>(cxx_to_jni_first_result_baseptr);


    iegen::example::Bar* cxx_to_jni_second_result_baseptr = second_result;
    jobjectid cxx_to_jni_second_result = reinterpret_cast<jlong>(cxx_to_jni_second_result_baseptr);
    jobject result_first = iegen::longToObject(env, cxx_to_jni_first_result);
    jobject result_second = iegen::longToObject(env, cxx_to_jni_second_result);
    jobject cxx_to_jni_result = iegen::make_jni_object_pair(env, result_first, result_second);
    return cxx_to_jni_result;
}

extern "C" JNIEXPORT jobject Java_com_examples_getters_ManyTypeTemplateGetter_jPairwithtypeFooBar(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    iegen::example::ManyTypeTemplateGetter* this_object = reinterpret_cast<iegen::example::ManyTypeTemplateGetter*>(id);
    auto result = this_object->pairWithType<iegen::example::Foo, iegen::example::Bar>();
    auto first_result = result.first;
    auto second_result = result.second;


    iegen::example::Foo* cxx_to_jni_first_result_baseptr = first_result;
    jobjectid cxx_to_jni_first_result = reinterpret_cast<jlong>(cxx_to_jni_first_result_baseptr);


    iegen::example::Bar* cxx_to_jni_second_result_baseptr = second_result;
    jobjectid cxx_to_jni_second_result = reinterpret_cast<jlong>(cxx_to_jni_second_result_baseptr);
    jobject result_first = iegen::longToObject(env, cxx_to_jni_first_result);
    jobject result_second = iegen::longToObject(env, cxx_to_jni_second_result);
    jobject cxx_to_jni_result = iegen::make_jni_object_pair(env, result_first, result_second);
    return cxx_to_jni_result;
}

extern "C" JNIEXPORT jobject Java_com_examples_getters_ManyTypeTemplateGetter_jPairwithtypeBarBar(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    iegen::example::ManyTypeTemplateGetter* this_object = reinterpret_cast<iegen::example::ManyTypeTemplateGetter*>(id);
    auto result = this_object->pairWithType<iegen::example::Bar, iegen::example::Bar>();
    auto first_result = result.first;
    auto second_result = result.second;


    iegen::example::Bar* cxx_to_jni_first_result_baseptr = first_result;
    jobjectid cxx_to_jni_first_result = reinterpret_cast<jlong>(cxx_to_jni_first_result_baseptr);


    iegen::example::Bar* cxx_to_jni_second_result_baseptr = second_result;
    jobjectid cxx_to_jni_second_result = reinterpret_cast<jlong>(cxx_to_jni_second_result_baseptr);
    jobject result_first = iegen::longToObject(env, cxx_to_jni_first_result);
    jobject result_second = iegen::longToObject(env, cxx_to_jni_second_result);
    jobject cxx_to_jni_result = iegen::make_jni_object_pair(env, result_first, result_second);
    return cxx_to_jni_result;
}

extern "C" JNIEXPORT jint Java_com_examples_getters_ManyTypeTemplateGetter_jValue(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    iegen::example::ManyTypeTemplateGetter* this_object = reinterpret_cast<iegen::example::ManyTypeTemplateGetter*>(id);
    auto result = this_object->value;
    
    return result;
}

extern "C" JNIEXPORT void Java_com_examples_getters_ManyTypeTemplateGetter_jSetvalue(JNIEnv* env, jobject obj, jobjectid id, jint value){
    validateID(id);
    iegen::example::ManyTypeTemplateGetter* this_object = reinterpret_cast<iegen::example::ManyTypeTemplateGetter*>(id);
    
    
    this_object->value = value;
}

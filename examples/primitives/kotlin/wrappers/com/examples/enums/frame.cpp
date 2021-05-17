#include "jni.h"
#include <iostream>
#include "kotlin/wrappers/iegen_wrapper_helper.hpp"
#include "cxx/enums/frame.hpp"


using namespace iegen::example;
extern "C" JNIEXPORT void Java_com_examples_enums_Frame_jSet_1this(JNIEnv* env, jobject obj, jobjectid id, jobject self){
}
extern "C" JNIEXPORT void Java_com_examples_enums_Frame_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    iegen::example::Frame* this_object = reinterpret_cast<iegen::example::Frame*>(id);
    delete this_object;
}
extern "C" JNIEXPORT jobjectid Java_com_examples_enums_Frame_jConstructor(JNIEnv* env, jobject obj){
    iegen::example::Frame* baseptr = new iegen::example::Frame();
    return reinterpret_cast<jlong>(baseptr);
}

extern "C" JNIEXPORT jint Java_com_examples_enums_Frame_jBackgroundcolor(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    iegen::example::Frame* this_object = reinterpret_cast<iegen::example::Frame*>(id);
    auto result = this_object->backgroundColor;
    jint cxx_to_jni_result = (jint)result;
    return cxx_to_jni_result;
}

extern "C" JNIEXPORT void Java_com_examples_enums_Frame_jSetbackgroundcolor(JNIEnv* env, jobject obj, jobjectid id, jint value){
    validateID(id);
    iegen::example::Frame* this_object = reinterpret_cast<iegen::example::Frame*>(id);
    
    auto jni_to_cxx_value = (iegen::example::Color)value;
    this_object->backgroundColor = jni_to_cxx_value;
}

/**
 * This file was generated by iegen on 06/16/2021-14:49.
 * Please do not change it manually.
 */

#include "jni.h"
#include <iostream>
#include "kotlin/wrappers/iegen_wrapper_helper.hpp"
#include "cxx/inheritance/vehicle.hpp"


using namespace iegen::example;
extern "C" JNIEXPORT void Java_com_examples_inheritance_Vehicle_jSet_1this(JNIEnv* env, jobject obj, jobjectid id, jobject self){
}
extern "C" JNIEXPORT void Java_com_examples_inheritance_Vehicle_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    iegen::example::Vehicle* this_object = reinterpret_cast<iegen::example::Vehicle*>(id);
    delete this_object;
}
extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_Vehicle_jConstructor(JNIEnv* env, jobject obj, jint numberOfSeats){
    
    iegen::example::Vehicle* baseptr = new iegen::example::Vehicle(numberOfSeats);
    return reinterpret_cast<jlong>(baseptr);
}

extern "C" JNIEXPORT jint Java_com_examples_inheritance_Vehicle_jNumberofseats(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    iegen::example::Vehicle* this_object = reinterpret_cast<iegen::example::Vehicle*>(id);
    auto result = this_object->numberOfSeats();
    
    return result;
}
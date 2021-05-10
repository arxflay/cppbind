#include "jni.h"
#include <iostream>
#include "kotlin/wrappers/iegen_wrapper_helper.hpp"
#include "cxx/inheritance/bicycle.hpp"

using namespace iegen::example;
extern "C" JNIEXPORT jobjectid Java_com_examples_inheritance_Bicycle_jConstructor(JNIEnv* env, jobject obj, jint numberOfSeats){
    
    iegen::example::Bicycle* obj_ptr = new iegen::example::Bicycle(numberOfSeats);
    auto this_object = std::shared_ptr<iegen::example::Bicycle>(obj_ptr);
    std::shared_ptr<iegen::example::Vehicle> baseptr = std::dynamic_pointer_cast<iegen::example::Vehicle>(this_object);
    return reinterpret_cast<jlong>(new std::shared_ptr<iegen::example::Vehicle>(baseptr));
}
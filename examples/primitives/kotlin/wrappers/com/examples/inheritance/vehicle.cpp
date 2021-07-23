/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 07/23/2021-09:22.
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

extern "C" JNIEXPORT jint Java_com_examples_inheritance_Vehicle_jNumberofseats(JNIEnv* env, jobject obj, jobjectid id, jobject err_obj){
    validateID(id);
    iegen::example::Vehicle* this_object = reinterpret_cast<iegen::example::Vehicle*>(id);
    int err_type_id = 0;
    void* err_ptr = nullptr;
    try {
        auto result = this_object->numberOfSeats();
        
        return result;
    }
    
    catch (const std::exception& e) {
        err_type_id = 1;
        err_ptr = new std::exception(e);
    }
    catch (...) {
        err_type_id = -1;
    }

    jclass err_cls = env->GetObjectClass(err_obj);
    jfieldID typeId_field_id = env->GetFieldID(err_cls, "typeId", "I");
    jfieldID ptrId_field_id = env->GetFieldID(err_cls, "ptrId", "J");
    env->SetIntField(err_obj, typeId_field_id, err_type_id);
    env->SetLongField(err_obj, ptrId_field_id, reinterpret_cast<jobjectid>(err_ptr));

    jint result;
    return result;
}
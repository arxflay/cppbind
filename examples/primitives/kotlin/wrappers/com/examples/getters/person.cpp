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
#include "cxx/getters/person.hpp"

using namespace iegen::example;


extern "C" JNIEXPORT void Java_com_examples_getters_Person_jSet_1this(JNIEnv* env, jobject obj, jobjectid id, jobject self){
}
extern "C" JNIEXPORT void Java_com_examples_getters_Person_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    auto this_object = *reinterpret_cast<std::shared_ptr<iegen::example::Person>*>(id);
    delete &this_object;
}
extern "C" JNIEXPORT jobjectid Java_com_examples_getters_Person_jConstructor(JNIEnv* env, jobject obj, jstring name, jstring email, jint age){
    jstring jjni_to_cxx_nameStr = (jstring)name;
    auto jni_to_cxx_name_cstr = env->GetStringUTFChars(jjni_to_cxx_nameStr, 0);
    const std::string & jni_to_cxx_name = jni_to_cxx_name_cstr;
    env->ReleaseStringUTFChars(jjni_to_cxx_nameStr, jni_to_cxx_name_cstr);
    jstring jjni_to_cxx_emailStr = (jstring)email;
    auto jni_to_cxx_email_cstr = env->GetStringUTFChars(jjni_to_cxx_emailStr, 0);
    const std::string & jni_to_cxx_email = jni_to_cxx_email_cstr;
    env->ReleaseStringUTFChars(jjni_to_cxx_emailStr, jni_to_cxx_email_cstr);
    
    iegen::example::Person* obj_ptr = new iegen::example::Person(jni_to_cxx_name, jni_to_cxx_email, age);
    auto this_object = std::shared_ptr<iegen::example::Person>(obj_ptr);
    return reinterpret_cast<jlong>(new std::shared_ptr<iegen::example::Person>(this_object));
}

extern "C" JNIEXPORT jstring Java_com_examples_getters_Person_jFullname(JNIEnv* env, jobject obj, jobjectid id, jobject err_obj){
    validateID(id);
    auto this_object = *reinterpret_cast<std::shared_ptr<iegen::example::Person>*>(id);
    int err_type_id = 0;
    void* err_ptr = nullptr;
    try {
        auto result = this_object->fullName();
        jstring cxx_to_jni_result = env->NewStringUTF(result.c_str());
        return cxx_to_jni_result;
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

    jstring result;
    return result;
}

extern "C" JNIEXPORT void Java_com_examples_getters_Person_jSetfullname(JNIEnv* env, jobject obj, jobjectid id, jstring val, jobject err_obj){
    validateID(id);
    auto this_object = *reinterpret_cast<std::shared_ptr<iegen::example::Person>*>(id);jstring jjni_to_cxx_valStr = (jstring)val;
    auto jni_to_cxx_val_cstr = env->GetStringUTFChars(jjni_to_cxx_valStr, 0);
    const std::string & jni_to_cxx_val = jni_to_cxx_val_cstr;
    env->ReleaseStringUTFChars(jjni_to_cxx_valStr, jni_to_cxx_val_cstr);
    int err_type_id = 0;
    void* err_ptr = nullptr;
    try {
        this_object->setFullName(jni_to_cxx_val);
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
}


extern "C" JNIEXPORT jstring Java_com_examples_getters_Person_jEmail(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    auto this_object = *reinterpret_cast<std::shared_ptr<iegen::example::Person>*>(id);
    auto result = this_object->_email;
    jstring cxx_to_jni_result = env->NewStringUTF(result.c_str());
    return cxx_to_jni_result;
}

extern "C" JNIEXPORT jint Java_com_examples_getters_Person_jAge(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    auto this_object = *reinterpret_cast<std::shared_ptr<iegen::example::Person>*>(id);
    auto result = this_object->_age;
    
    return result;
}

extern "C" JNIEXPORT void Java_com_examples_getters_Person_jSetage(JNIEnv* env, jobject obj, jobjectid id, jint value){
    validateID(id);
    auto this_object = *reinterpret_cast<std::shared_ptr<iegen::example::Person>*>(id);
    
    
    this_object->_age = value;
}

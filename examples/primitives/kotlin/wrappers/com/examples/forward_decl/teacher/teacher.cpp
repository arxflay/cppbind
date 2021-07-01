/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 06/25/2021-15:02.
 * Please do not change it manually.
 */

#include "jni.h"
#include <iostream>
#include "kotlin/wrappers/iegen_wrapper_helper.hpp"
#include "cxx/forward_decl/teacher.hpp"
#include "cxx/forward_decl/student.hpp"


using namespace iegen::example;
extern "C" JNIEXPORT void Java_com_examples_forward_1decl_teacher_Teacher_jSet_1this(JNIEnv* env, jobject obj, jobjectid id, jobject self){
}
extern "C" JNIEXPORT void Java_com_examples_forward_1decl_teacher_Teacher_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    iegen::example::Teacher* this_object = reinterpret_cast<iegen::example::Teacher*>(id);
    delete this_object;
}
extern "C" JNIEXPORT jobjectid Java_com_examples_forward_1decl_teacher_Teacher_jConstructor(JNIEnv* env, jobject obj){
    iegen::example::Teacher* baseptr = new iegen::example::Teacher();
    return reinterpret_cast<jlong>(baseptr);
}


extern "C" JNIEXPORT void Java_com_examples_forward_1decl_teacher_Teacher_jAddstudent(JNIEnv* env, jobject obj, jobjectid id, jobjectid s){
    

    auto jni_to_cxx_s =  reinterpret_cast<iegen::example::Student*>(s);

    validateID(id);
    iegen::example::Teacher* this_object = reinterpret_cast<iegen::example::Teacher*>(id);
    
    this_object->addStudent(jni_to_cxx_s);
}


extern "C" JNIEXPORT jobjectidArray Java_com_examples_forward_1decl_teacher_Teacher_jStudents(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    iegen::example::Teacher* this_object = reinterpret_cast<iegen::example::Teacher*>(id);
    
    auto result = this_object->students();

    jobjectidArray cxx_to_jni_result = env->NewLongArray(result.size());
    size_t index = 0;
    for (auto& value : result) {
        

        iegen::example::Student* cxx_to_jni_value_baseptr = value;
        jobjectid cxx_to_jni_value = reinterpret_cast<jlong>(cxx_to_jni_value_baseptr);
        env->SetLongArrayRegion(cxx_to_jni_result, index, 1, &cxx_to_jni_value);
        ++index;
    }
    return cxx_to_jni_result;
}
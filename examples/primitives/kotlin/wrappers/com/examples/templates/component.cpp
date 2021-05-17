#include "jni.h"
#include <iostream>
#include "kotlin/wrappers/iegen_wrapper_helper.hpp"
#include "cxx/templates/component.hpp"


using namespace iegen::example;
extern "C" JNIEXPORT void Java_com_examples_templates_Component_jSet_1this(JNIEnv* env, jobject obj, jobjectid id, jobject self){
}
extern "C" JNIEXPORT void Java_com_examples_templates_Component_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    auto baseptr = *reinterpret_cast<std::shared_ptr<iegen::example::Addressable<iegen::example::Root>>*>(id);
    auto this_object = std::dynamic_pointer_cast<iegen::example::Component>(baseptr);
    delete &this_object;
}
extern "C" JNIEXPORT jobjectid Java_com_examples_templates_Component_jConstructor(JNIEnv* env, jobject obj, jobjectid parent, jstring name){
    
    auto& jni_to_cxx_parent = * reinterpret_cast<iegen::example::Root*>(parent);
    jstring jjni_to_cxx_nameStr = (jstring)name;
    auto jni_to_cxx_name_cstr = env->GetStringUTFChars(jjni_to_cxx_nameStr, 0);
    const std::string & jni_to_cxx_name = jni_to_cxx_name_cstr;
    env->ReleaseStringUTFChars(jjni_to_cxx_nameStr, jni_to_cxx_name_cstr);
    iegen::example::Component* obj_ptr = new iegen::example::Component(jni_to_cxx_parent, jni_to_cxx_name);
    auto this_object = std::shared_ptr<iegen::example::Component>(obj_ptr);
    std::shared_ptr<iegen::example::Addressable<iegen::example::Root>> baseptr = std::dynamic_pointer_cast<iegen::example::Addressable<iegen::example::Root>>(this_object);
    return reinterpret_cast<jlong>(new std::shared_ptr<iegen::example::Addressable<iegen::example::Root>>(baseptr));
}
#include "jni.h"
#include <iostream>
#include "kotlin/wrappers/iegen_wrapper_helper.hpp"
#include "cxx/getters/person.hpp"


extern "C" JNIEXPORT void Java_com_examples_getters_Person_jSet_1this(JNIEnv* env, jobject obj, jobjectid id, jobject self){
  return iegen::handleNativeCrash(env, [&] {});
}
extern "C" JNIEXPORT void Java_com_examples_getters_Person_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
  iegen::handleNativeCrash(env, [&] {
    auto this_object = iegen::RefFromLong<iegen::example::Person, iegen::example::Person>(id);
    delete &this_object;
  });
}
extern "C" JNIEXPORT jobjectid Java_com_examples_getters_Person_jConstructor(JNIEnv* env, jobject obj, jstring name){
  return iegen::handleNativeCrash(env, [&] {
        const std::string & jni_to_cxx_name = iegen::jni_to_string(env, name);
        auto this_object = iegen::allocateRef<iegen::example::Person>(jni_to_cxx_name);
        return iegen::AllocRefPtrAsLong<iegen::example::Person, iegen::example::Person>(this_object);
        }
  );
}

extern "C" JNIEXPORT jstring Java_com_examples_getters_Person_jFullname(JNIEnv* env, jobject obj, jobjectid id){
    return iegen::handleNativeCrash(env, [&] {
        validateID(id);
        auto this_object = iegen::RefFromLong<iegen::example::Person, iegen::example::Person>(id);
        auto result = this_object->fullName();
        jstring cxx_to_jni_result = iegen::string_to_jni(env, result);
        return cxx_to_jni_result;
        }
    );
}

extern "C" JNIEXPORT void Java_com_examples_getters_Person_jSetfullname(JNIEnv* env, jobject obj, jobjectid id, jstring val){
    return iegen::handleNativeCrash(env, [&] {
        validateID(id);
        auto this_object = iegen::RefFromLong<iegen::example::Person, iegen::example::Person>(id);
        
        const std::string & jni_to_cxx_val = iegen::jni_to_string(env, val);
        this_object->setFullName(jni_to_cxx_val);
        }
    );
}

/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 07/20/2021-08:30.
 * Please do not change it manually.
 */

#include "jni.h"
#include <iostream>
#include "kotlin/wrappers/iegen_wrapper_helper.hpp"
#include "cxx/containers/map.hpp"



using namespace iegen::example;

extern "C" JNIEXPORT void Java_com_examples_containers_MapItem_jSet_1this(JNIEnv* env, jobject obj, jobjectid id, jobject self){
}
extern "C" JNIEXPORT void Java_com_examples_containers_MapItem_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    iegen::example::MapItem* this_object = reinterpret_cast<iegen::example::MapItem*>(id);
    delete this_object;
}

extern "C" JNIEXPORT jint Java_com_examples_containers_MapItem_jValue(JNIEnv* env, jobject obj, jobjectid id){
    validateID(id);
    iegen::example::MapItem* this_object = reinterpret_cast<iegen::example::MapItem*>(id);
    auto result = this_object->value;
    
    return result;
}

extern "C" JNIEXPORT void Java_com_examples_containers_MapItem_jSetvalue(JNIEnv* env, jobject obj, jobjectid id, jint value){
    validateID(id);
    iegen::example::MapItem* this_object = reinterpret_cast<iegen::example::MapItem*>(id);
    
    
    this_object->value = value;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_containers_MapItem_jConstructor(JNIEnv* env, jobject obj, jint _value){
    
    iegen::example::MapItem* baseptr = new iegen::example::MapItem(_value);
    return reinterpret_cast<jlong>(baseptr);
}

extern "C" JNIEXPORT void Java_com_examples_containers_MapExamples_jSet_1this(JNIEnv* env, jobject obj, jobjectid id, jobject self){
}
extern "C" JNIEXPORT void Java_com_examples_containers_MapExamples_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    iegen::example::MapExamples* this_object = reinterpret_cast<iegen::example::MapExamples*>(id);
    delete this_object;
}
extern "C" JNIEXPORT jobjectid Java_com_examples_containers_MapExamples_jConstructor(JNIEnv* env, jobject obj){
    iegen::example::MapExamples* baseptr = new iegen::example::MapExamples();
    return reinterpret_cast<jlong>(baseptr);
}


extern "C" JNIEXPORT void Java_com_examples_containers_MapExamples_jAddstringpair(JNIEnv* env, jobject obj, jobjectid id, jobject info){
    
    jclass pairClass_info = env->FindClass("kotlin/Pair");

    jfieldID firstID_info = env->GetFieldID(pairClass_info, "first", "Ljava/lang/Object;");
    jfieldID secondID_info = env->GetFieldID(pairClass_info, "second", "Ljava/lang/Object;");

    auto firstObject_info = env->GetObjectField(info, firstID_info);
    auto secondObject_info = env->GetObjectField(info, secondID_info);
    auto first_info = iegen::extractObject(env, firstObject_info);
    auto second_info = iegen::extractObject(env, secondObject_info);
    jstring jjni_to_cxx_first_infoStr = (jstring)first_info;
    auto jni_to_cxx_first_info_cstr = env->GetStringUTFChars(jjni_to_cxx_first_infoStr, 0);
    std::string jni_to_cxx_first_info = jni_to_cxx_first_info_cstr;
    env->ReleaseStringUTFChars(jjni_to_cxx_first_infoStr, jni_to_cxx_first_info_cstr);
    jstring jjni_to_cxx_second_infoStr = (jstring)second_info;
    auto jni_to_cxx_second_info_cstr = env->GetStringUTFChars(jjni_to_cxx_second_infoStr, 0);
    std::string jni_to_cxx_second_info = jni_to_cxx_second_info_cstr;
    env->ReleaseStringUTFChars(jjni_to_cxx_second_infoStr, jni_to_cxx_second_info_cstr);
    std::pair<std::string, std::string> jni_to_cxx_info = std::make_pair(jni_to_cxx_first_info, jni_to_cxx_second_info);

    validateID(id);
    iegen::example::MapExamples* this_object = reinterpret_cast<iegen::example::MapExamples*>(id);
    
    this_object->addStringPair(jni_to_cxx_info);
}


extern "C" JNIEXPORT void Java_com_examples_containers_MapExamples_jAddintmap(JNIEnv* env, jobject obj, jobjectid id, jmapobject info){
    

    std::map<int, int> jni_to_cxx_info;
    auto _jni_to_cxx_info = iegen::extract_jni_pair(env, info);
    auto tmp_key_jni_to_cxx_info = iegen::getIntArray(env, _jni_to_cxx_info.first);
    auto tmp_val_jni_to_cxx_info = iegen::getIntArray(env, _jni_to_cxx_info.second);
    for (size_t i = 0; i < tmp_key_jni_to_cxx_info.size(); ++i) {
        auto ktmp = tmp_key_jni_to_cxx_info[i];
        auto vtmp = tmp_val_jni_to_cxx_info[i];
        
        
        jni_to_cxx_info.insert({ ktmp, vtmp });
    }

    validateID(id);
    iegen::example::MapExamples* this_object = reinterpret_cast<iegen::example::MapExamples*>(id);
    
    this_object->addIntMap(jni_to_cxx_info);
}


extern "C" JNIEXPORT void Java_com_examples_containers_MapExamples_jAddstringmap(JNIEnv* env, jobject obj, jobjectid id, jmapobject info){
    

    std::map<std::string, std::string> jni_to_cxx_info;
    auto _jni_to_cxx_info = iegen::extract_jni_pair(env, info);
    auto tmp_key_jni_to_cxx_info = iegen::getObjectArray(env, _jni_to_cxx_info.first);
    auto tmp_val_jni_to_cxx_info = iegen::getObjectArray(env, _jni_to_cxx_info.second);
    for (size_t i = 0; i < tmp_key_jni_to_cxx_info.size(); ++i) {
        auto ktmp = tmp_key_jni_to_cxx_info[i];
        auto vtmp = tmp_val_jni_to_cxx_info[i];
        jstring jjni_to_cxx_ktmpStr = (jstring)ktmp;
        auto jni_to_cxx_ktmp_cstr = env->GetStringUTFChars(jjni_to_cxx_ktmpStr, 0);
        std::string jni_to_cxx_ktmp = jni_to_cxx_ktmp_cstr;
        env->ReleaseStringUTFChars(jjni_to_cxx_ktmpStr, jni_to_cxx_ktmp_cstr);
        jstring jjni_to_cxx_vtmpStr = (jstring)vtmp;
        auto jni_to_cxx_vtmp_cstr = env->GetStringUTFChars(jjni_to_cxx_vtmpStr, 0);
        std::string jni_to_cxx_vtmp = jni_to_cxx_vtmp_cstr;
        env->ReleaseStringUTFChars(jjni_to_cxx_vtmpStr, jni_to_cxx_vtmp_cstr);
        jni_to_cxx_info.insert({ jni_to_cxx_ktmp, jni_to_cxx_vtmp });
    }

    validateID(id);
    iegen::example::MapExamples* this_object = reinterpret_cast<iegen::example::MapExamples*>(id);
    
    this_object->addStringMap(jni_to_cxx_info);
}


extern "C" JNIEXPORT jmapobject Java_com_examples_containers_MapExamples_jGetstringmap(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    iegen::example::MapExamples* this_object = reinterpret_cast<iegen::example::MapExamples*>(id);
    
    auto result = this_object->getStringMap();

    jobjectArray tmp_key_cxx_to_jni_result = env->NewObjectArray(result.size(), env->FindClass("java/lang/Object"), NULL);
    jobjectArray tmp_val_cxx_to_jni_result = env->NewObjectArray(result.size(), env->FindClass("java/lang/Object"), NULL);
    size_t index = 0;
    for (auto& value : result) {
        auto key = value.first;
        auto val = value.second;
        jstring cxx_to_jni_key = env->NewStringUTF(key.c_str());
        env->SetObjectArrayElement(tmp_key_cxx_to_jni_result, index, cxx_to_jni_key);
        jstring cxx_to_jni_val = env->NewStringUTF(val.c_str());
        env->SetObjectArrayElement(tmp_val_cxx_to_jni_result, index, cxx_to_jni_val);
        ++index;
    }
    jmapobject cxx_to_jni_result = iegen::make_jni_object_pair(env, tmp_key_cxx_to_jni_result, tmp_val_cxx_to_jni_result);
    return cxx_to_jni_result;
}


extern "C" JNIEXPORT jmapobject Java_com_examples_containers_MapExamples_jGetintmap(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    iegen::example::MapExamples* this_object = reinterpret_cast<iegen::example::MapExamples*>(id);
    
    auto result = this_object->getIntMap();

    auto tmp_key_cxx_to_jni_result = env->NewIntArray(result.size());
    auto tmp_val_cxx_to_jni_result = env->NewIntArray(result.size());
    size_t index = 0;
    for (auto& value : result) {
        auto key = value.first;
        auto val = value.second;
        
        env->SetIntArrayRegion(tmp_key_cxx_to_jni_result, index, 1, &key);
        
        env->SetIntArrayRegion(tmp_val_cxx_to_jni_result, index, 1, &val);
        ++index;
    }
    jmapobject cxx_to_jni_result = iegen::make_jni_object_pair(env, tmp_key_cxx_to_jni_result, tmp_val_cxx_to_jni_result);
    return cxx_to_jni_result;
}


extern "C" JNIEXPORT void Java_com_examples_containers_MapExamples_jAddmixedmap(JNIEnv* env, jobject obj, jobjectid id, jmapobject info){
    

    std::map<std::string, MapItem> jni_to_cxx_info;
    auto _jni_to_cxx_info = iegen::extract_jni_pair(env, info);
    auto tmp_key_jni_to_cxx_info = iegen::getObjectArray(env, _jni_to_cxx_info.first);
    auto tmp_val_jni_to_cxx_info = iegen::getLongArray(env, _jni_to_cxx_info.second);
    for (size_t i = 0; i < tmp_key_jni_to_cxx_info.size(); ++i) {
        auto ktmp = tmp_key_jni_to_cxx_info[i];
        auto vtmp = tmp_val_jni_to_cxx_info[i];
        jstring jjni_to_cxx_ktmpStr = (jstring)ktmp;
        auto jni_to_cxx_ktmp_cstr = env->GetStringUTFChars(jjni_to_cxx_ktmpStr, 0);
        std::string jni_to_cxx_ktmp = jni_to_cxx_ktmp_cstr;
        env->ReleaseStringUTFChars(jjni_to_cxx_ktmpStr, jni_to_cxx_ktmp_cstr);
        
        auto& jni_to_cxx_vtmp = * reinterpret_cast<iegen::example::MapItem*>(vtmp);
        jni_to_cxx_info.insert({ jni_to_cxx_ktmp, jni_to_cxx_vtmp });
    }

    validateID(id);
    iegen::example::MapExamples* this_object = reinterpret_cast<iegen::example::MapExamples*>(id);
    
    this_object->addMixedMap(jni_to_cxx_info);
}


extern "C" JNIEXPORT jmapobject Java_com_examples_containers_MapExamples_jGetmixedmap(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    iegen::example::MapExamples* this_object = reinterpret_cast<iegen::example::MapExamples*>(id);
    
    auto result = this_object->getMixedMap();

    jobjectArray tmp_key_cxx_to_jni_result = env->NewObjectArray(result.size(), env->FindClass("java/lang/Object"), NULL);
    auto tmp_val_cxx_to_jni_result = env->NewLongArray(result.size());
    size_t index = 0;
    for (auto& value : result) {
        auto key = value.first;
        auto val = value.second;
        jstring cxx_to_jni_key = env->NewStringUTF(key.c_str());
        env->SetObjectArrayElement(tmp_key_cxx_to_jni_result, index, cxx_to_jni_key);
        
        iegen::example::MapItem* _val = new iegen::example::MapItem(val);

        iegen::example::MapItem* cxx_to_jni_val_baseptr = _val;
        jobjectid cxx_to_jni_val = reinterpret_cast<jlong>(cxx_to_jni_val_baseptr);
        env->SetLongArrayRegion(tmp_val_cxx_to_jni_result, index, 1, &cxx_to_jni_val);
        ++index;
    }
    jmapobject cxx_to_jni_result = iegen::make_jni_object_pair(env, tmp_key_cxx_to_jni_result, tmp_val_cxx_to_jni_result);
    return cxx_to_jni_result;
}
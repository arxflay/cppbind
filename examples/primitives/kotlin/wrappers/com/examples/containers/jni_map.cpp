/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 09/28/2022-13:24.
 * Please do not change it manually.
 */

#include "jni.h"
#include <iostream>
#include <cxxabi.h>
#include <string.h>
#include <type_traits>
#include "kotlin/wrappers/c_helpers.h"
#include "kotlin/wrappers/cppbind_wrapper_helper.hpp"
#include "cxx/containers/map.hpp"

extern const char* CPPBIND_STD_STDEXCEPTION;

const char* CPPBIND_CPPBIND_EXAMPLE_MAPITEM = "cppbind::example::MapItem";
const char* CPPBIND_CPPBIND_EXAMPLE_MAPEXAMPLES = "cppbind::example::MapExamples";


extern "C" JNIEXPORT void Java_com_examples_containers_MapItem_jFinalize(JNIEnv*, jobject, jobjectid id){
    using namespace cppbind::example;
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    delete static_cast<cppbind::example::MapItem*>(cppbind_obj_id_ptr);
    free(cppbind_obj_id->type);
    delete cppbind_obj_id;
}

extern "C" JNIEXPORT jlong Java_com_examples_containers_MapItem_jGetcxxid(JNIEnv*, jobject, jobjectid id) {
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id->ptr;
    return reinterpret_cast<jlong>(static_cast<cppbind::example::MapItem*>(cppbind_obj_id_ptr));
}
extern "C" JNIEXPORT jint Java_com_examples_containers_MapItem_jValue([[maybe_unused]] JNIEnv* env, jobject, jobjectid id){
    using namespace cppbind::example;
    validateID(id);
    
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<cppbind::example::MapItem*>(cppbind_obj_id_ptr);
    decltype(auto) result = jnitocxxid->value;
    
    return result;
}

extern "C" JNIEXPORT void Java_com_examples_containers_MapItem_jSetvalue([[maybe_unused]] JNIEnv* env, jobject, jobjectid id, jint value, ...){
    using namespace cppbind::example;
    validateID(id);
    
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<cppbind::example::MapItem*>(cppbind_obj_id_ptr);

    
    jnitocxxid->value = value;
}


extern "C" JNIEXPORT jobjectid Java_com_examples_containers_MapItem_jConstructor([[maybe_unused]] JNIEnv* env, jobject, jint _value, ...){
    using namespace cppbind::example;
    
    try {
        cppbind::example::MapItem* this_object = new cppbind::example::MapItem(_value);
        return reinterpret_cast<jlong>(new CppBindCObject {strdup(CPPBIND_CPPBIND_EXAMPLE_MAPITEM), this_object});
    }
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }
    jobjectid result {};
    return result;
}

extern "C" JNIEXPORT void Java_com_examples_containers_MapExamples_jFinalize(JNIEnv*, jobject, jobjectid id){
    using namespace cppbind::example;
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    delete static_cast<cppbind::example::MapExamples*>(cppbind_obj_id_ptr);
    free(cppbind_obj_id->type);
    delete cppbind_obj_id;
}

extern "C" JNIEXPORT jlong Java_com_examples_containers_MapExamples_jGetcxxid(JNIEnv*, jobject, jobjectid id) {
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id->ptr;
    return reinterpret_cast<jlong>(static_cast<cppbind::example::MapExamples*>(cppbind_obj_id_ptr));
}

extern "C" JNIEXPORT jobjectid Java_com_examples_containers_MapExamples_jConstructor([[maybe_unused]] JNIEnv* env, jobject){
    using namespace cppbind::example;
    try {
        cppbind::example::MapExamples* this_object = new cppbind::example::MapExamples();
        return reinterpret_cast<jlong>(new CppBindCObject {strdup(CPPBIND_CPPBIND_EXAMPLE_MAPEXAMPLES), this_object});
    }
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }
    jobjectid result {};
    return result;
}


extern "C" JNIEXPORT void Java_com_examples_containers_MapExamples_jAddstringpair([[maybe_unused]] JNIEnv* env, jobject, jobjectid id, jobject info, ...){
    using namespace cppbind::example;
    
    jclass pairClass_info = env->FindClass("kotlin/Pair");

    jfieldID firstID_info = env->GetFieldID(pairClass_info, "first", "Ljava/lang/Object;");
    jfieldID secondID_info = env->GetFieldID(pairClass_info, "second", "Ljava/lang/Object;");

    auto firstObject_info = env->GetObjectField(info, firstID_info);
    auto secondObject_info = env->GetObjectField(info, secondID_info);
    auto first_info = cppbind::extractObject(env, firstObject_info);
    auto second_info = cppbind::extractObject(env, secondObject_info);
    jstring jjnitocxxfirst_infoStr = static_cast<jstring>(first_info);
    auto jnitocxxfirst_info_cstr = env->GetStringUTFChars(jjnitocxxfirst_infoStr, 0);
    std::string jnitocxxfirst_info = jnitocxxfirst_info_cstr;
    env->ReleaseStringUTFChars(jjnitocxxfirst_infoStr, jnitocxxfirst_info_cstr);
    jstring jjnitocxxsecond_infoStr = static_cast<jstring>(second_info);
    auto jnitocxxsecond_info_cstr = env->GetStringUTFChars(jjnitocxxsecond_infoStr, 0);
    std::string jnitocxxsecond_info = jnitocxxsecond_info_cstr;
    env->ReleaseStringUTFChars(jjnitocxxsecond_infoStr, jnitocxxsecond_info_cstr);
    std::pair<std::string, std::string> jnitocxxinfo = std::make_pair(jnitocxxfirst_info, jnitocxxsecond_info);

    validateID(id);
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<cppbind::example::MapExamples*>(cppbind_obj_id_ptr);
    
    try {
        jnitocxxid->addStringPair(jnitocxxinfo);
        return;
    }
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }


}


extern "C" JNIEXPORT void Java_com_examples_containers_MapExamples_jAdddoublepair([[maybe_unused]] JNIEnv* env, jobject, jobjectid id, jobject info, ...){
    using namespace cppbind::example;
    
    jclass pairClass_info = env->FindClass("kotlin/Pair");

    jfieldID firstID_info = env->GetFieldID(pairClass_info, "first", "Ljava/lang/Object;");
    jfieldID secondID_info = env->GetFieldID(pairClass_info, "second", "Ljava/lang/Object;");

    auto firstObject_info = env->GetObjectField(info, firstID_info);
    auto secondObject_info = env->GetObjectField(info, secondID_info);
    auto first_info = cppbind::extractDouble(env, firstObject_info);
    auto second_info = cppbind::extractDouble(env, secondObject_info);


    std::pair<double, double> jnitocxxinfo = std::make_pair(first_info, second_info);

    validateID(id);
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<cppbind::example::MapExamples*>(cppbind_obj_id_ptr);
    
    try {
        jnitocxxid->addDoublePair(jnitocxxinfo);
        return;
    }
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }


}


extern "C" JNIEXPORT void Java_com_examples_containers_MapExamples_jAddintmap([[maybe_unused]] JNIEnv* env, jobject, jobjectid id, jmapobject info, ...){
    using namespace cppbind::example;
    

    std::map<int, int> jnitocxxinfo;
    auto _jnitocxxinfo = cppbind::extract_jni_pair(env, info);
    auto tmp_key_jnitocxxinfo = cppbind::getIntArray(env, _jnitocxxinfo.first);
    auto tmp_val_jnitocxxinfo = cppbind::getIntArray(env, _jnitocxxinfo.second);
    for (size_t i = 0; i < tmp_key_jnitocxxinfo.size(); ++i) {
        auto ktmp_info = tmp_key_jnitocxxinfo[i];
        auto vtmp_info = tmp_val_jnitocxxinfo[i];
        
        
        jnitocxxinfo.insert({ ktmp_info, vtmp_info });
    }

    validateID(id);
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<cppbind::example::MapExamples*>(cppbind_obj_id_ptr);
    
    try {
        jnitocxxid->addIntMap(jnitocxxinfo);
        return;
    }
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }


}


extern "C" JNIEXPORT void Java_com_examples_containers_MapExamples_jAddstringmap([[maybe_unused]] JNIEnv* env, jobject, jobjectid id, jmapobject info, ...){
    using namespace cppbind::example;
    

    std::map<std::string, std::string> jnitocxxinfo;
    auto _jnitocxxinfo = cppbind::extract_jni_pair(env, info);
    auto tmp_key_jnitocxxinfo = cppbind::getObjectArray(env, _jnitocxxinfo.first);
    auto tmp_val_jnitocxxinfo = cppbind::getObjectArray(env, _jnitocxxinfo.second);
    for (size_t i = 0; i < tmp_key_jnitocxxinfo.size(); ++i) {
        auto ktmp_info = tmp_key_jnitocxxinfo[i];
        auto vtmp_info = tmp_val_jnitocxxinfo[i];
        jstring jjnitocxxktmp_infoStr = static_cast<jstring>(ktmp_info);
        auto jnitocxxktmp_info_cstr = env->GetStringUTFChars(jjnitocxxktmp_infoStr, 0);
        std::string jnitocxxktmp_info = jnitocxxktmp_info_cstr;
        env->ReleaseStringUTFChars(jjnitocxxktmp_infoStr, jnitocxxktmp_info_cstr);
        jstring jjnitocxxvtmp_infoStr = static_cast<jstring>(vtmp_info);
        auto jnitocxxvtmp_info_cstr = env->GetStringUTFChars(jjnitocxxvtmp_infoStr, 0);
        std::string jnitocxxvtmp_info = jnitocxxvtmp_info_cstr;
        env->ReleaseStringUTFChars(jjnitocxxvtmp_infoStr, jnitocxxvtmp_info_cstr);
        jnitocxxinfo.insert({ jnitocxxktmp_info, jnitocxxvtmp_info });
    }

    validateID(id);
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<cppbind::example::MapExamples*>(cppbind_obj_id_ptr);
    
    try {
        jnitocxxid->addStringMap(jnitocxxinfo);
        return;
    }
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }


}


extern "C" JNIEXPORT jmapobject Java_com_examples_containers_MapExamples_jGetstringmap([[maybe_unused]] JNIEnv* env, jobject, jobjectid id){
    using namespace cppbind::example;
    
    validateID(id);
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<cppbind::example::MapExamples*>(cppbind_obj_id_ptr);
    
    try {
        decltype(auto) result = jnitocxxid->getStringMap();
        
        jobjectArray tmp_key_cxxtojniresult = env->NewObjectArray(result.size(), env->FindClass("java/lang/Object"), NULL);
        jobjectArray tmp_val_cxxtojniresult = env->NewObjectArray(result.size(), env->FindClass("java/lang/Object"), NULL);
        size_t index_result  = 0;
        for (auto& value_result : result) {
            auto key_result = value_result.first;
            auto val_result = value_result.second;
            jstring cxxtojnikey_result = env->NewStringUTF(key_result.data());
            env->SetObjectArrayElement(tmp_key_cxxtojniresult, index_result, cxxtojnikey_result);
            jstring cxxtojnival_result = env->NewStringUTF(val_result.data());
            env->SetObjectArrayElement(tmp_val_cxxtojniresult, index_result, cxxtojnival_result);
            ++index_result;
        }
        jmapobject cxxtojniresult = cppbind::make_jni_object_pair(env, tmp_key_cxxtojniresult, tmp_val_cxxtojniresult);
        return cxxtojniresult;
    }
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }

    jmapobject result {};
    return result;
}


extern "C" JNIEXPORT jmapobject Java_com_examples_containers_MapExamples_jGetintmap([[maybe_unused]] JNIEnv* env, jobject, jobjectid id){
    using namespace cppbind::example;
    
    validateID(id);
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<cppbind::example::MapExamples*>(cppbind_obj_id_ptr);
    
    try {
        decltype(auto) result = jnitocxxid->getIntMap();
        
        auto tmp_key_cxxtojniresult = env->NewIntArray(result.size());
        auto tmp_val_cxxtojniresult = env->NewIntArray(result.size());
        size_t index_result  = 0;
        for (auto& value_result : result) {
            auto key_result = value_result.first;
            auto val_result = value_result.second;
            
            env->SetIntArrayRegion(tmp_key_cxxtojniresult, index_result, 1, &key_result);
            
            env->SetIntArrayRegion(tmp_val_cxxtojniresult, index_result, 1, &val_result);
            ++index_result;
        }
        jmapobject cxxtojniresult = cppbind::make_jni_object_pair(env, tmp_key_cxxtojniresult, tmp_val_cxxtojniresult);
        return cxxtojniresult;
    }
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }

    jmapobject result {};
    return result;
}


extern "C" JNIEXPORT void Java_com_examples_containers_MapExamples_jAddmixedmap([[maybe_unused]] JNIEnv* env, jobject, jobjectid id, jmapobject info, ...){
    using namespace cppbind::example;
    

    std::map<std::string, MapItem> jnitocxxinfo;
    auto _jnitocxxinfo = cppbind::extract_jni_pair(env, info);
    auto tmp_key_jnitocxxinfo = cppbind::getObjectArray(env, _jnitocxxinfo.first);
    auto tmp_val_jnitocxxinfo = cppbind::getLongArray(env, _jnitocxxinfo.second);
    for (size_t i = 0; i < tmp_key_jnitocxxinfo.size(); ++i) {
        auto ktmp_info = tmp_key_jnitocxxinfo[i];
        auto vtmp_info = tmp_val_jnitocxxinfo[i];
        jstring jjnitocxxktmp_infoStr = static_cast<jstring>(ktmp_info);
        auto jnitocxxktmp_info_cstr = env->GetStringUTFChars(jjnitocxxktmp_infoStr, 0);
        std::string jnitocxxktmp_info = jnitocxxktmp_info_cstr;
        env->ReleaseStringUTFChars(jjnitocxxktmp_infoStr, jnitocxxktmp_info_cstr);
        
        auto cppbind_obj_vtmp_info = reinterpret_cast<CppBindCObject*>(vtmp_info);
        auto cppbind_obj_vtmp_info_ptr = cppbind_obj_vtmp_info ? cppbind_obj_vtmp_info->ptr : nullptr;
        auto& jnitocxxvtmp_info = *static_cast<cppbind::example::MapItem*>(cppbind_obj_vtmp_info_ptr);
        jnitocxxinfo.insert({ jnitocxxktmp_info, jnitocxxvtmp_info });
    }

    validateID(id);
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<cppbind::example::MapExamples*>(cppbind_obj_id_ptr);
    
    try {
        jnitocxxid->addMixedMap(jnitocxxinfo);
        return;
    }
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }


}


extern "C" JNIEXPORT jmapobject Java_com_examples_containers_MapExamples_jGetmixedmap([[maybe_unused]] JNIEnv* env, jobject, jobjectid id){
    using namespace cppbind::example;
    
    validateID(id);
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<cppbind::example::MapExamples*>(cppbind_obj_id_ptr);
    
    try {
        decltype(auto) result = jnitocxxid->getMixedMap();
        
        jobjectArray tmp_key_cxxtojniresult = env->NewObjectArray(result.size(), env->FindClass("java/lang/Object"), NULL);
        auto tmp_val_cxxtojniresult = env->NewLongArray(result.size());
        size_t index_result  = 0;
        for (auto& value_result : result) {
            auto key_result = value_result.first;
            auto val_result = value_result.second;
            jstring cxxtojnikey_result = env->NewStringUTF(key_result.data());
            env->SetObjectArrayElement(tmp_key_cxxtojniresult, index_result, cxxtojnikey_result);
            cppbind::example::MapItem* cxxtojnival_result_ptr = new cppbind::example::MapItem(val_result);
            char* type_val_result = strdup(CPPBIND_CPPBIND_EXAMPLE_MAPITEM);
            CppBindCObject* cppbind_obj_cxxtojnival_result = new CppBindCObject {type_val_result, cxxtojnival_result_ptr};
            jobjectid cxxtojnival_result = reinterpret_cast<jlong>(cppbind_obj_cxxtojnival_result);
            env->SetLongArrayRegion(tmp_val_cxxtojniresult, index_result, 1, &cxxtojnival_result);
            ++index_result;
        }
        jmapobject cxxtojniresult = cppbind::make_jni_object_pair(env, tmp_key_cxxtojniresult, tmp_val_cxxtojniresult);
        return cxxtojniresult;
    }
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }

    jmapobject result {};
    return result;
}


extern "C" JNIEXPORT void Java_com_examples_containers_MapExamples_jCheckcomparatorargument([[maybe_unused]] JNIEnv* env, jobject, jobjectid id, jmapobject arg1, ...){
    using namespace cppbind::example;
    

    std::map<int, int, std::greater<int>> jnitocxxarg1;
    auto _jnitocxxarg1 = cppbind::extract_jni_pair(env, arg1);
    auto tmp_key_jnitocxxarg1 = cppbind::getIntArray(env, _jnitocxxarg1.first);
    auto tmp_val_jnitocxxarg1 = cppbind::getIntArray(env, _jnitocxxarg1.second);
    for (size_t i = 0; i < tmp_key_jnitocxxarg1.size(); ++i) {
        auto ktmp_arg1 = tmp_key_jnitocxxarg1[i];
        auto vtmp_arg1 = tmp_val_jnitocxxarg1[i];
        
        
        jnitocxxarg1.insert({ ktmp_arg1, vtmp_arg1 });
    }

    validateID(id);
    auto cppbind_obj_id = reinterpret_cast<CppBindCObject*>(id);
    auto cppbind_obj_id_ptr = cppbind_obj_id ? cppbind_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<cppbind::example::MapExamples*>(cppbind_obj_id_ptr);
    
    try {
        jnitocxxid->checkComparatorArgument(jnitocxxarg1);
        return;
    }
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/cppbind/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }


}

extern "C" JNIEXPORT jstring Java_com_examples_containers_MapKt_jGettypebyid(JNIEnv* env, jclass, jobjectid id) {
    validateID(id);
    return env->NewStringUTF(reinterpret_cast<CppBindCObject*>(id)->type);
}

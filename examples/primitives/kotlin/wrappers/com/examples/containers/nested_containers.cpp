/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 02/24/2022-13:21.
 * Please do not change it manually.
 */

#include "jni.h"
#include <iostream>
#include <cxxabi.h>
#include <string.h>
#include <type_traits>
#include "kotlin/wrappers/c_helpers.h"
#include "kotlin/wrappers/iegen_wrapper_helper.hpp"
#include "cxx/containers/nested_containers.hpp"

using namespace iegen::example;


extern "C" JNIEXPORT void Java_com_examples_containers_NestedExamples_jFinalize(JNIEnv* env, jobject obj, jobjectid id){
    
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<iegen::example::NestedExamples*>(iegen_obj_id_ptr);
    delete jnitocxxid;
    free(iegen_obj_id->type);
    delete iegen_obj_id;
}

extern "C" JNIEXPORT jobjectid Java_com_examples_containers_NestedExamples_jConstructor(JNIEnv* env, jobject obj){
    try {
        iegen::example::NestedExamples* ptr = new iegen::example::NestedExamples();
        return reinterpret_cast<jlong>(new IEGenCObject {strdup("iegen::example::NestedExamples"), ptr});
    }
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/iegen/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/iegen/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }
    jobjectid result {};
    return result;
}


extern "C" JNIEXPORT void Java_com_examples_containers_NestedExamples_jSetnestedintvector(JNIEnv* env, jobject obj, jobjectid id, jobjectArray v){
    

    std::vector<std::vector<int>> jnitocxxv;
    auto _jnitocxxv = iegen::getObjectArray(env, v);
    for (auto& value__jnitocxxv : _jnitocxxv) {
        
        std::vector<int> jnitocxxvalue__jnitocxxv;
        auto _jnitocxxvalue__jnitocxxv = iegen::getIntArray(env, value__jnitocxxv);
        for (auto& value__jnitocxxvalue__jnitocxxv : _jnitocxxvalue__jnitocxxv) {
            
            jnitocxxvalue__jnitocxxv.emplace_back(value__jnitocxxvalue__jnitocxxv);
        }
        jnitocxxv.emplace_back(jnitocxxvalue__jnitocxxv);
    }

    validateID(id);
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<iegen::example::NestedExamples*>(iegen_obj_id_ptr);
    
    try {
        jnitocxxid->setNestedIntVector(jnitocxxv);
        return;
    }
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/iegen/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/iegen/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }


}


extern "C" JNIEXPORT jobjectArray Java_com_examples_containers_NestedExamples_jGetnestedintvector(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<iegen::example::NestedExamples*>(iegen_obj_id_ptr);
    
    try {
        const auto& result = jnitocxxid->getNestedIntVector();
        
        jobjectArray cxxtojniresult = env->NewObjectArray(result.size(), env->FindClass("java/lang/Object"), NULL);
        size_t index_result = 0;
        for (auto& value_result : result) {
            
            jintArray cxxtojnivalue_result = env->NewIntArray(value_result.size());
            size_t index_value_result = 0;
            for (auto& value_value_result : value_result) {
                
                env->SetIntArrayRegion(cxxtojnivalue_result, index_value_result, 1, &value_value_result);
                ++index_value_result ;
            }
            env->SetObjectArrayElement(cxxtojniresult, index_result, cxxtojnivalue_result);
            ++index_result ;
        }
        return cxxtojniresult;
    }
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/iegen/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/iegen/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }

    jobjectArray result {};
    return result;
}


extern "C" JNIEXPORT void Java_com_examples_containers_NestedExamples_jSetnestedintmap(JNIEnv* env, jobject obj, jobjectid id, jmapobject m){
    

    std::map<int, std::map<int, int>> jnitocxxm;
    auto _jnitocxxm = iegen::extract_jni_pair(env, m);
    auto tmp_key_jnitocxxm = iegen::getIntArray(env, _jnitocxxm.first);
    auto tmp_val_jnitocxxm = iegen::getObjectArray(env, _jnitocxxm.second);
    for (size_t i = 0; i < tmp_key_jnitocxxm.size(); ++i) {
        auto ktmp_m = tmp_key_jnitocxxm[i];
        auto vtmp_m = tmp_val_jnitocxxm[i];
        
        
        std::map<int, int> jnitocxxvtmp_m;
        auto _jnitocxxvtmp_m = iegen::extract_jni_pair(env, vtmp_m);
        auto tmp_key_jnitocxxvtmp_m = iegen::getIntArray(env, _jnitocxxvtmp_m.first);
        auto tmp_val_jnitocxxvtmp_m = iegen::getIntArray(env, _jnitocxxvtmp_m.second);
        for (size_t i = 0; i < tmp_key_jnitocxxvtmp_m.size(); ++i) {
            auto ktmp_vtmp_m = tmp_key_jnitocxxvtmp_m[i];
            auto vtmp_vtmp_m = tmp_val_jnitocxxvtmp_m[i];
            
            
            jnitocxxvtmp_m.insert({ ktmp_vtmp_m, vtmp_vtmp_m });
        }
        jnitocxxm.insert({ ktmp_m, jnitocxxvtmp_m });
    }

    validateID(id);
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<iegen::example::NestedExamples*>(iegen_obj_id_ptr);
    
    try {
        jnitocxxid->setNestedIntMap(jnitocxxm);
        return;
    }
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/iegen/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/iegen/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }


}


extern "C" JNIEXPORT jmapobject Java_com_examples_containers_NestedExamples_jGetnestedintmap(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<iegen::example::NestedExamples*>(iegen_obj_id_ptr);
    
    try {
        const auto& result = jnitocxxid->getNestedIntMap();
        
        auto tmp_key_cxxtojniresult = env->NewIntArray(result.size());
        jobjectArray tmp_val_cxxtojniresult = env->NewObjectArray(result.size(), env->FindClass("java/lang/Object"), NULL);
        size_t index_result  = 0;
        for (auto& value_result : result) {
            auto key_result = value_result.first;
            auto val_result = value_result.second;
            
            env->SetIntArrayRegion(tmp_key_cxxtojniresult, index_result, 1, &key_result);
            
            auto tmp_key_cxxtojnival_result = env->NewIntArray(val_result.size());
            auto tmp_val_cxxtojnival_result = env->NewIntArray(val_result.size());
            size_t index_val_result  = 0;
            for (auto& value_val_result : val_result) {
                auto key_val_result = value_val_result.first;
                auto val_val_result = value_val_result.second;
                
                env->SetIntArrayRegion(tmp_key_cxxtojnival_result, index_val_result, 1, &key_val_result);
                
                env->SetIntArrayRegion(tmp_val_cxxtojnival_result, index_val_result, 1, &val_val_result);
                ++index_val_result;
            }
            jmapobject cxxtojnival_result = iegen::make_jni_object_pair(env, tmp_key_cxxtojnival_result, tmp_val_cxxtojnival_result);
            env->SetObjectArrayElement(tmp_val_cxxtojniresult, index_result, cxxtojnival_result);
            ++index_result;
        }
        jmapobject cxxtojniresult = iegen::make_jni_object_pair(env, tmp_key_cxxtojniresult, tmp_val_cxxtojniresult);
        return cxxtojniresult;
    }
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/iegen/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/iegen/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }

    jmapobject result {};
    return result;
}


extern "C" JNIEXPORT void Java_com_examples_containers_NestedExamples_jMixedexamplewithmanyargs(JNIEnv* env, jobject obj, jobjectid id, jobjectArray v1, jobjectArray v2, jmapobject m1, jmapobject m2){
    

    std::vector<std::vector<int>> jnitocxxv1;
    auto _jnitocxxv1 = iegen::getObjectArray(env, v1);
    for (auto& value__jnitocxxv1 : _jnitocxxv1) {
        
        std::vector<int> jnitocxxvalue__jnitocxxv1;
        auto _jnitocxxvalue__jnitocxxv1 = iegen::getIntArray(env, value__jnitocxxv1);
        for (auto& value__jnitocxxvalue__jnitocxxv1 : _jnitocxxvalue__jnitocxxv1) {
            
            jnitocxxvalue__jnitocxxv1.emplace_back(value__jnitocxxvalue__jnitocxxv1);
        }
        jnitocxxv1.emplace_back(jnitocxxvalue__jnitocxxv1);
    }


    std::vector<std::vector<int>> jnitocxxv2;
    auto _jnitocxxv2 = iegen::getObjectArray(env, v2);
    for (auto& value__jnitocxxv2 : _jnitocxxv2) {
        
        std::vector<int> jnitocxxvalue__jnitocxxv2;
        auto _jnitocxxvalue__jnitocxxv2 = iegen::getIntArray(env, value__jnitocxxv2);
        for (auto& value__jnitocxxvalue__jnitocxxv2 : _jnitocxxvalue__jnitocxxv2) {
            
            jnitocxxvalue__jnitocxxv2.emplace_back(value__jnitocxxvalue__jnitocxxv2);
        }
        jnitocxxv2.emplace_back(jnitocxxvalue__jnitocxxv2);
    }


    std::map<int, std::map<int, int>> jnitocxxm1;
    auto _jnitocxxm1 = iegen::extract_jni_pair(env, m1);
    auto tmp_key_jnitocxxm1 = iegen::getIntArray(env, _jnitocxxm1.first);
    auto tmp_val_jnitocxxm1 = iegen::getObjectArray(env, _jnitocxxm1.second);
    for (size_t i = 0; i < tmp_key_jnitocxxm1.size(); ++i) {
        auto ktmp_m1 = tmp_key_jnitocxxm1[i];
        auto vtmp_m1 = tmp_val_jnitocxxm1[i];
        
        
        std::map<int, int> jnitocxxvtmp_m1;
        auto _jnitocxxvtmp_m1 = iegen::extract_jni_pair(env, vtmp_m1);
        auto tmp_key_jnitocxxvtmp_m1 = iegen::getIntArray(env, _jnitocxxvtmp_m1.first);
        auto tmp_val_jnitocxxvtmp_m1 = iegen::getIntArray(env, _jnitocxxvtmp_m1.second);
        for (size_t i = 0; i < tmp_key_jnitocxxvtmp_m1.size(); ++i) {
            auto ktmp_vtmp_m1 = tmp_key_jnitocxxvtmp_m1[i];
            auto vtmp_vtmp_m1 = tmp_val_jnitocxxvtmp_m1[i];
            
            
            jnitocxxvtmp_m1.insert({ ktmp_vtmp_m1, vtmp_vtmp_m1 });
        }
        jnitocxxm1.insert({ ktmp_m1, jnitocxxvtmp_m1 });
    }


    std::map<int, std::map<int, int>> jnitocxxm2;
    auto _jnitocxxm2 = iegen::extract_jni_pair(env, m2);
    auto tmp_key_jnitocxxm2 = iegen::getIntArray(env, _jnitocxxm2.first);
    auto tmp_val_jnitocxxm2 = iegen::getObjectArray(env, _jnitocxxm2.second);
    for (size_t i = 0; i < tmp_key_jnitocxxm2.size(); ++i) {
        auto ktmp_m2 = tmp_key_jnitocxxm2[i];
        auto vtmp_m2 = tmp_val_jnitocxxm2[i];
        
        
        std::map<int, int> jnitocxxvtmp_m2;
        auto _jnitocxxvtmp_m2 = iegen::extract_jni_pair(env, vtmp_m2);
        auto tmp_key_jnitocxxvtmp_m2 = iegen::getIntArray(env, _jnitocxxvtmp_m2.first);
        auto tmp_val_jnitocxxvtmp_m2 = iegen::getIntArray(env, _jnitocxxvtmp_m2.second);
        for (size_t i = 0; i < tmp_key_jnitocxxvtmp_m2.size(); ++i) {
            auto ktmp_vtmp_m2 = tmp_key_jnitocxxvtmp_m2[i];
            auto vtmp_vtmp_m2 = tmp_val_jnitocxxvtmp_m2[i];
            
            
            jnitocxxvtmp_m2.insert({ ktmp_vtmp_m2, vtmp_vtmp_m2 });
        }
        jnitocxxm2.insert({ ktmp_m2, jnitocxxvtmp_m2 });
    }

    validateID(id);
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<iegen::example::NestedExamples*>(iegen_obj_id_ptr);
    
    try {
        jnitocxxid->mixedExampleWithManyArgs(jnitocxxv1, jnitocxxv2, jnitocxxm1, jnitocxxm2);
        return;
    }
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/iegen/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/iegen/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }


}


extern "C" JNIEXPORT void Java_com_examples_containers_NestedExamples_jSetvectorofintmaps(JNIEnv* env, jobject obj, jobjectid id, jobjectArray v){
    

    std::vector<std::map<int, int>> jnitocxxv;
    auto _jnitocxxv = iegen::getObjectArray(env, v);
    for (auto& value__jnitocxxv : _jnitocxxv) {
        
        std::map<int, int> jnitocxxvalue__jnitocxxv;
        auto _jnitocxxvalue__jnitocxxv = iegen::extract_jni_pair(env, value__jnitocxxv);
        auto tmp_key_jnitocxxvalue__jnitocxxv = iegen::getIntArray(env, _jnitocxxvalue__jnitocxxv.first);
        auto tmp_val_jnitocxxvalue__jnitocxxv = iegen::getIntArray(env, _jnitocxxvalue__jnitocxxv.second);
        for (size_t i = 0; i < tmp_key_jnitocxxvalue__jnitocxxv.size(); ++i) {
            auto ktmp_value__jnitocxxv = tmp_key_jnitocxxvalue__jnitocxxv[i];
            auto vtmp_value__jnitocxxv = tmp_val_jnitocxxvalue__jnitocxxv[i];
            
            
            jnitocxxvalue__jnitocxxv.insert({ ktmp_value__jnitocxxv, vtmp_value__jnitocxxv });
        }
        jnitocxxv.emplace_back(jnitocxxvalue__jnitocxxv);
    }

    validateID(id);
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<iegen::example::NestedExamples*>(iegen_obj_id_ptr);
    
    try {
        jnitocxxid->setVectorOfIntMaps(jnitocxxv);
        return;
    }
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/iegen/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/iegen/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }


}


extern "C" JNIEXPORT jobjectArray Java_com_examples_containers_NestedExamples_jGetvectorofintmaps(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<iegen::example::NestedExamples*>(iegen_obj_id_ptr);
    
    try {
        const auto& result = jnitocxxid->getVectorOfIntMaps();
        
        jobjectArray cxxtojniresult = env->NewObjectArray(result.size(), env->FindClass("java/lang/Object"), NULL);
        size_t index_result = 0;
        for (auto& value_result : result) {
            
            auto tmp_key_cxxtojnivalue_result = env->NewIntArray(value_result.size());
            auto tmp_val_cxxtojnivalue_result = env->NewIntArray(value_result.size());
            size_t index_value_result  = 0;
            for (auto& value_value_result : value_result) {
                auto key_value_result = value_value_result.first;
                auto val_value_result = value_value_result.second;
                
                env->SetIntArrayRegion(tmp_key_cxxtojnivalue_result, index_value_result, 1, &key_value_result);
                
                env->SetIntArrayRegion(tmp_val_cxxtojnivalue_result, index_value_result, 1, &val_value_result);
                ++index_value_result;
            }
            jmapobject cxxtojnivalue_result = iegen::make_jni_object_pair(env, tmp_key_cxxtojnivalue_result, tmp_val_cxxtojnivalue_result);
            env->SetObjectArrayElement(cxxtojniresult, index_result, cxxtojnivalue_result);
            ++index_result ;
        }
        return cxxtojniresult;
    }
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/iegen/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/iegen/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }

    jobjectArray result {};
    return result;
}


extern "C" JNIEXPORT void Java_com_examples_containers_NestedExamples_jSetmapofintvectors(JNIEnv* env, jobject obj, jobjectid id, jmapobject m){
    

    std::map<int, std::vector<int>> jnitocxxm;
    auto _jnitocxxm = iegen::extract_jni_pair(env, m);
    auto tmp_key_jnitocxxm = iegen::getIntArray(env, _jnitocxxm.first);
    auto tmp_val_jnitocxxm = iegen::getObjectArray(env, _jnitocxxm.second);
    for (size_t i = 0; i < tmp_key_jnitocxxm.size(); ++i) {
        auto ktmp_m = tmp_key_jnitocxxm[i];
        auto vtmp_m = tmp_val_jnitocxxm[i];
        
        
        std::vector<int> jnitocxxvtmp_m;
        auto _jnitocxxvtmp_m = iegen::getIntArray(env, vtmp_m);
        for (auto& value__jnitocxxvtmp_m : _jnitocxxvtmp_m) {
            
            jnitocxxvtmp_m.emplace_back(value__jnitocxxvtmp_m);
        }
        jnitocxxm.insert({ ktmp_m, jnitocxxvtmp_m });
    }

    validateID(id);
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<iegen::example::NestedExamples*>(iegen_obj_id_ptr);
    
    try {
        jnitocxxid->setMapOfIntVectors(jnitocxxm);
        return;
    }
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/iegen/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/iegen/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }


}


extern "C" JNIEXPORT jmapobject Java_com_examples_containers_NestedExamples_jGetmapofintvectors(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<iegen::example::NestedExamples*>(iegen_obj_id_ptr);
    
    try {
        const auto& result = jnitocxxid->getMapOfIntVectors();
        
        auto tmp_key_cxxtojniresult = env->NewIntArray(result.size());
        jobjectArray tmp_val_cxxtojniresult = env->NewObjectArray(result.size(), env->FindClass("java/lang/Object"), NULL);
        size_t index_result  = 0;
        for (auto& value_result : result) {
            auto key_result = value_result.first;
            auto val_result = value_result.second;
            
            env->SetIntArrayRegion(tmp_key_cxxtojniresult, index_result, 1, &key_result);
            
            jintArray cxxtojnival_result = env->NewIntArray(val_result.size());
            size_t index_val_result = 0;
            for (auto& value_val_result : val_result) {
                
                env->SetIntArrayRegion(cxxtojnival_result, index_val_result, 1, &value_val_result);
                ++index_val_result ;
            }
            env->SetObjectArrayElement(tmp_val_cxxtojniresult, index_result, cxxtojnival_result);
            ++index_result;
        }
        jmapobject cxxtojniresult = iegen::make_jni_object_pair(env, tmp_key_cxxtojniresult, tmp_val_cxxtojniresult);
        return cxxtojniresult;
    }
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/iegen/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/iegen/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }

    jmapobject result {};
    return result;
}


extern "C" JNIEXPORT void Java_com_examples_containers_NestedExamples_jSetcomplexstringvector(JNIEnv* env, jobject obj, jobjectid id, jobjectArray v){
    

    std::vector<std::vector<std::vector<std::string>>> jnitocxxv;
    auto _jnitocxxv = iegen::getObjectArray(env, v);
    for (auto& value__jnitocxxv : _jnitocxxv) {
        
        std::vector<std::vector<std::string>> jnitocxxvalue__jnitocxxv;
        auto _jnitocxxvalue__jnitocxxv = iegen::getObjectArray(env, value__jnitocxxv);
        for (auto& value__jnitocxxvalue__jnitocxxv : _jnitocxxvalue__jnitocxxv) {
            
            std::vector<std::string> jnitocxxvalue__jnitocxxvalue__jnitocxxv;
            auto _jnitocxxvalue__jnitocxxvalue__jnitocxxv = iegen::getObjectArray(env, value__jnitocxxvalue__jnitocxxv);
            for (auto& value__jnitocxxvalue__jnitocxxvalue__jnitocxxv : _jnitocxxvalue__jnitocxxvalue__jnitocxxv) {
                jstring jjnitocxxvalue__jnitocxxvalue__jnitocxxvalue__jnitocxxvStr = (jstring)value__jnitocxxvalue__jnitocxxvalue__jnitocxxv;
                auto jnitocxxvalue__jnitocxxvalue__jnitocxxvalue__jnitocxxv_cstr = env->GetStringUTFChars(jjnitocxxvalue__jnitocxxvalue__jnitocxxvalue__jnitocxxvStr, 0);
                std::string jnitocxxvalue__jnitocxxvalue__jnitocxxvalue__jnitocxxv = jnitocxxvalue__jnitocxxvalue__jnitocxxvalue__jnitocxxv_cstr;
                env->ReleaseStringUTFChars(jjnitocxxvalue__jnitocxxvalue__jnitocxxvalue__jnitocxxvStr, jnitocxxvalue__jnitocxxvalue__jnitocxxvalue__jnitocxxv_cstr);
                jnitocxxvalue__jnitocxxvalue__jnitocxxv.emplace_back(jnitocxxvalue__jnitocxxvalue__jnitocxxvalue__jnitocxxv);
            }
            jnitocxxvalue__jnitocxxv.emplace_back(jnitocxxvalue__jnitocxxvalue__jnitocxxv);
        }
        jnitocxxv.emplace_back(jnitocxxvalue__jnitocxxv);
    }

    validateID(id);
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<iegen::example::NestedExamples*>(iegen_obj_id_ptr);
    
    try {
        jnitocxxid->setComplexStringVector(jnitocxxv);
        return;
    }
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/iegen/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/iegen/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }


}


extern "C" JNIEXPORT jobjectArray Java_com_examples_containers_NestedExamples_jGetcomplexstringvector(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<iegen::example::NestedExamples*>(iegen_obj_id_ptr);
    
    try {
        const auto& result = jnitocxxid->getComplexStringVector();
        
        jobjectArray cxxtojniresult = env->NewObjectArray(result.size(), env->FindClass("java/lang/Object"), NULL);
        size_t index_result = 0;
        for (auto& value_result : result) {
            
            jobjectArray cxxtojnivalue_result = env->NewObjectArray(value_result.size(), env->FindClass("java/lang/Object"), NULL);
            size_t index_value_result = 0;
            for (auto& value_value_result : value_result) {
                
                jobjectArray cxxtojnivalue_value_result = env->NewObjectArray(value_value_result.size(), env->FindClass("java/lang/Object"), NULL);
                size_t index_value_value_result = 0;
                for (auto& value_value_value_result : value_value_result) {
                    jstring cxxtojnivalue_value_value_result = env->NewStringUTF(value_value_value_result.data());
                    env->SetObjectArrayElement(cxxtojnivalue_value_result, index_value_value_result, cxxtojnivalue_value_value_result);
                    ++index_value_value_result ;
                }
                env->SetObjectArrayElement(cxxtojnivalue_result, index_value_result, cxxtojnivalue_value_result);
                ++index_value_result ;
            }
            env->SetObjectArrayElement(cxxtojniresult, index_result, cxxtojnivalue_result);
            ++index_result ;
        }
        return cxxtojniresult;
    }
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/iegen/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/iegen/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }

    jobjectArray result {};
    return result;
}


extern "C" JNIEXPORT void Java_com_examples_containers_NestedExamples_jSetcomplexstringmap(JNIEnv* env, jobject obj, jobjectid id, jmapobject m){
    

    std::map<std::string, std::map<std::string, std::map<std::string, std::string>>> jnitocxxm;
    auto _jnitocxxm = iegen::extract_jni_pair(env, m);
    auto tmp_key_jnitocxxm = iegen::getObjectArray(env, _jnitocxxm.first);
    auto tmp_val_jnitocxxm = iegen::getObjectArray(env, _jnitocxxm.second);
    for (size_t i = 0; i < tmp_key_jnitocxxm.size(); ++i) {
        auto ktmp_m = tmp_key_jnitocxxm[i];
        auto vtmp_m = tmp_val_jnitocxxm[i];
        jstring jjnitocxxktmp_mStr = (jstring)ktmp_m;
        auto jnitocxxktmp_m_cstr = env->GetStringUTFChars(jjnitocxxktmp_mStr, 0);
        std::string jnitocxxktmp_m = jnitocxxktmp_m_cstr;
        env->ReleaseStringUTFChars(jjnitocxxktmp_mStr, jnitocxxktmp_m_cstr);
        
        std::map<std::string, std::map<std::string, std::string>> jnitocxxvtmp_m;
        auto _jnitocxxvtmp_m = iegen::extract_jni_pair(env, vtmp_m);
        auto tmp_key_jnitocxxvtmp_m = iegen::getObjectArray(env, _jnitocxxvtmp_m.first);
        auto tmp_val_jnitocxxvtmp_m = iegen::getObjectArray(env, _jnitocxxvtmp_m.second);
        for (size_t i = 0; i < tmp_key_jnitocxxvtmp_m.size(); ++i) {
            auto ktmp_vtmp_m = tmp_key_jnitocxxvtmp_m[i];
            auto vtmp_vtmp_m = tmp_val_jnitocxxvtmp_m[i];
            jstring jjnitocxxktmp_vtmp_mStr = (jstring)ktmp_vtmp_m;
            auto jnitocxxktmp_vtmp_m_cstr = env->GetStringUTFChars(jjnitocxxktmp_vtmp_mStr, 0);
            std::string jnitocxxktmp_vtmp_m = jnitocxxktmp_vtmp_m_cstr;
            env->ReleaseStringUTFChars(jjnitocxxktmp_vtmp_mStr, jnitocxxktmp_vtmp_m_cstr);
            
            std::map<std::string, std::string> jnitocxxvtmp_vtmp_m;
            auto _jnitocxxvtmp_vtmp_m = iegen::extract_jni_pair(env, vtmp_vtmp_m);
            auto tmp_key_jnitocxxvtmp_vtmp_m = iegen::getObjectArray(env, _jnitocxxvtmp_vtmp_m.first);
            auto tmp_val_jnitocxxvtmp_vtmp_m = iegen::getObjectArray(env, _jnitocxxvtmp_vtmp_m.second);
            for (size_t i = 0; i < tmp_key_jnitocxxvtmp_vtmp_m.size(); ++i) {
                auto ktmp_vtmp_vtmp_m = tmp_key_jnitocxxvtmp_vtmp_m[i];
                auto vtmp_vtmp_vtmp_m = tmp_val_jnitocxxvtmp_vtmp_m[i];
                jstring jjnitocxxktmp_vtmp_vtmp_mStr = (jstring)ktmp_vtmp_vtmp_m;
                auto jnitocxxktmp_vtmp_vtmp_m_cstr = env->GetStringUTFChars(jjnitocxxktmp_vtmp_vtmp_mStr, 0);
                std::string jnitocxxktmp_vtmp_vtmp_m = jnitocxxktmp_vtmp_vtmp_m_cstr;
                env->ReleaseStringUTFChars(jjnitocxxktmp_vtmp_vtmp_mStr, jnitocxxktmp_vtmp_vtmp_m_cstr);
                jstring jjnitocxxvtmp_vtmp_vtmp_mStr = (jstring)vtmp_vtmp_vtmp_m;
                auto jnitocxxvtmp_vtmp_vtmp_m_cstr = env->GetStringUTFChars(jjnitocxxvtmp_vtmp_vtmp_mStr, 0);
                std::string jnitocxxvtmp_vtmp_vtmp_m = jnitocxxvtmp_vtmp_vtmp_m_cstr;
                env->ReleaseStringUTFChars(jjnitocxxvtmp_vtmp_vtmp_mStr, jnitocxxvtmp_vtmp_vtmp_m_cstr);
                jnitocxxvtmp_vtmp_m.insert({ jnitocxxktmp_vtmp_vtmp_m, jnitocxxvtmp_vtmp_vtmp_m });
            }
            jnitocxxvtmp_m.insert({ jnitocxxktmp_vtmp_m, jnitocxxvtmp_vtmp_m });
        }
        jnitocxxm.insert({ jnitocxxktmp_m, jnitocxxvtmp_m });
    }

    validateID(id);
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<iegen::example::NestedExamples*>(iegen_obj_id_ptr);
    
    try {
        jnitocxxid->setComplexStringMap(jnitocxxm);
        return;
    }
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/iegen/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/iegen/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }


}


extern "C" JNIEXPORT jmapobject Java_com_examples_containers_NestedExamples_jGetcomplexstringmap(JNIEnv* env, jobject obj, jobjectid id){
    
    validateID(id);
    auto iegen_obj_id = reinterpret_cast<IEGenCObject*>(id);
    auto iegen_obj_id_ptr = iegen_obj_id ? iegen_obj_id->ptr : nullptr;
    auto jnitocxxid = static_cast<iegen::example::NestedExamples*>(iegen_obj_id_ptr);
    
    try {
        const auto& result = jnitocxxid->getComplexStringMap();
        
        jobjectArray tmp_key_cxxtojniresult = env->NewObjectArray(result.size(), env->FindClass("java/lang/Object"), NULL);
        jobjectArray tmp_val_cxxtojniresult = env->NewObjectArray(result.size(), env->FindClass("java/lang/Object"), NULL);
        size_t index_result  = 0;
        for (auto& value_result : result) {
            auto key_result = value_result.first;
            auto val_result = value_result.second;
            jstring cxxtojnikey_result = env->NewStringUTF(key_result.data());
            env->SetObjectArrayElement(tmp_key_cxxtojniresult, index_result, cxxtojnikey_result);
            
            jobjectArray tmp_key_cxxtojnival_result = env->NewObjectArray(val_result.size(), env->FindClass("java/lang/Object"), NULL);
            jobjectArray tmp_val_cxxtojnival_result = env->NewObjectArray(val_result.size(), env->FindClass("java/lang/Object"), NULL);
            size_t index_val_result  = 0;
            for (auto& value_val_result : val_result) {
                auto key_val_result = value_val_result.first;
                auto val_val_result = value_val_result.second;
                jstring cxxtojnikey_val_result = env->NewStringUTF(key_val_result.data());
                env->SetObjectArrayElement(tmp_key_cxxtojnival_result, index_val_result, cxxtojnikey_val_result);
                
                jobjectArray tmp_key_cxxtojnival_val_result = env->NewObjectArray(val_val_result.size(), env->FindClass("java/lang/Object"), NULL);
                jobjectArray tmp_val_cxxtojnival_val_result = env->NewObjectArray(val_val_result.size(), env->FindClass("java/lang/Object"), NULL);
                size_t index_val_val_result  = 0;
                for (auto& value_val_val_result : val_val_result) {
                    auto key_val_val_result = value_val_val_result.first;
                    auto val_val_val_result = value_val_val_result.second;
                    jstring cxxtojnikey_val_val_result = env->NewStringUTF(key_val_val_result.data());
                    env->SetObjectArrayElement(tmp_key_cxxtojnival_val_result, index_val_val_result, cxxtojnikey_val_val_result);
                    jstring cxxtojnival_val_val_result = env->NewStringUTF(val_val_val_result.data());
                    env->SetObjectArrayElement(tmp_val_cxxtojnival_val_result, index_val_val_result, cxxtojnival_val_val_result);
                    ++index_val_val_result;
                }
                jmapobject cxxtojnival_val_result = iegen::make_jni_object_pair(env, tmp_key_cxxtojnival_val_result, tmp_val_cxxtojnival_val_result);
                env->SetObjectArrayElement(tmp_val_cxxtojnival_result, index_val_result, cxxtojnival_val_result);
                ++index_val_result;
            }
            jmapobject cxxtojnival_result = iegen::make_jni_object_pair(env, tmp_key_cxxtojnival_result, tmp_val_cxxtojnival_result);
            env->SetObjectArrayElement(tmp_val_cxxtojniresult, index_result, cxxtojnival_result);
            ++index_result;
        }
        jmapobject cxxtojniresult = iegen::make_jni_object_pair(env, tmp_key_cxxtojniresult, tmp_val_cxxtojniresult);
        return cxxtojniresult;
    }
    catch (const std::exception& e) {
        jclass handlerCls = env->FindClass("com/examples/iegen/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF(e.what()));
    }
    catch (...) {
        jclass handlerCls = env->FindClass("com/examples/iegen/exceptionUtils/ExceptionHandler");
        jmethodID handlerMethod = env->GetStaticMethodID(handlerCls, "handleUncaughtException", "(Ljava/lang/String;)V");
        env->CallStaticVoidMethod(handlerCls, handlerMethod, env->NewStringUTF("Uncaught Exception"));
    }

    jmapobject result {};
    return result;
}

extern "C" JNIEXPORT jstring Java_com_examples_containers_Nested_1containersKt_jGettypebyid(JNIEnv* env, jclass cls, jobjectid id) {
    validateID(id);
    return env->NewStringUTF(reinterpret_cast<IEGenCObject*>(id)->type);
}

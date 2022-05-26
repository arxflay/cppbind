/**
 *   ______ .______   .______   .______    __  .__   __.  _______
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/
 * 
 * This file is generated by cppbind on 05/12/2022-10:26.
 * Please do not change it manually.
 */

#ifndef __WRAPPER_HELPER_HPP__
#define __WRAPPER_HELPER_HPP__

#include "jni.h"
#include <utility>
#include <string>
#include <vector>
#include <type_traits>
#include <memory>

typedef jlong jobjectid;
typedef jobject jmapobject;
typedef jlongArray jobjectidArray;


#define validateID(id) //DCHECK(id != 0, "ID can not be 0")

namespace cppbind {

inline std::pair<jobject, jobject> extract_jni_pair(JNIEnv *env, jobject p) {
    jclass pairClass = env->FindClass("kotlin/Pair");
    jfieldID first = env->GetFieldID(pairClass, "first", "Ljava/lang/Object;");
    jfieldID second = env->GetFieldID(pairClass, "second", "Ljava/lang/Object;");

    return std::make_pair(env->GetObjectField(p, first), env->GetObjectField(p, second));
}


inline jobject make_jni_object_pair(JNIEnv *env, jobject first, jobject second) {
    // Get the pair class that we wish to return an instance of
    jclass pairClass = env->FindClass("kotlin/Pair");
    // Get the method id of an empty constructor in class

    jmethodID constructor = env->GetMethodID(pairClass, "<init>", "(Ljava/lang/Object;Ljava/lang/Object;)V");

    // Create an instance of class
    jobject obj = env->NewObject(pairClass, constructor, first, second);

    return obj;

}

inline jobject make_jni_long_pair(JNIEnv *env, jlong first, jlong second) {
    // Get the pair class that we wish to return an instance of
    jclass pairClass = env->FindClass("kotlin/Pair");
    // Get the method id of an empty constructor in class

    jmethodID constructor = env->GetMethodID(pairClass, "<init>", "(Ljava/lang/Long;Ljava/lang/Long;)V");

    // Create an instance of class
    jobject obj = env->NewObject(pairClass, constructor, first, second);

    return obj;

}


inline std::string jni_to_string(JNIEnv* env, jobject jobj) {
    jstring jStr = (jstring)jobj;
    auto cstr = env->GetStringUTFChars(jStr, 0);
    std::string str = cstr;
    env->ReleaseStringUTFChars(jStr, cstr);
    return str;
}


inline jstring string_to_jni(JNIEnv* env, const std::string& str) {
    return env->NewStringUTF(str.c_str());
}

inline std::vector<std::string> getStringVector(JNIEnv* env, jobjectArray stringArray) {
    int len = env->GetArrayLength(stringArray);
    std::vector<std::string> ret(len);
    for (int i = 0; i < len; ++i) {
        jstring ref = static_cast<jstring>(env->GetObjectArrayElement(stringArray, i));
        ret[i] = jni_to_string(env, ref);
    }
    return ret;
}

inline std::vector<jobject> getObjectArray(JNIEnv* env, jobject obj) {
    jobjectArray objArray = (jobjectArray)obj;
    int len = env->GetArrayLength(objArray);
    std::vector<jobject> ret(len);
    for (int i = 0; i < len; ++i) {
        jobject ref = env->GetObjectArrayElement(objArray, i);
        ret[i] = ref;
    }
    return ret;
}

inline std::vector<jlong> getLongArray(JNIEnv* env, jobject obj) {
    jlongArray jlongArray1 = (jlongArray)obj;
    int len = env->GetArrayLength(jlongArray1);
    std::vector<jlong> ret;
    ret.reserve(len);
    jlong* arr = env->GetLongArrayElements(jlongArray1, nullptr);
    std::copy(arr, arr + len, std::back_inserter(ret));
    env->ReleaseLongArrayElements(jlongArray1, arr, 0);
    return ret;
}

inline std::vector<jint> getIntArray(JNIEnv* env, jobject obj) {
    jintArray jintArray1 = (jintArray)obj;
    int len = env->GetArrayLength(jintArray1);
    std::vector<jint> ret;
    ret.reserve(len);
    jint* arr = env->GetIntArrayElements(jintArray1, nullptr);
    std::copy(arr, arr + len, std::back_inserter(ret));
    env->ReleaseIntArrayElements(jintArray1, arr, 0);
    return ret;
}

inline std::vector<jfloat> getFloatArray(JNIEnv* env, jobject obj) {
    jfloatArray jfloatArray1 = (jfloatArray)obj;
    int len = env->GetArrayLength(jfloatArray1);
    std::vector<jfloat> ret;
    ret.reserve(len);
    jfloat* arr = env->GetFloatArrayElements(jfloatArray1, nullptr);
    std::copy(arr, arr + len, std::back_inserter(ret));
    env->ReleaseFloatArrayElements(jfloatArray1, arr, 0);
    return ret;
}

inline jobject extractObject(JNIEnv* env, jobject obj)  {
    // to not have redundant checks
    return obj;
}

inline std::string extractString(JNIEnv* env, jobject obj)  {
    return cppbind::jni_to_string(env, obj);
}

inline jfloat extractFloat(JNIEnv* env, jobject obj)  {
    return env->CallFloatMethod(obj,
        env->GetMethodID(env->FindClass("java/lang/Float"), "floatValue", "()F"));
}

inline jint extractInt(JNIEnv* env, jobject obj)  {
    return env->CallIntMethod(obj,
        env->GetMethodID(env->FindClass("java/lang/Integer"), "intValue", "()I"));
}


inline jlong extractLong(JNIEnv* env, jobject obj)  {
    return env->CallLongMethod(obj,
        env->GetMethodID(env->FindClass("java/lang/Long"), "longValue", "()L"));
}

inline jobject longToObject(JNIEnv* env, jlong val) {
    jclass cls = env->FindClass("java/lang/Long");
    jmethodID constructorId = env->GetMethodID(cls, "<init>", "(J)V");
    return env->NewObject(cls, constructorId, val);
}

inline jobject intToObject(JNIEnv* env, jint val) {
    jclass cls = env->FindClass("java/lang/Integer");
    jmethodID constructorId = env->GetMethodID(cls, "<init>", "(I)V");
    return env->NewObject(cls, constructorId, val);
}

inline jobject floatToObject(JNIEnv* env, jfloat val) {
    jclass cls = env->FindClass("java/lang/Float");
    jmethodID constructorId = env->GetMethodID(cls, "<init>", "(F)V");
    return env->NewObject(cls, constructorId, val);
}

inline jobject doubleToObject(JNIEnv* env, jdouble val) {
    jclass cls = env->FindClass("java/lang/Double");
    jmethodID constructorId = env->GetMethodID(cls, "<init>", "(D)V");
    return env->NewObject(cls, constructorId, val);
}

inline jobject shortToObject(JNIEnv* env, jshort val) {
    jclass cls = env->FindClass("java/lang/Short");
    jmethodID constructorId = env->GetMethodID(cls, "<init>", "(S)V");
    return env->NewObject(cls, constructorId, val);
}

inline jobject boolToObject(JNIEnv* env, jboolean val) {
    jclass cls = env->FindClass("java/lang/Boolean");
    jmethodID constructorId = env->GetMethodID(cls, "<init>", "(Z)V");
    return env->NewObject(cls, constructorId, val);
}
} // end of cppbind
#endif //__WRAPPER_HELPER_HPP__

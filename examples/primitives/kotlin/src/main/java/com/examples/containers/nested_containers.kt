/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 05/12/2022-10:29.
 * Please do not change it manually.
 */

package com.examples.containers

import com.examples.cppbind.alias.*
import com.examples.cppbind.exceptionUtils.*
import com.examples.cppbind.exception_helpers.*

open class NestedExamples
internal constructor(obj: CppBindObject) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        /**
         * comments
         * 
         */
        protected fun construct_helper(): Long {
            val id = jConstructor()
            return id
        }

        @JvmStatic
        private external fun jConstructor(): Long
        const val cppbindCxxTypeName: String = "cppbind::example::NestedExamples"
    }
    
    protected var cppbindObj = obj
    private var refs: MutableList<Any> = mutableListOf()

    fun keepCppBindReference(ref: Any) {
        refs.add(ref)
    }
    
    open val id: Long
        get() {
            if (cppbindObj.id == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return cppbindObj.id
        }
    
    /**
     * comments
     * 
     */
    constructor(): this(CppBindObject(construct_helper(), true)) {
    }
    
    fun setNestedIntVector(v: List<List<Int>>): Unit {
        val kotlintojdkv = ObjectArray(v.size) { Any() }
        var index_v = 0
        for (value_v in v) {
            val kotlintojdkvalue_v = IntArray(value_v.size) 
            var index_value_v = 0
            for (value_value_v in value_v) {
                
                kotlintojdkvalue_v[index_value_v] = value_value_v
                ++index_value_v
            }
            kotlintojdkv[index_v] = kotlintojdkvalue_v
            ++index_v
        }
        val result = jSetnestedintvector(id, kotlintojdkv)
        
        return result
    }

    fun getNestedIntVector(): List<List<Int>> {
        val result = jGetnestedintvector(id)
        val jdktokotlinresult: MutableList<List<Int>> = mutableListOf()
        for (value_result in result) {
            @Suppress("UNCHECKED_CAST") val actual_value_result = value_result as IntArray
            val jdktokotlinactual_value_result: MutableList<Int> = mutableListOf()
            for (value_actual_value_result in actual_value_result) {
                
                jdktokotlinactual_value_result.add(value_actual_value_result)
            }
            jdktokotlinresult.add(jdktokotlinactual_value_result)
        }
        return jdktokotlinresult
    }

    fun setNestedIntMap(m: Map<Int, Map<Int, Int>>): Unit {
        
        val tmp_key_kotlintojdkm = IntArray(m.size) 
        val tmp_val_kotlintojdkm = ObjectArray(m.size) { Any() }
        val kotlintojdkm = Pair<IntArray, ObjectArray>(tmp_key_kotlintojdkm, tmp_val_kotlintojdkm)
        var index_m = 0
        for ((key_m, value_m) in m) {
            
            
            val tmp_key_kotlintojdkvalue_m = IntArray(value_m.size) 
            val tmp_val_kotlintojdkvalue_m = IntArray(value_m.size) 
            val kotlintojdkvalue_m = Pair<IntArray, IntArray>(tmp_key_kotlintojdkvalue_m, tmp_val_kotlintojdkvalue_m)
            var index_value_m = 0
            for ((key_value_m, value_value_m) in value_m) {
                
                
                tmp_key_kotlintojdkvalue_m[index_value_m] = key_value_m
                tmp_val_kotlintojdkvalue_m[index_value_m] = value_value_m
                ++index_value_m
            }
            tmp_key_kotlintojdkm[index_m] = key_m
            tmp_val_kotlintojdkm[index_m] = kotlintojdkvalue_m
            ++index_m
        }
        val result = jSetnestedintmap(id, kotlintojdkm)
        
        return result
    }

    fun getNestedIntMap(): Map<Int, Map<Int, Int>> {
        val result = jGetnestedintmap(id)
        val jdktokotlinresult = HashMap<Int, Map<Int, Int>>()
        for (i_result in 0..result.first.size - 1) {
            val elem1_result = result.first.get(i_result)
            @Suppress("UNCHECKED_CAST") val elem2_result = result.second.get(i_result) as Pair<IntArray, IntArray>
            
            val jdktokotlinelem2_result = HashMap<Int, Int>()
            for (i_elem2_result in 0..elem2_result.first.size - 1) {
                val elem1_elem2_result = elem2_result.first.get(i_elem2_result)
                val elem2_elem2_result = elem2_result.second.get(i_elem2_result)
                
                
                jdktokotlinelem2_result.put(elem1_elem2_result, elem2_elem2_result)
            }
            jdktokotlinresult.put(elem1_result, jdktokotlinelem2_result)
        }
        return jdktokotlinresult
    }

    fun mixedExampleWithManyArgs(v1: List<List<Int>>, v2: List<List<Int>>, m1: Map<Int, Map<Int, Int>>, m2: Map<Int, Map<Int, Int>>): Unit {
        val kotlintojdkv1 = ObjectArray(v1.size) { Any() }
        var index_v1 = 0
        for (value_v1 in v1) {
            val kotlintojdkvalue_v1 = IntArray(value_v1.size) 
            var index_value_v1 = 0
            for (value_value_v1 in value_v1) {
                
                kotlintojdkvalue_v1[index_value_v1] = value_value_v1
                ++index_value_v1
            }
            kotlintojdkv1[index_v1] = kotlintojdkvalue_v1
            ++index_v1
        }
        val kotlintojdkv2 = ObjectArray(v2.size) { Any() }
        var index_v2 = 0
        for (value_v2 in v2) {
            val kotlintojdkvalue_v2 = IntArray(value_v2.size) 
            var index_value_v2 = 0
            for (value_value_v2 in value_v2) {
                
                kotlintojdkvalue_v2[index_value_v2] = value_value_v2
                ++index_value_v2
            }
            kotlintojdkv2[index_v2] = kotlintojdkvalue_v2
            ++index_v2
        }
        
        val tmp_key_kotlintojdkm1 = IntArray(m1.size) 
        val tmp_val_kotlintojdkm1 = ObjectArray(m1.size) { Any() }
        val kotlintojdkm1 = Pair<IntArray, ObjectArray>(tmp_key_kotlintojdkm1, tmp_val_kotlintojdkm1)
        var index_m1 = 0
        for ((key_m1, value_m1) in m1) {
            
            
            val tmp_key_kotlintojdkvalue_m1 = IntArray(value_m1.size) 
            val tmp_val_kotlintojdkvalue_m1 = IntArray(value_m1.size) 
            val kotlintojdkvalue_m1 = Pair<IntArray, IntArray>(tmp_key_kotlintojdkvalue_m1, tmp_val_kotlintojdkvalue_m1)
            var index_value_m1 = 0
            for ((key_value_m1, value_value_m1) in value_m1) {
                
                
                tmp_key_kotlintojdkvalue_m1[index_value_m1] = key_value_m1
                tmp_val_kotlintojdkvalue_m1[index_value_m1] = value_value_m1
                ++index_value_m1
            }
            tmp_key_kotlintojdkm1[index_m1] = key_m1
            tmp_val_kotlintojdkm1[index_m1] = kotlintojdkvalue_m1
            ++index_m1
        }
        
        val tmp_key_kotlintojdkm2 = IntArray(m2.size) 
        val tmp_val_kotlintojdkm2 = ObjectArray(m2.size) { Any() }
        val kotlintojdkm2 = Pair<IntArray, ObjectArray>(tmp_key_kotlintojdkm2, tmp_val_kotlintojdkm2)
        var index_m2 = 0
        for ((key_m2, value_m2) in m2) {
            
            
            val tmp_key_kotlintojdkvalue_m2 = IntArray(value_m2.size) 
            val tmp_val_kotlintojdkvalue_m2 = IntArray(value_m2.size) 
            val kotlintojdkvalue_m2 = Pair<IntArray, IntArray>(tmp_key_kotlintojdkvalue_m2, tmp_val_kotlintojdkvalue_m2)
            var index_value_m2 = 0
            for ((key_value_m2, value_value_m2) in value_m2) {
                
                
                tmp_key_kotlintojdkvalue_m2[index_value_m2] = key_value_m2
                tmp_val_kotlintojdkvalue_m2[index_value_m2] = value_value_m2
                ++index_value_m2
            }
            tmp_key_kotlintojdkm2[index_m2] = key_m2
            tmp_val_kotlintojdkm2[index_m2] = kotlintojdkvalue_m2
            ++index_m2
        }
        val result = jMixedexamplewithmanyargs(id, kotlintojdkv1, kotlintojdkv2, kotlintojdkm1, kotlintojdkm2)
        
        return result
    }

    fun setVectorOfIntMaps(v: List<Map<Int, Int>>): Unit {
        val kotlintojdkv = ObjectArray(v.size) { Any() }
        var index_v = 0
        for (value_v in v) {
            
            val tmp_key_kotlintojdkvalue_v = IntArray(value_v.size) 
            val tmp_val_kotlintojdkvalue_v = IntArray(value_v.size) 
            val kotlintojdkvalue_v = Pair<IntArray, IntArray>(tmp_key_kotlintojdkvalue_v, tmp_val_kotlintojdkvalue_v)
            var index_value_v = 0
            for ((key_value_v, value_value_v) in value_v) {
                
                
                tmp_key_kotlintojdkvalue_v[index_value_v] = key_value_v
                tmp_val_kotlintojdkvalue_v[index_value_v] = value_value_v
                ++index_value_v
            }
            kotlintojdkv[index_v] = kotlintojdkvalue_v
            ++index_v
        }
        val result = jSetvectorofintmaps(id, kotlintojdkv)
        
        return result
    }

    fun getVectorOfIntMaps(): List<Map<Int, Int>> {
        val result = jGetvectorofintmaps(id)
        val jdktokotlinresult: MutableList<Map<Int, Int>> = mutableListOf()
        for (value_result in result) {
            @Suppress("UNCHECKED_CAST") val actual_value_result = value_result as Pair<IntArray, IntArray>
            val jdktokotlinactual_value_result = HashMap<Int, Int>()
            for (i_actual_value_result in 0..actual_value_result.first.size - 1) {
                val elem1_actual_value_result = actual_value_result.first.get(i_actual_value_result)
                val elem2_actual_value_result = actual_value_result.second.get(i_actual_value_result)
                
                
                jdktokotlinactual_value_result.put(elem1_actual_value_result, elem2_actual_value_result)
            }
            jdktokotlinresult.add(jdktokotlinactual_value_result)
        }
        return jdktokotlinresult
    }

    fun setMapOfIntVectors(m: Map<Int, List<Int>>): Unit {
        
        val tmp_key_kotlintojdkm = IntArray(m.size) 
        val tmp_val_kotlintojdkm = ObjectArray(m.size) { Any() }
        val kotlintojdkm = Pair<IntArray, ObjectArray>(tmp_key_kotlintojdkm, tmp_val_kotlintojdkm)
        var index_m = 0
        for ((key_m, value_m) in m) {
            
            val kotlintojdkvalue_m = IntArray(value_m.size) 
            var index_value_m = 0
            for (value_value_m in value_m) {
                
                kotlintojdkvalue_m[index_value_m] = value_value_m
                ++index_value_m
            }
            tmp_key_kotlintojdkm[index_m] = key_m
            tmp_val_kotlintojdkm[index_m] = kotlintojdkvalue_m
            ++index_m
        }
        val result = jSetmapofintvectors(id, kotlintojdkm)
        
        return result
    }

    fun getMapOfIntVectors(): Map<Int, List<Int>> {
        val result = jGetmapofintvectors(id)
        val jdktokotlinresult = HashMap<Int, List<Int>>()
        for (i_result in 0..result.first.size - 1) {
            val elem1_result = result.first.get(i_result)
            @Suppress("UNCHECKED_CAST") val elem2_result = result.second.get(i_result) as IntArray
            
            val jdktokotlinelem2_result: MutableList<Int> = mutableListOf()
            for (value_elem2_result in elem2_result) {
                
                jdktokotlinelem2_result.add(value_elem2_result)
            }
            jdktokotlinresult.put(elem1_result, jdktokotlinelem2_result)
        }
        return jdktokotlinresult
    }

    fun setComplexStringVector(v: List<List<List<String>>>): Unit {
        val kotlintojdkv = ObjectArray(v.size) { Any() }
        var index_v = 0
        for (value_v in v) {
            val kotlintojdkvalue_v = ObjectArray(value_v.size) { Any() }
            var index_value_v = 0
            for (value_value_v in value_v) {
                val kotlintojdkvalue_value_v = ObjectArray(value_value_v.size) { Any() }
                var index_value_value_v = 0
                for (value_value_value_v in value_value_v) {
                    
                    kotlintojdkvalue_value_v[index_value_value_v] = value_value_value_v
                    ++index_value_value_v
                }
                kotlintojdkvalue_v[index_value_v] = kotlintojdkvalue_value_v
                ++index_value_v
            }
            kotlintojdkv[index_v] = kotlintojdkvalue_v
            ++index_v
        }
        val result = jSetcomplexstringvector(id, kotlintojdkv)
        
        return result
    }

    fun getComplexStringVector(): List<List<List<String>>> {
        val result = jGetcomplexstringvector(id)
        val jdktokotlinresult: MutableList<List<List<String>>> = mutableListOf()
        for (value_result in result) {
            @Suppress("UNCHECKED_CAST") val actual_value_result = value_result as ObjectArray
            val jdktokotlinactual_value_result: MutableList<List<String>> = mutableListOf()
            for (value_actual_value_result in actual_value_result) {
                @Suppress("UNCHECKED_CAST") val actual_value_actual_value_result = value_actual_value_result as ObjectArray
                val jdktokotlinactual_value_actual_value_result: MutableList<String> = mutableListOf()
                for (value_actual_value_actual_value_result in actual_value_actual_value_result) {
                    @Suppress("UNCHECKED_CAST") val actual_value_actual_value_actual_value_result = value_actual_value_actual_value_result as String
                    
                    jdktokotlinactual_value_actual_value_result.add(actual_value_actual_value_actual_value_result)
                }
                jdktokotlinactual_value_result.add(jdktokotlinactual_value_actual_value_result)
            }
            jdktokotlinresult.add(jdktokotlinactual_value_result)
        }
        return jdktokotlinresult
    }

    fun setComplexStringMap(m: Map<String, Map<String, Map<String, String>>>): Unit {
        
        val tmp_key_kotlintojdkm = ObjectArray(m.size) { Any() }
        val tmp_val_kotlintojdkm = ObjectArray(m.size) { Any() }
        val kotlintojdkm = Pair<ObjectArray, ObjectArray>(tmp_key_kotlintojdkm, tmp_val_kotlintojdkm)
        var index_m = 0
        for ((key_m, value_m) in m) {
            
            
            val tmp_key_kotlintojdkvalue_m = ObjectArray(value_m.size) { Any() }
            val tmp_val_kotlintojdkvalue_m = ObjectArray(value_m.size) { Any() }
            val kotlintojdkvalue_m = Pair<ObjectArray, ObjectArray>(tmp_key_kotlintojdkvalue_m, tmp_val_kotlintojdkvalue_m)
            var index_value_m = 0
            for ((key_value_m, value_value_m) in value_m) {
                
                
                val tmp_key_kotlintojdkvalue_value_m = ObjectArray(value_value_m.size) { Any() }
                val tmp_val_kotlintojdkvalue_value_m = ObjectArray(value_value_m.size) { Any() }
                val kotlintojdkvalue_value_m = Pair<ObjectArray, ObjectArray>(tmp_key_kotlintojdkvalue_value_m, tmp_val_kotlintojdkvalue_value_m)
                var index_value_value_m = 0
                for ((key_value_value_m, value_value_value_m) in value_value_m) {
                    
                    
                    tmp_key_kotlintojdkvalue_value_m[index_value_value_m] = key_value_value_m
                    tmp_val_kotlintojdkvalue_value_m[index_value_value_m] = value_value_value_m
                    ++index_value_value_m
                }
                tmp_key_kotlintojdkvalue_m[index_value_m] = key_value_m
                tmp_val_kotlintojdkvalue_m[index_value_m] = kotlintojdkvalue_value_m
                ++index_value_m
            }
            tmp_key_kotlintojdkm[index_m] = key_m
            tmp_val_kotlintojdkm[index_m] = kotlintojdkvalue_m
            ++index_m
        }
        val result = jSetcomplexstringmap(id, kotlintojdkm)
        
        return result
    }

    fun getComplexStringMap(): Map<String, Map<String, Map<String, String>>> {
        val result = jGetcomplexstringmap(id)
        val jdktokotlinresult = HashMap<String, Map<String, Map<String, String>>>()
        for (i_result in 0..result.first.size - 1) {
            @Suppress("UNCHECKED_CAST") val elem1_result = result.first.get(i_result) as String
            @Suppress("UNCHECKED_CAST") val elem2_result = result.second.get(i_result) as Pair<ObjectArray, ObjectArray>
            
            val jdktokotlinelem2_result = HashMap<String, Map<String, String>>()
            for (i_elem2_result in 0..elem2_result.first.size - 1) {
                @Suppress("UNCHECKED_CAST") val elem1_elem2_result = elem2_result.first.get(i_elem2_result) as String
                @Suppress("UNCHECKED_CAST") val elem2_elem2_result = elem2_result.second.get(i_elem2_result) as Pair<ObjectArray, ObjectArray>
                
                val jdktokotlinelem2_elem2_result = HashMap<String, String>()
                for (i_elem2_elem2_result in 0..elem2_elem2_result.first.size - 1) {
                    @Suppress("UNCHECKED_CAST") val elem1_elem2_elem2_result = elem2_elem2_result.first.get(i_elem2_elem2_result) as String
                    @Suppress("UNCHECKED_CAST") val elem2_elem2_elem2_result = elem2_elem2_result.second.get(i_elem2_elem2_result) as String
                    
                    
                    jdktokotlinelem2_elem2_result.put(elem1_elem2_elem2_result, elem2_elem2_elem2_result)
                }
                jdktokotlinelem2_result.put(elem1_elem2_result, jdktokotlinelem2_elem2_result)
            }
            jdktokotlinresult.put(elem1_result, jdktokotlinelem2_result)
        }
        return jdktokotlinresult
    }

    override fun close() {
        if (cppbindObj.owner && cppbindObj.id != 0L) {
            jFinalize(cppbindObj.id)
            cppbindObj.id = 0L
        }
    }

    /**
     * Finalize and deletes the object
     */
    protected fun finalize() {
        close()
    }

    ///// External wrapper functions ////////////
    private external fun jSetnestedintvector(id: Long, v: ObjectArray): Unit
    private external fun jGetnestedintvector(id: Long): ObjectArray
    private external fun jSetnestedintmap(id: Long, m: Pair<IntArray, ObjectArray>): Unit
    private external fun jGetnestedintmap(id: Long): Pair<IntArray, ObjectArray>
    private external fun jMixedexamplewithmanyargs(id: Long, v1: ObjectArray, v2: ObjectArray, m1: Pair<IntArray, ObjectArray>, m2: Pair<IntArray, ObjectArray>): Unit
    private external fun jSetvectorofintmaps(id: Long, v: ObjectArray): Unit
    private external fun jGetvectorofintmaps(id: Long): ObjectArray
    private external fun jSetmapofintvectors(id: Long, m: Pair<IntArray, ObjectArray>): Unit
    private external fun jGetmapofintvectors(id: Long): Pair<IntArray, ObjectArray>
    private external fun jSetcomplexstringvector(id: Long, v: ObjectArray): Unit
    private external fun jGetcomplexstringvector(id: Long): ObjectArray
    private external fun jSetcomplexstringmap(id: Long, m: Pair<ObjectArray, ObjectArray>): Unit
    private external fun jGetcomplexstringmap(id: Long): Pair<ObjectArray, ObjectArray>
    private external fun jFinalize(id: Long): Unit
}

private external fun jGettypebyid(id: Long): String

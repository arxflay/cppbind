/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 12/08/2021-08:31.
 * Please do not change it manually.
 */

package com.examples.containers

import com.examples.exception_helpers.*
import com.examples.iegen.alias.*
import com.examples.iegen.exceptionUtils.*

open class NestedExamples
internal constructor(_id: Long) : AutoCloseable {
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
    }
    
    protected var objId = _id
    
    open val id: Long
        get() {
            if (objId == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return objId
        }
    
    /**
     * comments
     * 
     */
    constructor(): this(construct_helper()) {
    }
    
    fun setNestedIntVector(v: List<List<Int>>): Unit {
        
        val kotlin_to_jdk_v = ObjectArray(v.size) { Any() }
        var index_v = 0
        for (value_v in v) {
            
            val kotlin_to_jdk_value_v = IntArray(value_v.size) 
            var index_value_v = 0
            for (value_value_v in value_v) {
                
                kotlin_to_jdk_value_v[index_value_v] = value_value_v
                ++index_value_v
            }
            kotlin_to_jdk_v[index_v] = kotlin_to_jdk_value_v
            ++index_v
        }
        val result = jSetnestedintvector(id, kotlin_to_jdk_v)
        
        return result
    }

    fun getNestedIntVector(): List<List<Int>> {
        val result = jGetnestedintvector(id)
        val jdk_to_kotlin_result: MutableList<List<Int>> = mutableListOf()
        for (value_result in result) {
            @Suppress("UNCHECKED_CAST") val actual_value_result = value_result as IntArray
            val jdk_to_kotlin_actual_value_result: MutableList<Int> = mutableListOf()
            for (value_actual_value_result in actual_value_result) {
                
                jdk_to_kotlin_actual_value_result.add(value_actual_value_result)
            }
            jdk_to_kotlin_result.add(jdk_to_kotlin_actual_value_result)
        }
        return jdk_to_kotlin_result
    }

    fun setNestedIntMap(m: Map<Int, Map<Int, Int>>): Unit {
        
        val tmp_key_kotlin_to_jdk_m = IntArray(m.size) 
        val tmp_val_kotlin_to_jdk_m = ObjectArray(m.size) { Any() }
        val kotlin_to_jdk_m = Pair<IntArray, ObjectArray>(tmp_key_kotlin_to_jdk_m, tmp_val_kotlin_to_jdk_m)
        var index_m = 0
        for ((key_m, value_m) in m) {
            
            
            val tmp_key_kotlin_to_jdk_value_m = IntArray(value_m.size) 
            val tmp_val_kotlin_to_jdk_value_m = IntArray(value_m.size) 
            val kotlin_to_jdk_value_m = Pair<IntArray, IntArray>(tmp_key_kotlin_to_jdk_value_m, tmp_val_kotlin_to_jdk_value_m)
            var index_value_m = 0
            for ((key_value_m, value_value_m) in value_m) {
                
                
                tmp_key_kotlin_to_jdk_value_m[index_value_m] = key_value_m
                tmp_val_kotlin_to_jdk_value_m[index_value_m] = value_value_m
                ++index_value_m
            }
            tmp_key_kotlin_to_jdk_m[index_m] = key_m
            tmp_val_kotlin_to_jdk_m[index_m] = kotlin_to_jdk_value_m
            ++index_m
        }
        val result = jSetnestedintmap(id, kotlin_to_jdk_m)
        
        return result
    }

    fun getNestedIntMap(): Map<Int, Map<Int, Int>> {
        val result = jGetnestedintmap(id)
        val jdk_to_kotlin_result = HashMap<Int, Map<Int, Int>>()
        for (i_result in 0..result.first.size - 1) {
            val elem1_result = result.first.get(i_result)
            @Suppress("UNCHECKED_CAST") val elem2_result = result.second.get(i_result) as Pair<IntArray, IntArray>
            
            val jdk_to_kotlin_elem2_result = HashMap<Int, Int>()
            for (i_elem2_result in 0..elem2_result.first.size - 1) {
                val elem1_elem2_result = elem2_result.first.get(i_elem2_result)
                val elem2_elem2_result = elem2_result.second.get(i_elem2_result)
                
                
                jdk_to_kotlin_elem2_result.put(elem1_elem2_result, elem2_elem2_result)
            }
            jdk_to_kotlin_result.put(elem1_result, jdk_to_kotlin_elem2_result)
        }
        return jdk_to_kotlin_result
    }

    fun mixedExampleWithManyArgs(v1: List<List<Int>>, v2: List<List<Int>>, m1: Map<Int, Map<Int, Int>>, m2: Map<Int, Map<Int, Int>>): Unit {
        
        val kotlin_to_jdk_v1 = ObjectArray(v1.size) { Any() }
        var index_v1 = 0
        for (value_v1 in v1) {
            
            val kotlin_to_jdk_value_v1 = IntArray(value_v1.size) 
            var index_value_v1 = 0
            for (value_value_v1 in value_v1) {
                
                kotlin_to_jdk_value_v1[index_value_v1] = value_value_v1
                ++index_value_v1
            }
            kotlin_to_jdk_v1[index_v1] = kotlin_to_jdk_value_v1
            ++index_v1
        }
        
        val kotlin_to_jdk_v2 = ObjectArray(v2.size) { Any() }
        var index_v2 = 0
        for (value_v2 in v2) {
            
            val kotlin_to_jdk_value_v2 = IntArray(value_v2.size) 
            var index_value_v2 = 0
            for (value_value_v2 in value_v2) {
                
                kotlin_to_jdk_value_v2[index_value_v2] = value_value_v2
                ++index_value_v2
            }
            kotlin_to_jdk_v2[index_v2] = kotlin_to_jdk_value_v2
            ++index_v2
        }
        
        val tmp_key_kotlin_to_jdk_m1 = IntArray(m1.size) 
        val tmp_val_kotlin_to_jdk_m1 = ObjectArray(m1.size) { Any() }
        val kotlin_to_jdk_m1 = Pair<IntArray, ObjectArray>(tmp_key_kotlin_to_jdk_m1, tmp_val_kotlin_to_jdk_m1)
        var index_m1 = 0
        for ((key_m1, value_m1) in m1) {
            
            
            val tmp_key_kotlin_to_jdk_value_m1 = IntArray(value_m1.size) 
            val tmp_val_kotlin_to_jdk_value_m1 = IntArray(value_m1.size) 
            val kotlin_to_jdk_value_m1 = Pair<IntArray, IntArray>(tmp_key_kotlin_to_jdk_value_m1, tmp_val_kotlin_to_jdk_value_m1)
            var index_value_m1 = 0
            for ((key_value_m1, value_value_m1) in value_m1) {
                
                
                tmp_key_kotlin_to_jdk_value_m1[index_value_m1] = key_value_m1
                tmp_val_kotlin_to_jdk_value_m1[index_value_m1] = value_value_m1
                ++index_value_m1
            }
            tmp_key_kotlin_to_jdk_m1[index_m1] = key_m1
            tmp_val_kotlin_to_jdk_m1[index_m1] = kotlin_to_jdk_value_m1
            ++index_m1
        }
        
        val tmp_key_kotlin_to_jdk_m2 = IntArray(m2.size) 
        val tmp_val_kotlin_to_jdk_m2 = ObjectArray(m2.size) { Any() }
        val kotlin_to_jdk_m2 = Pair<IntArray, ObjectArray>(tmp_key_kotlin_to_jdk_m2, tmp_val_kotlin_to_jdk_m2)
        var index_m2 = 0
        for ((key_m2, value_m2) in m2) {
            
            
            val tmp_key_kotlin_to_jdk_value_m2 = IntArray(value_m2.size) 
            val tmp_val_kotlin_to_jdk_value_m2 = IntArray(value_m2.size) 
            val kotlin_to_jdk_value_m2 = Pair<IntArray, IntArray>(tmp_key_kotlin_to_jdk_value_m2, tmp_val_kotlin_to_jdk_value_m2)
            var index_value_m2 = 0
            for ((key_value_m2, value_value_m2) in value_m2) {
                
                
                tmp_key_kotlin_to_jdk_value_m2[index_value_m2] = key_value_m2
                tmp_val_kotlin_to_jdk_value_m2[index_value_m2] = value_value_m2
                ++index_value_m2
            }
            tmp_key_kotlin_to_jdk_m2[index_m2] = key_m2
            tmp_val_kotlin_to_jdk_m2[index_m2] = kotlin_to_jdk_value_m2
            ++index_m2
        }
        val result = jMixedexamplewithmanyargs(id, kotlin_to_jdk_v1, kotlin_to_jdk_v2, kotlin_to_jdk_m1, kotlin_to_jdk_m2)
        
        return result
    }

    fun setVectorOfIntMaps(v: List<Map<Int, Int>>): Unit {
        
        val kotlin_to_jdk_v = ObjectArray(v.size) { Any() }
        var index_v = 0
        for (value_v in v) {
            
            val tmp_key_kotlin_to_jdk_value_v = IntArray(value_v.size) 
            val tmp_val_kotlin_to_jdk_value_v = IntArray(value_v.size) 
            val kotlin_to_jdk_value_v = Pair<IntArray, IntArray>(tmp_key_kotlin_to_jdk_value_v, tmp_val_kotlin_to_jdk_value_v)
            var index_value_v = 0
            for ((key_value_v, value_value_v) in value_v) {
                
                
                tmp_key_kotlin_to_jdk_value_v[index_value_v] = key_value_v
                tmp_val_kotlin_to_jdk_value_v[index_value_v] = value_value_v
                ++index_value_v
            }
            kotlin_to_jdk_v[index_v] = kotlin_to_jdk_value_v
            ++index_v
        }
        val result = jSetvectorofintmaps(id, kotlin_to_jdk_v)
        
        return result
    }

    fun getVectorOfIntMaps(): List<Map<Int, Int>> {
        val result = jGetvectorofintmaps(id)
        val jdk_to_kotlin_result: MutableList<Map<Int, Int>> = mutableListOf()
        for (value_result in result) {
            @Suppress("UNCHECKED_CAST") val actual_value_result = value_result as Pair<IntArray, IntArray>
            val jdk_to_kotlin_actual_value_result = HashMap<Int, Int>()
            for (i_actual_value_result in 0..actual_value_result.first.size - 1) {
                val elem1_actual_value_result = actual_value_result.first.get(i_actual_value_result)
                val elem2_actual_value_result = actual_value_result.second.get(i_actual_value_result)
                
                
                jdk_to_kotlin_actual_value_result.put(elem1_actual_value_result, elem2_actual_value_result)
            }
            jdk_to_kotlin_result.add(jdk_to_kotlin_actual_value_result)
        }
        return jdk_to_kotlin_result
    }

    fun setMapOfIntVectors(m: Map<Int, List<Int>>): Unit {
        
        val tmp_key_kotlin_to_jdk_m = IntArray(m.size) 
        val tmp_val_kotlin_to_jdk_m = ObjectArray(m.size) { Any() }
        val kotlin_to_jdk_m = Pair<IntArray, ObjectArray>(tmp_key_kotlin_to_jdk_m, tmp_val_kotlin_to_jdk_m)
        var index_m = 0
        for ((key_m, value_m) in m) {
            
            
            val kotlin_to_jdk_value_m = IntArray(value_m.size) 
            var index_value_m = 0
            for (value_value_m in value_m) {
                
                kotlin_to_jdk_value_m[index_value_m] = value_value_m
                ++index_value_m
            }
            tmp_key_kotlin_to_jdk_m[index_m] = key_m
            tmp_val_kotlin_to_jdk_m[index_m] = kotlin_to_jdk_value_m
            ++index_m
        }
        val result = jSetmapofintvectors(id, kotlin_to_jdk_m)
        
        return result
    }

    fun getMapOfIntVectors(): Map<Int, List<Int>> {
        val result = jGetmapofintvectors(id)
        val jdk_to_kotlin_result = HashMap<Int, List<Int>>()
        for (i_result in 0..result.first.size - 1) {
            val elem1_result = result.first.get(i_result)
            @Suppress("UNCHECKED_CAST") val elem2_result = result.second.get(i_result) as IntArray
            
            val jdk_to_kotlin_elem2_result: MutableList<Int> = mutableListOf()
            for (value_elem2_result in elem2_result) {
                
                jdk_to_kotlin_elem2_result.add(value_elem2_result)
            }
            jdk_to_kotlin_result.put(elem1_result, jdk_to_kotlin_elem2_result)
        }
        return jdk_to_kotlin_result
    }

    fun setComplexStringVector(v: List<List<List<String>>>): Unit {
        
        val kotlin_to_jdk_v = ObjectArray(v.size) { Any() }
        var index_v = 0
        for (value_v in v) {
            
            val kotlin_to_jdk_value_v = ObjectArray(value_v.size) { Any() }
            var index_value_v = 0
            for (value_value_v in value_v) {
                
                val kotlin_to_jdk_value_value_v = ObjectArray(value_value_v.size) { Any() }
                var index_value_value_v = 0
                for (value_value_value_v in value_value_v) {
                    
                    kotlin_to_jdk_value_value_v[index_value_value_v] = value_value_value_v
                    ++index_value_value_v
                }
                kotlin_to_jdk_value_v[index_value_v] = kotlin_to_jdk_value_value_v
                ++index_value_v
            }
            kotlin_to_jdk_v[index_v] = kotlin_to_jdk_value_v
            ++index_v
        }
        val result = jSetcomplexstringvector(id, kotlin_to_jdk_v)
        
        return result
    }

    fun getComplexStringVector(): List<List<List<String>>> {
        val result = jGetcomplexstringvector(id)
        val jdk_to_kotlin_result: MutableList<List<List<String>>> = mutableListOf()
        for (value_result in result) {
            @Suppress("UNCHECKED_CAST") val actual_value_result = value_result as ObjectArray
            val jdk_to_kotlin_actual_value_result: MutableList<List<String>> = mutableListOf()
            for (value_actual_value_result in actual_value_result) {
                @Suppress("UNCHECKED_CAST") val actual_value_actual_value_result = value_actual_value_result as ObjectArray
                val jdk_to_kotlin_actual_value_actual_value_result: MutableList<String> = mutableListOf()
                for (value_actual_value_actual_value_result in actual_value_actual_value_result) {
                    @Suppress("UNCHECKED_CAST") val actual_value_actual_value_actual_value_result = value_actual_value_actual_value_result as String
                    
                    jdk_to_kotlin_actual_value_actual_value_result.add(actual_value_actual_value_actual_value_result)
                }
                jdk_to_kotlin_actual_value_result.add(jdk_to_kotlin_actual_value_actual_value_result)
            }
            jdk_to_kotlin_result.add(jdk_to_kotlin_actual_value_result)
        }
        return jdk_to_kotlin_result
    }

    fun setComplexStringMap(m: Map<String, Map<String, Map<String, String>>>): Unit {
        
        val tmp_key_kotlin_to_jdk_m = ObjectArray(m.size) { Any() }
        val tmp_val_kotlin_to_jdk_m = ObjectArray(m.size) { Any() }
        val kotlin_to_jdk_m = Pair<ObjectArray, ObjectArray>(tmp_key_kotlin_to_jdk_m, tmp_val_kotlin_to_jdk_m)
        var index_m = 0
        for ((key_m, value_m) in m) {
            
            
            val tmp_key_kotlin_to_jdk_value_m = ObjectArray(value_m.size) { Any() }
            val tmp_val_kotlin_to_jdk_value_m = ObjectArray(value_m.size) { Any() }
            val kotlin_to_jdk_value_m = Pair<ObjectArray, ObjectArray>(tmp_key_kotlin_to_jdk_value_m, tmp_val_kotlin_to_jdk_value_m)
            var index_value_m = 0
            for ((key_value_m, value_value_m) in value_m) {
                
                
                val tmp_key_kotlin_to_jdk_value_value_m = ObjectArray(value_value_m.size) { Any() }
                val tmp_val_kotlin_to_jdk_value_value_m = ObjectArray(value_value_m.size) { Any() }
                val kotlin_to_jdk_value_value_m = Pair<ObjectArray, ObjectArray>(tmp_key_kotlin_to_jdk_value_value_m, tmp_val_kotlin_to_jdk_value_value_m)
                var index_value_value_m = 0
                for ((key_value_value_m, value_value_value_m) in value_value_m) {
                    
                    
                    tmp_key_kotlin_to_jdk_value_value_m[index_value_value_m] = key_value_value_m
                    tmp_val_kotlin_to_jdk_value_value_m[index_value_value_m] = value_value_value_m
                    ++index_value_value_m
                }
                tmp_key_kotlin_to_jdk_value_m[index_value_m] = key_value_m
                tmp_val_kotlin_to_jdk_value_m[index_value_m] = kotlin_to_jdk_value_value_m
                ++index_value_m
            }
            tmp_key_kotlin_to_jdk_m[index_m] = key_m
            tmp_val_kotlin_to_jdk_m[index_m] = kotlin_to_jdk_value_m
            ++index_m
        }
        val result = jSetcomplexstringmap(id, kotlin_to_jdk_m)
        
        return result
    }

    fun getComplexStringMap(): Map<String, Map<String, Map<String, String>>> {
        val result = jGetcomplexstringmap(id)
        val jdk_to_kotlin_result = HashMap<String, Map<String, Map<String, String>>>()
        for (i_result in 0..result.first.size - 1) {
            @Suppress("UNCHECKED_CAST") val elem1_result = result.first.get(i_result) as String
            @Suppress("UNCHECKED_CAST") val elem2_result = result.second.get(i_result) as Pair<ObjectArray, ObjectArray>
            
            val jdk_to_kotlin_elem2_result = HashMap<String, Map<String, String>>()
            for (i_elem2_result in 0..elem2_result.first.size - 1) {
                @Suppress("UNCHECKED_CAST") val elem1_elem2_result = elem2_result.first.get(i_elem2_result) as String
                @Suppress("UNCHECKED_CAST") val elem2_elem2_result = elem2_result.second.get(i_elem2_result) as Pair<ObjectArray, ObjectArray>
                
                val jdk_to_kotlin_elem2_elem2_result = HashMap<String, String>()
                for (i_elem2_elem2_result in 0..elem2_elem2_result.first.size - 1) {
                    @Suppress("UNCHECKED_CAST") val elem1_elem2_elem2_result = elem2_elem2_result.first.get(i_elem2_elem2_result) as String
                    @Suppress("UNCHECKED_CAST") val elem2_elem2_elem2_result = elem2_elem2_result.second.get(i_elem2_elem2_result) as String
                    
                    
                    jdk_to_kotlin_elem2_elem2_result.put(elem1_elem2_elem2_result, elem2_elem2_elem2_result)
                }
                jdk_to_kotlin_elem2_result.put(elem1_elem2_result, jdk_to_kotlin_elem2_elem2_result)
            }
            jdk_to_kotlin_result.put(elem1_result, jdk_to_kotlin_elem2_result)
        }
        return jdk_to_kotlin_result
    }

    override fun close() {
        if (objId != 0L) {
            jFinalize(objId)
            objId = 0L
        }
    }

    /**
     * Finalize and deletes the object
     */
    protected fun finalize() {
        //close()
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
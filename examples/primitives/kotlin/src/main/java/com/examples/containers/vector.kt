/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 03/01/2022-08:48.
 * Please do not change it manually.
 */

package com.examples.containers

import com.examples.iegen.alias.*
import com.examples.iegen.exceptionUtils.*
import com.examples.iegen.exception_helpers.*

/**
 * comments
 * 
 */
open class VectorItem
internal constructor(obj: IEGenObject) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        /**
         * comments
         * 
         */
        protected fun construct_helper(_value: Int): Long {
            val id = jConstructor(_value)
            return id
        }

        @JvmStatic
        private external fun jConstructor(_value: Int): Long
    }
    
    protected var iegObj = obj
    private var refs: MutableList<Any> = mutableListOf()

    fun keepIEGenReference(ref: Any) {
        refs.add(ref)
    }
    
    open val id: Long
        get() {
            if (iegObj.id == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return iegObj.id
        }
    
    /**
     * comments
     * 
     */
    constructor(_value: Int): this(IEGenObject(construct_helper(_value), true)) {
    }
    
    /**
     * comments
     * 
     */
    var value: Int
        get() {
            val result = jValue(id)
            
            return result
        }
        set(value) {
            
            jSetvalue(id, value)
        }
        

    override fun close() {
        if (iegObj.owner && iegObj.id != 0L) {
            jFinalize(iegObj.id)
            iegObj.id = 0L
        }
    }

    /**
     * Finalize and deletes the object
     */
    protected fun finalize() {
        close()
    }

    ///// External wrapper functions ////////////
    private external fun jValue(id: Long): Int
    private external fun jSetvalue(id: Long, value: Int): Unit
    private external fun jFinalize(id: Long): Unit
}

/**
 * comments
 * 
 */
open class VectorExamples
internal constructor(obj: IEGenObject) : AutoCloseable {
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
    
    protected var iegObj = obj
    private var refs: MutableList<Any> = mutableListOf()

    fun keepIEGenReference(ref: Any) {
        refs.add(ref)
    }
    
    open val id: Long
        get() {
            if (iegObj.id == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return iegObj.id
        }
    
    /**
     * comments
     * 
     */
    constructor(): this(IEGenObject(construct_helper(), true)) {
    }
    
    /**
     * comments
     * 
     */
    fun addIntVector(v: List<Int>): Unit {
        val kotlintojdkv = IntArray(v.size) 
        var index_v = 0
        for (value_v in v) {
            
            kotlintojdkv[index_v] = value_v
            ++index_v
        }
        val result = jAddintvector(id, kotlintojdkv)
        
        return result
    }

    /**
     * comments
     * 
     */
    fun addObjVector(v: List<VectorItem>): Unit {
        val kotlintojdkv = LongArray(v.size) 
        var index_v = 0
        for (value_v in v) {
            val kotlintojdkvalue_v = value_v.id
            kotlintojdkv[index_v] = kotlintojdkvalue_v
            ++index_v
        }
        val result = jAddobjvector(id, kotlintojdkv)
        
        return result
    }

    /**
     * comments
     * 
     */
    fun addStringVector(v: List<String>): Unit {
        val kotlintojdkv = ObjectArray(v.size) { Any() }
        var index_v = 0
        for (value_v in v) {
            
            kotlintojdkv[index_v] = value_v
            ++index_v
        }
        val result = jAddstringvector(id, kotlintojdkv)
        
        return result
    }

    /**
     * comments
     * 
     */
    fun getStringVector(): List<String> {
        val result = jGetstringvector(id)
        val jdktokotlinresult: MutableList<String> = mutableListOf()
        for (value_result in result) {
            @Suppress("UNCHECKED_CAST") val actual_value_result = value_result as String
            
            jdktokotlinresult.add(actual_value_result)
        }
        return jdktokotlinresult
    }

    /**
     * comments
     * 
     */
    fun getObjVector(): List<VectorItem> {
        val result = jGetobjvector(id)
        val jdktokotlinresult: MutableList<VectorItem> = mutableListOf()
        for (value_result in result) {
            val jdktokotlinvalue_result = VectorItem(IEGenObject(value_result))
            jdktokotlinresult.add(jdktokotlinvalue_result)
        }
        return jdktokotlinresult
    }

    /**
     * comments
     * 
     */
    fun getIntVector(): List<Int> {
        val result = jGetintvector(id)
        val jdktokotlinresult: MutableList<Int> = mutableListOf()
        for (value_result in result) {
            
            jdktokotlinresult.add(value_result)
        }
        return jdktokotlinresult
    }

    override fun close() {
        if (iegObj.owner && iegObj.id != 0L) {
            jFinalize(iegObj.id)
            iegObj.id = 0L
        }
    }

    /**
     * Finalize and deletes the object
     */
    protected fun finalize() {
        close()
    }

    ///// External wrapper functions ////////////
    private external fun jAddintvector(id: Long, v: IntArray): Unit
    private external fun jAddobjvector(id: Long, v: LongArray): Unit
    private external fun jAddstringvector(id: Long, v: ObjectArray): Unit
    private external fun jGetstringvector(id: Long): ObjectArray
    private external fun jGetobjvector(id: Long): LongArray
    private external fun jGetintvector(id: Long): IntArray
    private external fun jFinalize(id: Long): Unit
}

private external fun jGettypebyid(id: Long): String

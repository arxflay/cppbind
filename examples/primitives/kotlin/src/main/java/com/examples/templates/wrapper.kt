/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 09/23/2021-14:07.
 * Please do not change it manually.
 */

package com.examples.templates

import alias.*
import com.examples.exception_helpers.*
import exceptionUtils.*

/**
 * comments
 * 
 */
open class WrapperPairStrings
internal constructor(_id: Long) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni");
        }
        
        protected fun construct_helper(value: Pair<String, String>): Long {val first_value = value.first
            val second_value = value.second


            val kotlin_to_jdk_value = Pair<String, String>(first_value, second_value)
            val id = jConstructor(kotlin_to_jdk_value)
            return id
        }

        @JvmStatic
        private external fun jConstructor(value: Pair<String, String>): Long
    }
    
    protected var id = _id
    
    open fun getObjId(): Long {
        if (id == 0L) {
            throw RuntimeException("Object is not allocated")
        }
        return id;
    }
    
    constructor(value: Pair<String, String>): this(construct_helper(value)) {
    }
    
    var value: Pair<String, String>
        get() {
            val result = jValue(getObjId())
            val first_result = result.first
            val second_result = result.second


            val jdk_to_kotlin_result = Pair<String, String>(first_result, second_result)
            return jdk_to_kotlin_result
        }
        set(value) {
            val first_value = value.first
            val second_value = value.second


            val kotlin_to_jdk_value = Pair<String, String>(first_value, second_value)
            jSetvalue(getObjId(), kotlin_to_jdk_value)
        }

    override fun close() {
        if (id != 0L) {
            jFinalize(id)
            id = 0L
        }
    }

    /**
     * Finalize and deletes the object
     */
    protected fun finalize() {
        close()
    }

    ///// External wrapper functions ////////////
    private external fun jValue(id: Long): Pair<String, String>
    private external fun jSetvalue(id: Long, value: Pair<String, String>): Unit
    private external fun jFinalize(id: Long): Unit
}

/**
 * comments
 * 
 */
open class WrapperPairIntInt
internal constructor(_id: Long) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni");
        }
        
        protected fun construct_helper(value: Pair<Int, Int>): Long {val first_value = value.first
            val second_value = value.second


            val kotlin_to_jdk_value = Pair<Int, Int>(first_value, second_value)
            val id = jConstructor(kotlin_to_jdk_value)
            return id
        }

        @JvmStatic
        private external fun jConstructor(value: Pair<Int, Int>): Long
    }
    
    protected var id = _id
    
    open fun getObjId(): Long {
        if (id == 0L) {
            throw RuntimeException("Object is not allocated")
        }
        return id;
    }
    
    constructor(value: Pair<Int, Int>): this(construct_helper(value)) {
    }
    
    var value: Pair<Int, Int>
        get() {
            val result = jValue(getObjId())
            val first_result = result.first
            val second_result = result.second


            val jdk_to_kotlin_result = Pair<Int, Int>(first_result, second_result)
            return jdk_to_kotlin_result
        }
        set(value) {
            val first_value = value.first
            val second_value = value.second


            val kotlin_to_jdk_value = Pair<Int, Int>(first_value, second_value)
            jSetvalue(getObjId(), kotlin_to_jdk_value)
        }

    override fun close() {
        if (id != 0L) {
            jFinalize(id)
            id = 0L
        }
    }

    /**
     * Finalize and deletes the object
     */
    protected fun finalize() {
        close()
    }

    ///// External wrapper functions ////////////
    private external fun jValue(id: Long): Pair<Int, Int>
    private external fun jSetvalue(id: Long, value: Pair<Int, Int>): Unit
    private external fun jFinalize(id: Long): Unit
}

/**
 * comments
 * 
 */
open class WrapperString
internal constructor(_id: Long) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni");
        }
        
        protected fun construct_helper(value: String): Long {
            val id = jConstructor(value)
            return id
        }

        @JvmStatic
        private external fun jConstructor(value: String): Long
    }
    
    protected var id = _id
    
    open fun getObjId(): Long {
        if (id == 0L) {
            throw RuntimeException("Object is not allocated")
        }
        return id;
    }
    
    constructor(value: String): this(construct_helper(value)) {
    }
    
    var value: String
        get() {
            val result = jValue(getObjId())
            
            return result
        }
        set(value) {
            
            jSetvalue(getObjId(), value)
        }

    override fun close() {
        if (id != 0L) {
            jFinalize(id)
            id = 0L
        }
    }

    /**
     * Finalize and deletes the object
     */
    protected fun finalize() {
        close()
    }

    ///// External wrapper functions ////////////
    private external fun jValue(id: Long): String
    private external fun jSetvalue(id: Long, value: String): Unit
    private external fun jFinalize(id: Long): Unit
}
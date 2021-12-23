/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 12/23/2021-14:02.
 * Please do not change it manually.
 */

package com.examples.nullables

import com.examples.iegen.alias.*
import com.examples.iegen.exceptionUtils.*
import com.examples.iegen.exception_helpers.*

open class NumberInt
internal constructor(_id: Long, _owner: Boolean = false) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        protected fun construct_helper(val_: Int): Long {
            val id = jConstructor(val_)
            return id
        }

        @JvmStatic
        private external fun jConstructor(val_: Int): Long
    }
    
    protected var objId = _id
    protected val owner = _owner
    
    open val id: Long
        get() {
            if (objId == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return objId
        }
    
    constructor(val_: Int): this(construct_helper(val_), true) {
    }
    
    val value: Int
        get() {
            val result = jValue(id)
            
            return result
        }

    override fun close() {
        if (owner && objId != 0L) {
            jFinalize(objId)
            objId = 0L
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
    private external fun jFinalize(id: Long): Unit
}

open class NumberDouble
internal constructor(_id: Long, _owner: Boolean = false) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        protected fun construct_helper(val_: Double): Long {
            val id = jConstructor(val_)
            return id
        }

        @JvmStatic
        private external fun jConstructor(val_: Double): Long
    }
    
    protected var objId = _id
    protected val owner = _owner
    
    open val id: Long
        get() {
            if (objId == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return objId
        }
    
    constructor(val_: Double): this(construct_helper(val_), true) {
    }
    
    val value: Double
        get() {
            val result = jValue(id)
            
            return result
        }

    override fun close() {
        if (owner && objId != 0L) {
            jFinalize(objId)
            objId = 0L
        }
    }

    /**
     * Finalize and deletes the object
     */
    protected fun finalize() {
        close()
    }

    ///// External wrapper functions ////////////
    private external fun jValue(id: Long): Double
    private external fun jFinalize(id: Long): Unit
}

/**
 * An example with nullable arguments.
 */
open class Utils
internal constructor(_id: Long, _owner: Boolean = false) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        protected fun construct_helper(num: NumberDouble?): Long {val kotlintojdknum = num?.id ?: 0L
            val id = jConstructor(kotlintojdknum)
            return id
        }

        @JvmStatic
        private external fun jConstructor(num: Long): Long

        fun max(first: NumberDouble?, second: NumberDouble): NumberDouble? {
            val kotlintojdkfirst = first?.id ?: 0L
            val kotlintojdksecond = second.id
            val result = jMax(kotlintojdkfirst, kotlintojdksecond)
            val jdktokotlinresult = if (result == 0L) null else NumberDouble(result)
            return jdktokotlinresult
        }
        @JvmStatic
        private external fun jMax(first: Long, second: Long): Long

        fun max(first: NumberInt?, second: NumberInt?): NumberInt? {
            val kotlintojdkfirst = first?.id ?: 0L
            val kotlintojdksecond = second?.id ?: 0L
            val result = jMax_1(kotlintojdkfirst, kotlintojdksecond)
            val jdktokotlinresult = if (result == 0L) null else NumberInt(result, true)
            return jdktokotlinresult
        }
        @JvmStatic
        private external fun jMax_1(first: Long, second: Long): Long

        fun checkNonnullArg(number: NumberDouble): Unit {
            val kotlintojdknumber = number.id
            val result = jChecknonnullarg(kotlintojdknumber)
            
            return result
        }
        @JvmStatic
        private external fun jChecknonnullarg(number: Long): Unit

        fun checkNonnullReturn(): NumberDouble {
            val result = jChecknonnullreturn()
            val jdktokotlinresult = NumberDouble(result)
            return jdktokotlinresult
        }
        @JvmStatic
        private external fun jChecknonnullreturn(): Long
    }
    
    protected var objId = _id
    protected val owner = _owner
    
    open val id: Long
        get() {
            if (objId == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return objId
        }
    
    constructor(num: NumberDouble?): this(construct_helper(num), true) {
    }
    
    var nullable: NumberDouble?
        get() {
            val result = jNullable(id)
            val jdktokotlinresult = if (result == 0L) null else NumberDouble(result)
            return jdktokotlinresult
        }
        set(value) {
            val kotlintojdkvalue = value?.id ?: 0L
            jSetnullable(id, kotlintojdkvalue)
        }

    var nonNull: NumberDouble
        get() {
            val result = jNonnull(id)
            val jdktokotlinresult = NumberDouble(result)
            return jdktokotlinresult
        }
        set(value) {
            val kotlintojdkvalue = value.id
            jSetnonnull(id, kotlintojdkvalue)
        }

    var numDouble: NumberDouble?
        get() {
            val result = jNumdouble(id)
            val jdktokotlinresult = if (result == 0L) null else NumberDouble(result)
            return jdktokotlinresult
        }
        set(value) {
            val kotlintojdkvalue = value?.id ?: 0L
            jSetnumdouble(id, kotlintojdkvalue)
        }
        

    var numInt: NumberInt
        get() {
            val result = jNumint(id)
            val jdktokotlinresult = NumberInt(result, true)
            return jdktokotlinresult
        }
        set(value) {
            val kotlintojdkvalue = value.id
            jSetnumint(id, kotlintojdkvalue)
        }
        

    override fun close() {
        if (owner && objId != 0L) {
            jFinalize(objId)
            objId = 0L
        }
    }

    /**
     * Finalize and deletes the object
     */
    protected fun finalize() {
        close()
    }

    ///// External wrapper functions ////////////
    private external fun jNullable(id: Long): Long
    private external fun jSetnullable(id: Long, value: Long): Unit
    private external fun jNonnull(id: Long): Long
    private external fun jSetnonnull(id: Long, value: Long): Unit
    private external fun jNumdouble(id: Long): Long
    private external fun jSetnumdouble(id: Long, value: Long): Unit
    private external fun jNumint(id: Long): Long
    private external fun jSetnumint(id: Long, value: Long): Unit
    private external fun jFinalize(id: Long): Unit
}
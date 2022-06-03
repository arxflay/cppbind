/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 06/02/2022-08:57.
 * Please do not change it manually.
 */

package com.examples.nullables

import com.examples.cppbind.alias.*
import com.examples.cppbind.exceptionUtils.*
import com.examples.cppbind.exception_helpers.*

private val INIT = run {
    System.loadLibrary("wrapper_jni");
}

open class NumberInt
internal constructor(obj: CppBindObject) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        protected fun construct_helper(val_: Int): Long {
            val id = jConstructor(val_)
            return id
        }

        @JvmStatic
        private external fun jConstructor(val_: Int, vararg extraObjs: Any?): Long
        const val cppbindCxxTypeName: String = "cppbind::example::nullable::NumberInt"
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
    
    constructor(val_: Int): this(CppBindObject(construct_helper(val_), true)) {
    }
    
    val value: Int
        get() {
            val result = jValue(id)
            
            return result
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
    private external fun jValue(id: Long): Int
    private external fun jFinalize(id: Long): Unit
}

open class NumberDouble
internal constructor(obj: CppBindObject) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        protected fun construct_helper(val_: Double): Long {
            val id = jConstructor(val_)
            return id
        }

        @JvmStatic
        private external fun jConstructor(val_: Double, vararg extraObjs: Any?): Long
        const val cppbindCxxTypeName: String = "cppbind::example::nullable::NumberDouble"
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
    
    constructor(val_: Double): this(CppBindObject(construct_helper(val_), true)) {
    }
    
    val value: Double
        get() {
            val result = jValue(id)
            
            return result
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
    private external fun jValue(id: Long): Double
    private external fun jFinalize(id: Long): Unit
}

/**
 * An example with nullable arguments.
 */
open class Utils
internal constructor(obj: CppBindObject) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        protected fun construct_helper(num: NumberDouble?): Long {
            val kotlintojdknum = num?.id ?: 0L
            val id = jConstructor(kotlintojdknum, num)
            return id
        }

        @JvmStatic
        private external fun jConstructor(num: Long, vararg extraObjs: Any?): Long

        fun max(first: NumberDouble?, second: NumberDouble): NumberDouble? {
            val kotlintojdkfirst = first?.id ?: 0L
            val kotlintojdksecond = second.id
            val result = jMax(kotlintojdkfirst, kotlintojdksecond, first, second)
            val jdktokotlinresult = if (result == 0L) null else NumberDouble(CppBindObject(result))
            return jdktokotlinresult
        }
        @JvmStatic
        private external fun jMax(first: Long, second: Long, vararg extraObjs: Any?): Long

        fun max(first: NumberInt?, second: NumberInt?): NumberInt? {
            val kotlintojdkfirst = first?.id ?: 0L
            val kotlintojdksecond = second?.id ?: 0L
            val result = jMax_1(kotlintojdkfirst, kotlintojdksecond, first, second)
            val jdktokotlinresult = if (result == 0L) null else NumberInt(CppBindObject(result, true))
            return jdktokotlinresult
        }
        @JvmStatic
        private external fun jMax_1(first: Long, second: Long, vararg extraObjs: Any?): Long

        fun checkNonnullArg(number: NumberDouble): Unit {
            val kotlintojdknumber = number.id
            val result = jChecknonnullarg(kotlintojdknumber, number)
            
            return result
        }
        @JvmStatic
        private external fun jChecknonnullarg(number: Long, vararg extraObjs: Any?): Unit

        fun checkNonnullReturn(): NumberDouble {
            val result = jChecknonnullreturn()
            val jdktokotlinresult = NumberDouble(CppBindObject(result))
            return jdktokotlinresult
        }
        @JvmStatic
        private external fun jChecknonnullreturn(): Long
        const val cppbindCxxTypeName: String = "cppbind::example::nullable::Utils"
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
    
    constructor(num: NumberDouble?): this(CppBindObject(construct_helper(num), true)) {
    }
    
    var nullable: NumberDouble?
        get() {
            val result = jNullable(id)
            val jdktokotlinresult = if (result == 0L) null else NumberDouble(CppBindObject(result))
            return jdktokotlinresult
        }
        set(value) {
            val kotlintojdkvalue = value?.id ?: 0L
            jSetnullable(id, kotlintojdkvalue, value)
        }

    var nonNull: NumberDouble
        get() {
            val result = jNonnull(id)
            val jdktokotlinresult = NumberDouble(CppBindObject(result))
            return jdktokotlinresult
        }
        set(value) {
            val kotlintojdkvalue = value.id
            jSetnonnull(id, kotlintojdkvalue, value)
        }

    var numDouble: NumberDouble?
        get() {
            val result = jNumdouble(id)
            val jdktokotlinresult = if (result == 0L) null else NumberDouble(CppBindObject(result))
            return jdktokotlinresult
        }
        set(value) {
            val kotlintojdkvalue = value?.id ?: 0L
            jSetnumdouble(id, kotlintojdkvalue, value)
        }
        

    var numInt: NumberInt
        get() {
            val result = jNumint(id)
            val jdktokotlinresult = NumberInt(CppBindObject(result, true))
            return jdktokotlinresult
        }
        set(value) {
            val kotlintojdkvalue = value.id
            jSetnumint(id, kotlintojdkvalue, value)
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
    private external fun jNullable(id: Long): Long
    private external fun jSetnullable(id: Long, value: Long, valueObj: Any?): Unit
    private external fun jNonnull(id: Long): Long
    private external fun jSetnonnull(id: Long, value: Long, valueObj: Any?): Unit
    private external fun jNumdouble(id: Long): Long
    private external fun jSetnumdouble(id: Long, value: Long, valueObj: Any?): Unit
    private external fun jNumint(id: Long): Long
    private external fun jSetnumint(id: Long, value: Long, valueObj: Any?): Unit
    private external fun jFinalize(id: Long): Unit
}

fun reverseString(s: String?): String? {
    val result = jReversestring(s)
    val jdktokotlinresult = result
    return jdktokotlinresult
}

private external fun jReversestring(s: String?, vararg extraObjs: Any?): String?

private external fun jGettypebyid(id: Long): String

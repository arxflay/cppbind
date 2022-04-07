/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 04/05/2022-07:39.
 * Please do not change it manually.
 */

package com.examples.templates

import com.examples.iegen.alias.*
import com.examples.iegen.exceptionUtils.*
import com.examples.iegen.exception_helpers.*

/**
 * This is a template class example.
 * For templates user must explicitly specify all possible types for each template parameter in the API using
 * template attribute.
 */
open class WrapperPairStrings
internal constructor(obj: IEGenObject) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        protected fun construct_helper(value: Pair<String, String>): Long {
            val first_value = value.first
            val second_value = value.second


            val kotlintojdkvalue = Pair<String, String>(first_value, second_value)
            val id = jConstructor(kotlintojdkvalue)
            return id
        }

        @JvmStatic
        private external fun jConstructor(value: Pair<String, String>): Long
        const val iegenCxxTypeName: String = "iegen::example::Wrapper<std::pair<std::string, std::string>>"
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
    
    constructor(value: Pair<String, String>): this(IEGenObject(construct_helper(value), true)) {
    }
    
    var value: Pair<String, String>
        get() {
            val result = jValue(id)
            val first_result = result.first
            val second_result = result.second


            val jdktokotlinresult = Pair<String, String>(first_result, second_result)
            return jdktokotlinresult
        }
        set(value) {
            val first_value = value.first
            val second_value = value.second


            val kotlintojdkvalue = Pair<String, String>(first_value, second_value)
            jSetvalue(id, kotlintojdkvalue)
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
    private external fun jValue(id: Long): Pair<String, String>
    private external fun jSetvalue(id: Long, value: Pair<String, String>): Unit
    private external fun jFinalize(id: Long): Unit
}

/**
 * This is a template class example.
 * For templates user must explicitly specify all possible types for each template parameter in the API using
 * template attribute.
 */
open class WrapperPairIntInt
internal constructor(obj: IEGenObject) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        protected fun construct_helper(value: Pair<Int, Int>): Long {
            val first_value = value.first
            val second_value = value.second


            val kotlintojdkvalue = Pair<Int, Int>(first_value, second_value)
            val id = jConstructor(kotlintojdkvalue)
            return id
        }

        @JvmStatic
        private external fun jConstructor(value: Pair<Int, Int>): Long
        const val iegenCxxTypeName: String = "iegen::example::Wrapper<std::pair<int, int>>"
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
    
    constructor(value: Pair<Int, Int>): this(IEGenObject(construct_helper(value), true)) {
    }
    
    var value: Pair<Int, Int>
        get() {
            val result = jValue(id)
            val first_result = result.first
            val second_result = result.second


            val jdktokotlinresult = Pair<Int, Int>(first_result, second_result)
            return jdktokotlinresult
        }
        set(value) {
            val first_value = value.first
            val second_value = value.second


            val kotlintojdkvalue = Pair<Int, Int>(first_value, second_value)
            jSetvalue(id, kotlintojdkvalue)
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
    private external fun jValue(id: Long): Pair<Int, Int>
    private external fun jSetvalue(id: Long, value: Pair<Int, Int>): Unit
    private external fun jFinalize(id: Long): Unit
}

/**
 * This is a template class example.
 * For templates user must explicitly specify all possible types for each template parameter in the API using
 * template attribute.
 */
open class WrapperString
internal constructor(obj: IEGenObject) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        protected fun construct_helper(value: String): Long {
            val id = jConstructor(value)
            return id
        }

        @JvmStatic
        private external fun jConstructor(value: String): Long
        const val iegenCxxTypeName: String = "iegen::example::Wrapper<std::string>"
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
    
    constructor(value: String): this(IEGenObject(construct_helper(value), true)) {
    }
    
    var value: String
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
    private external fun jValue(id: Long): String
    private external fun jSetvalue(id: Long, value: String): Unit
    private external fun jFinalize(id: Long): Unit
}

private external fun jGettypebyid(id: Long): String

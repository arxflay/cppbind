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

package com.examples.getters

import com.examples.cppbind.alias.*
import com.examples.cppbind.exceptionUtils.*
import com.examples.cppbind.exception_helpers.*

/**
 * This class contains a private string field and getter/setter methods for it.
 */
open class Person
internal constructor(obj: CppBindObject) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        protected fun construct_helper(name: String, email: String, age: Int): Long {
            val id = jConstructor(name, email, age)
            return id
        }

        @JvmStatic
        private external fun jConstructor(name: String, email: String, age: Int): Long
        const val cppbindCxxTypeName: String = "cppbind::example::Person"
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
    
    constructor(name: String, email: String, age: Int): this(CppBindObject(construct_helper(name, email, age), true)) {
    }
    
    var name: String
        get() {
            val result = jName(id)
            
            return result
        }
        set(value) {
            
            jSetfullname(id, value)
        }

    val email: String
        get() {
            val result = jEmail(id)
            
            return result
        }

    var age: Int
        get() {
            val result = jAge(id)
            
            return result
        }
        set(value) {
            
            jSetage(id, value)
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
    private external fun jName(id: Long): String
    private external fun jSetfullname(id: Long, value: String): Unit
    private external fun jEmail(id: Long): String
    private external fun jAge(id: Long): Int
    private external fun jSetage(id: Long, value: Int): Unit
    private external fun jFinalize(id: Long): Unit
}

private external fun jGettypebyid(id: Long): String

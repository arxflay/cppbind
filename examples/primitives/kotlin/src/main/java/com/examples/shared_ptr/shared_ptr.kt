/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 10/25/2021-10:22.
 * Please do not change it manually.
 */

package com.examples.shared_ptr

import alias.*
import com.examples.exception_helpers.*
import exceptionUtils.*

/**
 * comments
 * 
 */
open class Car
internal constructor(_id: Long) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        /**
         * comments
         * 
         */
        protected fun construct_helper(cost: Int): Long {
            val id = jConstructor(cost)
            return id
        }

        @JvmStatic
        private external fun jConstructor(cost: Int): Long
    }
    
    protected var id = _id
    
    open fun getObjId(): Long {
        if (id == 0L) {
            throw RuntimeException("Object is not allocated")
        }
        return id
    }
    
    /**
     * comments
     * 
     */
    constructor(cost: Int): this(construct_helper(cost)) {
    }
    
    /**
     * value getter
     */
    val cost: Int
        get() {
            val result = jCost(getObjId())
            
            return result
        }
    
    /**
     * comments
     * 
     */
    fun setCostWithCarSharedPtr(sp: Car): Unit {
        val kotlin_to_jdk_sp = sp.getObjId()
        val result = jSetcostwithcarsharedptr(getObjId(), kotlin_to_jdk_sp)
        
        return result
    }

    /**
     * comments
     * 
     */
    fun getNewCarSharedPtr(): Car {
        val result = jGetnewcarsharedptr(getObjId())
        val jdk_to_kotlin_result = Car(result)
        return jdk_to_kotlin_result
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
    private external fun jCost(id: Long): Int
    private external fun jSetcostwithcarsharedptr(id: Long, sp: Long): Unit
    private external fun jGetnewcarsharedptr(id: Long): Long
    private external fun jFinalize(id: Long): Unit
}
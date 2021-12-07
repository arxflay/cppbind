/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 12/07/2021-12:27.
 * Please do not change it manually.
 */

package com.examples.shared_ptr

import com.examples.exception_helpers.*
import com.examples.iegen.alias.*
import com.examples.iegen.exceptionUtils.*

open class Car
internal constructor(_id: Long) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        protected fun construct_helper(cost: Int): Long {
            val id = jConstructor(cost)
            return id
        }

        @JvmStatic
        private external fun jConstructor(cost: Int): Long
    }
    
    protected var objId = _id
    
    open val id: Long
        get() {
            if (objId == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return objId
        }
    
    constructor(cost: Int): this(construct_helper(cost)) {
    }
    
    /**
     * value getter
     */
    val cost: Int
        get() {
            val result = jCost(id)
            
            return result
        }
    
    fun setCostWithCarSharedPtr(sp: Car): Unit {
        val kotlin_to_jdk_sp = sp.id
        val result = jSetcostwithcarsharedptr(id, kotlin_to_jdk_sp)
        
        return result
    }

    fun setCostWithCar(sp: Car): Unit {
        val kotlin_to_jdk_sp = sp.id
        val result = jSetcostwithcar(id, kotlin_to_jdk_sp)
        
        return result
    }

    /**
     * comments
     * 
     */
    fun setCostWithCarConstSharedPtr(sp: Car): Unit {
        val kotlin_to_jdk_sp = sp.id
        val result = jSetcostwithcarconstsharedptr(id, kotlin_to_jdk_sp)
        
        return result
    }

    /**
     * comments
     * 
     */
    fun makeConstSharedPtr(sp: Car): Car {
        val kotlin_to_jdk_sp = sp.id
        val result = jMakeconstsharedptr(id, kotlin_to_jdk_sp)
        val jdk_to_kotlin_result = Car(result)
        return jdk_to_kotlin_result
    }

    fun setCostWithCarRef(sp: Car): Unit {
        val kotlin_to_jdk_sp = sp.id
        val result = jSetcostwithcarref(id, kotlin_to_jdk_sp)
        
        return result
    }

    fun setCostWithCarPtr(sp: Car): Unit {
        val kotlin_to_jdk_sp = sp.id
        val result = jSetcostwithcarptr(id, kotlin_to_jdk_sp)
        
        return result
    }

    fun getNewCarSharedPtr(): Car {
        val result = jGetnewcarsharedptr(id)
        val jdk_to_kotlin_result = Car(result)
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
        close()
    }

    ///// External wrapper functions ////////////
    private external fun jCost(id: Long): Int
    private external fun jSetcostwithcarsharedptr(id: Long, sp: Long): Unit
    private external fun jSetcostwithcar(id: Long, sp: Long): Unit
    private external fun jSetcostwithcarconstsharedptr(id: Long, sp: Long): Unit
    private external fun jMakeconstsharedptr(id: Long, sp: Long): Long
    private external fun jSetcostwithcarref(id: Long, sp: Long): Unit
    private external fun jSetcostwithcarptr(id: Long, sp: Long): Unit
    private external fun jGetnewcarsharedptr(id: Long): Long
    private external fun jFinalize(id: Long): Unit
}

open class CarUsage
internal constructor(_id: Long) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        protected fun construct_helper(car: Car): Long {val kotlin_to_jdk_car = car.id
            val id = jConstructor(kotlin_to_jdk_car)
            return id
        }

        @JvmStatic
        private external fun jConstructor(car: Long): Long
    }
    
    protected var objId = _id
    
    open val id: Long
        get() {
            if (objId == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return objId
        }
    
    constructor(car: Car): this(construct_helper(car)) {
    }
    
    /**
     * Iegen supports only by value return in case shared_ref is set
     */
    fun getCar(): Car {
        val result = jGetcar(id)
        val jdk_to_kotlin_result = Car(result)
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
        close()
    }

    ///// External wrapper functions ////////////
    private external fun jGetcar(id: Long): Long
    private external fun jFinalize(id: Long): Unit
}
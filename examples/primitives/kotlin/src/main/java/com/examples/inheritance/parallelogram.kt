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

package com.examples.inheritance

import com.examples.iegen.alias.*
import com.examples.iegen.exceptionUtils.*
import com.examples.iegen.exception_helpers.*


interface IParallelogram : AutoCloseable {
    val id: Long
    fun keepIEGenReference(ref: Any)
    
    open val area: Double
        get() {
            val result = IParallelogramHelper.jArea(id)
            
            return result
        }
    
    open fun perimeter(): Double {
        val result = IParallelogramHelper.jPerimeter(id)
        
        return result
    }

    fun equals(p: IParallelogram): Boolean {
        val kotlintojdkp = p.id
        val result = IParallelogramHelper.jEquals(id, kotlintojdkp)
        
        return result
    }
}


class IParallelogramHelper {
    companion object {
        @JvmStatic
        external fun jArea(id: Long): Double
        @JvmStatic
        external fun jPerimeter(id: Long): Double
        @JvmStatic
        external fun jEquals(id: Long, p: Long): Boolean
    }
}


open class ParallelogramImpl
internal constructor(obj : IEGenObject) : IParallelogram {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
    }

    protected var iegObj = obj
    private var refs: MutableList<Any> = mutableListOf()

    override fun keepIEGenReference(ref: Any) {
        refs.add(ref)
    }

    override val id: Long
        get() {
            if (iegObj.id == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return iegObj.id
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
    private external fun jFinalize(id: Long): Unit
}

private external fun jGettypebyid(id: Long): String

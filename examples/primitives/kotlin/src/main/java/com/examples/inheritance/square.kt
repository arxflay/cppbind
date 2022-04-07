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

package com.examples.inheritance

import com.examples.iegen.alias.*
import com.examples.iegen.exceptionUtils.*
import com.examples.iegen.exception_helpers.*

class Square
internal constructor(obj: IEGenObject) : IRhombusFigure, IRectangle, AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        protected fun construct_helper(side: Double): Long {
            val id = jConstructor(side)
            return id
        }

        @JvmStatic
        private external fun jConstructor(side: Double): Long
        const val iegenCxxTypeName: String = "iegen::example::Square"
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
    
    constructor(side: Double): this(IEGenObject(construct_helper(side), true)) {
    }
    
    override val area: Double
        get() {
            val result = jArea(id)
            
            return result
        }
    
    override fun perimeter(): Double {
        val result = jPerimeter(id)
        
        return result
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
    private external fun jArea(id: Long): Double
    private external fun jPerimeter(id: Long): Double
    private external fun jFinalize(id: Long): Unit
}

private external fun jGettypebyid(id: Long): String

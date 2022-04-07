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

package com.examples.exceptions

import com.examples.iegen.alias.*
import com.examples.iegen.exceptionUtils.*
import com.examples.iegen.exception_helpers.*

open class NoThrowExc
internal constructor(obj: IEGenObject) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        protected fun construct_helper(do_throw: Boolean): Long {
            val id = jConstructor(do_throw)
            return id
        }

        @JvmStatic
        private external fun jConstructor(do_throw: Boolean): Long

        fun noop(): Unit {
            val result = jNoop()
            
            return result
        }
        @JvmStatic
        private external fun jNoop(): Unit
        const val iegenCxxTypeName: String = "iegen::exceptions::NoThrowExc"
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
    
    constructor(do_throw: Boolean = false): this(IEGenObject(construct_helper(do_throw), true)) {
    }
    
    var prop: String
        get() {
            val result = jProp(id)
            
            return result
        }
        set(value) {
            
            jSetprop(id, value)
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
    private external fun jProp(id: Long): String
    private external fun jSetprop(id: Long, value: String): Unit
    private external fun jFinalize(id: Long): Unit
}

private external fun jGettypebyid(id: Long): String

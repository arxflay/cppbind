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

package com.examples.inheritance

import com.examples.exception_helpers.*
import com.examples.iegen.alias.*
import com.examples.iegen.exceptionUtils.*

open class Date
internal constructor(_id: Long) : IBase, AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        protected fun construct_helper(d: Int, m: Int, y: Int): Long {
            val id = jConstructor(d, m, y)
            return id
        }

        @JvmStatic
        private external fun jConstructor(d: Int, m: Int, y: Int): Long
    }
    
    protected var objId = _id
    override val id: Long
        get() {
            if (objId == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return objId
        }
    
    constructor(d: Int, m: Int, y: Int): this(construct_helper(d, m, y)) {
    }
    
    val date: String
        get() {
            val result = jDate(id)
            
            return result
        }
    
    open override fun value(): String {
        val result = jValue(id)
        
        return result
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
    private external fun jValue(id: Long): String
    private external fun jDate(id: Long): String
    private external fun jFinalize(id: Long): Unit
}
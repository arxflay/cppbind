/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 02/14/2022-14:14.
 * Please do not change it manually.
 */

package com.examples.simple

import com.examples.iegen.alias.*
import com.examples.iegen.exceptionUtils.*
import com.examples.iegen.exception_helpers.*

open class Holder
internal constructor(obj: IEGenObject) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        protected fun construct_helper(): Long {
            val id = jConstructor()
            return id
        }

        @JvmStatic
        private external fun jConstructor(): Long
    }
    
    protected var objId = obj.id
    protected val owner = obj.owner
    
    open val id: Long
        get() {
            if (objId == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return objId
        }
    
    constructor(): this(IEGenObject(construct_helper(), true)) {
    }
    
    val task: Task
        get() {
            val result = jTask(id)
            val jdktokotlinresult = Task(IEGenObject(result))
            return jdktokotlinresult
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
    private external fun jTask(id: Long): Long
    private external fun jFinalize(id: Long): Unit
}

/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 10/26/2021-15:47.
 * Please do not change it manually.
 */

package com.examples.templates

import com.examples.exception_helpers.*
import com.examples.iegen.alias.*
import com.examples.iegen.exceptionUtils.*
import com.examples.simple.Project

open class StackUsage
internal constructor(_id: Long) : AutoCloseable {
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
    
    protected var objId = _id
    
    open val id: Long
        get() {
            if (objId == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return objId
        }
    
    constructor(): this(construct_helper()) {
    }
    
    fun firstItemOfSpecializedStack(p: StackPrj): Project {
        val kotlin_to_jdk_p = p.id
        val result = jFirstitemofspecializedstack(id, kotlin_to_jdk_p)
        val jdk_to_kotlin_result = Project(result)
        return jdk_to_kotlin_result
    }

    open fun firstItemOfTemplateStack(arg0: StackPrj): Project {
        val kotlin_to_jdk_arg0 = arg0.id
        val result = jFirstitemoftemplatestackProject(id, kotlin_to_jdk_arg0)
        val jdk_to_kotlin_result = Project(result)
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
    private external fun jFirstitemofspecializedstack(id: Long, p: Long): Long
    private external fun jFirstitemoftemplatestackProject(id: Long, arg0: Long): Long
    private external fun jFinalize(id: Long): Unit
}
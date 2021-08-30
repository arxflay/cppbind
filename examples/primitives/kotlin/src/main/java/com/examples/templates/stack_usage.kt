/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 08/30/2021-11:26.
 * Please do not change it manually.
 */

package com.examples.templates

import alias.*
import exceptionUtils.*

import com.examples.exception_helpers.*
import com.examples.simple.Project

open class StackUsage
internal constructor(_id: Long) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni");
        }
        
        protected fun construct_helper(): Long {
            val id = jConstructor()
            return id
        }

        @JvmStatic
        private external fun jConstructor(): Long
    }
    
    protected var id = _id
    
    open fun getObjId(): Long {
        if (id == 0L) {
            throw RuntimeException("Object is not allocated")
        }
        return id;
    }
    
    constructor(): this(construct_helper()) {
    }
    
    fun firstItemOfSpecializedStack(p: StackProject): Project {
        val kotlin_to_jdk_p = p.getObjId()
        val result = jFirstitemofspecializedstack(getObjId(), kotlin_to_jdk_p)
        val jdk_to_kotlin_result = Project(result)
        return jdk_to_kotlin_result
    }

    open fun firstItemOfTemplateStack(arg0: StackProject): Project {
        val kotlin_to_jdk_arg0 = arg0.getObjId()
        val result = jFirstitemoftemplatestackProject(getObjId(), kotlin_to_jdk_arg0)
        val jdk_to_kotlin_result = Project(result)
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
    private external fun jFirstitemofspecializedstack(id: Long, p: Long): Long
    private external fun jFirstitemoftemplatestackProject(id: Long, arg0: Long): Long
    private external fun jFinalize(id: Long): Unit
}
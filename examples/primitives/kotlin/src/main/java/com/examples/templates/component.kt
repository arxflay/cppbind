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
import com.examples.simple.Root

/**
 * comments
 * 
 */
open class Component
internal constructor(_id: Long) : IAddressableRoot, AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni");
        }
        
        /**
         * comments
         * 
         */
        protected fun construct_helper(parent: Root, name: String): Long {val kotlin_to_jdk_parent = parent.getObjId()
            val id = jConstructor(kotlin_to_jdk_parent, name)
            return id
        }

        @JvmStatic
        private external fun jConstructor(parent: Long, name: String): Long
    }
    
    protected var id = _id
    override fun getObjId(): Long {
        if (id == 0L) {
            throw RuntimeException("Object is not allocated")
        }
        return id;
    }
    
    /**
     * comments
     * 
     */
    constructor(parent: Root, name: String): this(construct_helper(parent, name)) {
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
    private external fun jFinalize(id: Long): Unit
}
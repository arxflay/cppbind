/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 12/23/2021-06:31.
 * Please do not change it manually.
 */

package com.examples.containers

import com.examples.iegen.alias.*
import com.examples.iegen.exceptionUtils.*
import com.examples.iegen.exception_helpers.*

/**
 * comments
 * 
 */
open class JsonExamples
internal constructor(_id: Long, _owner: Boolean = false) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        /**
         * comments
         * 
         */
        protected fun construct_helper(): Long {
            val id = jConstructor()
            return id
        }

        @JvmStatic
        private external fun jConstructor(): Long
    }
    
    protected var objId = _id
    protected val owner = _owner
    
    open val id: Long
        get() {
            if (objId == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return objId
        }
    
    /**
     * comments
     * 
     */
    constructor(): this(construct_helper(), true) {
    }
    
    /**
     * comments
     * 
     */
    fun setJson(j: String): Unit {
        val result = jSetjson(id, j)
        
        return result
    }

    /**
     * comments
     * 
     */
    fun getJson(): String {
        val result = jGetjson(id)
        
        return result
    }

    /**
     * comments
     * 
     */
    fun getSimpleJsonExample(): String {
        val result = jGetsimplejsonexample(id)
        
        return result
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
    private external fun jSetjson(id: Long, j: String): Unit
    private external fun jGetjson(id: Long): String
    private external fun jGetsimplejsonexample(id: Long): String
    private external fun jFinalize(id: Long): Unit
}
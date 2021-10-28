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

package com.examples.extra

import com.examples.exception_helpers.*
import com.examples.iegen.alias.*
import com.examples.iegen.exceptionUtils.*

/**
 * comments
 * 
 */
open class Object
internal constructor(_id: Long) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
    }
    
    protected var objId = _id
    
    open val id: Long
        get() {
            if (objId == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return objId
        }
    
    /**
     * String representation for user readability
     * @return result of toReprString by default
     */
    open override fun toString(): String {
        val result = jTostring(id)
        
        return result
    }

    /**
     * Human readable class name
     * @return class name
     */
    open fun className(): String {
        val result = jClassname(id)
        
        return result
    }

    /**
     * Compare on equality two objects
     * @param other is the second one
     * @return is equals two objects
     */
    fun equals(other: Object): Boolean {
        val kotlin_to_jdk_other = other.id
        val result = jEquals(id, kotlin_to_jdk_other)
        
        return result
    }

    /**
     * Hash for object. Used in wrappers (java, obj-c, python) to define the hash function
     * @return hash of the object
     */
    open fun hash(): Long {
        val result = jHash(id)
        
        return result
    }

    /**
     * Detailed string representation only for debug porpoises
     * @return object state as string
     */
    open fun debugInfo(): String {
        val result = jDebuginfo(id)
        
        return result
    }

    /**
     * The object's size in bytes
     * @return bytes count
     */
    open fun bytesCount(): Long {
        val result = jBytescount(id)
        
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
    private external fun jTostring(id: Long): String
    private external fun jClassname(id: Long): String
    private external fun jEquals(id: Long, other: Long): Boolean
    private external fun jHash(id: Long): Long
    private external fun jDebuginfo(id: Long): String
    private external fun jBytescount(id: Long): Long
    private external fun jFinalize(id: Long): Unit
}
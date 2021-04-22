package com.examples.extra

import alias.*



/**
 * comments
 * 
 */
open class Object
    internal constructor(_id: Long) : AutoCloseable {
    companion object {
        init {
          System.loadLibrary("wrapper_jni");
        }
        





    }
    
    protected var id = _id
    
    open fun getObjId(): Long {
        if(id == 0L) {
            throw RuntimeException("Object is not allocated")
        }
        return id;
    }
    
    
    
    /**
     * String representation for mainly debug porpoises
     * @return class name and object address
     */
    open override fun toString(): String {
        
        val result = jTostring(getObjId())
        
        return result
    }

    /**
     * Human readable class name
     * @return class name
     */
    open fun className(): String {
        
        val result = jClassname(getObjId())
        
        return result
    }

    /**
     * Compare on equality two objects
     * @param other is the second one
     * @return is equals two objects
     */
    fun equals(other: Object): Boolean {
        
        val kotlin_to_jdk_other = other.getObjId()
        val result = jEquals(getObjId(), kotlin_to_jdk_other)
        
        return result
    }

    /**
     * Hash for object. Used in wrappers (java, obj-c, python) to define the hash function
     * @return hash of the object
     */
    open fun hash(): Long {
        
        val result = jHash(getObjId())
        
        return result
    }

    /**
     * Detailed string representation only for debug porpoises
     * @return object state as string
     */
    open fun debugInfo(): String {
        
        val result = jDebuginfo(getObjId())
        
        return result
    }

    /**
     * The object's size in bytes
     * @return bytes count
     */
    open fun bytesCount(): Long {
        
        val result = jBytescount(getObjId())
        
        return result
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
    private external fun jTostring(id: Long): String
    private external fun jClassname(id: Long): String
    private external fun jEquals(id: Long, other: Long): Boolean
    private external fun jHash(id: Long): Long
    private external fun jDebuginfo(id: Long): String
    private external fun jBytescount(id: Long): Long
    private external fun jSet_this(id: Long, self: Any): Void
    private external fun jFinalize(id: Long): Void
}
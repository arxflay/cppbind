package com.examples.getters

import alias.*



/**
 * This class contains a private string field and getter/setter methods for it.
 */
open class Person
internal constructor(_id: Long) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni");
        }
        /**
         * comments
         * 
         */
        protected fun construct_helper(name: String, email: String, age: Int): Long {
            
            
            
            
            val id = jConstructor(name, email, age)
            return id
        }
        @JvmStatic
        private external fun jConstructor(name: String, email: String, age: Int): Long
    }
    
    protected var id = _id
    
    open fun getObjId(): Long {
        if (id == 0L) {
            throw RuntimeException("Object is not allocated")
        }
        return id;
    }
    /**
     * comments
     * 
     */
    constructor(name: String, email: String, age: Int) : this(construct_helper(name, email, age)) {
        //jSet_this(id, this)
    }
    
    /**
     */
    var fullName: String
        get() {
            val result = jFullname(getObjId())
            
            return result
        }
        
        
        set(value) {
            
            jSetfullname(getObjId(), value)
        }

    /**
     */
    val email: String
        get() {
            val result = jEmail(getObjId())
            
            return result
        }
        

    /**
     */
    var age: Int
        get() {
            val result = jAge(getObjId())
            
            return result
        }
        
        
        set(value) {
            
            jSetage(getObjId(), value)
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
    private external fun jFullname(id: Long): String
    private external fun jSetfullname(id: Long, value : String): Unit
    private external fun jEmail(id: Long): String
    private external fun jAge(id: Long): Int
    private external fun jSetage(id: Long, value : Int): Unit
    private external fun jSet_this(id: Long, self: Any): Unit
    private external fun jFinalize(id: Long): Unit
}
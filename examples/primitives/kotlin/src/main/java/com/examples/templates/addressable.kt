package com.examples.templates

import alias.*
import com.examples.simple.Root

/**
 * Addressable is a base class for all the objects, that have abs path.
 */
interface IAddressableRoot {
    fun getObjId(): Long
    
    
    /**
     * comments
     * @brief Get object's abs path based on parent's abs path and object's name
     * @return the abs path of the object
     */
    fun absPath(): String {
        val result = AddressableHelperRoot.jAbspath(getObjId())
        
        return result
    }
}

class AddressableHelperRoot {
    companion object {
        @JvmStatic
        external fun jAbspath(id: Long): String
    }
}

open class AddressableRoot
internal constructor(_id: Long) : IAddressableRoot, AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni");
        }
        
        /**
         * comments
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
     */
    constructor(parent: Root, name: String): this(construct_helper(parent, name)) {
        //jSet_this(id, this)
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
    private external fun jSet_this(id: Long, self: Any): Unit
    private external fun jFinalize(id: Long): Unit
}
/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 12/13/2021-13:01.
 * Please do not change it manually.
 */

package com.examples.templates

import com.examples.iegen.alias.*
import com.examples.iegen.exceptionUtils.*
import com.examples.iegen.exception_helpers.*
import com.examples.simple.Root


/**
 * Addressable is a base class for all the objects, that have abs path.
 */
interface IAddressableRoot : AutoCloseable {
    val id: Long
    
    
    /**
     * comments
     * @brief Get object's abs path based on parent's abs path and object's name
     * @return the abs path of the object
     */
    fun absPath(): String {
        val result = IAddressableRootHelper.jAbspath(id)
        
        return result
    }
}


class IAddressableRootHelper {
    companion object {
        @JvmStatic
        external fun jAbspath(id: Long): String
    }
}


open class AddressableImplRoot
internal constructor(_id: Long) : IAddressableRoot {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        /**
         * comments
         */
        protected fun construct_helper(parent: Root, name: String): Long {val kotlintojdkparent = parent.id
            val id = jConstructor(kotlintojdkparent, name)
            return id
        }

        @JvmStatic
        private external fun jConstructor(parent: Long, name: String): Long
    }

    protected var objId = _id
    override val id: Long
        get() {
            if (objId == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return objId
        }
    
    /**
     * comments
     */
    constructor(parent: Root, name: String): this(construct_helper(parent, name)) {
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
        // temporary fix until kotlin ownership will be supported
        // github issues:
        // https://github.com/PicsArt/iegen/issues/349
        // https://github.com/PicsArt/iegen/issues/348
        // close()
    }
    
    ///// External wrapper functions ////////////
    private external fun jFinalize(id: Long): Unit
}
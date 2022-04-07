/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 04/05/2022-07:39.
 * Please do not change it manually.
 */

package com.examples.templates

import com.examples.iegen.alias.*
import com.examples.iegen.exceptionUtils.*
import com.examples.iegen.exception_helpers.*
import com.examples.simple.Root


/**
 * Addressable is a base class for all the objects, that have abs path.
 * FIXME: swift.descendants is given manually since we have an issue with descendants list formation for templates (#410)
 */
interface IAddressableRoot : AutoCloseable {
    val id: Long
    fun keepIEGenReference(ref: Any)
    
    
    /**
     * comments
     * @brief Get object's abs path based on parent's abs path and object's name
     * @return the abs path of the object
     */
    fun absPath(): String {
        val result = IAddressableRootHelper.jAbspath(id)
        
        return result
    }

    companion object {
        public fun iegenDowncast(id: Long, owner: Boolean = false): IAddressableRoot {
            val idType = jGettypebyid(id)
            when (idType) {
                Component.iegenCxxTypeName -> return Component(IEGenObject(id, owner))
                else -> return AddressableImplRoot(IEGenObject(id, owner))
            }
        }
    }
}


class IAddressableRootHelper {
    companion object {
        @JvmStatic
        external fun jAbspath(id: Long): String
    }
}


open class AddressableImplRoot
internal constructor(obj : IEGenObject) : IAddressableRoot {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        /**
         * comments
         */
        protected fun construct_helper(parent: Root, name: String): Long {
            val kotlintojdkparent = parent.id
            val id = jConstructor(kotlintojdkparent, name)
            return id
        }

        @JvmStatic
        private external fun jConstructor(parent: Long, name: String): Long
        const val iegenCxxTypeName: String = "iegen::example::Addressable<iegen::example::Root>"
    }

    protected var iegObj = obj
    private var refs: MutableList<Any> = mutableListOf()

    override fun keepIEGenReference(ref: Any) {
        refs.add(ref)
    }

    override val id: Long
        get() {
            if (iegObj.id == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return iegObj.id
        }
    
    /**
     * comments
     */
    constructor(parent: Root, name: String): this(IEGenObject(construct_helper(parent, name), true)) {
    }

    override fun close() {
        if (iegObj.owner && iegObj.id != 0L) {
            jFinalize(iegObj.id)
            iegObj.id = 0L
        }
    }

    /**
    * Finalize and deletes the object
    */
    protected fun finalize() {
        close()
    }
    
    ///// External wrapper functions ////////////
    private external fun jFinalize(id: Long): Unit
}

private external fun jGettypebyid(id: Long): String

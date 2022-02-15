/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 02/14/2022-14:14.
 * Please do not change it manually.
 */

package com.examples.templates

import com.examples.iegen.alias.*
import com.examples.iegen.exceptionUtils.*
import com.examples.iegen.exception_helpers.*


/**
 * An example interface which descendant types are templates. Used for an example of downcast in target language.
 */
interface IContainer : AutoCloseable {
    val id: Long
    
    
}



open class ContainerImpl
internal constructor(obj : IEGenObject) : IContainer {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
    }

    protected var objId = obj.id
    protected val owner = obj.owner
    override val id: Long
        get() {
            if (objId == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return objId
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
    private external fun jFinalize(id: Long): Unit
}

/**
 * An example of usage for a type which descendants are template types.
 * Used for an example of downcast in target language.
 */
open class ContainerHolder
internal constructor(obj: IEGenObject) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        protected fun construct_helper(container: IContainer): Long {
            val kotlintojdkcontainer = container.id
            val id = jConstructor(kotlintojdkcontainer)
            return id
        }

        @JvmStatic
        private external fun jConstructor(container: Long): Long
    }
    
    protected var objId = obj.id
    protected val owner = obj.owner
    
    open val id: Long
        get() {
            if (objId == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return objId
        }
    
    constructor(container: IContainer): this(IEGenObject(construct_helper(container), true)) {
    }
    
    val container: IContainer
        get() {
            val result = jContainer(id)
            val jdktokotlinresult = ContainerImpl(IEGenObject(result))
            return jdktokotlinresult
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
    private external fun jContainer(id: Long): Long
    private external fun jFinalize(id: Long): Unit
}

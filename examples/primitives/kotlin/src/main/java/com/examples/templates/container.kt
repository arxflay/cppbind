/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 03/01/2022-08:48.
 * Please do not change it manually.
 */

package com.examples.templates

import com.examples.getters.NumberInt
import com.examples.iegen.alias.*
import com.examples.iegen.exceptionUtils.*
import com.examples.iegen.exception_helpers.*
import com.examples.simple.Project
import com.examples.simple.Task


/**
 * An example interface which descendant types are templates. Used for an example of downcast in target language.
 */
interface IContainer : AutoCloseable {
    val id: Long
    fun keepIEGenReference(ref: Any)
    
    
}



open class ContainerImpl
internal constructor(obj : IEGenObject) : IContainer {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
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
    
    protected var iegObj = obj
    private var refs: MutableList<Any> = mutableListOf()

    fun keepIEGenReference(ref: Any) {
        refs.add(ref)
    }
    
    open val id: Long
        get() {
            if (iegObj.id == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return iegObj.id
        }
    
    constructor(container: IContainer): this(IEGenObject(construct_helper(container), true)) {
    }
    
    val container: IContainer
        get() {
            val result = jContainer(id)
            
            val jdktokotlinresult : IContainer
            val resultType = jGettypebyid(result)
            when (resultType) {
                "iegen::example::Stack<iegen::example::Project>" -> jdktokotlinresult = StackPrj(IEGenObject(result))
                "iegen::example::Stack<iegen::example::Task>" -> jdktokotlinresult = StackTask(IEGenObject(result))
                "iegen::example::Stack<iegen::example::Number<int>>" -> jdktokotlinresult = StackNumInt(IEGenObject(result))
                else -> jdktokotlinresult = ContainerImpl(IEGenObject(result))
            }
            jdktokotlinresult.keepIEGenReference(this)
            return jdktokotlinresult
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
    private external fun jContainer(id: Long): Long
    private external fun jFinalize(id: Long): Unit
}

private external fun jGettypebyid(id: Long): String

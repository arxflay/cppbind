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

package com.examples.typedefs

import com.examples.iegen.alias.*
import com.examples.iegen.exceptionUtils.*
import com.examples.iegen.exception_helpers.*

open class QueueInt
internal constructor(obj: IEGenObject) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        protected fun construct_helper(): Long {
            val id = jConstructor()
            return id
        }

        @JvmStatic
        private external fun jConstructor(): Long
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
    
    constructor(): this(IEGenObject(construct_helper(), true)) {
    }
    
    fun push_back(element: Int): Unit {
        val result = jPush_back(id, element)
        
        return result
    }

    fun get_size(): Int {
        val result = jGet_size(id)
        
        return result
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
    private external fun jPush_back(id: Long, element: Int): Unit
    private external fun jGet_size(id: Long): Int
    private external fun jFinalize(id: Long): Unit
}

open class QueueIntUsage
internal constructor(obj: IEGenObject) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        protected fun construct_helper(q: QueueInt): Long {
            val kotlintojdkq = q.id
            val id = jConstructor(kotlintojdkq)
            return id
        }

        @JvmStatic
        private external fun jConstructor(q: Long): Long

        fun getSize(q: QueueInt): Int {
            val kotlintojdkq = q.id
            val result = jGetsize(kotlintojdkq)
            
            return result
        }
        @JvmStatic
        private external fun jGetsize(q: Long): Int

        fun getLastElement(q: QueueInt): Int {
            val kotlintojdkq = q.id
            val result = jGetlastelement(kotlintojdkq)
            
            return result
        }
        @JvmStatic
        private external fun jGetlastelement(q: Long): Int

        fun getFirstElement(q: QueueInt): Int {
            val kotlintojdkq = q.id
            val result = jGetfirstelement(kotlintojdkq)
            
            return result
        }
        @JvmStatic
        private external fun jGetfirstelement(q: Long): Int

        fun getInvQueue(v: List<Int>): QueueInt {
            val kotlintojdkv = IntArray(v.size) 
            var index_v = 0
            for (value_v in v) {
                
                kotlintojdkv[index_v] = value_v
                ++index_v
            }
            val result = jGetinvqueue(kotlintojdkv)
            val jdktokotlinresult = QueueInt(IEGenObject(result, true))
            return jdktokotlinresult
        }
        @JvmStatic
        private external fun jGetinvqueue(v: IntArray): Long
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
    
    constructor(q: QueueInt): this(IEGenObject(construct_helper(q), true)) {
    }
    
    val empty_queue: QueueInt
        get() {
            val result = jEmpty_queue(id)
            val jdktokotlinresult = QueueInt(IEGenObject(result, true))
            return jdktokotlinresult
        }

    val saved_queue: QueueInt
        get() {
            val result = jSaved_queue(id)
            val jdktokotlinresult = QueueInt(IEGenObject(result))
            return jdktokotlinresult
        }
    
    fun getSavedQueue(): QueueInt {
        val result = jGetsavedqueue(id)
        val jdktokotlinresult = QueueInt(IEGenObject(result))
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
    private external fun jGetsavedqueue(id: Long): Long
    private external fun jEmpty_queue(id: Long): Long
    private external fun jSaved_queue(id: Long): Long
    private external fun jFinalize(id: Long): Unit
}

private external fun jGettypebyid(id: Long): String

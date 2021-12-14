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

package com.examples.simple

import com.examples.iegen.alias.*
import com.examples.iegen.exceptionUtils.*
import com.examples.iegen.exception_helpers.*

/**
 * Class holding project information.
 */
open class Project
internal constructor(_id: Long) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        /**
         * Project constructor.
         */
        protected fun construct_helper(title: String): Long {
            val id = jConstructor(title)
            return id
        }

        @JvmStatic
        private external fun jConstructor(title: String): Long
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
     * Project constructor.
     */
    constructor(title: String): this(construct_helper(title)) {
    }
    
    /**
     * Get project´s title.
     */
    val title: String
        get() {
            val result = jTitle(id)
            
            return result
        }
    
    /**
     * Add a task to project.
     */
    fun addTask(task: Task): Unit {
        val kotlintojdktask = task.id
        val result = jAddtask(id, kotlintojdktask)
        
        return result
    }

    /**
     * Get project´s tasks.
     */
    fun tasks(): List<Task> {
        val result = jTasks(id)
        val jdktokotlinresult: MutableList<Task> = mutableListOf()
        for (value_result in result) {
            val jdktokotlinvalue_result = Task(value_result)
            jdktokotlinresult.add(jdktokotlinvalue_result)
        }
        return jdktokotlinresult
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
    private external fun jTitle(id: Long): String
    private external fun jAddtask(id: Long, task: Long): Unit
    private external fun jTasks(id: Long): LongArray
    private external fun jFinalize(id: Long): Unit
}
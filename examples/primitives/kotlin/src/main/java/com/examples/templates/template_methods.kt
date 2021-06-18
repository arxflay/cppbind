/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 06/17/2021-10:45.
 * Please do not change it manually.
 */

package com.examples.templates

import alias.*
import com.examples.simple.*

open class TemplateMethods
internal constructor(_id: Long) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni");
        }
        
        protected fun construct_helper(): Long {
            val id = jConstructor()
            return id
        }

        @JvmStatic
        private external fun jConstructor(): Long




    }
    
    protected var id = _id
    
    open fun getObjId(): Long {
        if (id == 0L) {
            throw RuntimeException("Object is not allocated")
        }
        return id;
    }
    
    constructor(): this(construct_helper()) {
        //jSet_this(id, this)
    }
    
    open fun max(arg0: Int, arg1: Int): Int {
        val result = jMaxInt(getObjId(), arg0, arg1)
        
        return result
    }

    open fun max(arg0: String, arg1: String): String {
        val result = jMaxString(getObjId(), arg0, arg1)
        
        return result
    }

    open fun makePair(arg0: Project, arg1: Project): Pair<Project, Project> {
        val kotlin_to_jdk_arg0 = arg0.getObjId()
        val kotlin_to_jdk_arg1 = arg1.getObjId()
        val result = jMakepairProjectProject(getObjId(), kotlin_to_jdk_arg0, kotlin_to_jdk_arg1)
        val first  = result.first
        val second  = result.second
        val jdk_to_kotlin_first = Project(first)
        val jdk_to_kotlin_second = Project(second)
        val jdk_to_kotlin_result = Pair<Project, Project>(jdk_to_kotlin_first, jdk_to_kotlin_second)
        return jdk_to_kotlin_result
    }

    open fun makePair(arg0: Root, arg1: Project): Pair<Root, Project> {
        val kotlin_to_jdk_arg0 = arg0.getObjId()
        val kotlin_to_jdk_arg1 = arg1.getObjId()
        val result = jMakepairRootProject(getObjId(), kotlin_to_jdk_arg0, kotlin_to_jdk_arg1)
        val first  = result.first
        val second  = result.second
        val jdk_to_kotlin_first = Root(first)
        val jdk_to_kotlin_second = Project(second)
        val jdk_to_kotlin_result = Pair<Root, Project>(jdk_to_kotlin_first, jdk_to_kotlin_second)
        return jdk_to_kotlin_result
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
    private external fun jMaxInt(id: Long, arg0: Int, arg1: Int): Int
    private external fun jMaxString(id: Long, arg0: String, arg1: String): String
    private external fun jMakepairProjectProject(id: Long, arg0: Long, arg1: Long): Pair<Long, Long>
    private external fun jMakepairRootProject(id: Long, arg0: Long, arg1: Long): Pair<Long, Long>
    private external fun jSet_this(id: Long, self: Any): Unit
    private external fun jFinalize(id: Long): Unit
}
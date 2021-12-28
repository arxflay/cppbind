/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 12/23/2021-14:20.
 * Please do not change it manually.
 */

package com.examples.forward_decl.student

import com.examples.forward_decl.teacher.Teacher
import com.examples.iegen.alias.*
import com.examples.iegen.exceptionUtils.*
import com.examples.iegen.exception_helpers.*

open class Student
internal constructor(_id: Long, _owner: Boolean = false) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        protected fun construct_helper(st_name: String): Long {
            val id = jConstructor(st_name)
            return id
        }

        @JvmStatic
        private external fun jConstructor(st_name: String): Long

        protected fun construct_helper(teachers: List<Teacher>): Long {
            val kotlintojdkteachers = LongArray(teachers.size) 
            var index_teachers = 0
            for (value_teachers in teachers) {
                val kotlintojdkvalue_teachers = value_teachers.id
                kotlintojdkteachers[index_teachers] = kotlintojdkvalue_teachers
                ++index_teachers
            }
            val id = jConstructor_1(kotlintojdkteachers)
            return id
        }

        @JvmStatic
        private external fun jConstructor_1(teachers: LongArray): Long
    }
    
    protected var objId = _id
    protected val owner = _owner
    
    open val id: Long
        get() {
            if (objId == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return objId
        }
    
    constructor(st_name: String): this(construct_helper(st_name), true) {
    }

    constructor(teachers: List<Teacher>): this(construct_helper(teachers), true) {
    }
    
    var name: String
        get() {
            val result = jName(id)
            
            return result
        }
        set(value) {
            
            jSetname(id, value)
        }
        
    
    fun addTeacher(t: Teacher): Unit {
        val kotlintojdkt = t.id
        val result = jAddteacher(id, kotlintojdkt)
        
        return result
    }

    fun teachers(): List<Teacher> {
        val result = jTeachers(id)
        val jdktokotlinresult: MutableList<Teacher> = mutableListOf()
        for (value_result in result) {
            val jdktokotlinvalue_result = Teacher(value_result)
            jdktokotlinresult.add(jdktokotlinvalue_result)
        }
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
    private external fun jAddteacher(id: Long, t: Long): Unit
    private external fun jTeachers(id: Long): LongArray
    private external fun jName(id: Long): String
    private external fun jSetname(id: Long, value: String): Unit
    private external fun jFinalize(id: Long): Unit
}

/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 05/12/2022-10:29.
 * Please do not change it manually.
 */

package com.examples.forward_decl.teacher

import com.examples.cppbind.alias.*
import com.examples.cppbind.exceptionUtils.*
import com.examples.cppbind.exception_helpers.*
import com.examples.forward_decl.student.Student

open class Teacher
internal constructor(obj: CppBindObject) : AutoCloseable {
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
        const val cppbindCxxTypeName: String = "cppbind::example::Teacher"
    }
    
    protected var cppbindObj = obj
    private var refs: MutableList<Any> = mutableListOf()

    fun keepCppBindReference(ref: Any) {
        refs.add(ref)
    }
    
    open val id: Long
        get() {
            if (cppbindObj.id == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return cppbindObj.id
        }
    
    constructor(): this(CppBindObject(construct_helper(), true)) {
    }
    
    fun addStudent(s: Student): Unit {
        val kotlintojdks = s.id
        val result = jAddstudent(id, kotlintojdks)
        
        return result
    }

    fun students(): List<Student> {
        val result = jStudents(id)
        val jdktokotlinresult: MutableList<Student> = mutableListOf()
        for (value_result in result) {
            val jdktokotlinvalue_result = Student(CppBindObject(value_result, true))
            jdktokotlinresult.add(jdktokotlinvalue_result)
        }
        return jdktokotlinresult
    }

    override fun close() {
        if (cppbindObj.owner && cppbindObj.id != 0L) {
            jFinalize(cppbindObj.id)
            cppbindObj.id = 0L
        }
    }

    /**
     * Finalize and deletes the object
     */
    protected fun finalize() {
        close()
    }

    ///// External wrapper functions ////////////
    private external fun jAddstudent(id: Long, s: Long): Unit
    private external fun jStudents(id: Long): LongArray
    private external fun jFinalize(id: Long): Unit
}

private external fun jGettypebyid(id: Long): String

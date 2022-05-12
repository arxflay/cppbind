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

package com.examples.templates

import com.examples.cppbind.alias.*
import com.examples.cppbind.exceptionUtils.*
import com.examples.cppbind.exception_helpers.*
import com.examples.getters.NumberInt
import com.examples.simple.Project
import com.examples.simple.Task

/**
 * An example of a class template.
 */
open class StackPrj
internal constructor(obj: CppBindObject) : IContainer, AutoCloseable {
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

        protected fun construct_helper(st: Project): Long {
            val kotlintojdkst = st.id
            val id = jConstructor_1(kotlintojdkst)
            return id
        }

        @JvmStatic
        private external fun jConstructor_1(st: Long): Long
        const val cppbindCxxTypeName: String = "cppbind::example::Stack<cppbind::example::Project>"
    }
    
    protected var cppbindObj = obj
    private var refs: MutableList<Any> = mutableListOf()

    override fun keepCppBindReference(ref: Any) {
        refs.add(ref)
    }
    override val id: Long
        get() {
            if (cppbindObj.id == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return cppbindObj.id
        }
    
    constructor(): this(CppBindObject(construct_helper(), true)) {
    }

    constructor(st: Project): this(CppBindObject(construct_helper(st), true)) {
    }
    
    fun push(item: Project): Unit {
        val kotlintojdkitem = item.id
        val result = jPush(id, kotlintojdkitem)
        
        return result
    }

    fun pop(): Unit {
        val result = jPop(id)
        
        return result
    }

    fun top(): Project {
        val result = jTop(id)
        val jdktokotlinresult = Project(CppBindObject(result))
        return jdktokotlinresult
    }

    fun empty(): Boolean {
        val result = jEmpty(id)
        
        return result
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
    private external fun jPush(id: Long, item: Long): Unit
    private external fun jPop(id: Long): Unit
    private external fun jTop(id: Long): Long
    private external fun jEmpty(id: Long): Boolean
    private external fun jFinalize(id: Long): Unit
}

/**
 * An example of a class template.
 */
open class StackTask
internal constructor(obj: CppBindObject) : IContainer, AutoCloseable {
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

        protected fun construct_helper(st: Task): Long {
            val kotlintojdkst = st.id
            val id = jConstructor_1(kotlintojdkst)
            return id
        }

        @JvmStatic
        private external fun jConstructor_1(st: Long): Long
        const val cppbindCxxTypeName: String = "cppbind::example::Stack<cppbind::example::Task>"
    }
    
    protected var cppbindObj = obj
    private var refs: MutableList<Any> = mutableListOf()

    override fun keepCppBindReference(ref: Any) {
        refs.add(ref)
    }
    override val id: Long
        get() {
            if (cppbindObj.id == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return cppbindObj.id
        }
    
    constructor(): this(CppBindObject(construct_helper(), true)) {
    }

    constructor(st: Task): this(CppBindObject(construct_helper(st), true)) {
    }
    
    fun push(item: Task): Unit {
        val kotlintojdkitem = item.id
        val result = jPush(id, kotlintojdkitem)
        
        return result
    }

    fun pop(): Unit {
        val result = jPop(id)
        
        return result
    }

    fun top(): Task {
        val result = jTop(id)
        val jdktokotlinresult = Task(CppBindObject(result))
        return jdktokotlinresult
    }

    fun empty(): Boolean {
        val result = jEmpty(id)
        
        return result
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
    private external fun jPush(id: Long, item: Long): Unit
    private external fun jPop(id: Long): Unit
    private external fun jTop(id: Long): Long
    private external fun jEmpty(id: Long): Boolean
    private external fun jFinalize(id: Long): Unit
}

/**
 * An example of a class template.
 */
open class StackNumInt
internal constructor(obj: CppBindObject) : IContainer, AutoCloseable {
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

        protected fun construct_helper(st: NumberInt): Long {
            val kotlintojdkst = st.id
            val id = jConstructor_1(kotlintojdkst)
            return id
        }

        @JvmStatic
        private external fun jConstructor_1(st: Long): Long
        const val cppbindCxxTypeName: String = "cppbind::example::Stack<cppbind::example::Number<int>>"
    }
    
    protected var cppbindObj = obj
    private var refs: MutableList<Any> = mutableListOf()

    override fun keepCppBindReference(ref: Any) {
        refs.add(ref)
    }
    override val id: Long
        get() {
            if (cppbindObj.id == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return cppbindObj.id
        }
    
    constructor(): this(CppBindObject(construct_helper(), true)) {
    }

    constructor(st: NumberInt): this(CppBindObject(construct_helper(st), true)) {
    }
    
    fun push(item: NumberInt): Unit {
        val kotlintojdkitem = item.id
        val result = jPush(id, kotlintojdkitem)
        
        return result
    }

    fun pop(): Unit {
        val result = jPop(id)
        
        return result
    }

    fun top(): NumberInt {
        val result = jTop(id)
        val jdktokotlinresult = NumberInt(CppBindObject(result))
        return jdktokotlinresult
    }

    fun empty(): Boolean {
        val result = jEmpty(id)
        
        return result
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
    private external fun jPush(id: Long, item: Long): Unit
    private external fun jPop(id: Long): Unit
    private external fun jTop(id: Long): Long
    private external fun jEmpty(id: Long): Boolean
    private external fun jFinalize(id: Long): Unit
}

private external fun jGettypebyid(id: Long): String

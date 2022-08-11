/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 08/11/2022-07:04.
 * Please do not change it manually.
 */

package com.examples.templates

import com.examples.cppbind.*
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
        
        protected fun constructHelper(): Long {
            val id = jConstructor()
            return id
        }

        @JvmStatic
        private external fun jConstructor(): Long

        /**
         * Full type name(i.e., cppbind::example::Stack<T> not just Stack<T>) should be explicitly specified otherwise
         * cppbind won't be able to generate a converter for the argument, as for templates libclang does not provide
         * enough information.
         */
        protected fun constructHelper(stack: StackPrj): Long {
            val kotlintojdkstack = stack.cppbindObjId
            val id = jConstructor1(kotlintojdkstack, stack)
            return id
        }

        @JvmStatic
        private external fun jConstructor1(stack: Long, vararg extraObjs: Any?): Long

        protected fun constructHelper(st: Project): Long {
            val kotlintojdkst = st.cppbindObjId
            val id = jConstructor2(kotlintojdkst, st)
            return id
        }

        @JvmStatic
        private external fun jConstructor2(st: Long, vararg extraObjs: Any?): Long
        /**
         * An internal property to keep an information about the underlying C++ object type.
         * It is intended to be used by the generated code.
         */
        const val cppbindCxxTypeName: String = "cppbind::example::Stack<cppbind::example::Project>"
    }
    
    protected var cppbindObj = obj
    private var refs: MutableList<Any> = mutableListOf()

    /**
     * An internal method to bind the lifetimes of the current and another object.
     * It is intended to be used by the generated code.
     */
    override fun keepCppBindReference(ref: Any) {
        refs.add(ref)
    }
    /**
     * An internal getter to get the id of an object.
     * It is intended to be used by the generated code.
     */
    override val cppbindObjId: Long
        get() {
            if (cppbindObj.id == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return cppbindObj.id
        }

    /**
     * An internal property returning underlying C++ object id.
     * It is intended to be used by the generated code.
     */
    internal val cxxId: Long by lazy {
        jGetcxxid(cppbindObj.id)
    }

    /**
     * An internal property returning underlying C++ type name.
     * It is intended to be used by the generated code.
     */
    internal val cxxTypeName: String by lazy {
        jGettypebyid(cppbindObj.id)
    }
    
    constructor(): this(CppBindObject(constructHelper(), true)) {
    }

    /**
     * Full type name(i.e., cppbind::example::Stack<T> not just Stack<T>) should be explicitly specified otherwise
     * cppbind won't be able to generate a converter for the argument, as for templates libclang does not provide
     * enough information.
     */
    constructor(stack: StackPrj): this(CppBindObject(constructHelper(stack), true)) {
    }

    constructor(st: Project): this(CppBindObject(constructHelper(st), true)) {
    }
    
    fun push(item: Project): Unit {
        val kotlintojdkitem = item.cppbindObjId
        val result = jPush(cppbindObjId, kotlintojdkitem, item)
        
        return result
    }

    fun pop(): Unit {
        val result = jPop(cppbindObjId)
        
        return result
    }

    fun top(): Project {
        val result = jTop(cppbindObjId)
        val jdktokotlinresult = Project(CppBindObject(result))
        return jdktokotlinresult
    }

    fun empty(): Boolean {
        val result = jEmpty(cppbindObjId)
        
        return result
    }

    /**
     * CppBind generated hashCode method returning the hash of underlying C++ object id.
     */
    override fun hashCode(): Int {
        return cxxId.hashCode()
    }

    /**
     * CppBind generated equals method comparing the underlying C++ object ids.
     */
    override fun equals(other: Any?): Boolean {
        other as StackPrj
        return cxxId == other.cxxId
    }

    /**
     * CppBind generated toString method returning underlying C++ object type and id.
     */
    override fun toString(): String {
        return "<0x$cxxId: $cxxTypeName>"
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
    private external fun jPush(id: Long, item: Long, vararg extraObjs: Any?): Unit
    private external fun jPop(id: Long): Unit
    private external fun jTop(id: Long): Long
    private external fun jEmpty(id: Long): Boolean
    private external fun jFinalize(id: Long): Unit
    private external fun jGetcxxid(id: Long): Long
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
        
        protected fun constructHelper(): Long {
            val id = jConstructor()
            return id
        }

        @JvmStatic
        private external fun jConstructor(): Long

        /**
         * Full type name(i.e., cppbind::example::Stack<T> not just Stack<T>) should be explicitly specified otherwise
         * cppbind won't be able to generate a converter for the argument, as for templates libclang does not provide
         * enough information.
         */
        protected fun constructHelper(stack: StackTask): Long {
            val kotlintojdkstack = stack.cppbindObjId
            val id = jConstructor1(kotlintojdkstack, stack)
            return id
        }

        @JvmStatic
        private external fun jConstructor1(stack: Long, vararg extraObjs: Any?): Long

        protected fun constructHelper(st: Task): Long {
            val kotlintojdkst = st.cppbindObjId
            val id = jConstructor2(kotlintojdkst, st)
            return id
        }

        @JvmStatic
        private external fun jConstructor2(st: Long, vararg extraObjs: Any?): Long
        /**
         * An internal property to keep an information about the underlying C++ object type.
         * It is intended to be used by the generated code.
         */
        const val cppbindCxxTypeName: String = "cppbind::example::Stack<cppbind::example::Task>"
    }
    
    protected var cppbindObj = obj
    private var refs: MutableList<Any> = mutableListOf()

    /**
     * An internal method to bind the lifetimes of the current and another object.
     * It is intended to be used by the generated code.
     */
    override fun keepCppBindReference(ref: Any) {
        refs.add(ref)
    }
    /**
     * An internal getter to get the id of an object.
     * It is intended to be used by the generated code.
     */
    override val cppbindObjId: Long
        get() {
            if (cppbindObj.id == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return cppbindObj.id
        }

    /**
     * An internal property returning underlying C++ object id.
     * It is intended to be used by the generated code.
     */
    internal val cxxId: Long by lazy {
        jGetcxxid(cppbindObj.id)
    }

    /**
     * An internal property returning underlying C++ type name.
     * It is intended to be used by the generated code.
     */
    internal val cxxTypeName: String by lazy {
        jGettypebyid(cppbindObj.id)
    }
    
    constructor(): this(CppBindObject(constructHelper(), true)) {
    }

    /**
     * Full type name(i.e., cppbind::example::Stack<T> not just Stack<T>) should be explicitly specified otherwise
     * cppbind won't be able to generate a converter for the argument, as for templates libclang does not provide
     * enough information.
     */
    constructor(stack: StackTask): this(CppBindObject(constructHelper(stack), true)) {
    }

    constructor(st: Task): this(CppBindObject(constructHelper(st), true)) {
    }
    
    fun push(item: Task): Unit {
        val kotlintojdkitem = item.cppbindObjId
        val result = jPush(cppbindObjId, kotlintojdkitem, item)
        
        return result
    }

    fun pop(): Unit {
        val result = jPop(cppbindObjId)
        
        return result
    }

    fun top(): Task {
        val result = jTop(cppbindObjId)
        val jdktokotlinresult = Task(CppBindObject(result))
        return jdktokotlinresult
    }

    fun empty(): Boolean {
        val result = jEmpty(cppbindObjId)
        
        return result
    }

    /**
     * CppBind generated hashCode method returning the hash of underlying C++ object id.
     */
    override fun hashCode(): Int {
        return cxxId.hashCode()
    }

    /**
     * CppBind generated equals method comparing the underlying C++ object ids.
     */
    override fun equals(other: Any?): Boolean {
        other as StackTask
        return cxxId == other.cxxId
    }

    /**
     * CppBind generated toString method returning underlying C++ object type and id.
     */
    override fun toString(): String {
        return "<0x$cxxId: $cxxTypeName>"
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
    private external fun jPush(id: Long, item: Long, vararg extraObjs: Any?): Unit
    private external fun jPop(id: Long): Unit
    private external fun jTop(id: Long): Long
    private external fun jEmpty(id: Long): Boolean
    private external fun jFinalize(id: Long): Unit
    private external fun jGetcxxid(id: Long): Long
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
        
        protected fun constructHelper(): Long {
            val id = jConstructor()
            return id
        }

        @JvmStatic
        private external fun jConstructor(): Long

        /**
         * Full type name(i.e., cppbind::example::Stack<T> not just Stack<T>) should be explicitly specified otherwise
         * cppbind won't be able to generate a converter for the argument, as for templates libclang does not provide
         * enough information.
         */
        protected fun constructHelper(stack: StackNumInt): Long {
            val kotlintojdkstack = stack.cppbindObjId
            val id = jConstructor1(kotlintojdkstack, stack)
            return id
        }

        @JvmStatic
        private external fun jConstructor1(stack: Long, vararg extraObjs: Any?): Long

        protected fun constructHelper(st: NumberInt): Long {
            val kotlintojdkst = st.cppbindObjId
            val id = jConstructor2(kotlintojdkst, st)
            return id
        }

        @JvmStatic
        private external fun jConstructor2(st: Long, vararg extraObjs: Any?): Long
        /**
         * An internal property to keep an information about the underlying C++ object type.
         * It is intended to be used by the generated code.
         */
        const val cppbindCxxTypeName: String = "cppbind::example::Stack<cppbind::example::Number<int>>"
    }
    
    protected var cppbindObj = obj
    private var refs: MutableList<Any> = mutableListOf()

    /**
     * An internal method to bind the lifetimes of the current and another object.
     * It is intended to be used by the generated code.
     */
    override fun keepCppBindReference(ref: Any) {
        refs.add(ref)
    }
    /**
     * An internal getter to get the id of an object.
     * It is intended to be used by the generated code.
     */
    override val cppbindObjId: Long
        get() {
            if (cppbindObj.id == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return cppbindObj.id
        }

    /**
     * An internal property returning underlying C++ object id.
     * It is intended to be used by the generated code.
     */
    internal val cxxId: Long by lazy {
        jGetcxxid(cppbindObj.id)
    }

    /**
     * An internal property returning underlying C++ type name.
     * It is intended to be used by the generated code.
     */
    internal val cxxTypeName: String by lazy {
        jGettypebyid(cppbindObj.id)
    }
    
    constructor(): this(CppBindObject(constructHelper(), true)) {
    }

    /**
     * Full type name(i.e., cppbind::example::Stack<T> not just Stack<T>) should be explicitly specified otherwise
     * cppbind won't be able to generate a converter for the argument, as for templates libclang does not provide
     * enough information.
     */
    constructor(stack: StackNumInt): this(CppBindObject(constructHelper(stack), true)) {
    }

    constructor(st: NumberInt): this(CppBindObject(constructHelper(st), true)) {
    }
    
    fun push(item: NumberInt): Unit {
        val kotlintojdkitem = item.cppbindObjId
        val result = jPush(cppbindObjId, kotlintojdkitem, item)
        
        return result
    }

    fun pop(): Unit {
        val result = jPop(cppbindObjId)
        
        return result
    }

    fun top(): NumberInt {
        val result = jTop(cppbindObjId)
        val jdktokotlinresult = NumberInt(CppBindObject(result))
        return jdktokotlinresult
    }

    fun empty(): Boolean {
        val result = jEmpty(cppbindObjId)
        
        return result
    }

    /**
     * CppBind generated hashCode method returning the hash of underlying C++ object id.
     */
    override fun hashCode(): Int {
        return cxxId.hashCode()
    }

    /**
     * CppBind generated equals method comparing the underlying C++ object ids.
     */
    override fun equals(other: Any?): Boolean {
        other as StackNumInt
        return cxxId == other.cxxId
    }

    /**
     * CppBind generated toString method returning underlying C++ object type and id.
     */
    override fun toString(): String {
        return "<0x$cxxId: $cxxTypeName>"
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
    private external fun jPush(id: Long, item: Long, vararg extraObjs: Any?): Unit
    private external fun jPop(id: Long): Unit
    private external fun jTop(id: Long): Long
    private external fun jEmpty(id: Long): Boolean
    private external fun jFinalize(id: Long): Unit
    private external fun jGetcxxid(id: Long): Long
}

private external fun jGettypebyid(id: Long): String

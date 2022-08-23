/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 08/18/2022-11:02.
 * Please do not change it manually.
 */

package com.examples.rv_policies

import com.examples.cppbind.*
import com.examples.cppbind.exceptions.*

/**
 * A test example for keep_alive policy with shared_ref=False.
 */
open class Child1
internal constructor(obj: CppBindObject) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        protected fun constructHelper(name: String): Long {
            val id = jConstructor(name)
            return id
        }

        @JvmStatic
        private external fun jConstructor(name: String, vararg extraObjs: Any?): Long
        /**
         * An internal property to keep an information about the underlying C++ object type.
         * It is intended to be used by the generated code.
         */
        const val cppbindCxxTypeName: String = "cppbind::example::Child1"
    }
    
    protected var cppbindObj = obj
    private var refs: MutableList<Any> = mutableListOf()

    /**
     * An internal method to bind the lifetimes of the current and another object.
     * It is intended to be used by the generated code.
     */
    fun keepCppBindReference(ref: Any) {
        refs.add(ref)
    }
    /**
     * An internal getter to get the id of an object.
     * It is intended to be used by the generated code.
     */
    open val cppbindObjId: Long
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
    
    constructor(name: String): this(CppBindObject(constructHelper(name), true)) {
    }
    
    val name: String
        get() {
            val result = jName(cppbindObjId)
            
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
        other as Child1
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
    private external fun jName(id: Long): String
    private external fun jFinalize(id: Long): Unit
    private external fun jGetcxxid(id: Long): Long
}


/**
 * A test example for keep_alive policy with action=gen_interface.
 */
interface IChild3 : AutoCloseable {
    /**
     * An internal getter to get the id of an object.
     * It is intended to be used by the generated code.
     */
    val cppbindObjId: Long
    /**
     * An internal method to bind the lifetimes of the current and another object.
     * It is intended to be used by the generated code.
     */
    fun keepCppBindReference(ref: Any)
    
    val name: String
        get() {
            val result = IChild3Helper.jName(cppbindObjId)
            
            return result
        }
    
}


class IChild3Helper {
    companion object {
        @JvmStatic
        external fun jName(id: Long): String
    }
}


open class Child3Impl
internal constructor(obj : CppBindObject) : IChild3 {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        protected fun constructHelper(name: String): Long {
            val id = jConstructor(name)
            return id
        }

        @JvmStatic
        private external fun jConstructor(name: String, vararg extraObjs: Any?): Long
        /**
         * An internal property to keep an information about the underlying C++ object type.
         * It is intended to be used by the generated code.
         */
        const val cppbindCxxTypeName: String = "cppbind::example::Child3"
    }

    protected var cppbindObj = obj
    private var refs: MutableList<Any> = mutableListOf()

    override fun keepCppBindReference(ref: Any) {
        refs.add(ref)
    }

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
    
    constructor(name: String): this(CppBindObject(constructHelper(name), true)) {
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
        other as Child3Impl
        return cxxId == other.cxxId
    }

    /**
     * CppBind generated toString method returning underlying C++ object type and id.
     */
    override fun toString(): String {
        return "<0x$cxxId: $cxxTypeName>"
    }

    ///// External wrapper functions ////////////
    private external fun jFinalize(id: Long): Unit
    private external fun jGetcxxid(id: Long): Long
}

/**
 * A test example for keep_alive policy with shared_ref=True.
 */
open class Child2
internal constructor(obj: CppBindObject) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        protected fun constructHelper(name: String): Long {
            val id = jConstructor(name)
            return id
        }

        @JvmStatic
        private external fun jConstructor(name: String, vararg extraObjs: Any?): Long
        /**
         * An internal property to keep an information about the underlying C++ object type.
         * It is intended to be used by the generated code.
         */
        const val cppbindCxxTypeName: String = "cppbind::example::Child2"
    }
    
    protected var cppbindObj = obj
    private var refs: MutableList<Any> = mutableListOf()

    /**
     * An internal method to bind the lifetimes of the current and another object.
     * It is intended to be used by the generated code.
     */
    fun keepCppBindReference(ref: Any) {
        refs.add(ref)
    }
    /**
     * An internal getter to get the id of an object.
     * It is intended to be used by the generated code.
     */
    open val cppbindObjId: Long
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
    
    constructor(name: String): this(CppBindObject(constructHelper(name), true)) {
    }
    
    val name: String
        get() {
            val result = jName(cppbindObjId)
            
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
        other as Child2
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
    private external fun jName(id: Long): String
    private external fun jFinalize(id: Long): Unit
    private external fun jGetcxxid(id: Long): Long
}

/**
 * A test example for keep_alive policy. Container holding shared_ref and non shared_ref class and interface types.
 */
open class Parent1
internal constructor(obj: CppBindObject) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        protected fun constructHelper(name: String, child1: Child1, child2: Child2, _child3: IChild3): Long {
            val kotlintojdkchild1 = child1.cppbindObjId
            val kotlintojdkchild2 = child2.cppbindObjId
            val kotlintojdk_child3 = _child3.cppbindObjId
            val id = jConstructor(name, kotlintojdkchild1, kotlintojdkchild2, kotlintojdk_child3, child1, child2, _child3)
            return id
        }

        @JvmStatic
        private external fun jConstructor(name: String, child1: Long, child2: Long, _child3: Long, vararg extraObjs: Any?): Long
        /**
         * An internal property to keep an information about the underlying C++ object type.
         * It is intended to be used by the generated code.
         */
        const val cppbindCxxTypeName: String = "cppbind::example::Parent1"
    }
    
    protected var cppbindObj = obj
    private var refs: MutableList<Any> = mutableListOf()

    /**
     * An internal method to bind the lifetimes of the current and another object.
     * It is intended to be used by the generated code.
     */
    fun keepCppBindReference(ref: Any) {
        refs.add(ref)
    }
    /**
     * An internal getter to get the id of an object.
     * It is intended to be used by the generated code.
     */
    open val cppbindObjId: Long
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
    
    constructor(name: String, child1: Child1, child2: Child2, _child3: IChild3): this(CppBindObject(constructHelper(name, child1, child2, _child3), true)) {
        this.keepCppBindReference(child1)
        this.keepCppBindReference(child3)
    }
    
    val name: String
        get() {
            val result = jName(cppbindObjId)
            
            return result
        }

    var child1: Child1
        get() {
            val result = jChild1(cppbindObjId)
            val jdktokotlinresult = Child1(CppBindObject(result))
            jdktokotlinresult.keepCppBindReference(this)
            return jdktokotlinresult
        }
        set(value) {
            val kotlintojdkvalue = value.cppbindObjId
            jSetchild1(cppbindObjId, kotlintojdkvalue, value)
        }

    val child2: Child2
        get() {
            val result = jChild2(cppbindObjId)
            val jdktokotlinresult = Child2(CppBindObject(result, true))
            return jdktokotlinresult
        }

    var child3: IChild3
        get() {
            val result = jChild3(cppbindObjId)
            val jdktokotlinresult = Child3Impl(CppBindObject(result))
            jdktokotlinresult.keepCppBindReference(this)
            return jdktokotlinresult
        }
        set(value) {
            val kotlintojdkvalue = value.cppbindObjId
            jSetchild3(cppbindObjId, kotlintojdkvalue, value)
            this.keepCppBindReference(value)
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
        other as Parent1
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
    private external fun jName(id: Long): String
    private external fun jChild1(id: Long): Long
    private external fun jSetchild1(id: Long, value: Long, valueObj: Any?): Unit
    private external fun jChild2(id: Long): Long
    private external fun jChild3(id: Long): Long
    private external fun jSetchild3(id: Long, value: Long, valueObj: Any?): Unit
    private external fun jFinalize(id: Long): Unit
    private external fun jGetcxxid(id: Long): Long
}

/**
 * A test example for keep_alive policy. Container holding shared_ref and non shared_ref class and interface types.
 */
open class Parent2
internal constructor(obj: CppBindObject) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        protected fun constructHelper(name: String): Long {
            val id = jConstructor(name)
            return id
        }

        @JvmStatic
        private external fun jConstructor(name: String, vararg extraObjs: Any?): Long
        /**
         * An internal property to keep an information about the underlying C++ object type.
         * It is intended to be used by the generated code.
         */
        const val cppbindCxxTypeName: String = "cppbind::example::Parent2"
    }
    
    protected var cppbindObj = obj
    private var refs: MutableList<Any> = mutableListOf()

    /**
     * An internal method to bind the lifetimes of the current and another object.
     * It is intended to be used by the generated code.
     */
    fun keepCppBindReference(ref: Any) {
        refs.add(ref)
    }
    /**
     * An internal getter to get the id of an object.
     * It is intended to be used by the generated code.
     */
    open val cppbindObjId: Long
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
    
    constructor(name: String): this(CppBindObject(constructHelper(name), true)) {
    }
    
    val name: String
        get() {
            val result = jName(cppbindObjId)
            
            return result
        }

    val children1: List<Child1>
        get() {
            val result = jChildren1(cppbindObjId)
            val jdktokotlinresult: MutableList<Child1> = mutableListOf()
            for (valueResult in result) {
                val jdktokotlinvalueResult = Child1(CppBindObject(valueResult))
                jdktokotlinresult.add(jdktokotlinvalueResult)
            }
            for (valuejdktokotlinresult in jdktokotlinresult) {
                valuejdktokotlinresult.keepCppBindReference(this)
            }
            return jdktokotlinresult
        }

    val children2: List<Child2>
        get() {
            val result = jChildren2(cppbindObjId)
            val jdktokotlinresult: MutableList<Child2> = mutableListOf()
            for (valueResult in result) {
                val jdktokotlinvalueResult = Child2(CppBindObject(valueResult, true))
                jdktokotlinresult.add(jdktokotlinvalueResult)
            }
            return jdktokotlinresult
        }
    
    fun addChild1(c: Child1): Unit {
        val kotlintojdkc = c.cppbindObjId
        val result = jAddchild1(cppbindObjId, kotlintojdkc, c)
        
        return result
    }

    fun addChildren1(c: List<Child1>): Unit {
        val kotlintojdkc = LongArray(c.size) 
        var indexC = 0
        for (valueC in c) {
            val kotlintojdkvalueC = valueC.cppbindObjId
            kotlintojdkc[indexC] = kotlintojdkvalueC
            ++indexC
        }
        val result = jAddchildren1(cppbindObjId, kotlintojdkc, c)
        
        this.keepCppBindReference(c)
        return result
    }

    fun addChild2(c: Child2): Unit {
        val kotlintojdkc = c.cppbindObjId
        val result = jAddchild2(cppbindObjId, kotlintojdkc, c)
        
        return result
    }

    fun addChildren2(c: List<Child2>): Unit {
        val kotlintojdkc = LongArray(c.size) 
        var indexC = 0
        for (valueC in c) {
            val kotlintojdkvalueC = valueC.cppbindObjId
            kotlintojdkc[indexC] = kotlintojdkvalueC
            ++indexC
        }
        val result = jAddchildren2(cppbindObjId, kotlintojdkc, c)
        
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
        other as Parent2
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
    private external fun jName(id: Long): String
    private external fun jChildren1(id: Long): LongArray
    private external fun jAddchild1(id: Long, c: Long, vararg extraObjs: Any?): Unit
    private external fun jAddchildren1(id: Long, c: LongArray, vararg extraObjs: Any?): Unit
    private external fun jAddchild2(id: Long, c: Long, vararg extraObjs: Any?): Unit
    private external fun jAddchildren2(id: Long, c: LongArray, vararg extraObjs: Any?): Unit
    private external fun jChildren2(id: Long): LongArray
    private external fun jFinalize(id: Long): Unit
    private external fun jGetcxxid(id: Long): Long
}

private external fun jGettypebyid(id: Long): String

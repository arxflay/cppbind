/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 08/18/2022-11:03.
 * Please do not change it manually.
 */

package com.examples.templates

import com.examples.cppbind.*
import com.examples.cppbind.exceptions.*
import com.examples.simple.Project
import com.examples.simple.Root

open class TemplateMethods
internal constructor(obj: CppBindObject) : AutoCloseable {
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

        @JvmName("mergeInt")
        fun merge(first: List<Int>, second: List<Int>): List<Int> {
            val kotlintojdkfirst = IntArray(first.size) 
            var indexFirst = 0
            for (valueFirst in first) {
                
                kotlintojdkfirst[indexFirst] = valueFirst
                ++indexFirst
            }
            val kotlintojdksecond = IntArray(second.size) 
            var indexSecond = 0
            for (valueSecond in second) {
                
                kotlintojdksecond[indexSecond] = valueSecond
                ++indexSecond
            }
            val result = jMergeInt(kotlintojdkfirst, kotlintojdksecond, first, second)
            val jdktokotlinresult: MutableList<Int> = mutableListOf()
            for (valueResult in result) {
                
                jdktokotlinresult.add(valueResult)
            }
            return jdktokotlinresult
        }
        @JvmStatic
        private external fun jMergeInt(first: IntArray, second: IntArray, vararg extraObjs: Any?): IntArray

        @JvmName("mergeString")
        fun merge(first: List<String>, second: List<String>): List<String> {
            val kotlintojdkfirst = ObjectArray(first.size) { Any() }
            var indexFirst = 0
            for (valueFirst in first) {
                
                kotlintojdkfirst[indexFirst] = valueFirst
                ++indexFirst
            }
            val kotlintojdksecond = ObjectArray(second.size) { Any() }
            var indexSecond = 0
            for (valueSecond in second) {
                
                kotlintojdksecond[indexSecond] = valueSecond
                ++indexSecond
            }
            val result = jMergeString(kotlintojdkfirst, kotlintojdksecond, first, second)
            val jdktokotlinresult: MutableList<String> = mutableListOf()
            for (valueResult in result) {
                @Suppress("UNCHECKED_CAST") val actualValueresult = valueResult as String
                
                jdktokotlinresult.add(actualValueresult)
            }
            return jdktokotlinresult
        }
        @JvmStatic
        private external fun jMergeString(first: ObjectArray, second: ObjectArray, vararg extraObjs: Any?): ObjectArray
        /**
         * An internal property to keep an information about the underlying C++ object type.
         * It is intended to be used by the generated code.
         */
        const val cppbindCxxTypeName: String = "cppbind::example::TemplateMethods"
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
    
    constructor(): this(CppBindObject(constructHelper(), true)) {
    }
    
    open fun max(a: Int, b: Int): Int {
        val result = jMaxInt(cppbindObjId, a, b)
        
        return result
    }

    open fun max(a: String, b: String): String {
        val result = jMaxString(cppbindObjId, a, b)
        
        return result
    }

    open fun makePair(a: Project, b: Project): Pair<Project, Project> {
        val kotlintojdka = a.cppbindObjId
        val kotlintojdkb = b.cppbindObjId
        val result = jMakepairProjectProject(cppbindObjId, kotlintojdka, kotlintojdkb, a, b)
        val firstResult = result.first
        val secondResult = result.second
        val jdktokotlinfirstResult = Project(CppBindObject(firstResult))
        val jdktokotlinsecondResult = Project(CppBindObject(secondResult))
        val jdktokotlinresult = Pair<Project, Project>(jdktokotlinfirstResult, jdktokotlinsecondResult)
        return jdktokotlinresult
    }

    open fun makePair(a: Root, b: Project): Pair<Root, Project> {
        val kotlintojdka = a.cppbindObjId
        val kotlintojdkb = b.cppbindObjId
        val result = jMakepairRootProject(cppbindObjId, kotlintojdka, kotlintojdkb, a, b)
        val firstResult = result.first
        val secondResult = result.second
        val jdktokotlinfirstResult = Root(CppBindObject(firstResult))
        val jdktokotlinsecondResult = Project(CppBindObject(secondResult))
        val jdktokotlinresult = Pair<Root, Project>(jdktokotlinfirstResult, jdktokotlinsecondResult)
        return jdktokotlinresult
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
        other as TemplateMethods
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
    private external fun jMaxInt(id: Long, a: Int, b: Int, vararg extraObjs: Any?): Int
    private external fun jMaxString(id: Long, a: String, b: String, vararg extraObjs: Any?): String
    private external fun jMakepairProjectProject(id: Long, a: Long, b: Long, vararg extraObjs: Any?): Pair<Long, Long>
    private external fun jMakepairRootProject(id: Long, a: Long, b: Long, vararg extraObjs: Any?): Pair<Long, Long>
    private external fun jFinalize(id: Long): Unit
    private external fun jGetcxxid(id: Long): Long
}

private external fun jGettypebyid(id: Long): String

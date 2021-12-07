/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 12/07/2021-12:27.
 * Please do not change it manually.
 */

package com.examples.optionals

import com.examples.enums.Color
import com.examples.enums.ColorShade
import com.examples.exception_helpers.*
import com.examples.getters.Person
import com.examples.iegen.alias.*
import com.examples.iegen.exceptionUtils.*
import com.examples.simple.Project
import com.examples.simple.Task

open class Optionals
internal constructor(_id: Long) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        /**
         * constructor
         */
        protected fun construct_helper(): Long {
            val id = jConstructor()
            return id
        }

        @JvmStatic
        private external fun jConstructor(): Long
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
     * constructor
     */
    constructor(): this(construct_helper()) {
    }
    
    fun optionalPtrWithNullptrDefault(task: Task? = null): Task? {
        val kotlin_to_jdk_task = task?.id ?: 0L
        val result = jOptionalptrwithnullptrdefault(id, kotlin_to_jdk_task)
        val jdk_to_kotlin_result = if (result == 0L) null else Task(result)
        return jdk_to_kotlin_result
    }

    fun optionalPtrWithNullDefault(task: Task? = null): Task? {
        val kotlin_to_jdk_task = task?.id ?: 0L
        val result = jOptionalptrwithnulldefault(id, kotlin_to_jdk_task)
        val jdk_to_kotlin_result = if (result == 0L) null else Task(result)
        return jdk_to_kotlin_result
    }

    fun optionalFDPtrWithNullptrDefault(project: Project? = null): Project? {
        val kotlin_to_jdk_project = project?.id ?: 0L
        val result = jOptionalfdptrwithnullptrdefault(id, kotlin_to_jdk_project)
        val jdk_to_kotlin_result = if (result == 0L) null else Project(result)
        return jdk_to_kotlin_result
    }

    fun optionalSharedPtrWithNullptrDefault(person: Person? = null): Person? {
        val kotlin_to_jdk_person = person?.id ?: 0L
        val result = jOptionalsharedptrwithnullptrdefault(id, kotlin_to_jdk_person)
        val jdk_to_kotlin_result = if (result == 0L) null else Person(result)
        return jdk_to_kotlin_result
    }

    fun optionalIntWithDefault(value: Int = 5): Int {
        val result = jOptionalintwithdefault(id, value)
        
        return result
    }

    fun optionalLongWithDefault(value: Long = 7L): Long {
        val result = jOptionallongwithdefault(id, value)
        
        return result
    }

    fun optionalDoubleWithDefault(value: Double = 9.0): Double {
        val result = jOptionaldoublewithdefault(id, value)
        
        return result
    }

    fun optionalFloatWithDefault(value: Float = 11.0F): Float {
        val result = jOptionalfloatwithdefault(id, value)
        
        return result
    }

    fun optionalBoolWithDefault(value: Boolean = true): Boolean {
        val result = jOptionalboolwithdefault(id, value)
        
        return result
    }

    /**
     * @param[in] optionalStr string with default value
     */
    fun optionalStringWithDefault(optionalStr: String = "abc"): String {
        val result = jOptionalstringwithdefault(id, optionalStr)
        
        return result
    }

    /**
     * @param[in] optionalStr string with default value
     */
    fun optionalStringViewWithDefault(optionalStr: String = "abc"): String {
        val result = jOptionalstringviewwithdefault(id, optionalStr)
        
        return result
    }

    fun optionalCharWithDefault(symbol: Char = ','): Char {
        val result = jOptionalcharwithdefault(id, symbol)
        
        return result
    }

    fun optionalCharPointerWithDefault(optionalStr: String = "def"): String {
        val result = jOptionalcharpointerwithdefault(id, optionalStr)
        
        return result
    }

    fun optionalEnumWithDefault(c: Color = Color.Red): Color {
        val kotlin_to_jdk_c = c.value
        val result = jOptionalenumwithdefault(id, kotlin_to_jdk_c)
        val jdk_to_kotlin_result_optional = Color.getByValue(result)
        if (jdk_to_kotlin_result_optional == null) {
            ExceptionHandler.handleUncaughtException("Internal error: unresolved reference to non existing field of Color enum.")
        }
        val jdk_to_kotlin_result = jdk_to_kotlin_result_optional!!
        return jdk_to_kotlin_result
    }

    fun optionalEnumWithDefaultAndFieldPrefix(c: ColorShade = ColorShade.ShadeLight): ColorShade {
        val kotlin_to_jdk_c = c.value
        val result = jOptionalenumwithdefaultandfieldprefix(id, kotlin_to_jdk_c)
        val jdk_to_kotlin_result_optional = ColorShade.getByValue(result)
        if (jdk_to_kotlin_result_optional == null) {
            ExceptionHandler.handleUncaughtException("Internal error: unresolved reference to non existing field of ColorShade enum.")
        }
        val jdk_to_kotlin_result = jdk_to_kotlin_result_optional!!
        return jdk_to_kotlin_result
    }

    fun optionalEnumWithInternalDefault(c: ColorShade): ColorShade {
        val kotlin_to_jdk_c = c.value
        val result = jOptionalenumwithinternaldefault(id, kotlin_to_jdk_c)
        val jdk_to_kotlin_result_optional = ColorShade.getByValue(result)
        if (jdk_to_kotlin_result_optional == null) {
            ExceptionHandler.handleUncaughtException("Internal error: unresolved reference to non existing field of ColorShade enum.")
        }
        val jdk_to_kotlin_result = jdk_to_kotlin_result_optional!!
        return jdk_to_kotlin_result
    }

    fun optionalRefWithDefaultComplexValue(task: Task): Task {
        val kotlin_to_jdk_task = task.id
        val result = jOptionalrefwithdefaultcomplexvalue(id, kotlin_to_jdk_task)
        val jdk_to_kotlin_result = Task(result)
        return jdk_to_kotlin_result
    }

    fun optionalByValWithDefaultComplexValue(task: Task): Task {
        val kotlin_to_jdk_task = task.id
        val result = jOptionalbyvalwithdefaultcomplexvalue(id, kotlin_to_jdk_task)
        val jdk_to_kotlin_result = Task(result)
        return jdk_to_kotlin_result
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
        close()
    }

    ///// External wrapper functions ////////////
    private external fun jOptionalptrwithnullptrdefault(id: Long, task: Long): Long
    private external fun jOptionalptrwithnulldefault(id: Long, task: Long): Long
    private external fun jOptionalfdptrwithnullptrdefault(id: Long, project: Long): Long
    private external fun jOptionalsharedptrwithnullptrdefault(id: Long, person: Long): Long
    private external fun jOptionalintwithdefault(id: Long, value: Int): Int
    private external fun jOptionallongwithdefault(id: Long, value: Long): Long
    private external fun jOptionaldoublewithdefault(id: Long, value: Double): Double
    private external fun jOptionalfloatwithdefault(id: Long, value: Float): Float
    private external fun jOptionalboolwithdefault(id: Long, value: Boolean): Boolean
    private external fun jOptionalstringwithdefault(id: Long, optionalStr: String): String
    private external fun jOptionalstringviewwithdefault(id: Long, optionalStr: String): String
    private external fun jOptionalcharwithdefault(id: Long, symbol: Char): Char
    private external fun jOptionalcharpointerwithdefault(id: Long, optionalStr: String): String
    private external fun jOptionalenumwithdefault(id: Long, c: Int): Int
    private external fun jOptionalenumwithdefaultandfieldprefix(id: Long, c: Int): Int
    private external fun jOptionalenumwithinternaldefault(id: Long, c: Int): Int
    private external fun jOptionalrefwithdefaultcomplexvalue(id: Long, task: Long): Long
    private external fun jOptionalbyvalwithdefaultcomplexvalue(id: Long, task: Long): Long
    private external fun jFinalize(id: Long): Unit
}
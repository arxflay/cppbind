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

package com.examples.globs.complex

import com.examples.cppbind.alias.*
import com.examples.cppbind.exceptionUtils.*
import com.examples.cppbind.exception_helpers.*
import com.examples.simple.Root
import com.examples.simple.Task

private val INIT = run {
    System.loadLibrary("wrapper_jni");
}

fun singleComplexDefaultValue(): Task {
    val result = jSinglecomplexdefaultvalue_1()
    val jdktokotlinresult = Task(CppBindObject(result, true))
    return jdktokotlinresult
}


fun singleComplexDefaultValue(task: Task): Task {
    val kotlintojdktask = task.id
    val result = jSinglecomplexdefaultvalue(kotlintojdktask)
    val jdktokotlinresult = Task(CppBindObject(result, true))
    return jdktokotlinresult
}

/**
 * A global function with mixed default values.
 */
fun multipleMixedDefaultValues(): String {
    val result = jMultiplemixeddefaultvalues_1()
    
    return result
}


/**
 * A global function with mixed default values.
 */
fun multipleMixedDefaultValues(task: Task, i: Int = 1): String {
    val kotlintojdktask = task.id
    val result = jMultiplemixeddefaultvalues_2(kotlintojdktask, i)
    
    return result
}


/**
 * A global function with mixed default values.
 */
fun multipleMixedDefaultValues(task: Task, i: Int = 1, r: Root): String {
    val kotlintojdktask = task.id
    val kotlintojdkr = r.id
    val result = jMultiplemixeddefaultvalues(kotlintojdktask, i, kotlintojdkr)
    
    return result
}

private external fun jSinglecomplexdefaultvalue_1(): Long

private external fun jSinglecomplexdefaultvalue(task: Long): Long
private external fun jMultiplemixeddefaultvalues_1(): String

private external fun jMultiplemixeddefaultvalues_2(task: Long, i: Int): String

private external fun jMultiplemixeddefaultvalues(task: Long, i: Int, r: Long): String

private external fun jGettypebyid(id: Long): String

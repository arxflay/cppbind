/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 02/14/2022-14:14.
 * Please do not change it manually.
 */

package com.examples.globs

import com.examples.enums.Color
import com.examples.iegen.alias.*
import com.examples.iegen.exceptionUtils.*
import com.examples.iegen.exception_helpers.*
import com.examples.simple.Project
import com.examples.simple.Root

val INIT = run {
    System.loadLibrary("wrapper_jni");
}

/**
 * A global function example.
 */
fun concat(str1: String, str2: String): String {
    val result = jConcat(str1, str2)
    
    return result
}

/**
 * A global overloaded function example.
 */
fun concat(str1: String, str2: String, str3: String): String {
    val result = jConcat_1(str1, str2, str3)
    
    return result
}

/**
 * A global template function example.
 */
fun max(arg0: Int, arg1: Int): Int {
    val result = jMaxInt(arg0, arg1)
    
    return result
}

/**
 * A global template function example.
 */
fun max(arg0: String, arg1: String): String {
    val result = jMaxString(arg0, arg1)
    
    return result
}

/**
 * A global template function example in namespace.
 */
fun makePair(arg0: Project, arg1: Project): Pair<Project, Project> {
    val kotlintojdkarg0 = arg0.id
    val kotlintojdkarg1 = arg1.id
    val result = jMakepairProjectProject(kotlintojdkarg0, kotlintojdkarg1)
    val first_result = result.first
    val second_result = result.second
    val jdktokotlinfirst_result = Project(IEGenObject(first_result))
    val jdktokotlinsecond_result = Project(IEGenObject(second_result))
    val jdktokotlinresult = Pair<Project, Project>(jdktokotlinfirst_result, jdktokotlinsecond_result)
    return jdktokotlinresult
}

/**
 * A global template function example in namespace.
 */
fun makePair(arg0: Root, arg1: Project): Pair<Root, Project> {
    val kotlintojdkarg0 = arg0.id
    val kotlintojdkarg1 = arg1.id
    val result = jMakepairRootProject(kotlintojdkarg0, kotlintojdkarg1)
    val first_result = result.first
    val second_result = result.second
    val jdktokotlinfirst_result = Root(IEGenObject(first_result))
    val jdktokotlinsecond_result = Project(IEGenObject(second_result))
    val jdktokotlinresult = Pair<Root, Project>(jdktokotlinfirst_result, jdktokotlinsecond_result)
    return jdktokotlinresult
}

/**
 * A global function with enum default value.
 */
fun optionalColor(c: Color = Color.Red): Color {
    val kotlintojdkc = c.value
    val result = jOptionalcolor(kotlintojdkc)
    val jdktokotlinresult_optional = Color.getByValue(result)
    if (jdktokotlinresult_optional == null) {
        ExceptionHandler.handleUncaughtException("Internal error: unresolved reference to non existing field of Color enum.")
    }
    val jdktokotlinresult = jdktokotlinresult_optional!!
    return jdktokotlinresult
}

/**
 * A global function with pointer default value and nullable return value.
 */
fun optionalFDPtr(project: Project? = null): Project? {
    val kotlintojdkproject = project?.id ?: 0L
    val result = jOptionalfdptr(kotlintojdkproject)
    val jdktokotlinresult = if (result == 0L) null else Project(IEGenObject(result))
    return jdktokotlinresult
}

/**
 * A global function with no return value.
 */
fun doNothing(): Unit {
    val result = jDonothing()
    
    return result
}

/**
 * A global function with primitive default value.
 */
fun optionalInt(i: Int = 5): Int {
    val result = jOptionalint(i)
    
    return result
}

private external fun jConcat(str1: String, str2: String): String
private external fun jConcat_1(str1: String, str2: String, str3: String): String
private external fun jMaxInt(arg0: Int, arg1: Int): Int
private external fun jMaxString(arg0: String, arg1: String): String
private external fun jMakepairProjectProject(arg0: Long, arg1: Long): Pair<Long, Long>
private external fun jMakepairRootProject(arg0: Long, arg1: Long): Pair<Long, Long>
private external fun jOptionalcolor(c: Int): Int
private external fun jOptionalfdptr(project: Long): Long
private external fun jDonothing(): Unit
private external fun jOptionalint(i: Int): Int

/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 03/01/2022-08:48.
 * Please do not change it manually.
 */

package com.examples.enums

import com.examples.iegen.alias.*
import com.examples.iegen.exceptionUtils.*
import com.examples.iegen.exception_helpers.*

/**
 * Class Frame.
 */
open class Frame
internal constructor(obj: IEGenObject) : AutoCloseable {
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
    }
    
    protected var iegObj = obj
    private var refs: MutableList<Any> = mutableListOf()

    fun keepIEGenReference(ref: Any) {
        refs.add(ref)
    }
    
    open val id: Long
        get() {
            if (iegObj.id == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return iegObj.id
        }
    
    constructor(): this(IEGenObject(construct_helper(), true)) {
    }
    
    var backgroundColor: Color
        get() {
            val result = jBackgroundcolor(id)
            val jdktokotlinresult_optional = Color.getByValue(result)
            if (jdktokotlinresult_optional == null) {
                ExceptionHandler.handleUncaughtException("Internal error: unresolved reference to non existing field of Color enum.")
            }
            val jdktokotlinresult = jdktokotlinresult_optional!!
            return jdktokotlinresult
        }
        set(value) {
            val kotlintojdkvalue = value.value
            jSetbackgroundcolor(id, kotlintojdkvalue)
        }
        

    var backgroundColorShade: ColorShade
        get() {
            val result = jBackgroundcolorshade(id)
            val jdktokotlinresult_optional = ColorShade.getByValue(result)
            if (jdktokotlinresult_optional == null) {
                ExceptionHandler.handleUncaughtException("Internal error: unresolved reference to non existing field of ColorShade enum.")
            }
            val jdktokotlinresult = jdktokotlinresult_optional!!
            return jdktokotlinresult
        }
        set(value) {
            val kotlintojdkvalue = value.value
            jSetbackgroundcolorshade(id, kotlintojdkvalue)
        }
        

    override fun close() {
        if (iegObj.owner && iegObj.id != 0L) {
            jFinalize(iegObj.id)
            iegObj.id = 0L
        }
    }

    /**
     * Finalize and deletes the object
     */
    protected fun finalize() {
        close()
    }

    ///// External wrapper functions ////////////
    private external fun jBackgroundcolor(id: Long): Int
    private external fun jSetbackgroundcolor(id: Long, value: Int): Unit
    private external fun jBackgroundcolorshade(id: Long): Int
    private external fun jSetbackgroundcolorshade(id: Long, value: Int): Unit
    private external fun jFinalize(id: Long): Unit
}

private external fun jGettypebyid(id: Long): String

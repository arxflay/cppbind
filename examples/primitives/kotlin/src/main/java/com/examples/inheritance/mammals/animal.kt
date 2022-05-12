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

package com.examples.inheritance.mammals

import com.examples.cppbind.alias.*
import com.examples.cppbind.exceptionUtils.*
import com.examples.cppbind.exception_helpers.*
import com.examples.inheritance.AquaticAnimal


/**
 * Class to check generated imports for descendants list for kotlin in case of nested types (also for interface types)
 */
interface IMammals : AutoCloseable {
    val id: Long
    fun keepCppBindReference(ref: Any)
    
    
    open class Dolphin
    internal constructor(obj: CppBindObject) : AquaticAnimal(obj) {
        companion object {
            
            const val cppbindCxxTypeName: String = "cppbind::example::Mammals::Dolphin"
        }
        
    }
}



open class MammalsImpl
internal constructor(obj : CppBindObject) : IMammals {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        const val cppbindCxxTypeName: String = "cppbind::example::Mammals"
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
    private external fun jFinalize(id: Long): Unit
}

private external fun jGettypebyid(id: Long): String

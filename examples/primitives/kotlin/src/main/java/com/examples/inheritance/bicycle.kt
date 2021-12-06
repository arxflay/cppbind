/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 12/06/2021-12:27.
 * Please do not change it manually.
 */

package com.examples.inheritance

import com.examples.iegen.alias.*
import com.examples.iegen.exceptionUtils.*
import com.examples.iegen.exception_helpers.*

open class Bicycle
internal constructor(_id: Long) : Vehicle(_id) {
    companion object {
        
        protected fun construct_helper(numberOfSeats: Int): Long {
            val id = jConstructor(numberOfSeats)
            return id
        }

        @JvmStatic
        private external fun jConstructor(numberOfSeats: Int): Long
    }
    
    
    constructor(numberOfSeats: Int): this(construct_helper(numberOfSeats)) {
    }
    
    open override fun type(): String {
        val result = jType(id)
        
        return result
    }

    ///// External wrapper functions ////////////
    private external fun jType(id: Long): String
}
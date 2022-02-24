/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 02/10/2022-13:12.
 * Please do not change it manually.
 */

package com.examples.enums

import com.examples.iegen.alias.*
import com.examples.iegen.exceptionUtils.*
import com.examples.iegen.exception_helpers.*

/**
 * Color Enum.
 */
enum class Color(val value: Int) {
    /**
     * Red = 1
     */
    Red(1),
    /**
     * Green = 2
     */
    Green(2),
    /**
     * Blue = 20
     */
    Blue(20);

    companion object {
        private val values = values()
        fun getByValue(value: Int) = values.firstOrNull { it.value == value }
    }

    override fun toString(): String {
        return this.value.toString()
    }
}

enum class ColorShade(val value: Int) {
    /**
     * Light = 1
     */
    ShadeLight(1),
    /**
     * Dark = 2
     */
    ShadeDark(2),
    /**
     * SemiLight = 3
     */
    ShadeSemiLight(3),
    /**
     * SemiDark = 4
     */
    ShadeSemiDark(4);

    companion object {
        private val values = values()
        fun getByValue(value: Int) = values.firstOrNull { it.value == value }
    }
}

private external fun jGettypebyid(id: Long): String

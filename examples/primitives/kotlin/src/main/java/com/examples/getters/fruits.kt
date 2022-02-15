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

package com.examples.getters

import com.examples.iegen.alias.*
import com.examples.iegen.exceptionUtils.*
import com.examples.iegen.exception_helpers.*

enum class FruitType(val value: Int) {
    Apple(1),
    Pineapple(2);

    companion object {
        private val values = values()
        fun getByValue(value: Int) = values.firstOrNull { it.value == value }
    }
}

open class Fruit
internal constructor(obj: IEGenObject) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
    }
    
    protected var objId = obj.id
    protected val owner = obj.owner
    
    open val id: Long
        get() {
            if (objId == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return objId
        }
    
    open val type: FruitType
        get() {
            val result = jType(id)
            val jdktokotlinresult_optional = FruitType.getByValue(result)
            if (jdktokotlinresult_optional == null) {
                ExceptionHandler.handleUncaughtException("Internal error: unresolved reference to non existing field of FruitType enum.")
            }
            val jdktokotlinresult = jdktokotlinresult_optional!!
            return jdktokotlinresult
        }

    override fun close() {
        if (owner && objId != 0L) {
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
    private external fun jType(id: Long): Int
    private external fun jFinalize(id: Long): Unit
}

open class Apple
internal constructor(obj: IEGenObject) : Fruit(obj) {
    companion object {
        
        protected fun construct_helper(): Long {
            val id = jConstructor()
            return id
        }

        @JvmStatic
        private external fun jConstructor(): Long
    }
    
    
    constructor(): this(IEGenObject(construct_helper(), true)) {
    }
    
    open override val type: FruitType
        get() {
            val result = jType(id)
            val jdktokotlinresult_optional = FruitType.getByValue(result)
            if (jdktokotlinresult_optional == null) {
                ExceptionHandler.handleUncaughtException("Internal error: unresolved reference to non existing field of FruitType enum.")
            }
            val jdktokotlinresult = jdktokotlinresult_optional!!
            return jdktokotlinresult
        }

    ///// External wrapper functions ////////////
    private external fun jType(id: Long): Int
}

open class Pineapple
internal constructor(obj: IEGenObject) : Fruit(obj) {
    companion object {
        
        protected fun construct_helper(): Long {
            val id = jConstructor()
            return id
        }

        @JvmStatic
        private external fun jConstructor(): Long
    }
    
    
    constructor(): this(IEGenObject(construct_helper(), true)) {
    }
    
    open override val type: FruitType
        get() {
            val result = jType(id)
            val jdktokotlinresult_optional = FruitType.getByValue(result)
            if (jdktokotlinresult_optional == null) {
                ExceptionHandler.handleUncaughtException("Internal error: unresolved reference to non existing field of FruitType enum.")
            }
            val jdktokotlinresult = jdktokotlinresult_optional!!
            return jdktokotlinresult
        }

    ///// External wrapper functions ////////////
    private external fun jType(id: Long): Int
}

/**
 * An example class containing template getters.
 */
open class Fruits
internal constructor(obj: IEGenObject) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        protected fun construct_helper(fruits: List<Fruit>): Long {
            val kotlintojdkfruits = LongArray(fruits.size) 
            var index_fruits = 0
            for (value_fruits in fruits) {
                val kotlintojdkvalue_fruits = value_fruits.id
                kotlintojdkfruits[index_fruits] = kotlintojdkvalue_fruits
                ++index_fruits
            }
            val id = jConstructor(kotlintojdkfruits)
            return id
        }

        @JvmStatic
        private external fun jConstructor(fruits: LongArray): Long
    }
    
    protected var objId = obj.id
    protected val owner = obj.owner
    
    open val id: Long
        get() {
            if (objId == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return objId
        }
    
    constructor(fruits: List<Fruit>): this(IEGenObject(construct_helper(fruits), true)) {
    }
    
    open val apples: List<Apple>
        get() {
            val result = jFruitsApple(id)
            val jdktokotlinresult: MutableList<Apple> = mutableListOf()
            for (value_result in result) {
                val jdktokotlinvalue_result = Apple(IEGenObject(value_result))
                jdktokotlinresult.add(jdktokotlinvalue_result)
            }
            return jdktokotlinresult
        }

    open val pineapple: List<Pineapple>
        get() {
            val result = jFruitsPineapple(id)
            val jdktokotlinresult: MutableList<Pineapple> = mutableListOf()
            for (value_result in result) {
                val jdktokotlinvalue_result = Pineapple(IEGenObject(value_result))
                jdktokotlinresult.add(jdktokotlinvalue_result)
            }
            return jdktokotlinresult
        }

    open var applesWithPineapples: List<Fruit>
        get() {
            val result = jAllfruitsApplePineapple(id)
            val jdktokotlinresult: MutableList<Fruit> = mutableListOf()
            for (value_result in result) {
                val jdktokotlinvalue_result = Fruit(IEGenObject(value_result))
                jdktokotlinresult.add(jdktokotlinvalue_result)
            }
            return jdktokotlinresult
        }
        set(value) {
            val kotlintojdkvalue = LongArray(value.size) 
            var index_value = 0
            for (value_value in value) {
                val kotlintojdkvalue_value = value_value.id
                kotlintojdkvalue[index_value] = kotlintojdkvalue_value
                ++index_value
            }
            jSetallfruitsApplePineapple(id, kotlintojdkvalue)
        }

    override fun close() {
        if (owner && objId != 0L) {
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
    private external fun jFruitsApple(id: Long): LongArray
    private external fun jFruitsPineapple(id: Long): LongArray
    private external fun jAllfruitsApplePineapple(id: Long): LongArray
    private external fun jSetallfruitsApplePineapple(id: Long, value: LongArray): Unit
    private external fun jFinalize(id: Long): Unit
}

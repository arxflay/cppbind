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

package com.examples.inheritance

import com.examples.iegen.alias.*
import com.examples.iegen.exceptionUtils.*
import com.examples.iegen.exception_helpers.*


interface IAnimal : AutoCloseable {
    val id: Long
    
    
    open fun typeName(): String {
        val result = IAnimalHelper.jTypename(id)
        
        return result
    }
}


class IAnimalHelper {
    companion object {
        @JvmStatic
        external fun jTypename(id: Long): String
    }
}


open class AnimalImpl
internal constructor(obj : IEGenObject) : IAnimal {
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

    protected var objId = obj.id
    protected val owner = obj.owner
    override val id: Long
        get() {
            if (objId == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return objId
        }
    
    constructor(): this(IEGenObject(construct_helper(), true)) {
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
    private external fun jFinalize(id: Long): Unit
}


interface ITerrestrialAnimal : IAnimal {
    
    
    open override fun typeName(): String {
        val result = ITerrestrialAnimalHelper.jTypename(id)
        
        return result
    }
}


class ITerrestrialAnimalHelper {
    companion object {
        @JvmStatic
        external fun jTypename(id: Long): String
    }
}


open class TerrestrialAnimalImpl
internal constructor(obj : IEGenObject) : ITerrestrialAnimal {
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

    protected var objId = obj.id
    protected val owner = obj.owner
    override val id: Long
        get() {
            if (objId == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return objId
        }
    
    constructor(): this(IEGenObject(construct_helper(), true)) {
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
    private external fun jFinalize(id: Long): Unit
}

open class AquaticAnimal
internal constructor(obj: IEGenObject) : IAnimal, AutoCloseable {
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
    
    protected var objId = obj.id
    protected val owner = obj.owner
    override val id: Long
        get() {
            if (objId == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return objId
        }
    
    constructor(): this(IEGenObject(construct_helper(), true)) {
    }
    
    open override fun typeName(): String {
        val result = jTypename(id)
        
        return result
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
    private external fun jTypename(id: Long): String
    private external fun jFinalize(id: Long): Unit
}

open class Frog
internal constructor(obj: IEGenObject) : ITerrestrialAnimal, AquaticAnimal(obj) {
    companion object {
        
        protected fun construct_helper(): Long {
            val id = jConstructor()
            return id
        }

        @JvmStatic
        private external fun jConstructor(): Long
    }
    
    override val id: Long
        get() {
            if (objId == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return objId
        }
    
    constructor(): this(IEGenObject(construct_helper(), true)) {
    }
    
    open override fun typeName(): String {
        val result = jTypename(id)
        
        return result
    }

    ///// External wrapper functions ////////////
    private external fun jTypename(id: Long): String
}

/**
 * Class to help checking the empty case of descendants list
 */
open class LittleFrog
internal constructor(obj: IEGenObject) : Frog(obj) {
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
}

open class AnimalUsage
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

        protected fun construct_helper(little_frog: LittleFrog): Long {
            val kotlintojdklittle_frog = little_frog.id
            val id = jConstructor_1(kotlintojdklittle_frog)
            return id
        }

        @JvmStatic
        private external fun jConstructor_1(little_frog: Long): Long

        fun getAnimalTypeName(animal: IAnimal): String {
            val kotlintojdkanimal = animal.id
            val result = jGetanimaltypename(kotlintojdkanimal)
            
            return result
        }
        @JvmStatic
        private external fun jGetanimaltypename(animal: Long): String

        fun getAquaticAnimalTypeName(animal: AquaticAnimal): String {
            val kotlintojdkanimal = animal.id
            val result = jGetaquaticanimaltypename(kotlintojdkanimal)
            
            return result
        }
        @JvmStatic
        private external fun jGetaquaticanimaltypename(animal: Long): String
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
    
    constructor(): this(IEGenObject(construct_helper(), true)) {
    }

    constructor(little_frog: LittleFrog): this(IEGenObject(construct_helper(little_frog), true)) {
    }
    
    fun getAnimal(): IAnimal {
        val result = jGetanimal(id)
        val jdktokotlinresult = AnimalImpl(IEGenObject(result))
        return jdktokotlinresult
    }

    fun getAquaticAnimal(): AquaticAnimal {
        val result = jGetaquaticanimal(id)
        val jdktokotlinresult = AquaticAnimal(IEGenObject(result))
        return jdktokotlinresult
    }

    fun getFrog(): Frog {
        val result = jGetfrog(id)
        val jdktokotlinresult = Frog(IEGenObject(result))
        return jdktokotlinresult
    }

    /**
     * Method to check that any downcast is not done when descendants=[]
     */
    fun getLittleFrog(): Frog {
        val result = jGetlittlefrog(id)
        val jdktokotlinresult = Frog(IEGenObject(result))
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
    private external fun jGetanimal(id: Long): Long
    private external fun jGetaquaticanimal(id: Long): Long
    private external fun jGetfrog(id: Long): Long
    private external fun jGetlittlefrog(id: Long): Long
    private external fun jFinalize(id: Long): Unit
}

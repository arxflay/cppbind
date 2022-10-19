/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 10/18/2022-09:00.
 * Please do not change it manually.
 */

package com.examples.inheritance

import com.examples.cppbind.*
import com.examples.cppbind.exceptions.*
import com.examples.inheritance.mammals.IMammals


interface IAnimal : AutoCloseable {
    /**
     * An internal getter to get the id of an object.
     * It is intended to be used by the generated code.
     */
    val cppbindObjId: Long
    /**
     * An internal method to bind the lifetimes of the current and another object.
     * It is intended to be used by the generated code.
     */
    fun keepCppBindReference(ref: Any)
    
    
    open fun typeName(): String {
        val result = IAnimalHelper.jTypename(cppbindObjId)
        
        return result
    }

    fun isEqualTo(a: IAnimal): Boolean {
        val kotlintojdka = a.cppbindObjId
        val result = IAnimalHelper.jIsequalto(cppbindObjId, kotlintojdka, a)
        
        return result
    }

    companion object {
        /**
         * An internal method to create a Kotlin object from a C++ object.
         * It is intended to be used by the generated code.
         */
        public fun cppbindConstructObject(id: Long, owner: Boolean = false): IAnimal {
            val idType = jGettypebyid(id)
            val obj : IAnimal
            when (idType) {
                LittleFrog.cppbindCxxTypeName -> obj = LittleFrog(CppBindObject(id, owner))
                Frog.cppbindCxxTypeName -> obj = Frog(CppBindObject(id, owner))
                IMammals.Dolphin.cppbindCxxTypeName -> obj = IMammals.Dolphin(CppBindObject(id, owner))
                AquaticAnimal.cppbindCxxTypeName -> obj = AquaticAnimal(CppBindObject(id, owner))
                TerrestrialAnimalImpl.cppbindCxxTypeName -> obj = TerrestrialAnimalImpl(CppBindObject(id, owner))
                else -> obj = AnimalImpl(CppBindObject(id, owner))
            }
            return obj
        }
    }
}


class IAnimalHelper {
    companion object {
        @JvmStatic
        external fun jTypename(id: Long): String
        @JvmStatic
        external fun jIsequalto(id: Long, a: Long, vararg extraObjs: Any?): Boolean
    }
}


open class AnimalImpl
internal constructor(obj : CppBindObject) : IAnimal {
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
        /**
         * An internal property to keep an information about the underlying C++ object type.
         * It is intended to be used by the generated code.
         */
        const val cppbindCxxTypeName: String = "cppbind::example::Animal"
    }

    protected var cppbindObj = obj
    private var refs: MutableList<Any> = mutableListOf()

    override fun keepCppBindReference(ref: Any) {
        refs.add(ref)
    }

    override val cppbindObjId: Long
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
        other as AnimalImpl
        return cxxId == other.cxxId
    }

    /**
     * CppBind generated toString method returning underlying C++ object type and id.
     */
    override fun toString(): String {
        return "<0x$cxxId: $cxxTypeName>"
    }

    ///// External wrapper functions ////////////
    private external fun jFinalize(id: Long): Unit
    private external fun jGetcxxid(id: Long): Long
}


interface ITerrestrialAnimal : IAnimal {
    
    
    open override fun typeName(): String {
        val result = ITerrestrialAnimalHelper.jTypename(cppbindObjId)
        
        return result
    }

    companion object {
        /**
         * An internal method to create a Kotlin object from a C++ object.
         * It is intended to be used by the generated code.
         */
        public fun cppbindConstructObject(id: Long, owner: Boolean = false): ITerrestrialAnimal {
            val idType = jGettypebyid(id)
            val obj : ITerrestrialAnimal
            when (idType) {
                LittleFrog.cppbindCxxTypeName -> obj = LittleFrog(CppBindObject(id, owner))
                Frog.cppbindCxxTypeName -> obj = Frog(CppBindObject(id, owner))
                else -> obj = TerrestrialAnimalImpl(CppBindObject(id, owner))
            }
            return obj
        }
    }
}


class ITerrestrialAnimalHelper {
    companion object {
        @JvmStatic
        external fun jTypename(id: Long): String
    }
}


open class TerrestrialAnimalImpl
internal constructor(obj : CppBindObject) : ITerrestrialAnimal {
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
        /**
         * An internal property to keep an information about the underlying C++ object type.
         * It is intended to be used by the generated code.
         */
        const val cppbindCxxTypeName: String = "cppbind::example::TerrestrialAnimal"
    }

    protected var cppbindObj = obj
    private var refs: MutableList<Any> = mutableListOf()

    override fun keepCppBindReference(ref: Any) {
        refs.add(ref)
    }

    override val cppbindObjId: Long
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
        other as TerrestrialAnimalImpl
        return cxxId == other.cxxId
    }

    /**
     * CppBind generated toString method returning underlying C++ object type and id.
     */
    override fun toString(): String {
        return "<0x$cxxId: $cxxTypeName>"
    }

    ///// External wrapper functions ////////////
    private external fun jFinalize(id: Long): Unit
    private external fun jGetcxxid(id: Long): Long
}

open class AquaticAnimal
internal constructor(obj: CppBindObject) : IAnimal, AutoCloseable {
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
        /**
         * An internal property to keep an information about the underlying C++ object type.
         * It is intended to be used by the generated code.
         */
        const val cppbindCxxTypeName: String = "cppbind::example::AquaticAnimal"

        /**
         * An internal method to create a Kotlin object from a C++ object.
         * It is intended to be used by the generated code.
         */
        public fun cppbindConstructObject(id: Long, owner: Boolean = false): AquaticAnimal {
            val idType = jGettypebyid(id)
            val obj : AquaticAnimal
            when (idType) {
                LittleFrog.cppbindCxxTypeName -> obj = LittleFrog(CppBindObject(id, owner))
                Frog.cppbindCxxTypeName -> obj = Frog(CppBindObject(id, owner))
                IMammals.Dolphin.cppbindCxxTypeName -> obj = IMammals.Dolphin(CppBindObject(id, owner))
                else -> obj = AquaticAnimal(CppBindObject(id, owner))
            }
            return obj
        }
    }
    
    protected var cppbindObj = obj
    private var refs: MutableList<Any> = mutableListOf()

    /**
     * An internal method to bind the lifetimes of the current and another object.
     * It is intended to be used by the generated code.
     */
    override fun keepCppBindReference(ref: Any) {
        refs.add(ref)
    }
    /**
     * An internal getter to get the id of an object.
     * It is intended to be used by the generated code.
     */
    override val cppbindObjId: Long
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
    
    open override fun typeName(): String {
        val result = jTypename(cppbindObjId)
        
        return result
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
        other as AquaticAnimal
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
    private external fun jTypename(id: Long): String
    private external fun jFinalize(id: Long): Unit
    private external fun jGetcxxid(id: Long): Long
}

open class Frog
internal constructor(obj: CppBindObject) : ITerrestrialAnimal, AquaticAnimal(obj) {
    companion object {
        
        protected fun constructHelper(): Long {
            val id = jConstructor()
            return id
        }

        @JvmStatic
        private external fun jConstructor(): Long
        /**
         * An internal property to keep an information about the underlying C++ object type.
         * It is intended to be used by the generated code.
         */
        const val cppbindCxxTypeName: String = "cppbind::example::Frog"
    }
    
    /**
     * An internal getter to get the id of an object.
     * It is intended to be used by the generated code.
     */
    override val cppbindObjId: Long
        get() {
            if (cppbindObj.id == 0L) {
                throw RuntimeException("Object is not allocated")
            }
            return cppbindObj.id
        }
    
    constructor(): this(CppBindObject(constructHelper(), true)) {
    }
    
    open override fun typeName(): String {
        val result = jTypename(cppbindObjId)
        
        return result
    }

    ///// External wrapper functions ////////////
    private external fun jTypename(id: Long): String
}

/**
 * Class to help checking the empty case of descendants list
 */
open class LittleFrog
internal constructor(obj: CppBindObject) : Frog(obj) {
    companion object {
        
        protected fun constructHelper(): Long {
            val id = jConstructor()
            return id
        }

        @JvmStatic
        private external fun jConstructor(): Long
        /**
         * An internal property to keep an information about the underlying C++ object type.
         * It is intended to be used by the generated code.
         */
        const val cppbindCxxTypeName: String = "cppbind::example::LittleFrog"
    }
    
    
    constructor(): this(CppBindObject(constructHelper(), true)) {
    }
}

open class AnimalUsage
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

        protected fun constructHelper(little_frog: LittleFrog): Long {
            val kotlintojdklittle_frog = little_frog.cppbindObjId
            val id = jConstructor1(kotlintojdklittle_frog, little_frog)
            return id
        }

        @JvmStatic
        private external fun jConstructor1(little_frog: Long, vararg extraObjs: Any?): Long

        fun getAnimalTypeName(animal: IAnimal): String {
            val kotlintojdkanimal = animal.cppbindObjId
            val result = jGetanimaltypename(kotlintojdkanimal, animal)
            
            return result
        }
        @JvmStatic
        private external fun jGetanimaltypename(animal: Long, vararg extraObjs: Any?): String

        fun getAquaticAnimalTypeName(animal: AquaticAnimal): String {
            val kotlintojdkanimal = animal.cppbindObjId
            val result = jGetaquaticanimaltypename(kotlintojdkanimal, animal)
            
            return result
        }
        @JvmStatic
        private external fun jGetaquaticanimaltypename(animal: Long, vararg extraObjs: Any?): String
        /**
         * An internal property to keep an information about the underlying C++ object type.
         * It is intended to be used by the generated code.
         */
        const val cppbindCxxTypeName: String = "cppbind::example::AnimalUsage"
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

    constructor(little_frog: LittleFrog): this(CppBindObject(constructHelper(little_frog), true)) {
    }
    
    fun getAnimal(): IAnimal {
        val result = jGetanimal(cppbindObjId)
        
        val jdktokotlinresult : IAnimal
        jdktokotlinresult = IAnimal.cppbindConstructObject(result)
        return jdktokotlinresult
    }

    fun getAquaticAnimal(): AquaticAnimal {
        val result = jGetaquaticanimal(cppbindObjId)
        
        val jdktokotlinresult : AquaticAnimal
        jdktokotlinresult = AquaticAnimal.cppbindConstructObject(result)
        return jdktokotlinresult
    }

    fun getFrog(): Frog {
        val result = jGetfrog(cppbindObjId)
        val jdktokotlinresult = Frog(CppBindObject(result))
        return jdktokotlinresult
    }

    /**
     * Method to check that any downcast is not done when descendants=[]
     */
    fun getLittleFrog(): Frog {
        val result = jGetlittlefrog(cppbindObjId)
        val jdktokotlinresult = Frog(CppBindObject(result))
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
        other as AnimalUsage
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
    private external fun jGetanimal(id: Long): Long
    private external fun jGetaquaticanimal(id: Long): Long
    private external fun jGetfrog(id: Long): Long
    private external fun jGetlittlefrog(id: Long): Long
    private external fun jFinalize(id: Long): Unit
    private external fun jGetcxxid(id: Long): Long
}

private external fun jGettypebyid(id: Long): String

/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 08/11/2022-07:03.
 * Please do not change it manually.
 */

package com.examples.containers

import com.examples.cppbind.*
import com.examples.cppbind.exception_helpers.*

/**
 * comments
 * 
 */
open class PairExamples
internal constructor(obj: CppBindObject) : AutoCloseable {
    companion object {
        init {
            System.loadLibrary("wrapper_jni")
        }
        
        /**
         * comments
         * 
         */
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
        const val cppbindCxxTypeName: String = "cppbind::example::PairExamples"
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
    
    /**
     * comments
     * 
     */
    constructor(): this(CppBindObject(constructHelper(), true)) {
    }
    
    var complexPairObj: Pair<MapItem, List<MapItem>>
        get() {
            val result = jComplexpairobj(cppbindObjId)
            val firstResult = result.first
            val secondResult = result.second
            val jdktokotlinfirstResult = MapItem(CppBindObject(firstResult, true))
            val jdktokotlinsecondResult: MutableList<MapItem> = mutableListOf()
                for (valueSecondresult in secondResult) {
                    val jdktokotlinvalueSecondresult = MapItem(CppBindObject(valueSecondresult, true))
                    jdktokotlinsecondResult.add(jdktokotlinvalueSecondresult)
                }
            val jdktokotlinresult = Pair<MapItem, List<MapItem>>(jdktokotlinfirstResult, jdktokotlinsecondResult)
            return jdktokotlinresult
        }
        set(value) {
            val firstValue = value.first
            val secondValue = value.second
            val kotlintojdkfirstValue = firstValue.cppbindObjId
            val kotlintojdksecondValue = LongArray(secondValue.size) 
                var indexSecondvalue = 0
                for (valueSecondvalue in secondValue) {
                    val kotlintojdkvalueSecondvalue = valueSecondvalue.cppbindObjId
                    kotlintojdksecondValue[indexSecondvalue] = kotlintojdkvalueSecondvalue
                    ++indexSecondvalue
                }
            val kotlintojdkvalue = Pair<Long, LongArray>(kotlintojdkfirstValue, kotlintojdksecondValue)
            jSetcomplexpairobj(cppbindObjId, kotlintojdkvalue, value)
        }
    
    /**
     * comments
     * 
     */
    fun sumIntPairs(p1: Pair<Int, Int>, p2: Pair<Int, Int>): Pair<Int, Int> {
        val firstP1 = p1.first
        val secondP1 = p1.second


        val kotlintojdkp1 = Pair<Int, Int>(firstP1, secondP1)
        val firstP2 = p2.first
        val secondP2 = p2.second


        val kotlintojdkp2 = Pair<Int, Int>(firstP2, secondP2)
        val result = jSumintpairs(cppbindObjId, kotlintojdkp1, kotlintojdkp2, p1, p2)
        val firstResult = result.first
        val secondResult = result.second


        val jdktokotlinresult = Pair<Int, Int>(firstResult, secondResult)
        return jdktokotlinresult
    }

    /**
     * comments
     * 
     */
    fun setNestedPair(p: Pair<Pair<String, String>, Pair<String, String>>): Unit {
        val firstP = p.first
        val secondP = p.second
        val firstFirstp = firstP.first
            val secondFirstp = firstP.second


            val kotlintojdkfirstP = Pair<String, String>(firstFirstp, secondFirstp)
        val firstSecondp = secondP.first
            val secondSecondp = secondP.second


            val kotlintojdksecondP = Pair<String, String>(firstSecondp, secondSecondp)
        val kotlintojdkp = Pair<Pair<String, String>, Pair<String, String>>(kotlintojdkfirstP, kotlintojdksecondP)
        val result = jSetnestedpair(cppbindObjId, kotlintojdkp, p)
        
        return result
    }

    /**
     * comments
     * 
     */
    fun getNestedPair(): Pair<Pair<String, String>, Pair<String, String>> {
        val result = jGetnestedpair(cppbindObjId)
        val firstResult = result.first
        val secondResult = result.second
        val firstFirstresult = firstResult.first
            val secondFirstresult = firstResult.second


            val jdktokotlinfirstResult = Pair<String, String>(firstFirstresult, secondFirstresult)
        val firstSecondresult = secondResult.first
            val secondSecondresult = secondResult.second


            val jdktokotlinsecondResult = Pair<String, String>(firstSecondresult, secondSecondresult)
        val jdktokotlinresult = Pair<Pair<String, String>, Pair<String, String>>(jdktokotlinfirstResult, jdktokotlinsecondResult)
        return jdktokotlinresult
    }

    /**
     * comments
     * 
     */
    fun getStringPair(): Pair<String, String> {
        val result = jGetstringpair(cppbindObjId)
        val firstResult = result.first
        val secondResult = result.second


        val jdktokotlinresult = Pair<String, String>(firstResult, secondResult)
        return jdktokotlinresult
    }

    fun setNestedVectorOfPairs(v: List<List<Pair<Int, String>>>): Unit {
        val kotlintojdkv = ObjectArray(v.size) { Any() }
        var indexV = 0
        for (valueV in v) {
            val kotlintojdkvalueV = ObjectArray(valueV.size) { Any() }
            var indexValuev = 0
            for (valueValuev in valueV) {
                val firstValuevaluev = valueValuev.first
                val secondValuevaluev = valueValuev.second


                val kotlintojdkvalueValuev = Pair<Int, String>(firstValuevaluev, secondValuevaluev)
                kotlintojdkvalueV[indexValuev] = kotlintojdkvalueValuev
                ++indexValuev
            }
            kotlintojdkv[indexV] = kotlintojdkvalueV
            ++indexV
        }
        val result = jSetnestedvectorofpairs(cppbindObjId, kotlintojdkv, v)
        
        return result
    }

    fun getNestedVectorOfPairs(): List<List<Pair<Int, String>>> {
        val result = jGetnestedvectorofpairs(cppbindObjId)
        val jdktokotlinresult: MutableList<List<Pair<Int, String>>> = mutableListOf()
        for (valueResult in result) {
            @Suppress("UNCHECKED_CAST") val actualValueresult = valueResult as ObjectArray
            val jdktokotlinactualValueresult: MutableList<Pair<Int, String>> = mutableListOf()
            for (valueActualvalueresult in actualValueresult) {
                @Suppress("UNCHECKED_CAST") val actualValueactualvalueresult = valueActualvalueresult as Pair<Int, String>
                val firstActualvalueactualvalueresult = actualValueactualvalueresult.first
                val secondActualvalueactualvalueresult = actualValueactualvalueresult.second


                val jdktokotlinactualValueactualvalueresult = Pair<Int, String>(firstActualvalueactualvalueresult, secondActualvalueactualvalueresult)
                jdktokotlinactualValueresult.add(jdktokotlinactualValueactualvalueresult)
            }
            jdktokotlinresult.add(jdktokotlinactualValueresult)
        }
        return jdktokotlinresult
    }

    fun sumPairItems(p: Pair<Long, Long>): Long {
        val firstP = p.first
        val secondP = p.second


        val kotlintojdkp = Pair<Long, Long>(firstP, secondP)
        val result = jSumpairitems(cppbindObjId, kotlintojdkp, p)
        
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
        other as PairExamples
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
    private external fun jSumintpairs(id: Long, p1: Pair<Int, Int>, p2: Pair<Int, Int>, vararg extraObjs: Any?): Pair<Int, Int>
    private external fun jSetnestedpair(id: Long, p: Pair<Pair<String, String>, Pair<String, String>>, vararg extraObjs: Any?): Unit
    private external fun jGetnestedpair(id: Long): Pair<Pair<String, String>, Pair<String, String>>
    private external fun jGetstringpair(id: Long): Pair<String, String>
    private external fun jSetnestedvectorofpairs(id: Long, v: ObjectArray, vararg extraObjs: Any?): Unit
    private external fun jGetnestedvectorofpairs(id: Long): ObjectArray
    private external fun jComplexpairobj(id: Long): Pair<Long, LongArray>
    private external fun jSetcomplexpairobj(id: Long, value: Pair<Long, LongArray>, valueObj: Any?): Unit
    private external fun jSumpairitems(id: Long, p: Pair<Long, Long>, vararg extraObjs: Any?): Long
    private external fun jFinalize(id: Long): Unit
    private external fun jGetcxxid(id: Long): Long
}

private external fun jGettypebyid(id: Long): String

package com.examples.nullables

import com.examples.nullables.Utils
import com.examples.nullables.NumberInt
import com.examples.nullables.NumberDouble

fun use() {
// [nullables-usage]
val n1 = NumberInt(1)
val n2 = NumberInt(2)

var res1 = Utils.max(n1, n2)
assert(res1?.value == n2.value)

res1 = Utils.max(null, null)
assert(res1 == null)

val d1 = NumberDouble(1.0)
val d2 = NumberDouble(2.0)

var res2 = Utils.max(d1, d2)
assert(res2?.value == d2.value)

res2 = Utils.max(null, d2)
assert(res2 == null)

// [nullables-usage]
}

class NullablesApp {

    companion object {
        @JvmStatic
        fun main(args: Array<String>) {
            use()
        }

    }
}
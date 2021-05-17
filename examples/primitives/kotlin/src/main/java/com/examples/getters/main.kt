package com.examples.getters

import com.examples.getters.*

class GettersApp {

    companion object {
        @JvmStatic
        fun main(args: Array<String>) {

            // [number-usage]
            val intNum = NumberInt(5)
            val doubleNum = NumberDouble(1.0)
            assert(intNum.num == 5)
            intNum.num = 2
            assert(intNum.num == 2)
            assert(doubleNum.num == 1.0)
            // [number-usage]

            // [person-usage]
            val person = Person("John Doe", "john.doe@mail.com", 30)
            assert(person.fullName == "John Doe")
            assert(person.age == 30)
            assert(person.email == "john.doe@mail.com")
            person.age = 25
            assert(person.age == 25)
            person.fullName = "Jane Doe"
            assert(person.fullName == "Jane Doe")
            // [person-usage]

       }

    }
}

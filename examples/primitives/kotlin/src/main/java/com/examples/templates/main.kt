package com.examples.templates

import com.examples.templates.*
import com.examples.simple.*

fun use() {
// [stack-examples]
var stackPrj = StackProject()
assert(stackPrj.empty())
val prj = Project("My Project")
stackPrj.push(prj)
assert(!stackPrj.empty())
assert(stackPrj.top().title == prj.title)
stackPrj.pop()
assert(stackPrj.empty())
// [stack-examples]

// [stack-usage-examples]
stackPrj.push(prj)
var stackUsage = StackUsage()
var res = stackUsage.firstItemOfSpecializedStack(stackPrj)
assert(res.title == prj.title)
assert(res.getObjId() == prj.getObjId())

res = stackUsage.firstItemOfTemplateStack(stackPrj)
assert(res.title == prj.title)
assert(res.getObjId() == prj.getObjId())
// [stack-usage-examples]

// [template-funcs-examples]
val tm = TemplateMethods()
val maxInt = tm.max(2, 5)
assert(maxInt == 5)
val maxString = tm.max("d", "a")
assert(maxString == "d")

val prj1 = Project("My first project")
val prj2 = Project("My second project")
var pairPrjPrj = tm.makePair(prj1, prj2)
assert(pairPrjPrj.first.title == prj1.title)
assert(pairPrjPrj.second.title == prj2.title)

val root1 = Root("/path/to/root/")
var pairRootPrj = tm.makePair(root1, prj1)
assert(pairRootPrj.first.path == root1.path)
assert(pairRootPrj.second.title == prj1.title)

// [template-funcs-examples]

// [addressable-examples]
val path = "/path/to/root/"
val name = "root_name"
val root = Root(path)
val addressableRoot = Addressable_implRoot(root, name)
assert(addressableRoot.absPath() == path + name)
val component = Component(root, name)
assert(component.absPath() == path + name)
// [addressable-examples]

}

class TemplatesApp {

    companion object {
        @JvmStatic
        fun main(args: Array<String>) {
            use()
       }

    }
}

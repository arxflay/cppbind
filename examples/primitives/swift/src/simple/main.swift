import XCTest
import Wrapper

class SimpleTests: XCTestCase {

    func test() throws {
       // [task-usage]
        let task = Task(title: "My Task")
        assert(task.title == "My Task")
        // [task-usage]

        // [project-usage]
        let title = "My Project"
        let prj = Project(title: title)
        assert(prj.title == title)

        let task1 = Task(title: "My Task")
        prj.addTask(task: task1)
        assert(prj.tasks().count == 1)
        assert(prj.tasks()[0].title == task1.title)
        // [project-usage]

        // [root-usage]
        let path = "/path/to/root"
        let root = Root(_path: path)
        assert(root.path == path)
        // [root-usage]

        // test for checking how const& return type is handled by pybind
        let holder = Holder()
        print(holder.task.title)
        holder.task.setTitle(title: "My First Task Edited")
        assert(holder.task.title == "My First Task Edited")

    }

}

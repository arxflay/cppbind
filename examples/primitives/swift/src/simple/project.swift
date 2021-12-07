/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 12/07/2021-12:32.
 * Please do not change it manually.
 */

import CWrapper
import Foundation

/**
 * Class holding project information.
 */
public class Project {

  public let cself: UnsafeMutableRawPointer
  public let owner: Bool

  // internal main initializer
  internal required init(_ _cself: UnsafeMutableRawPointer, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
  }

  deinit {
    if owner {
      release_Project(cself)
    }
  }

  /**
   * Project constructor.
   */
  public convenience init(title: String) {
    let swiftToScTitle = strdup(title)!
    var err = ErrorObj()
    self.init(create_Project(swiftToScTitle, &err), true)
    let err_type = Int(err.err_type)
    if (err_type != 0) {
      switch(err_type) {
        case(1):
          let exc_obj = StdException(err.err_ptr, true)
          ExceptionHandler.handleUncaughtException(exc_obj.what())
        default:
          ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
  }

  /**
   * Get project´s title.
   */
  public var title: String {
    get {
      let result = _prop_get_Project_title(cself)
      let scToSwiftResult = String(cString: result)
      defer {
        result.deallocate()
      }
      return scToSwiftResult
    }
  }

  /**
   * Add a task to project.
   */
  public func addTask(task: Task) -> Void {

    let swiftToScTask = task.cself
    var err = ErrorObj()
    _func_Project_addTask(cself, swiftToScTask, &err)
    let errorType = Int(err.err_type)
    if errorType != 0 {
      switch errorType {
      case (1):
        let excObj = StdException(err.err_ptr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
  }

  /**
   * Get project´s tasks.
   */
  public func tasks() -> Array<Task> {

    var err = ErrorObj()
    let result = _func_Project_tasks(cself, &err)
    let errorType = Int(err.err_type)
    if errorType != 0 {
      switch errorType {
      case (1):
        let excObj = StdException(err.err_ptr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    let _resultBuffer = UnsafeBufferPointer<UnsafeMutableRawPointer>(
      start: result.data.assumingMemoryBound(to: UnsafeMutableRawPointer.self),
      count: Int(result.size))
    var scToSwiftResult: [Task] = []
    defer {
      _resultBuffer.deallocate()
    }
    for i in 0..<Int(result.size) {
      let resultValue = _resultBuffer[i]
      let scToSwiftResultvalue = Task(resultValue)
      scToSwiftResult.append(scToSwiftResultvalue)
    }
    return scToSwiftResult
  }

}

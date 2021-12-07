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

public class PairEmployee {

  public let cself: UnsafeMutableRawPointer
  public let owner: Bool

  // internal main initializer
  internal required init(_ _cself: UnsafeMutableRawPointer, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
  }

  deinit {
    if owner {
      release_PairEmployee(cself)
    }
  }

  public convenience init(first: String, second: Employee) {
    let swiftToScFirst = strdup(first)!
    let swiftToScSecond = second.cself
    var err = ErrorObj()
    self.init(create_PairEmployee(swiftToScFirst, swiftToScSecond, &err), true)
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

  public var first: String {
    get {
      let result = _prop_get_PairEmployee_first(cself)
      let scToSwiftResult = String(cString: result)
      defer {
        result.deallocate()
      }
      return scToSwiftResult
    }
  }

  public var second: Employee {
    get {
      let result = _prop_get_PairEmployee_second(cself)
      let scToSwiftResult = Employee(result, true)
      return scToSwiftResult
    }
  }

}

public class PairStudent {

  public let cself: UnsafeMutableRawPointer
  public let owner: Bool

  // internal main initializer
  internal required init(_ _cself: UnsafeMutableRawPointer, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
  }

  deinit {
    if owner {
      release_PairStudent(cself)
    }
  }

  public convenience init(first: String, second: Student) {
    let swiftToScFirst = strdup(first)!
    let swiftToScSecond = second.cself
    var err = ErrorObj()
    self.init(create_PairStudent(swiftToScFirst, swiftToScSecond, &err), true)
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

  public var first: String {
    get {
      let result = _prop_get_PairStudent_first(cself)
      let scToSwiftResult = String(cString: result)
      defer {
        result.deallocate()
      }
      return scToSwiftResult
    }
  }

  public var second: Student {
    get {
      let result = _prop_get_PairStudent_second(cself)
      let scToSwiftResult = Student(result, true)
      return scToSwiftResult
    }
  }

}

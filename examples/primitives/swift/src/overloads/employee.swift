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

public class Employee {

  public let cself: UnsafeMutableRawPointer
  public let owner: Bool

  // internal main initializer
  internal required init(_ _cself: UnsafeMutableRawPointer, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
  }

  deinit {
    if owner {
      release_Employee(cself)
    }
  }

  public convenience init(name: String) {
    let swiftToScName = strdup(name)!
    var err = ErrorObj()
    self.init(create_Employee(swiftToScName, &err), true)
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

  public convenience init(age: Int, email: String = "") {
    let swiftToScAge = CInt(age)
    let swiftToScEmail = strdup(email)!
    var err = ErrorObj()
    self.init(create_Employee_1(swiftToScAge, swiftToScEmail, &err), true)
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

  public var name: String {
    get {
      let result = _prop_get_Employee_name(cself)
      let scToSwiftResult = String(cString: result)
      defer {
        result.deallocate()
      }
      return scToSwiftResult
    }
  }

  public var email: String {
    get {
      let result = _prop_get_Employee_email(cself)
      let scToSwiftResult = String(cString: result)
      defer {
        result.deallocate()
      }
      return scToSwiftResult
    }
  }

  public var age: Int {
    get {
      let result = _prop_get_Employee_age(cself)
      let scToSwiftResult = Int(result)
      return scToSwiftResult
    }
  }

  public func setData(name: String, age: Int, email: String = "") -> Void {

    let swiftToScName = strdup(name)!
    let swiftToScAge = CInt(age)
    let swiftToScEmail = strdup(email)!
    var err = ErrorObj()
    _func_Employee_setData(cself, swiftToScName, swiftToScAge, swiftToScEmail, &err)
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

  public func setData(age: Int) -> Void {

    let swiftToScAge = CInt(age)
    var err = ErrorObj()
    _func_Employee_setData_1(cself, swiftToScAge, &err)
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

}

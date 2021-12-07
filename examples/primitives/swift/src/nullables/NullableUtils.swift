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

public class NumInt {

  public let cself: UnsafeMutableRawPointer
  public let owner: Bool

  // internal main initializer
  internal required init(_ _cself: UnsafeMutableRawPointer, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
  }

  deinit {
    if owner {
      release_NumInt(cself)
    }
  }

  public convenience init(val: Int) {
    let swiftToScVal = CInt(val)
    var err = ErrorObj()
    self.init(create_NumInt(swiftToScVal, &err), true)
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

  public var value: Int {
    get {
      let result = _prop_get_NumInt_value(cself)
      let scToSwiftResult = Int(result)
      return scToSwiftResult
    }
  }

}

public class NumDouble {

  public let cself: UnsafeMutableRawPointer
  public let owner: Bool

  // internal main initializer
  internal required init(_ _cself: UnsafeMutableRawPointer, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
  }

  deinit {
    if owner {
      release_NumDouble(cself)
    }
  }

  public convenience init(val: Double) {
    var err = ErrorObj()
    self.init(create_NumDouble(val, &err), true)
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

  public var value: Double {
    get {
      let result = _prop_get_NumDouble_value(cself)
      return result
    }
  }

}

/**
 * An example with nullable arguments.
 */
public class NullableUtils {

  public let cself: UnsafeMutableRawPointer
  public let owner: Bool

  // internal main initializer
  internal required init(_ _cself: UnsafeMutableRawPointer, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
  }

  deinit {
    if owner {
      release_NullableUtils(cself)
    }
  }

  public convenience init(num: NumDouble?) {
    let swiftToScNum = num?.cself
    var err = ErrorObj()
    self.init(create_NullableUtils(swiftToScNum, &err), true)
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

  public var nullable: NumDouble? {
    get {
      let result = _prop_get_NullableUtils_nullable(cself)
      let scToSwiftResult: NumDouble?
      if let result = result {
        scToSwiftResult = NumDouble(result)
      } else {
        scToSwiftResult = nil
      }
      return scToSwiftResult
    }

    set(value) {
      let swiftToScValue = value?.cself
      _prop_set_NullableUtils_nullable(cself, swiftToScValue)
    }
  }

  public var nonNull: NumDouble {
    get {
      let result = _prop_get_NullableUtils_nonNull(cself)
      let scToSwiftResult = NumDouble(result)
      return scToSwiftResult
    }

    set(value) {
      let swiftToScValue = value.cself
      _prop_set_NullableUtils_nonNull(cself, swiftToScValue)
    }
  }

  public var numDouble: NumDouble? {
    get {
      let result = _prop_get_NullableUtils_numDouble(cself)
      let scToSwiftResult: NumDouble?
      if let result = result {
        scToSwiftResult = NumDouble(result)
      } else {
        scToSwiftResult = nil
      }
      return scToSwiftResult
    }

    set(value) {
      let swiftToScValue = value?.cself
      _prop_set_NullableUtils_numDouble(cself, swiftToScValue)
    }
  }

  public var numInt: NumInt {
    get {
      let result = _prop_get_NullableUtils_numInt(cself)
      let scToSwiftResult = NumInt(result, true)
      return scToSwiftResult
    }

    set(value) {
      let swiftToScValue = value.cself
      _prop_set_NullableUtils_numInt(cself, swiftToScValue)
    }
  }

  public static func max(first: NumDouble?, second: NumDouble) -> NumDouble? {

    let swiftToScFirst = first?.cself
    let swiftToScSecond = second.cself
    var err = ErrorObj()
    let result = _func_NullableUtils_max(swiftToScFirst, swiftToScSecond, &err)
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
    let scToSwiftResult: NumDouble?
    if let result = result {
      scToSwiftResult = NumDouble(result)
    } else {
      scToSwiftResult = nil
    }
    return scToSwiftResult
  }

  public static func max(first: NumInt?, second: NumInt?) -> NumInt? {

    let swiftToScFirst = first?.cself
    let swiftToScSecond = second?.cself
    var err = ErrorObj()
    let result = _func_NullableUtils_max_1(swiftToScFirst, swiftToScSecond, &err)
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
    let scToSwiftResult: NumInt?
        if let result = result {
          scToSwiftResult = NumInt(result, true)
        } else {
          scToSwiftResult = nil
        }
    return scToSwiftResult
  }

  public static func checkNonnullArg(number: NumDouble) -> Void {

    let swiftToScNumber = number.cself
    var err = ErrorObj()
    _func_NullableUtils_checkNonnullArg(swiftToScNumber, &err)
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

  public static func checkNonnullReturn() -> NumDouble {

    var err = ErrorObj()
    let result = _func_NullableUtils_checkNonnullReturn(&err)
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
    let scToSwiftResult = NumDouble(result)
    return scToSwiftResult
  }

}

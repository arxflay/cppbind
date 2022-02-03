/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 02/03/2022-13:55.
 * Please do not change it manually.
 */

import CWrapper
import Foundation

public class NumInt {

  public let cself: IEGenCObject
  public let owner: Bool

  // internal main initializer
  internal required init(_ _cself: IEGenCObject, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
  }

  deinit {
    release_NumInt(cself, owner)
  }

  public convenience init(val: Int) {
    let swifttoscval = CInt(val)
    var err = IEGenCObject()
    self.init(create_NumInt(swifttoscval, &err), true)
    if err.type != nil {
    let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(IEGenCObject(type: err.type, ptr: err.ptr), true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
  }

  public var value: Int {
    get {
      let result = _prop_get_NumInt_value(cself)
      let sctoswiftresult = Int(result)
      return sctoswiftresult
    }
  }

}

public class NumDouble {

  public let cself: IEGenCObject
  public let owner: Bool

  // internal main initializer
  internal required init(_ _cself: IEGenCObject, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
  }

  deinit {
    release_NumDouble(cself, owner)
  }

  public convenience init(val: Double) {
    var err = IEGenCObject()
    self.init(create_NumDouble(val, &err), true)
    if err.type != nil {
    let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(IEGenCObject(type: err.type, ptr: err.ptr), true)
        ExceptionHandler.handleUncaughtException(excObj.what())
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

  public let cself: IEGenCObject
  public let owner: Bool

  // internal main initializer
  internal required init(_ _cself: IEGenCObject, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
  }

  deinit {
    release_NullableUtils(cself, owner)
  }

  public convenience init(num: NumDouble?) {
    let swifttoscnum = num?.cself ?? IEGenCObject(type: nil, ptr: nil)
    var err = IEGenCObject()
    self.init(create_NullableUtils(swifttoscnum, &err), true)
    if err.type != nil {
    let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(IEGenCObject(type: err.type, ptr: err.ptr), true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
  }

  public var nullable: NumDouble? {
    get {
      let result = _prop_get_NullableUtils_nullable(cself)
      var sctoswiftresult: NumDouble? = nil
      if (result.ptr != nil) {
        sctoswiftresult = NumDouble(result)
      }
      return sctoswiftresult
    }

    set(value) {
      let swifttoscvalue = value?.cself ?? IEGenCObject(type: nil, ptr: nil)
      _prop_set_NullableUtils_nullable(cself, swifttoscvalue)
    }
  }

  public var nonNull: NumDouble {
    get {
      let result = _prop_get_NullableUtils_nonNull(cself)
      var sctoswiftresult: NumDouble
      sctoswiftresult = NumDouble(result)
      return sctoswiftresult
    }

    set(value) {
      let swifttoscvalue = value.cself
      _prop_set_NullableUtils_nonNull(cself, swifttoscvalue)
    }
  }

  public var numDouble: NumDouble? {
    get {
      let result = _prop_get_NullableUtils_numDouble(cself)
      var sctoswiftresult: NumDouble? = nil
      if (result.ptr != nil) {
        sctoswiftresult = NumDouble(result)
      }
      return sctoswiftresult
    }

    set(value) {
      let swifttoscvalue = value?.cself ?? IEGenCObject(type: nil, ptr: nil)
      _prop_set_NullableUtils_numDouble(cself, swifttoscvalue)
    }
  }

  public var numInt: NumInt {
    get {
      let result = _prop_get_NullableUtils_numInt(cself)
      var sctoswiftresult: NumInt
      sctoswiftresult = NumInt(result, true)
      return sctoswiftresult
    }

    set(value) {
      let swifttoscvalue = value.cself
      _prop_set_NullableUtils_numInt(cself, swifttoscvalue)
    }
  }

  public static func max(first: NumDouble?, second: NumDouble) -> NumDouble? {

    let swifttoscfirst = first?.cself ?? IEGenCObject(type: nil, ptr: nil)
    let swifttoscsecond = second.cself
    var err = IEGenCObject()
    let result = _func_NullableUtils_max(swifttoscfirst, swifttoscsecond, &err)
    if err.type != nil {
    let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(IEGenCObject(type: err.type, ptr: err.ptr), true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    var sctoswiftresult: NumDouble? = nil
    if (result.ptr != nil) {
      sctoswiftresult = NumDouble(result)
    }
    return sctoswiftresult
  }

  public static func max(first: NumInt?, second: NumInt?) -> NumInt? {

    let swifttoscfirst = first?.cself ?? IEGenCObject(type: nil, ptr: nil)
    let swifttoscsecond = second?.cself ?? IEGenCObject(type: nil, ptr: nil)
    var err = IEGenCObject()
    let result = _func_NullableUtils_max_1(swifttoscfirst, swifttoscsecond, &err)
    if err.type != nil {
    let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(IEGenCObject(type: err.type, ptr: err.ptr), true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    var sctoswiftresult: NumInt? = nil
    if (result.ptr != nil) {
      sctoswiftresult = NumInt(result, true)
    }
    return sctoswiftresult
  }

  public static func checkNonnullArg(number: NumDouble) -> Void {

    let swifttoscnumber = number.cself
    var err = IEGenCObject()
    _func_NullableUtils_checkNonnullArg(swifttoscnumber, &err)
    if err.type != nil {
    let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(IEGenCObject(type: err.type, ptr: err.ptr), true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
  }

  public static func checkNonnullReturn() -> NumDouble {

    var err = IEGenCObject()
    let result = _func_NullableUtils_checkNonnullReturn(&err)
    if err.type != nil {
    let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(IEGenCObject(type: err.type, ptr: err.ptr), true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    var sctoswiftresult: NumDouble
    sctoswiftresult = NumDouble(result)
    return sctoswiftresult
  }

}

/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 02/04/2022-13:51.
 * Please do not change it manually.
 */

import CWrapper
import Foundation

public class Integer {

  public let cself: IEGenCObject
  public let owner: Bool

  // internal main initializer
  internal required init(_ _cself: IEGenCObject, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
  }

  deinit {
    release_Integer(cself, owner)
  }

  public convenience init(n: Int) {
    let swifttoscn = CInt(n)
    var err = IEGenCObject()
    self.init(create_Integer(swifttoscn, &err), true)
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(IEGenCObject(type: err.type, ptr: err.ptr), true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        err.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
  }

  /**
   * value getter
   */
  public var value: Int {
    get {
      let result = _prop_get_Integer_value(cself)
      let sctoswiftresult = Int(result)
      return sctoswiftresult
    }
  }

}

public class MiscExc {

  public let cself: IEGenCObject
  public let owner: Bool

  // internal main initializer
  internal required init(_ _cself: IEGenCObject, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
  }

  deinit {
    release_MiscExc(cself, owner)
  }

  public static func returnInteger(doThrow: Bool) throws -> Integer {

    var err = IEGenCObject()
    let result = _func_MiscExc_returnInteger(doThrow, &err)
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::out_of_range"):
        throw StdOutOfRange(IEGenCObject(type: err.type, ptr: err.ptr), true)
      case ("std::exception"):
        let excObj = StdException(IEGenCObject(type: err.type, ptr: err.ptr), true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        err.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    var sctoswiftresult: Integer
    sctoswiftresult = Integer(result)
    return sctoswiftresult
  }

  public static func raiseErrorByType(errType: String) throws -> Void {

    let swifttoscerrType = strdup(errType)!
    var err = IEGenCObject()
    _func_MiscExc_raiseErrorByType(swifttoscerrType, &err)
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::runtime_error"):
        throw StdRuntimeError(IEGenCObject(type: err.type, ptr: err.ptr), true)
      case ("iegen::example::FileError"):
        throw FileError(IEGenCObject(type: err.type, ptr: err.ptr), true)
      case ("iegen::example::SystemError"):
        throw SystemError(IEGenCObject(type: err.type, ptr: err.ptr), true)
      case ("iegen::example::SimpleChildException"):
        throw SimpleChildException(IEGenCObject(type: err.type, ptr: err.ptr), true)
      case ("iegen::example::SimpleBaseException"):
        throw SimpleBaseException(IEGenCObject(type: err.type, ptr: err.ptr), true)
      case ("std::exception"):
        throw StdException(IEGenCObject(type: err.type, ptr: err.ptr), true)
      default:
        err.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
  }

}

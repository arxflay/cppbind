/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 02/28/2022-12:28.
 * Please do not change it manually.
 */

import CWrapper
import Foundation

public class Integer {

  public let cself: IEGenCObject
  public let owner: Bool
  private var refs: [Any]

  // internal main initializer
  internal required init(_ _cself: IEGenCObject, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
    self.refs = []
  }

  deinit {
    release_Integer(cself, owner)
  }

  public func keepIEGenReference(_ object: Any) {
    self.refs.append(object)
  }

  public convenience init(n: Int) {
    let swifttoscn = CInt(n)
    var err = IEGenCObject()
    self.init(create_Integer(swifttoscn, &err), true)
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(err, true)
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
    var err = IEGenCObject()
    let result = _prop_get_Integer_value(cself, &err)
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(err, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        err.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    let sctoswiftresult = Int(result)
    return sctoswiftresult
  }

}

public class MiscExc {

  public let cself: IEGenCObject
  public let owner: Bool
  private var refs: [Any]

  // internal main initializer
  internal required init(_ _cself: IEGenCObject, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
    self.refs = []
  }

  deinit {
    release_MiscExc(cself, owner)
  }

  public func keepIEGenReference(_ object: Any) {
    self.refs.append(object)
  }

  public static func returnInteger(doThrow: Bool) throws -> Integer {

    var err = IEGenCObject()
    let result = _func_MiscExc_returnInteger(doThrow, &err)
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::out_of_range"):
        throw StdOutOfRange(err, true)
      case ("std::exception"):
        let excObj = StdException(err, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        err.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    var sctoswiftresult: Integer
    sctoswiftresult = Integer(result, true)
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
        throw StdRuntimeError(err, true)
      case ("iegen::example::FileError"):
        throw FileError(err, true)
      case ("iegen::example::SystemError"):
        throw SystemError(err, true)
      case ("iegen::example::SimpleChildException"):
        throw SimpleChildException(err, true)
      case ("iegen::example::SimpleBaseException"):
        throw SimpleBaseException(err, true)
      case ("std::exception"):
        throw StdException(err, true)
      default:
        err.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
  }

}

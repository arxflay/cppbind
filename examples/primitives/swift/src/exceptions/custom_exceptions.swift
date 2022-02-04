/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 02/04/2022-11:27.
 * Please do not change it manually.
 */

import CWrapper
import Foundation

public class SimpleBaseException : Error {

  public let cself: IEGenCObject
  public let owner: Bool

  // internal main initializer
  internal required init(_ _cself: IEGenCObject, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
  }

  deinit {
    release_SimpleBaseException(cself, owner)
  }

  public convenience init(errNum: Int) {
    let swifttoscerrNum = CInt(errNum)
    var err = IEGenCObject()
    self.init(create_SimpleBaseException(swifttoscerrNum, &err), true)
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(IEGenCObject(type: err.type, ptr: err.ptr), true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
        err.type.deallocate()
      }
    }
  }

  public func errNum() -> Int {

    var err = IEGenCObject()
    let result = _func_SimpleBaseException_errNum(cself, &err)
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(IEGenCObject(type: err.type, ptr: err.ptr), true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
        err.type.deallocate()
      }
    }
    let sctoswiftresult = Int(result)
    return sctoswiftresult
  }

}

public class SimpleChildException: SimpleBaseException {
  /**
   * comments
   * 
   */
  public convenience init(errNum: Int) {
    let swifttoscerrNum = CInt(errNum)
    var err = IEGenCObject()
    self.init(create_SimpleChildException(swifttoscerrNum, &err), true)
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(IEGenCObject(type: err.type, ptr: err.ptr), true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
        err.type.deallocate()
      }
    }
  }

  /**
   * comments
   * 
   */
  public override func errNum() -> Int {

    var err = IEGenCObject()
    let result = _func_SimpleChildException_errNum(cself, &err)
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(IEGenCObject(type: err.type, ptr: err.ptr), true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
        err.type.deallocate()
      }
    }
    let sctoswiftresult = Int(result)
    return sctoswiftresult
  }

}

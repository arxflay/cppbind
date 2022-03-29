/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 03/23/2022-10:47.
 * Please do not change it manually.
 */

import CWrapper
import Foundation

public class SystemError: StdException {
  /**
   * comments
   * 
   */
  public convenience init(message: String) {
    let swifttoscmessage = strdup(message)!
    var err = IEGenCObject()
    self.init(create_IegenExample_SystemError(swifttoscmessage, &err), true)
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
   * comments
   * 
   */
  public override func what() -> String {

    var err = IEGenCObject()
    let result = _func_IegenExample_SystemError_what(cself, &err)
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
    let sctoswiftresult = String(cString: result)
    return sctoswiftresult
  }

  override class func iegenDowncast(_ iegenObj: IEGenCObject, _ owner: Bool = false) -> SystemError {
    let typeName = String(cString: iegenObj.type)
    switch(typeName) {
    case("iegen::example::FileError"):
      return FileError(iegenObj, owner)
    default:
      return SystemError(iegenObj, owner)
    }
  }
}

public class FileError: SystemError {
  public convenience init(message: String) {
    let swifttoscmessage = strdup(message)!
    var err = IEGenCObject()
    self.init(create_IegenExample_FileError(swifttoscmessage, &err), true)
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
   * comments
   * 
   */
  public override func what() -> String {

    var err = IEGenCObject()
    let result = _func_IegenExample_FileError_what(cself, &err)
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
    let sctoswiftresult = String(cString: result)
    return sctoswiftresult
  }

}

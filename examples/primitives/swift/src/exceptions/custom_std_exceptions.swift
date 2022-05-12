/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 05/12/2022-10:26.
 * Please do not change it manually.
 */

import CWrapper
import Foundation

public class SystemError: StdException {
  /// internal main initializer
  internal required init(_ _cself: CppBindCObject, _ _owner: Bool = false) {
    super.init(_cself, _owner)
  }

  /// internal dummy initializer to prevent automatic initializer inheritance
  internal init(_cself: CppBindCObject, _self: SystemError) {
    fatalError("A dummy internal initializer should not be called.")
  }

  /**
   * comments
   * 
   */
  public convenience init(message: String) {
    let swifttoscmessage = strdup(message)!
    var cppbindErr = CppBindCObject()
    self.init(create_CppbindExample_SystemError(swifttoscmessage, &cppbindErr), true)
    if cppbindErr.type != nil {
      let errorType = String(cString: cppbindErr.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(cppbindErr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        cppbindErr.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
  }

  /**
   * comments
   * 
   */
  public override func what() -> String {

    var cppbindErr = CppBindCObject()
    let result = _func_CppbindExample_SystemError_what(cself, &cppbindErr)
    if cppbindErr.type != nil {
      let errorType = String(cString: cppbindErr.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(cppbindErr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        cppbindErr.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    let sctoswiftresult = String(cString: result)
    return sctoswiftresult
  }

  override class var cppbindCxxTypeName : String { return "cppbind::example::SystemError" }

  override class func cppbindConstructObject(_ cppbindObj: CppBindCObject, _ owner: Bool = false) -> SystemError {
    let typeName = String(cString: cppbindObj.type)
    switch(typeName) {
    case(FileError.cppbindCxxTypeName):
      return FileError(cppbindObj, owner)
    default:
      return SystemError(cppbindObj, owner)
    }
  }
}

public class FileError: SystemError {
  /// internal main initializer
  internal required init(_ _cself: CppBindCObject, _ _owner: Bool = false) {
    super.init(_cself, _owner)
  }

  public convenience init(message: String) {
    let swifttoscmessage = strdup(message)!
    var cppbindErr = CppBindCObject()
    self.init(create_CppbindExample_FileError(swifttoscmessage, &cppbindErr), true)
    if cppbindErr.type != nil {
      let errorType = String(cString: cppbindErr.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(cppbindErr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        cppbindErr.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
  }

  /**
   * comments
   * 
   */
  public override func what() -> String {

    var cppbindErr = CppBindCObject()
    let result = _func_CppbindExample_FileError_what(cself, &cppbindErr)
    if cppbindErr.type != nil {
      let errorType = String(cString: cppbindErr.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(cppbindErr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        cppbindErr.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    let sctoswiftresult = String(cString: result)
    return sctoswiftresult
  }

  override class var cppbindCxxTypeName : String { return "cppbind::example::FileError" }
}

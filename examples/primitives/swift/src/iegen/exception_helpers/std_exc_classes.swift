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

public class StdException : Error {

  public let cself: IEGenCObject
  public let owner: Bool

  // internal main initializer
  internal required init(_ _cself: IEGenCObject, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
  }

  deinit {
    release_StdException(cself, owner)
  }

  public func what() -> String {

    var err = IEGenCObject()
    let result = _func_StdException_what(cself, &err)
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
    let sctoswiftresult = String(cString: result)
    return sctoswiftresult
  }

}

public class StdLogicError: StdException {
}

public class StdRuntimeError: StdException {
}

public class StdDomainError: StdLogicError {
}

public class StdInvalidArgument: StdLogicError {
}

public class StdLengthError: StdLogicError {
}

public class StdOutOfRange: StdLogicError {
}

public class StdRangeError: StdRuntimeError {
}

public class StdOverflowError: StdRuntimeError {
}

public class StdUnderflowError: StdRuntimeError {
}

public class StdBadAlloc: StdException {
}

public class StdBadCast: StdException {
}

public class StdBadTypeId: StdException {
}

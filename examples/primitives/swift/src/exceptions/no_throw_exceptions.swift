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

public class NoThrowExc {

  public let cself: IEGenCObject
  public let owner: Bool

  // internal main initializer
  internal required init(_ _cself: IEGenCObject, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
  }

  deinit {
    release_NoThrowExc(cself, owner)
  }

  public convenience init(doThrow: Bool = false) {
    var err = IEGenCObject()
    self.init(create_NoThrowExc(doThrow, &err), true)
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

  public var prop: String {
    get {
      let result = _prop_get_NoThrowExc_prop(cself)
      let sctoswiftresult = String(cString: result)
      defer {
        result.deallocate()
      }
      return sctoswiftresult
    }

    set(value) {
      let swifttoscvalue = strdup(value)!
      _prop_set_NoThrowExc_prop(cself, swifttoscvalue)
    }
  }

  public static func noop() -> Void {

    var err = IEGenCObject()
    _func_NoThrowExc_noop(&err)
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

}

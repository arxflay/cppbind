/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 02/28/2022-12:38.
 * Please do not change it manually.
 */

import CWrapper
import Foundation

public class WithExternalAPIComments {

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
    release_WithExternalAPIComments(cself, owner)
  }

  public func keepIEGenReference(_ object: Any) {
    self.refs.append(object)
  }

  public convenience init(s: String) {
    let swifttoscs = strdup(s)!
    var err = IEGenCObject()
    self.init(create_WithExternalAPIComments(swifttoscs, &err), true)
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

  public var str: String {
    get {
      var err = IEGenCObject()
      let result = _prop_get_WithExternalAPIComments_str(cself, &err)
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
      defer {
        result.deallocate()
      }
      return sctoswiftresult
    }

    set(value) {
      let swifttoscvalue = strdup(value)!
      var err = IEGenCObject()
      _prop_set_WithExternalAPIComments_str(cself, swifttoscvalue, &err)
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
  }

  public static func retInt(n: Int) -> Int {

    let swifttoscn = CInt(n)
    var err = IEGenCObject()
    let result = _func_WithExternalAPIComments_retInt(swifttoscn, &err)
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

  public static func max(arg0: Int, arg1: Int) -> Int {

    let swifttoscarg0 = CInt(arg0)
    let swifttoscarg1 = CInt(arg1)
    var err = IEGenCObject()
    let result = _func_WithExternalAPIComments_maxInt(swifttoscarg0, swifttoscarg1, &err)
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

  public static func max(arg0: String, arg1: String) -> String {

    let swifttoscarg0 = strdup(arg0)!
    let swifttoscarg1 = strdup(arg1)!
    var err = IEGenCObject()
    let result = _func_WithExternalAPIComments_maxString(swifttoscarg0, swifttoscarg1, &err)
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
    defer {
      result.deallocate()
    }
    return sctoswiftresult
  }

}

public class AdderInt {

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
    release_AdderInt(cself, owner)
  }

  public func keepIEGenReference(_ object: Any) {
    self.refs.append(object)
  }

  public static func add(a: Int, b: Int) -> Int {

    let swifttosca = CInt(a)
    let swifttoscb = CInt(b)
    var err = IEGenCObject()
    let result = _func_AdderInt_add(swifttosca, swifttoscb, &err)
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

public class AdderDouble {

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
    release_AdderDouble(cself, owner)
  }

  public func keepIEGenReference(_ object: Any) {
    self.refs.append(object)
  }

  public static func add(a: Double, b: Double) -> Double {

    var err = IEGenCObject()
    let result = _func_AdderDouble_add(a, b, &err)
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
    return result
  }

}

public enum color: CUnsignedInt {
  case RED = 0
  case GREEN = 1
  case BLUE = 2
}

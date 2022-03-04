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

/**
 * datetime.hpp is parsed before time.hpp and it contains DateTime class which is inherited from Time(declared in time.hpp).
 * We generate bindings for these two classes in the same datetime file to validate their order.
 */
public protocol Time: Base {
  var time: String { get }
  func value() -> String
}

extension Time {
  public var time: String {
    var err = IEGenCObject()
    let result = _prop_get_Time_time(cself, &err)
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

  public func value() -> String {

    var err = IEGenCObject()
    let result = _func_Time_value(cself, &err)
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

public class TimeImpl: Time {
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
    release_TimeImpl(cself, owner)
  }

  public func keepIEGenReference(_ object: Any) {
    self.refs.append(object)
  }

  public convenience init(h: Int, m: Int, s: Int) {
    let swifttosch = CInt(h)
    let swifttoscm = CInt(m)
    let swifttoscs = CInt(s)
    var err = IEGenCObject()
    self.init(create_Time(swifttosch, swifttoscm, swifttoscs, &err), true)
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

/**
 * datetime.hpp is parsed before time.hpp and it contains DateTime class which is inherited from Time(declared in time.hpp).
 * We generate bindings for these two classes in the same datetime file to validate their order.
 */
public class DateTime: MyDate, Time {
  public convenience init(d: Int, mo: Int, y: Int, h: Int, mi: Int, s: Int) {
    let swifttoscd = CInt(d)
    let swifttoscmo = CInt(mo)
    let swifttoscy = CInt(y)
    let swifttosch = CInt(h)
    let swifttoscmi = CInt(mi)
    let swifttoscs = CInt(s)
    var err = IEGenCObject()
    self.init(create_DateTime(swifttoscd, swifttoscmo, swifttoscy, swifttosch, swifttoscmi, swifttoscs, &err), true)
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

  public var datetime: String {
    var err = IEGenCObject()
    let result = _prop_get_DateTime_datetime(cself, &err)
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

  public override func value() -> String {

    var err = IEGenCObject()
    let result = _func_DateTime_value(cself, &err)
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

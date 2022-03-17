/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 03/15/2022-13:52.
 * Please do not change it manually.
 */

import CWrapper
import Foundation

public protocol Base {
  var cself: IEGenCObject { get }

  func keepIEGenReference(_ object: Any)
  func value() -> String
}

extension Base {
  public func value() -> String {

    var err = IEGenCObject()
    let result = _func_IegenExample_Base_value(cself, &err)
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

public class BaseImpl: Base {
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
    release_IegenExample_BaseImpl(cself, owner)
  }

  public func keepIEGenReference(_ object: Any) {
    self.refs.append(object)
  }

  class func iegenDowncast(_ iegenObj: IEGenCObject, _ owner: Bool = false) -> Base {
    let typeName = String(cString: iegenObj.type)
    switch(typeName) {
    case("iegen::example::DateTime"):
      return DateTime(iegenObj, owner)
    case("iegen::example::Date"):
      return MyDate(iegenObj, owner)
    case("iegen::example::Time"):
      return TimeImpl(iegenObj, owner)
    default:
      return BaseImpl(iegenObj, owner)
    }
  }
}

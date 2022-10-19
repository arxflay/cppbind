/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 10/18/2022-08:51.
 * Please do not change it manually.
 */

import CWrapper
import Foundation

public protocol Base {
  /// An internal property to keep a reference to the original C++ object.
  /// It is intended to be used by the generated code.
  var cself: CppBindCObject { get }

  /// An internal method to bind the lifetimes of the current and another object.
  /// It is intended to be used by the generated code.
  func keepCppBindReference(_ object: Any)
  func value() -> String
}

extension Base {
  public func value() -> String {

    var cppbindErr = CppBindCObject()
    let result = _func_CppbindExample_Base_value(cself, &cppbindErr)
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
    defer {
      result.deallocate()
    }
    return sctoswiftresult
  }

}

public class BaseImpl: Base {
  public let cself: CppBindCObject
  public let owner: Bool
  private var refs: [Any]

  /// internal main initializer
  internal required init(_ _cself: CppBindCObject, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
    self.refs = []
  }

  deinit {
    release_CppbindExample_BaseImpl(cself, owner)
  }

  public func keepCppBindReference(_ object: Any) {
    self.refs.append(object)
  }

  /// An internal property to keep an information about the underlying C++ object type.
  /// It is intended to be used by the generated code.
  class var cppbindCxxTypeName : String { return "cppbind::example::Base" }

  /// An internal method to create a Swift object from a C++ object.
  /// It is intended to be used by the generated code.
  class func cppbindConstructObject(_ cppbindObj: CppBindCObject, _ owner: Bool = false) -> Base {
    let typeName = String(cString: cppbindObj.type)
    var obj : Base
    switch(typeName) {
    case(DateTime.cppbindCxxTypeName):
      obj = DateTime(cppbindObj, owner)
    case(MyDate.cppbindCxxTypeName):
      obj = MyDate(cppbindObj, owner)
    case(TimeImpl.cppbindCxxTypeName):
      obj = TimeImpl(cppbindObj, owner)
    default:
      obj = BaseImpl(cppbindObj, owner)
    }
    return obj
  }
}

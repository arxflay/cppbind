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

/**
 * comments
 * 
 */
public class Object {

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
    release_Cppbind_Object(cself, owner)
  }

  public func keepCppBindReference(_ object: Any) {
    self.refs.append(object)
  }

  /// internal dummy initializer to prevent automatic initializer inheritance
  internal init(_cself: CppBindCObject, _self: Object) {
    fatalError("A dummy internal initializer should not be called.")
  }

  /**
   * String representation for user readability
   * @return result of toReprString by default
   */
  public func toString() -> String {

    var cppbindErr = CppBindCObject()
    let result = _func_Cppbind_Object_toString(cself, &cppbindErr)
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

  /**
   * Human readable class name
   * @return class name
   */
  public func className() -> String {

    var cppbindErr = CppBindCObject()
    let result = _func_Cppbind_Object_className(cself, &cppbindErr)
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

  /**
   * Compare on equality two objects
   * @param other is the second one
   * @return is equals two objects
   */
  public func equals(other: Object) -> Bool {

    let swifttoscother = other.cself
    var cppbindErr = CppBindCObject()
    let result = _func_Cppbind_Object_equals(cself, swifttoscother, &cppbindErr)
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
    return result
  }

  /**
   * Hash for object. Used in wrappers (java, obj-c, python) to define the hash function
   * @return hash of the object
   */
  public func hash() -> CUnsignedLong {

    var cppbindErr = CppBindCObject()
    let result = _func_Cppbind_Object_hash(cself, &cppbindErr)
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
    return result
  }

  /**
   * Detailed string representation only for debug porpoises
   * @return object state as string
   */
  public func debugInfo() -> String {

    var cppbindErr = CppBindCObject()
    let result = _func_Cppbind_Object_debugInfo(cself, &cppbindErr)
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

  /**
   * The object's size in bytes
   * @return bytes count
   */
  public func bytesCount() -> CUnsignedLong {

    var cppbindErr = CppBindCObject()
    let result = _func_Cppbind_Object_bytesCount(cself, &cppbindErr)
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
    return result
  }

  class var cppbindCxxTypeName : String { return "cppbind::Object" }

  class func cppbindConstructObject(_ cppbindObj: CppBindCObject, _ owner: Bool = false) -> Object {
    let typeName = String(cString: cppbindObj.type)
    switch(typeName) {
    case(ObjectUsage.cppbindCxxTypeName):
      return ObjectUsage(cppbindObj, owner)
    default:
      return Object(cppbindObj, owner)
    }
  }
}

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
 * An example of a type derived from a template.
 */
public class MyStackProject: StackPrj {
  /// internal main initializer
  internal required init(_ _cself: CppBindCObject, _ _owner: Bool = false) {
    super.init(_cself, _owner)
  }

  public convenience init() {
    var cppbindErr = CppBindCObject()
    self.init(create_CppbindExample_MyStackProject(&cppbindErr), true)
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

  override class var cppbindCxxTypeName : String { return "cppbind::example::MyStack<cppbind::example::Project>" }
}

/**
 * An example of a type derived from a template.
 */
public class MyStackTask: StackTask {
  /// internal main initializer
  internal required init(_ _cself: CppBindCObject, _ _owner: Bool = false) {
    super.init(_cself, _owner)
  }

  public convenience init() {
    var cppbindErr = CppBindCObject()
    self.init(create_CppbindExample_MyStackTask(&cppbindErr), true)
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

  override class var cppbindCxxTypeName : String { return "cppbind::example::MyStack<cppbind::example::Task>" }
}

/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 11/17/2022-14:08.
 * Please do not change it manually.
 */

import CWrapper
import Foundation

public func mulD(a: Double, b: Double) -> Double {
  var cppbindErr = CppBindCObject()
  let result = _func__mulD(a, b, &cppbindErr)
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

public func mulL(a: CLong, b: CLong) -> CLong {
  var cppbindErr = CppBindCObject()
  let result = _func_CppbindExample_mulL(a, b, &cppbindErr)
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
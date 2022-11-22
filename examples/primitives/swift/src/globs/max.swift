/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 11/15/2022-13:08.
 * Please do not change it manually.
 */

import CWrapper
import Foundation

public func maxInteger(a: Int, b: Int) -> Int {
  let swifttosca = CInt(a)
  let swifttoscb = CInt(b)
  var cppbindErr = CppBindCObject()
  let result = _func__maxInteger(swifttosca, swifttoscb, &cppbindErr)
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
  let sctoswiftresult = Int(result)
  return sctoswiftresult
}

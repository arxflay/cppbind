/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 08/14/2022-10:58.
 * Please do not change it manually.
 */

import CWrapper
import Foundation

/// An example of template function which is overloaded in target languages and for Kotlin should be annotated
/// with JvmName, otherwise all overloads will have the same JVM signature.
public func merge(first: Array<Int>, second: Array<Int>) -> Array<Int> {
  let _swifttoscfirstData = UnsafeMutablePointer<CInt>.allocate(capacity: first.count)
  var swifttoscfirst = CppBindCDataArray()
  swifttoscfirst.data = UnsafeMutableRawPointer(_swifttoscfirstData)
  swifttoscfirst.size = Int64(first.count)
  for i in 0..<first.count {
    let firstVal = first[i]
    let swifttoscfirstVal = CInt(firstVal)
    _swifttoscfirstData[i] = swifttoscfirstVal
  }
  let _swifttoscsecondData = UnsafeMutablePointer<CInt>.allocate(capacity: second.count)
  var swifttoscsecond = CppBindCDataArray()
  swifttoscsecond.data = UnsafeMutableRawPointer(_swifttoscsecondData)
  swifttoscsecond.size = Int64(second.count)
  for i in 0..<second.count {
    let secondVal = second[i]
    let swifttoscsecondVal = CInt(secondVal)
    _swifttoscsecondData[i] = swifttoscsecondVal
  }
  var cppbindErr = CppBindCObject()
  let result = _func__mergeInt(swifttoscfirst, swifttoscsecond, &cppbindErr)
  
  swifttoscfirst.data.deallocate()
  
  swifttoscsecond.data.deallocate()
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
  let _resultBuffer = UnsafeBufferPointer<CInt>(
    start: result.data.assumingMemoryBound(to: CInt.self),
    count: Int(result.size))
  var sctoswiftresult: [Int] = []
  defer {
    _resultBuffer.deallocate()
  }
  for i in 0..<Int(result.size) {
    let resultValue = _resultBuffer[i]
    let sctoswiftresultValue = Int(resultValue)
    sctoswiftresult.append(sctoswiftresultValue)
  }
  return sctoswiftresult
}

/// An example of template function which is overloaded in target languages and for Kotlin should be annotated
/// with JvmName, otherwise all overloads will have the same JVM signature.
public func merge(first: Array<String>, second: Array<String>) -> Array<String> {
  let _swifttoscfirstData = UnsafeMutablePointer<UnsafeMutablePointer<CChar>>.allocate(capacity: first.count)
  var swifttoscfirst = CppBindCDataArray()
  swifttoscfirst.data = UnsafeMutableRawPointer(_swifttoscfirstData)
  swifttoscfirst.size = Int64(first.count)
  for i in 0..<first.count {
    let firstVal = first[i]
    let swifttoscfirstVal = strdup(firstVal)!
    _swifttoscfirstData[i] = swifttoscfirstVal
  }
  let _swifttoscsecondData = UnsafeMutablePointer<UnsafeMutablePointer<CChar>>.allocate(capacity: second.count)
  var swifttoscsecond = CppBindCDataArray()
  swifttoscsecond.data = UnsafeMutableRawPointer(_swifttoscsecondData)
  swifttoscsecond.size = Int64(second.count)
  for i in 0..<second.count {
    let secondVal = second[i]
    let swifttoscsecondVal = strdup(secondVal)!
    _swifttoscsecondData[i] = swifttoscsecondVal
  }
  var cppbindErr = CppBindCObject()
  let result = _func__mergeString(swifttoscfirst, swifttoscsecond, &cppbindErr)
  
  swifttoscfirst.data.deallocate()
  
  swifttoscsecond.data.deallocate()
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
  let _resultBuffer = UnsafeBufferPointer<UnsafeMutablePointer<CChar>>(
    start: result.data.assumingMemoryBound(to: UnsafeMutablePointer<CChar>.self),
    count: Int(result.size))
  var sctoswiftresult: [String] = []
  defer {
    _resultBuffer.deallocate()
  }
  for i in 0..<Int(result.size) {
    let resultValue = _resultBuffer[i]
    let sctoswiftresultValue = String(cString: resultValue)
    defer {
      resultValue.deallocate()
    }
    sctoswiftresult.append(sctoswiftresultValue)
  }
  return sctoswiftresult
}

/// An example of overloaded function which has template argument and for Kotlin should be annotated
/// with JvmName, otherwise all overloads will have the same JVM signature.
public func sum(first: Array<Int>, second: Array<Int>) -> Array<Int> {
  let _swifttoscfirstData = UnsafeMutablePointer<CInt>.allocate(capacity: first.count)
  var swifttoscfirst = CppBindCDataArray()
  swifttoscfirst.data = UnsafeMutableRawPointer(_swifttoscfirstData)
  swifttoscfirst.size = Int64(first.count)
  for i in 0..<first.count {
    let firstVal = first[i]
    let swifttoscfirstVal = CInt(firstVal)
    _swifttoscfirstData[i] = swifttoscfirstVal
  }
  let _swifttoscsecondData = UnsafeMutablePointer<CInt>.allocate(capacity: second.count)
  var swifttoscsecond = CppBindCDataArray()
  swifttoscsecond.data = UnsafeMutableRawPointer(_swifttoscsecondData)
  swifttoscsecond.size = Int64(second.count)
  for i in 0..<second.count {
    let secondVal = second[i]
    let swifttoscsecondVal = CInt(secondVal)
    _swifttoscsecondData[i] = swifttoscsecondVal
  }
  var cppbindErr = CppBindCObject()
  let result = _func__sum(swifttoscfirst, swifttoscsecond, &cppbindErr)
  
  swifttoscfirst.data.deallocate()
  
  swifttoscsecond.data.deallocate()
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
  let _resultBuffer = UnsafeBufferPointer<CInt>(
    start: result.data.assumingMemoryBound(to: CInt.self),
    count: Int(result.size))
  var sctoswiftresult: [Int] = []
  defer {
    _resultBuffer.deallocate()
  }
  for i in 0..<Int(result.size) {
    let resultValue = _resultBuffer[i]
    let sctoswiftresultValue = Int(resultValue)
    sctoswiftresult.append(sctoswiftresultValue)
  }
  return sctoswiftresult
}

/// An example of overloaded function which has template argument and for Kotlin should be annotated
/// with JvmName, otherwise all overloads will have the same JVM signature.
public func sum(first: Array<Float>, second: Array<Float>) -> Array<Float> {
  let _swifttoscfirstData = UnsafeMutablePointer<CFloat>.allocate(capacity: first.count)
  var swifttoscfirst = CppBindCDataArray()
  swifttoscfirst.data = UnsafeMutableRawPointer(_swifttoscfirstData)
  swifttoscfirst.size = Int64(first.count)
  for i in 0..<first.count {
    let firstVal = first[i]
    
    _swifttoscfirstData[i] = firstVal
  }
  let _swifttoscsecondData = UnsafeMutablePointer<CFloat>.allocate(capacity: second.count)
  var swifttoscsecond = CppBindCDataArray()
  swifttoscsecond.data = UnsafeMutableRawPointer(_swifttoscsecondData)
  swifttoscsecond.size = Int64(second.count)
  for i in 0..<second.count {
    let secondVal = second[i]
    
    _swifttoscsecondData[i] = secondVal
  }
  var cppbindErr = CppBindCObject()
  let result = _func__sum1(swifttoscfirst, swifttoscsecond, &cppbindErr)
  
  swifttoscfirst.data.deallocate()
  
  swifttoscsecond.data.deallocate()
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
  let _resultBuffer = UnsafeBufferPointer<CFloat>(
    start: result.data.assumingMemoryBound(to: CFloat.self),
    count: Int(result.size))
  var sctoswiftresult: [Float] = []
  defer {
    _resultBuffer.deallocate()
  }
  for i in 0..<Int(result.size) {
    let resultValue = _resultBuffer[i]
    
    sctoswiftresult.append(resultValue)
  }
  return sctoswiftresult
}

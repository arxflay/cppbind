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

public class JsonExamples {

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
    release_CppbindExample_JsonExamples(cself, owner)
  }

  public func keepCppBindReference(_ object: Any) {
    self.refs.append(object)
  }

  public convenience init() {
    var cppbindErr = CppBindCObject()
    self.init(create_CppbindExample_JsonExamples(&cppbindErr), true)
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

  public func setJson(j: String) -> Void {

    let swifttoscj = strdup(j)!
    var cppbindErr = CppBindCObject()
    _func_CppbindExample_JsonExamples_setJson(cself, swifttoscj, &cppbindErr)
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

  public func getJson() -> String {

    var cppbindErr = CppBindCObject()
    let result = _func_CppbindExample_JsonExamples_getJson(cself, &cppbindErr)
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
   * comments
   * 
   */
  public func getSimpleJsonExample() -> String {

    var cppbindErr = CppBindCObject()
    let result = _func_CppbindExample_JsonExamples_getSimpleJsonExample(cself, &cppbindErr)
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

  public func setJsonMatrix(jm: Array<Array<String>>) -> Void {

    let _swifttoscjmData = UnsafeMutablePointer<CppBindCDataArray>.allocate(capacity: jm.count)
    var swifttoscjm = CppBindCDataArray()
    swifttoscjm.data = UnsafeMutableRawPointer(_swifttoscjmData)
    swifttoscjm.size = Int64(jm.count)
    for i in 0..<jm.count {
      let jmVal = jm[i]
      let _swifttoscjmValData = UnsafeMutablePointer<UnsafeMutablePointer<CChar>>.allocate(capacity: jmVal.count)
      var swifttoscjmVal = CppBindCDataArray()
      swifttoscjmVal.data = UnsafeMutableRawPointer(_swifttoscjmValData)
      swifttoscjmVal.size = Int64(jmVal.count)
      for i in 0..<jmVal.count {
        let jmValVal = jmVal[i]
        let swifttoscjmValVal = strdup(jmValVal)!
        _swifttoscjmValData[i] = swifttoscjmValVal
      }
      _swifttoscjmData[i] = swifttoscjmVal
    }
    var cppbindErr = CppBindCObject()
    _func_CppbindExample_JsonExamples_setJsonMatrix(cself, swifttoscjm, &cppbindErr)
    
    let swifttoscjmData = swifttoscjm.data.assumingMemoryBound(to: CppBindCDataArray.self)
    for i in 0..<Int(swifttoscjm.size) {
      let swifttoscjmItem = swifttoscjmData[i]
      
      swifttoscjmItem.data.deallocate()
    }
    swifttoscjm.data.deallocate()
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

  public func getJsonMatrix() -> Array<Array<String>> {

    var cppbindErr = CppBindCObject()
    let result = _func_CppbindExample_JsonExamples_getJsonMatrix(cself, &cppbindErr)
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
    let _resultBuffer = UnsafeBufferPointer<CppBindCDataArray>(
      start: result.data.assumingMemoryBound(to: CppBindCDataArray.self),
      count: Int(result.size))
    var sctoswiftresult: [Array<String>] = []
    defer {
      _resultBuffer.deallocate()
    }
    for i in 0..<Int(result.size) {
      let resultValue = _resultBuffer[i]
      let _resultValueBuffer = UnsafeBufferPointer<UnsafeMutablePointer<CChar>>(
        start: resultValue.data.assumingMemoryBound(to: UnsafeMutablePointer<CChar>.self),
        count: Int(resultValue.size))
      var sctoswiftresultValue: [String] = []
      defer {
        _resultValueBuffer.deallocate()
      }
      for i in 0..<Int(resultValue.size) {
        let resultValueValue = _resultValueBuffer[i]
        let sctoswiftresultValueValue = String(cString: resultValueValue)
        defer {
          resultValueValue.deallocate()
        }
        sctoswiftresultValue.append(sctoswiftresultValueValue)
      }
      sctoswiftresult.append(sctoswiftresultValue)
    }
    return sctoswiftresult
  }

  class var cppbindCxxTypeName : String { return "cppbind::example::JsonExamples" }
}

/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 08/14/2022-10:59.
 * Please do not change it manually.
 */

import CWrapper
import Foundation

public class TemplateMethods {

  /// An internal property to keep a reference to the original C++ object.
  /// It is intended to be used by the generated code.
  public let cself: CppBindCObject

  /// An internal property to keep track whether Swift is responsible for deallocating the underlying C++ object or not.
  /// It is intended to be used by the generated code.
  public let owner: Bool
  private var refs: [Any]

  /// internal main initializer
  internal required init(_ _cself: CppBindCObject, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
    self.refs = []
  }

  deinit {
    release_CppbindExample_TemplateMethods(cself, owner)
  }

  /// An internal method to bind the lifetimes of the current and another object.
  /// It is intended to be used by the generated code.
  public func keepCppBindReference(_ object: Any) {
    self.refs.append(object)
  }

  public convenience init() {
    var cppbindErr = CppBindCObject()
    self.init(create_CppbindExample_TemplateMethods(&cppbindErr), true)
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

  public func max(a: Int, b: Int) -> Int {

    let swifttosca = CInt(a)
    let swifttoscb = CInt(b)
    var cppbindErr = CppBindCObject()
    let result = _func_CppbindExample_TemplateMethods_maxInt(cself, swifttosca, swifttoscb, &cppbindErr)
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

  public func max(a: String, b: String) -> String {

    let swifttosca = strdup(a)!
    let swifttoscb = strdup(b)!
    var cppbindErr = CppBindCObject()
    let result = _func_CppbindExample_TemplateMethods_maxString(cself, swifttosca, swifttoscb, &cppbindErr)
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

  public func makePair(a: Project, b: Project) -> (Project, Project) {

    let swifttosca = a.cself
    let swifttoscb = b.cself
    var cppbindErr = CppBindCObject()
    let result = _func_CppbindExample_TemplateMethods_makePairProjectProject(cself, swifttosca, swifttoscb, &cppbindErr)
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
    let _resultFirstData = UnsafeBufferPointer<CppBindCObject>(
      start: result.first.assumingMemoryBound(to: CppBindCObject.self),
      count: 1)
    let _resultSecondData = UnsafeBufferPointer<CppBindCObject>(
      start: result.second.assumingMemoryBound(to: CppBindCObject.self),
      count: 1)
    defer {
      _resultFirstData.deallocate()
      _resultSecondData.deallocate()
    }
    let resultFirst = _resultFirstData[0]
    let resultSecond = _resultSecondData[0]
    var sctoswiftresultFirst: Project
    sctoswiftresultFirst = Project(resultFirst)
    var sctoswiftresultSecond: Project
    sctoswiftresultSecond = Project(resultSecond)
    let sctoswiftresult: (Project, Project) = (sctoswiftresultFirst, sctoswiftresultSecond)
    return sctoswiftresult
  }

  public func makePair(a: Root, b: Project) -> (Root, Project) {

    let swifttosca = a.cself
    let swifttoscb = b.cself
    var cppbindErr = CppBindCObject()
    let result = _func_CppbindExample_TemplateMethods_makePairRootProject(cself, swifttosca, swifttoscb, &cppbindErr)
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
    let _resultFirstData = UnsafeBufferPointer<CppBindCObject>(
      start: result.first.assumingMemoryBound(to: CppBindCObject.self),
      count: 1)
    let _resultSecondData = UnsafeBufferPointer<CppBindCObject>(
      start: result.second.assumingMemoryBound(to: CppBindCObject.self),
      count: 1)
    defer {
      _resultFirstData.deallocate()
      _resultSecondData.deallocate()
    }
    let resultFirst = _resultFirstData[0]
    let resultSecond = _resultSecondData[0]
    var sctoswiftresultFirst: Root
    sctoswiftresultFirst = Root(resultFirst)
    var sctoswiftresultSecond: Project
    sctoswiftresultSecond = Project(resultSecond)
    let sctoswiftresult: (Root, Project) = (sctoswiftresultFirst, sctoswiftresultSecond)
    return sctoswiftresult
  }

  public static func merge(first: Array<Int>, second: Array<Int>) -> Array<Int> {

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
    let result = _func_CppbindExample_TemplateMethods_mergeInt(swifttoscfirst, swifttoscsecond, &cppbindErr)
    
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

  public static func merge(first: Array<String>, second: Array<String>) -> Array<String> {

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
    let result = _func_CppbindExample_TemplateMethods_mergeString(swifttoscfirst, swifttoscsecond, &cppbindErr)
    
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

  /// An internal property to keep an information about the underlying C++ object type.
  /// It is intended to be used by the generated code.
  class var cppbindCxxTypeName : String { return "cppbind::example::TemplateMethods" }
}

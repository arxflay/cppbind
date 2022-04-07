/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 04/07/2022-09:35.
 * Please do not change it manually.
 */

import CWrapper
import Foundation

/**
 * comments
 * 
 */
public class VectorItem {

  public let cself: IEGenCObject
  public let owner: Bool
  private var refs: [Any]

  /// internal main initializer
  internal required init(_ _cself: IEGenCObject, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
    self.refs = []
  }

  deinit {
    release_IegenExample_VectorItem(cself, owner)
  }

  public func keepIEGenReference(_ object: Any) {
    self.refs.append(object)
  }

  /**
   * comments
   * 
   */
  public convenience init(value: Int) {
    let swifttoscvalue = CInt(value)
    var iegenErr = IEGenCObject()
    self.init(create_IegenExample_VectorItem(swifttoscvalue, &iegenErr), true)
    if iegenErr.type != nil {
      let errorType = String(cString: iegenErr.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(iegenErr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        iegenErr.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
  }

  /**
   * comments
   * 
   */
  public var value: Int {
    get {
      let result = _prop_get_IegenExample_VectorItem_value(cself)
      let sctoswiftresult = Int(result)
      return sctoswiftresult
    }

    set(value) {
      let swifttoscvalue = CInt(value)
      _prop_set_IegenExample_VectorItem_value(cself, swifttoscvalue)
    }
  }

  class var iegenCxxTypeName : String { return "iegen::example::VectorItem" }
}

/**
 * comments
 * 
 */
public class VectorExamples {

  public let cself: IEGenCObject
  public let owner: Bool
  private var refs: [Any]

  /// internal main initializer
  internal required init(_ _cself: IEGenCObject, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
    self.refs = []
  }

  deinit {
    release_IegenExample_VectorExamples(cself, owner)
  }

  public func keepIEGenReference(_ object: Any) {
    self.refs.append(object)
  }

  /**
   * comments
   * 
   */
  public convenience init() {
    var iegenErr = IEGenCObject()
    self.init(create_IegenExample_VectorExamples(&iegenErr), true)
    if iegenErr.type != nil {
      let errorType = String(cString: iegenErr.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(iegenErr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        iegenErr.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
  }

  /**
   * comments
   * 
   */
  public func addIntVector(v: Array<Int>) -> Void {

    let _swifttoscvData = UnsafeMutablePointer<CInt>.allocate(capacity: v.count)
    var swifttoscv = IEGenCDataArray()
    swifttoscv.data = UnsafeMutableRawPointer(_swifttoscvData)
    swifttoscv.size = Int64(v.count)
    for i in 0..<v.count {
      let vVal = v[i]
      let swifttoscvVal = CInt(vVal)
      _swifttoscvData[i] = swifttoscvVal
    }
    var iegenErr = IEGenCObject()
    _func_IegenExample_VectorExamples_addIntVector(cself, swifttoscv, &iegenErr)
    
    swifttoscv.data.deallocate()
    if iegenErr.type != nil {
      let errorType = String(cString: iegenErr.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(iegenErr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        iegenErr.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
  }

  /**
   * comments
   * 
   */
  public func addObjVector(v: Array<VectorItem>) -> Void {

    let _swifttoscvData = UnsafeMutablePointer<IEGenCObject>.allocate(capacity: v.count)
    var swifttoscv = IEGenCDataArray()
    swifttoscv.data = UnsafeMutableRawPointer(_swifttoscvData)
    swifttoscv.size = Int64(v.count)
    for i in 0..<v.count {
      let vVal = v[i]
      let swifttoscvVal = vVal.cself
      _swifttoscvData[i] = swifttoscvVal
    }
    var iegenErr = IEGenCObject()
    _func_IegenExample_VectorExamples_addObjVector(cself, swifttoscv, &iegenErr)
    
    swifttoscv.data.deallocate()
    if iegenErr.type != nil {
      let errorType = String(cString: iegenErr.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(iegenErr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        iegenErr.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
  }

  /**
   * comments
   * 
   */
  public func addStringVector(v: Array<String>) -> Void {

    let _swifttoscvData = UnsafeMutablePointer<UnsafeMutablePointer<CChar>>.allocate(capacity: v.count)
    var swifttoscv = IEGenCDataArray()
    swifttoscv.data = UnsafeMutableRawPointer(_swifttoscvData)
    swifttoscv.size = Int64(v.count)
    for i in 0..<v.count {
      let vVal = v[i]
      let swifttoscvVal = strdup(vVal)!
      _swifttoscvData[i] = swifttoscvVal
    }
    var iegenErr = IEGenCObject()
    _func_IegenExample_VectorExamples_addStringVector(cself, swifttoscv, &iegenErr)
    
    swifttoscv.data.deallocate()
    if iegenErr.type != nil {
      let errorType = String(cString: iegenErr.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(iegenErr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        iegenErr.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
  }

  /**
   * comments
   * 
   */
  public func getStringVector() -> Array<String> {

    var iegenErr = IEGenCObject()
    let result = _func_IegenExample_VectorExamples_getStringVector(cself, &iegenErr)
    if iegenErr.type != nil {
      let errorType = String(cString: iegenErr.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(iegenErr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        iegenErr.type.deallocate()
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

  /**
   * comments
   * 
   */
  public func getObjVector() -> Array<VectorItem> {

    var iegenErr = IEGenCObject()
    let result = _func_IegenExample_VectorExamples_getObjVector(cself, &iegenErr)
    if iegenErr.type != nil {
      let errorType = String(cString: iegenErr.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(iegenErr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        iegenErr.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    let _resultBuffer = UnsafeBufferPointer<IEGenCObject>(
      start: result.data.assumingMemoryBound(to: IEGenCObject.self),
      count: Int(result.size))
    var sctoswiftresult: [VectorItem] = []
    defer {
      _resultBuffer.deallocate()
    }
    for i in 0..<Int(result.size) {
      let resultValue = _resultBuffer[i]
      var sctoswiftresultValue: VectorItem
      sctoswiftresultValue = VectorItem(resultValue)
      sctoswiftresult.append(sctoswiftresultValue)
    }
    return sctoswiftresult
  }

  /**
   * comments
   * 
   */
  public func getIntVector() -> Array<Int> {

    var iegenErr = IEGenCObject()
    let result = _func_IegenExample_VectorExamples_getIntVector(cself, &iegenErr)
    if iegenErr.type != nil {
      let errorType = String(cString: iegenErr.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(iegenErr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        iegenErr.type.deallocate()
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

  class var iegenCxxTypeName : String { return "iegen::example::VectorExamples" }
}

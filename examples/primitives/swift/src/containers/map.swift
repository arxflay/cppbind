/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 02/04/2022-13:51.
 * Please do not change it manually.
 */

import CWrapper
import Foundation

/**
 * comments
 * 
 */
public class MapItem {

  public let cself: IEGenCObject
  public let owner: Bool

  // internal main initializer
  internal required init(_ _cself: IEGenCObject, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
  }

  deinit {
    release_MapItem(cself, owner)
  }

  /**
   * comments
   * 
   */
  public convenience init(value: Int) {
    let swifttoscvalue = CInt(value)
    var err = IEGenCObject()
    self.init(create_MapItem(swifttoscvalue, &err), true)
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(IEGenCObject(type: err.type, ptr: err.ptr), true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        err.type.deallocate()
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
      let result = _prop_get_MapItem_value(cself)
      let sctoswiftresult = Int(result)
      return sctoswiftresult
    }

    set(value) {
      let swifttoscvalue = CInt(value)
      _prop_set_MapItem_value(cself, swifttoscvalue)
    }
  }

}

/**
 * comments
 * 
 */
public class MapExamples {

  public let cself: IEGenCObject
  public let owner: Bool

  // internal main initializer
  internal required init(_ _cself: IEGenCObject, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
  }

  deinit {
    release_MapExamples(cself, owner)
  }

  /**
   * comments
   * 
   */
  public convenience init() {
    var err = IEGenCObject()
    self.init(create_MapExamples(&err), true)
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(IEGenCObject(type: err.type, ptr: err.ptr), true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        err.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
  }

  /**
   * comments
   * 
   */
  public func addStringPair(info: (String, String)) -> Void {

    let _swifttoscinfoFirst = UnsafeMutablePointer<UnsafeMutablePointer<CChar>>.allocate(capacity: 1)
    let _swifttoscinfoSecond = UnsafeMutablePointer<UnsafeMutablePointer<CChar>>.allocate(capacity: 1)
    defer {
      _swifttoscinfoFirst.deallocate()
      _swifttoscinfoSecond.deallocate()
    }
    var swifttoscinfo = IEGenCDataPair()
    swifttoscinfo.first = UnsafeMutableRawPointer(_swifttoscinfoFirst)
    swifttoscinfo.second = UnsafeMutableRawPointer(_swifttoscinfoSecond)
    let infoFirst = info.0
    let infoSecond = info.1
    let swifttoscinfoFirst = strdup(infoFirst)!
    let swifttoscinfoSecond = strdup(infoSecond)!
    _swifttoscinfoFirst[0] = swifttoscinfoFirst
    _swifttoscinfoSecond[0] = swifttoscinfoSecond
    var err = IEGenCObject()
    _func_MapExamples_addStringPair(cself, swifttoscinfo, &err)
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(IEGenCObject(type: err.type, ptr: err.ptr), true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        err.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
  }

  /**
   * comments
   * 
   */
  public func addIntMap(info: Dictionary<Int, Int>) -> Void {

    let _swifttoscinfoKey = UnsafeMutablePointer<CInt>.allocate(
      capacity: info.count)
    let _swifttoscinfoVal = UnsafeMutablePointer<CInt>.allocate(
      capacity: info.count)
    var swifttoscinfo = IEGenCDataMap()
    swifttoscinfo.keys = UnsafeMutableRawPointer(_swifttoscinfoKey)
    swifttoscinfo.values = UnsafeMutableRawPointer(_swifttoscinfoVal)
    swifttoscinfo.size = Int64(info.count)
    var infoIdx = 0
    for (infoKey, infoVal) in info {
      let swifttoscinfoKey = CInt(infoKey)
      let swifttoscinfoVal = CInt(infoVal)
      _swifttoscinfoKey[infoIdx] = swifttoscinfoKey
      _swifttoscinfoVal[infoIdx] = swifttoscinfoVal
      infoIdx += 1
    }
    var err = IEGenCObject()
    _func_MapExamples_addIntMap(cself, swifttoscinfo, &err)
    
    swifttoscinfo.keys.deallocate()
    swifttoscinfo.values.deallocate()
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(IEGenCObject(type: err.type, ptr: err.ptr), true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        err.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
  }

  /**
   * comments
   * 
   */
  public func addStringMap(info: Dictionary<String, String>) -> Void {

    let _swifttoscinfoKey = UnsafeMutablePointer<UnsafeMutablePointer<CChar>>.allocate(
      capacity: info.count)
    let _swifttoscinfoVal = UnsafeMutablePointer<UnsafeMutablePointer<CChar>>.allocate(
      capacity: info.count)
    var swifttoscinfo = IEGenCDataMap()
    swifttoscinfo.keys = UnsafeMutableRawPointer(_swifttoscinfoKey)
    swifttoscinfo.values = UnsafeMutableRawPointer(_swifttoscinfoVal)
    swifttoscinfo.size = Int64(info.count)
    var infoIdx = 0
    for (infoKey, infoVal) in info {
      let swifttoscinfoKey = strdup(infoKey)!
      let swifttoscinfoVal = strdup(infoVal)!
      _swifttoscinfoKey[infoIdx] = swifttoscinfoKey
      _swifttoscinfoVal[infoIdx] = swifttoscinfoVal
      infoIdx += 1
    }
    var err = IEGenCObject()
    _func_MapExamples_addStringMap(cself, swifttoscinfo, &err)
    
    swifttoscinfo.keys.deallocate()
    swifttoscinfo.values.deallocate()
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(IEGenCObject(type: err.type, ptr: err.ptr), true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        err.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
  }

  /**
   * comments
   * 
   */
  public func getStringMap() -> Dictionary<String, String> {

    var err = IEGenCObject()
    let result = _func_MapExamples_getStringMap(cself, &err)
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(IEGenCObject(type: err.type, ptr: err.ptr), true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        err.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    let resultBufferKey = UnsafeBufferPointer<UnsafeMutablePointer<CChar>>(
      start: result.keys.assumingMemoryBound(to: UnsafeMutablePointer<CChar>.self),
      count: Int(result.size))
    let resultBufferVal = UnsafeBufferPointer<UnsafeMutablePointer<CChar>>(
      start: result.values.assumingMemoryBound(to: UnsafeMutablePointer<CChar>.self),
      count: Int(result.size))
    var sctoswiftresult: [String:String] = [:]
    defer {
      resultBufferKey.deallocate()
      resultBufferVal.deallocate()
    }
    for resultIdx in 0..<Int(result.size) {
      let resultKey = resultBufferKey[resultIdx]
      let resultVal = resultBufferVal[resultIdx]
      do {
        let sctoswiftresultKey = String(cString: resultKey)
        defer {
          resultKey.deallocate()
        }
        let sctoswiftresultVal = String(cString: resultVal)
        defer {
          resultVal.deallocate()
        }
        sctoswiftresult[sctoswiftresultKey] = sctoswiftresultVal
      }
    }
    return sctoswiftresult
  }

  /**
   * comments
   * 
   */
  public func getIntMap() -> Dictionary<Int, Int> {

    var err = IEGenCObject()
    let result = _func_MapExamples_getIntMap(cself, &err)
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(IEGenCObject(type: err.type, ptr: err.ptr), true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        err.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    let resultBufferKey = UnsafeBufferPointer<CInt>(
      start: result.keys.assumingMemoryBound(to: CInt.self),
      count: Int(result.size))
    let resultBufferVal = UnsafeBufferPointer<CInt>(
      start: result.values.assumingMemoryBound(to: CInt.self),
      count: Int(result.size))
    var sctoswiftresult: [Int:Int] = [:]
    defer {
      resultBufferKey.deallocate()
      resultBufferVal.deallocate()
    }
    for resultIdx in 0..<Int(result.size) {
      let resultKey = resultBufferKey[resultIdx]
      let resultVal = resultBufferVal[resultIdx]
      do {
        let sctoswiftresultKey = Int(resultKey)
        let sctoswiftresultVal = Int(resultVal)
        sctoswiftresult[sctoswiftresultKey] = sctoswiftresultVal
      }
    }
    return sctoswiftresult
  }

  /**
   * comments
   * 
   */
  public func addMixedMap(info: Dictionary<String, MapItem>) -> Void {

    let _swifttoscinfoKey = UnsafeMutablePointer<UnsafeMutablePointer<CChar>>.allocate(
      capacity: info.count)
    let _swifttoscinfoVal = UnsafeMutablePointer<IEGenCObject>.allocate(
      capacity: info.count)
    var swifttoscinfo = IEGenCDataMap()
    swifttoscinfo.keys = UnsafeMutableRawPointer(_swifttoscinfoKey)
    swifttoscinfo.values = UnsafeMutableRawPointer(_swifttoscinfoVal)
    swifttoscinfo.size = Int64(info.count)
    var infoIdx = 0
    for (infoKey, infoVal) in info {
      let swifttoscinfoKey = strdup(infoKey)!
      let swifttoscinfoVal = infoVal.cself
      _swifttoscinfoKey[infoIdx] = swifttoscinfoKey
      _swifttoscinfoVal[infoIdx] = swifttoscinfoVal
      infoIdx += 1
    }
    var err = IEGenCObject()
    _func_MapExamples_addMixedMap(cself, swifttoscinfo, &err)
    
    swifttoscinfo.keys.deallocate()
    swifttoscinfo.values.deallocate()
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(IEGenCObject(type: err.type, ptr: err.ptr), true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        err.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
  }

  /**
   * comments
   * 
   */
  public func getMixedMap() -> Dictionary<String, MapItem> {

    var err = IEGenCObject()
    let result = _func_MapExamples_getMixedMap(cself, &err)
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(IEGenCObject(type: err.type, ptr: err.ptr), true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        err.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    let resultBufferKey = UnsafeBufferPointer<UnsafeMutablePointer<CChar>>(
      start: result.keys.assumingMemoryBound(to: UnsafeMutablePointer<CChar>.self),
      count: Int(result.size))
    let resultBufferVal = UnsafeBufferPointer<IEGenCObject>(
      start: result.values.assumingMemoryBound(to: IEGenCObject.self),
      count: Int(result.size))
    var sctoswiftresult: [String:MapItem] = [:]
    defer {
      resultBufferKey.deallocate()
      resultBufferVal.deallocate()
    }
    for resultIdx in 0..<Int(result.size) {
      let resultKey = resultBufferKey[resultIdx]
      let resultVal = resultBufferVal[resultIdx]
      do {
        let sctoswiftresultKey = String(cString: resultKey)
        defer {
          resultKey.deallocate()
        }
        var sctoswiftresultVal: MapItem
        sctoswiftresultVal = MapItem(resultVal, true)
        sctoswiftresult[sctoswiftresultKey] = sctoswiftresultVal
      }
    }
    return sctoswiftresult
  }

}

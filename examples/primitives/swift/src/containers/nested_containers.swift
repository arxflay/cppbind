/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 12/07/2021-12:32.
 * Please do not change it manually.
 */

import CWrapper
import Foundation

public class NestedExamples {

  public let cself: UnsafeMutableRawPointer
  public let owner: Bool

  // internal main initializer
  internal required init(_ _cself: UnsafeMutableRawPointer, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
  }

  deinit {
    if owner {
      release_NestedExamples(cself)
    }
  }

  /**
   * comments
   * 
   */
  public convenience init() {
    var err = ErrorObj()
    self.init(create_NestedExamples(&err), true)
    let err_type = Int(err.err_type)
    if (err_type != 0) {
      switch(err_type) {
        case(1):
          let exc_obj = StdException(err.err_ptr, true)
          ExceptionHandler.handleUncaughtException(exc_obj.what())
        default:
          ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
  }

  public func setNestedIntVector(v: Array<Array<Int>>) -> Void {

    let _swiftToScVData = UnsafeMutablePointer<CDataArray>.allocate(capacity: v.count)
    var swiftToScV = CDataArray()
    swiftToScV.data = UnsafeMutableRawPointer(_swiftToScVData)
    swiftToScV.size = Int64(v.count)
    for i in 0..<v.count {
      let vVal = v[i]
      let _swiftToScVvalData = UnsafeMutablePointer<CInt>.allocate(capacity: vVal.count)
      var swiftToScVval = CDataArray()
      swiftToScVval.data = UnsafeMutableRawPointer(_swiftToScVvalData)
      swiftToScVval.size = Int64(vVal.count)
      for i in 0..<vVal.count {
        let vValVal = vVal[i]
        let swiftToScVvalval = CInt(vValVal)
        _swiftToScVvalData[i] = swiftToScVvalval
      }
      _swiftToScVData[i] = swiftToScVval
    }
    var err = ErrorObj()
    _func_NestedExamples_setNestedIntVector(cself, swiftToScV, &err)
    
    let swiftToScVData = swiftToScV.data.assumingMemoryBound(to: CDataArray.self)
    for i in 0..<Int(swiftToScV.size) {
      let swiftToScVItem = swiftToScVData[i]
      
      swiftToScVItem.data.deallocate()
    }
    swiftToScV.data.deallocate()
    let errorType = Int(err.err_type)
    if errorType != 0 {
      switch errorType {
      case (1):
        let excObj = StdException(err.err_ptr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
  }

  public func getNestedIntVector() -> Array<Array<Int>> {

    var err = ErrorObj()
    let result = _func_NestedExamples_getNestedIntVector(cself, &err)
    let errorType = Int(err.err_type)
    if errorType != 0 {
      switch errorType {
      case (1):
        let excObj = StdException(err.err_ptr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    let _resultBuffer = UnsafeBufferPointer<CDataArray>(
      start: result.data.assumingMemoryBound(to: CDataArray.self),
      count: Int(result.size))
    var scToSwiftResult: [Array<Int>] = []
    defer {
      _resultBuffer.deallocate()
    }
    for i in 0..<Int(result.size) {
      let resultValue = _resultBuffer[i]
      let _resultValueBuffer = UnsafeBufferPointer<CInt>(
        start: resultValue.data.assumingMemoryBound(to: CInt.self),
        count: Int(resultValue.size))
      var scToSwiftResultvalue: [Int] = []
      defer {
        _resultValueBuffer.deallocate()
      }
      for i in 0..<Int(resultValue.size) {
        let resultValueValue = _resultValueBuffer[i]
        let scToSwiftResultvaluevalue = Int(resultValueValue)
        scToSwiftResultvalue.append(scToSwiftResultvaluevalue)
      }
      scToSwiftResult.append(scToSwiftResultvalue)
    }
    return scToSwiftResult
  }

  public func setNestedIntMap(m: Dictionary<Int, Dictionary<Int, Int>>) -> Void {

    let _swiftToScMKey = UnsafeMutablePointer<CInt>.allocate(
      capacity: m.count)
    let _swiftToScMVal = UnsafeMutablePointer<CDataMap>.allocate(
      capacity: m.count)
    var swiftToScM = CDataMap()
    swiftToScM.keys = UnsafeMutableRawPointer(_swiftToScMKey)
    swiftToScM.values = UnsafeMutableRawPointer(_swiftToScMVal)
    swiftToScM.size = Int64(m.count)
    var mIdx = 0
    for (mKey, mVal) in m {
      let swiftToScMkey = CInt(mKey)
      let _swiftToScMvalKey = UnsafeMutablePointer<CInt>.allocate(
        capacity: mVal.count)
      let _swiftToScMvalVal = UnsafeMutablePointer<CInt>.allocate(
        capacity: mVal.count)
      var swiftToScMval = CDataMap()
      swiftToScMval.keys = UnsafeMutableRawPointer(_swiftToScMvalKey)
      swiftToScMval.values = UnsafeMutableRawPointer(_swiftToScMvalVal)
      swiftToScMval.size = Int64(mVal.count)
      var mValIdx = 0
      for (mValKey, mValVal) in mVal {
        let swiftToScMvalkey = CInt(mValKey)
        let swiftToScMvalval = CInt(mValVal)
        _swiftToScMvalKey[mValIdx] = swiftToScMvalkey
        _swiftToScMvalVal[mValIdx] = swiftToScMvalval
        mValIdx += 1
      }
      _swiftToScMKey[mIdx] = swiftToScMkey
      _swiftToScMVal[mIdx] = swiftToScMval
      mIdx += 1
    }
    var err = ErrorObj()
    _func_NestedExamples_setNestedIntMap(cself, swiftToScM, &err)
    
    let swiftToScMData = swiftToScM.values.assumingMemoryBound(to: CDataMap.self)
    for i in 0..<Int(swiftToScM.size) {
      let swiftToScMItem = swiftToScMData[i]
      
      swiftToScMItem.keys.deallocate()
      swiftToScMItem.values.deallocate()
    }
    swiftToScM.keys.deallocate()
    swiftToScM.values.deallocate()
    let errorType = Int(err.err_type)
    if errorType != 0 {
      switch errorType {
      case (1):
        let excObj = StdException(err.err_ptr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
  }

  public func getNestedIntMap() -> Dictionary<Int, Dictionary<Int, Int>> {

    var err = ErrorObj()
    let result = _func_NestedExamples_getNestedIntMap(cself, &err)
    let errorType = Int(err.err_type)
    if errorType != 0 {
      switch errorType {
      case (1):
        let excObj = StdException(err.err_ptr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    let resultBufferKey = UnsafeBufferPointer<CInt>(
      start: result.keys.assumingMemoryBound(to: CInt.self),
      count: Int(result.size))
    let resultBufferVal = UnsafeBufferPointer<CDataMap>(
      start: result.values.assumingMemoryBound(to: CDataMap.self),
      count: Int(result.size))
    var scToSwiftResult: [Int:Dictionary<Int, Int>] = [:]
    defer {
      resultBufferKey.deallocate()
      resultBufferVal.deallocate()
    }
    for resultIdx in 0..<Int(result.size) {
      let resultKey = resultBufferKey[resultIdx]
      let resultVal = resultBufferVal[resultIdx]
      do {
        let scToSwiftResultkey = Int(resultKey)
        let resultValBufferKey = UnsafeBufferPointer<CInt>(
          start: resultVal.keys.assumingMemoryBound(to: CInt.self),
          count: Int(resultVal.size))
        let resultValBufferVal = UnsafeBufferPointer<CInt>(
          start: resultVal.values.assumingMemoryBound(to: CInt.self),
          count: Int(resultVal.size))
        var scToSwiftResultval: [Int:Int] = [:]
        defer {
          resultValBufferKey.deallocate()
          resultValBufferVal.deallocate()
        }
        for resultValIdx in 0..<Int(resultVal.size) {
          let resultValKey = resultValBufferKey[resultValIdx]
          let resultValVal = resultValBufferVal[resultValIdx]
          do {
            let scToSwiftResultvalkey = Int(resultValKey)
            let scToSwiftResultvalval = Int(resultValVal)
            scToSwiftResultval[scToSwiftResultvalkey] = scToSwiftResultvalval
          }
        }
        scToSwiftResult[scToSwiftResultkey] = scToSwiftResultval
      }
    }
    return scToSwiftResult
  }

  public func mixedExampleWithManyArgs(v1: Array<Array<Int>>, v2: Array<Array<Int>>, m1: Dictionary<Int, Dictionary<Int, Int>>, m2: Dictionary<Int, Dictionary<Int, Int>>) -> Void {

    let _swiftToScV1Data = UnsafeMutablePointer<CDataArray>.allocate(capacity: v1.count)
    var swiftToScV1 = CDataArray()
    swiftToScV1.data = UnsafeMutableRawPointer(_swiftToScV1Data)
    swiftToScV1.size = Int64(v1.count)
    for i in 0..<v1.count {
      let v1Val = v1[i]
      let _swiftToScV1ValData = UnsafeMutablePointer<CInt>.allocate(capacity: v1Val.count)
      var swiftToScV1Val = CDataArray()
      swiftToScV1Val.data = UnsafeMutableRawPointer(_swiftToScV1ValData)
      swiftToScV1Val.size = Int64(v1Val.count)
      for i in 0..<v1Val.count {
        let v1ValVal = v1Val[i]
        let swiftToScV1Valval = CInt(v1ValVal)
        _swiftToScV1ValData[i] = swiftToScV1Valval
      }
      _swiftToScV1Data[i] = swiftToScV1Val
    }
    let _swiftToScV2Data = UnsafeMutablePointer<CDataArray>.allocate(capacity: v2.count)
    var swiftToScV2 = CDataArray()
    swiftToScV2.data = UnsafeMutableRawPointer(_swiftToScV2Data)
    swiftToScV2.size = Int64(v2.count)
    for i in 0..<v2.count {
      let v2Val = v2[i]
      let _swiftToScV2ValData = UnsafeMutablePointer<CInt>.allocate(capacity: v2Val.count)
      var swiftToScV2Val = CDataArray()
      swiftToScV2Val.data = UnsafeMutableRawPointer(_swiftToScV2ValData)
      swiftToScV2Val.size = Int64(v2Val.count)
      for i in 0..<v2Val.count {
        let v2ValVal = v2Val[i]
        let swiftToScV2Valval = CInt(v2ValVal)
        _swiftToScV2ValData[i] = swiftToScV2Valval
      }
      _swiftToScV2Data[i] = swiftToScV2Val
    }
    let _swiftToScM1Key = UnsafeMutablePointer<CInt>.allocate(
      capacity: m1.count)
    let _swiftToScM1Val = UnsafeMutablePointer<CDataMap>.allocate(
      capacity: m1.count)
    var swiftToScM1 = CDataMap()
    swiftToScM1.keys = UnsafeMutableRawPointer(_swiftToScM1Key)
    swiftToScM1.values = UnsafeMutableRawPointer(_swiftToScM1Val)
    swiftToScM1.size = Int64(m1.count)
    var m1Idx = 0
    for (m1Key, m1Val) in m1 {
      let swiftToScM1Key = CInt(m1Key)
      let _swiftToScM1ValKey = UnsafeMutablePointer<CInt>.allocate(
        capacity: m1Val.count)
      let _swiftToScM1ValVal = UnsafeMutablePointer<CInt>.allocate(
        capacity: m1Val.count)
      var swiftToScM1Val = CDataMap()
      swiftToScM1Val.keys = UnsafeMutableRawPointer(_swiftToScM1ValKey)
      swiftToScM1Val.values = UnsafeMutableRawPointer(_swiftToScM1ValVal)
      swiftToScM1Val.size = Int64(m1Val.count)
      var m1ValIdx = 0
      for (m1ValKey, m1ValVal) in m1Val {
        let swiftToScM1Valkey = CInt(m1ValKey)
        let swiftToScM1Valval = CInt(m1ValVal)
        _swiftToScM1ValKey[m1ValIdx] = swiftToScM1Valkey
        _swiftToScM1ValVal[m1ValIdx] = swiftToScM1Valval
        m1ValIdx += 1
      }
      _swiftToScM1Key[m1Idx] = swiftToScM1Key
      _swiftToScM1Val[m1Idx] = swiftToScM1Val
      m1Idx += 1
    }
    let _swiftToScM2Key = UnsafeMutablePointer<CInt>.allocate(
      capacity: m2.count)
    let _swiftToScM2Val = UnsafeMutablePointer<CDataMap>.allocate(
      capacity: m2.count)
    var swiftToScM2 = CDataMap()
    swiftToScM2.keys = UnsafeMutableRawPointer(_swiftToScM2Key)
    swiftToScM2.values = UnsafeMutableRawPointer(_swiftToScM2Val)
    swiftToScM2.size = Int64(m2.count)
    var m2Idx = 0
    for (m2Key, m2Val) in m2 {
      let swiftToScM2Key = CInt(m2Key)
      let _swiftToScM2ValKey = UnsafeMutablePointer<CInt>.allocate(
        capacity: m2Val.count)
      let _swiftToScM2ValVal = UnsafeMutablePointer<CInt>.allocate(
        capacity: m2Val.count)
      var swiftToScM2Val = CDataMap()
      swiftToScM2Val.keys = UnsafeMutableRawPointer(_swiftToScM2ValKey)
      swiftToScM2Val.values = UnsafeMutableRawPointer(_swiftToScM2ValVal)
      swiftToScM2Val.size = Int64(m2Val.count)
      var m2ValIdx = 0
      for (m2ValKey, m2ValVal) in m2Val {
        let swiftToScM2Valkey = CInt(m2ValKey)
        let swiftToScM2Valval = CInt(m2ValVal)
        _swiftToScM2ValKey[m2ValIdx] = swiftToScM2Valkey
        _swiftToScM2ValVal[m2ValIdx] = swiftToScM2Valval
        m2ValIdx += 1
      }
      _swiftToScM2Key[m2Idx] = swiftToScM2Key
      _swiftToScM2Val[m2Idx] = swiftToScM2Val
      m2Idx += 1
    }
    var err = ErrorObj()
    _func_NestedExamples_mixedExampleWithManyArgs(cself, swiftToScV1, swiftToScV2, swiftToScM1, swiftToScM2, &err)
    
    let swiftToScV1Data = swiftToScV1.data.assumingMemoryBound(to: CDataArray.self)
    for i in 0..<Int(swiftToScV1.size) {
      let swiftToScV1Item = swiftToScV1Data[i]
      
      swiftToScV1Item.data.deallocate()
    }
    swiftToScV1.data.deallocate()
    
    let swiftToScV2Data = swiftToScV2.data.assumingMemoryBound(to: CDataArray.self)
    for i in 0..<Int(swiftToScV2.size) {
      let swiftToScV2Item = swiftToScV2Data[i]
      
      swiftToScV2Item.data.deallocate()
    }
    swiftToScV2.data.deallocate()
    
    let swiftToScM1Data = swiftToScM1.values.assumingMemoryBound(to: CDataMap.self)
    for i in 0..<Int(swiftToScM1.size) {
      let swiftToScM1Item = swiftToScM1Data[i]
      
      swiftToScM1Item.keys.deallocate()
      swiftToScM1Item.values.deallocate()
    }
    swiftToScM1.keys.deallocate()
    swiftToScM1.values.deallocate()
    
    let swiftToScM2Data = swiftToScM2.values.assumingMemoryBound(to: CDataMap.self)
    for i in 0..<Int(swiftToScM2.size) {
      let swiftToScM2Item = swiftToScM2Data[i]
      
      swiftToScM2Item.keys.deallocate()
      swiftToScM2Item.values.deallocate()
    }
    swiftToScM2.keys.deallocate()
    swiftToScM2.values.deallocate()
    let errorType = Int(err.err_type)
    if errorType != 0 {
      switch errorType {
      case (1):
        let excObj = StdException(err.err_ptr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
  }

  public func setVectorOfIntMaps(v: Array<Dictionary<Int, Int>>) -> Void {

    let _swiftToScVData = UnsafeMutablePointer<CDataMap>.allocate(capacity: v.count)
    var swiftToScV = CDataArray()
    swiftToScV.data = UnsafeMutableRawPointer(_swiftToScVData)
    swiftToScV.size = Int64(v.count)
    for i in 0..<v.count {
      let vVal = v[i]
      let _swiftToScVvalKey = UnsafeMutablePointer<CInt>.allocate(
        capacity: vVal.count)
      let _swiftToScVvalVal = UnsafeMutablePointer<CInt>.allocate(
        capacity: vVal.count)
      var swiftToScVval = CDataMap()
      swiftToScVval.keys = UnsafeMutableRawPointer(_swiftToScVvalKey)
      swiftToScVval.values = UnsafeMutableRawPointer(_swiftToScVvalVal)
      swiftToScVval.size = Int64(vVal.count)
      var vValIdx = 0
      for (vValKey, vValVal) in vVal {
        let swiftToScVvalkey = CInt(vValKey)
        let swiftToScVvalval = CInt(vValVal)
        _swiftToScVvalKey[vValIdx] = swiftToScVvalkey
        _swiftToScVvalVal[vValIdx] = swiftToScVvalval
        vValIdx += 1
      }
      _swiftToScVData[i] = swiftToScVval
    }
    var err = ErrorObj()
    _func_NestedExamples_setVectorOfIntMaps(cself, swiftToScV, &err)
    
    let swiftToScVData = swiftToScV.data.assumingMemoryBound(to: CDataMap.self)
    for i in 0..<Int(swiftToScV.size) {
      let swiftToScVItem = swiftToScVData[i]
      
      swiftToScVItem.keys.deallocate()
      swiftToScVItem.values.deallocate()
    }
    swiftToScV.data.deallocate()
    let errorType = Int(err.err_type)
    if errorType != 0 {
      switch errorType {
      case (1):
        let excObj = StdException(err.err_ptr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
  }

  public func getVectorOfIntMaps() -> Array<Dictionary<Int, Int>> {

    var err = ErrorObj()
    let result = _func_NestedExamples_getVectorOfIntMaps(cself, &err)
    let errorType = Int(err.err_type)
    if errorType != 0 {
      switch errorType {
      case (1):
        let excObj = StdException(err.err_ptr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    let _resultBuffer = UnsafeBufferPointer<CDataMap>(
      start: result.data.assumingMemoryBound(to: CDataMap.self),
      count: Int(result.size))
    var scToSwiftResult: [Dictionary<Int, Int>] = []
    defer {
      _resultBuffer.deallocate()
    }
    for i in 0..<Int(result.size) {
      let resultValue = _resultBuffer[i]
      let resultValueBufferKey = UnsafeBufferPointer<CInt>(
        start: resultValue.keys.assumingMemoryBound(to: CInt.self),
        count: Int(resultValue.size))
      let resultValueBufferVal = UnsafeBufferPointer<CInt>(
        start: resultValue.values.assumingMemoryBound(to: CInt.self),
        count: Int(resultValue.size))
      var scToSwiftResultvalue: [Int:Int] = [:]
      defer {
        resultValueBufferKey.deallocate()
        resultValueBufferVal.deallocate()
      }
      for resultValueIdx in 0..<Int(resultValue.size) {
        let resultValueKey = resultValueBufferKey[resultValueIdx]
        let resultValueVal = resultValueBufferVal[resultValueIdx]
        do {
          let scToSwiftResultvaluekey = Int(resultValueKey)
          let scToSwiftResultvalueval = Int(resultValueVal)
          scToSwiftResultvalue[scToSwiftResultvaluekey] = scToSwiftResultvalueval
        }
      }
      scToSwiftResult.append(scToSwiftResultvalue)
    }
    return scToSwiftResult
  }

  public func setMapOfIntVectors(m: Dictionary<Int, Array<Int>>) -> Void {

    let _swiftToScMKey = UnsafeMutablePointer<CInt>.allocate(
      capacity: m.count)
    let _swiftToScMVal = UnsafeMutablePointer<CDataArray>.allocate(
      capacity: m.count)
    var swiftToScM = CDataMap()
    swiftToScM.keys = UnsafeMutableRawPointer(_swiftToScMKey)
    swiftToScM.values = UnsafeMutableRawPointer(_swiftToScMVal)
    swiftToScM.size = Int64(m.count)
    var mIdx = 0
    for (mKey, mVal) in m {
      let swiftToScMkey = CInt(mKey)
      let _swiftToScMvalData = UnsafeMutablePointer<CInt>.allocate(capacity: mVal.count)
      var swiftToScMval = CDataArray()
      swiftToScMval.data = UnsafeMutableRawPointer(_swiftToScMvalData)
      swiftToScMval.size = Int64(mVal.count)
      for i in 0..<mVal.count {
        let mValVal = mVal[i]
        let swiftToScMvalval = CInt(mValVal)
        _swiftToScMvalData[i] = swiftToScMvalval
      }
      _swiftToScMKey[mIdx] = swiftToScMkey
      _swiftToScMVal[mIdx] = swiftToScMval
      mIdx += 1
    }
    var err = ErrorObj()
    _func_NestedExamples_setMapOfIntVectors(cself, swiftToScM, &err)
    
    let swiftToScMData = swiftToScM.values.assumingMemoryBound(to: CDataArray.self)
    for i in 0..<Int(swiftToScM.size) {
      let swiftToScMItem = swiftToScMData[i]
      
      swiftToScMItem.data.deallocate()
    }
    swiftToScM.keys.deallocate()
    swiftToScM.values.deallocate()
    let errorType = Int(err.err_type)
    if errorType != 0 {
      switch errorType {
      case (1):
        let excObj = StdException(err.err_ptr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
  }

  public func getMapOfIntVectors() -> Dictionary<Int, Array<Int>> {

    var err = ErrorObj()
    let result = _func_NestedExamples_getMapOfIntVectors(cself, &err)
    let errorType = Int(err.err_type)
    if errorType != 0 {
      switch errorType {
      case (1):
        let excObj = StdException(err.err_ptr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    let resultBufferKey = UnsafeBufferPointer<CInt>(
      start: result.keys.assumingMemoryBound(to: CInt.self),
      count: Int(result.size))
    let resultBufferVal = UnsafeBufferPointer<CDataArray>(
      start: result.values.assumingMemoryBound(to: CDataArray.self),
      count: Int(result.size))
    var scToSwiftResult: [Int:Array<Int>] = [:]
    defer {
      resultBufferKey.deallocate()
      resultBufferVal.deallocate()
    }
    for resultIdx in 0..<Int(result.size) {
      let resultKey = resultBufferKey[resultIdx]
      let resultVal = resultBufferVal[resultIdx]
      do {
        let scToSwiftResultkey = Int(resultKey)
        let _resultValBuffer = UnsafeBufferPointer<CInt>(
          start: resultVal.data.assumingMemoryBound(to: CInt.self),
          count: Int(resultVal.size))
        var scToSwiftResultval: [Int] = []
        defer {
          _resultValBuffer.deallocate()
        }
        for i in 0..<Int(resultVal.size) {
          let resultValValue = _resultValBuffer[i]
          let scToSwiftResultvalvalue = Int(resultValValue)
          scToSwiftResultval.append(scToSwiftResultvalvalue)
        }
        scToSwiftResult[scToSwiftResultkey] = scToSwiftResultval
      }
    }
    return scToSwiftResult
  }

  public func setComplexStringVector(v: Array<Array<Array<String>>>) -> Void {

    let _swiftToScVData = UnsafeMutablePointer<CDataArray>.allocate(capacity: v.count)
    var swiftToScV = CDataArray()
    swiftToScV.data = UnsafeMutableRawPointer(_swiftToScVData)
    swiftToScV.size = Int64(v.count)
    for i in 0..<v.count {
      let vVal = v[i]
      let _swiftToScVvalData = UnsafeMutablePointer<CDataArray>.allocate(capacity: vVal.count)
      var swiftToScVval = CDataArray()
      swiftToScVval.data = UnsafeMutableRawPointer(_swiftToScVvalData)
      swiftToScVval.size = Int64(vVal.count)
      for i in 0..<vVal.count {
        let vValVal = vVal[i]
        let _swiftToScVvalvalData = UnsafeMutablePointer<UnsafeMutablePointer<CChar>>.allocate(capacity: vValVal.count)
        var swiftToScVvalval = CDataArray()
        swiftToScVvalval.data = UnsafeMutableRawPointer(_swiftToScVvalvalData)
        swiftToScVvalval.size = Int64(vValVal.count)
        for i in 0..<vValVal.count {
          let vValValVal = vValVal[i]
          let swiftToScVvalvalval = strdup(vValValVal)!
          _swiftToScVvalvalData[i] = swiftToScVvalvalval
        }
        _swiftToScVvalData[i] = swiftToScVvalval
      }
      _swiftToScVData[i] = swiftToScVval
    }
    var err = ErrorObj()
    _func_NestedExamples_setComplexStringVector(cself, swiftToScV, &err)
    
    let swiftToScVData = swiftToScV.data.assumingMemoryBound(to: CDataArray.self)
    for i in 0..<Int(swiftToScV.size) {
      let swiftToScVItem = swiftToScVData[i]
      
      let swiftToScVItemData = swiftToScVItem.data.assumingMemoryBound(to: CDataArray.self)
      for i in 0..<Int(swiftToScVItem.size) {
        let swiftToScVItemItem = swiftToScVItemData[i]
        
        swiftToScVItemItem.data.deallocate()
      }
      swiftToScVItem.data.deallocate()
    }
    swiftToScV.data.deallocate()
    let errorType = Int(err.err_type)
    if errorType != 0 {
      switch errorType {
      case (1):
        let excObj = StdException(err.err_ptr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
  }

  public func getComplexStringVector() -> Array<Array<Array<String>>> {

    var err = ErrorObj()
    let result = _func_NestedExamples_getComplexStringVector(cself, &err)
    let errorType = Int(err.err_type)
    if errorType != 0 {
      switch errorType {
      case (1):
        let excObj = StdException(err.err_ptr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    let _resultBuffer = UnsafeBufferPointer<CDataArray>(
      start: result.data.assumingMemoryBound(to: CDataArray.self),
      count: Int(result.size))
    var scToSwiftResult: [Array<Array<String>>] = []
    defer {
      _resultBuffer.deallocate()
    }
    for i in 0..<Int(result.size) {
      let resultValue = _resultBuffer[i]
      let _resultValueBuffer = UnsafeBufferPointer<CDataArray>(
        start: resultValue.data.assumingMemoryBound(to: CDataArray.self),
        count: Int(resultValue.size))
      var scToSwiftResultvalue: [Array<String>] = []
      defer {
        _resultValueBuffer.deallocate()
      }
      for i in 0..<Int(resultValue.size) {
        let resultValueValue = _resultValueBuffer[i]
        let _resultValueValueBuffer = UnsafeBufferPointer<UnsafeMutablePointer<CChar>>(
          start: resultValueValue.data.assumingMemoryBound(to: UnsafeMutablePointer<CChar>.self),
          count: Int(resultValueValue.size))
        var scToSwiftResultvaluevalue: [String] = []
        defer {
          _resultValueValueBuffer.deallocate()
        }
        for i in 0..<Int(resultValueValue.size) {
          let resultValueValueValue = _resultValueValueBuffer[i]
          let scToSwiftResultvaluevaluevalue = String(cString: resultValueValueValue)
          defer {
            resultValueValueValue.deallocate()
          }
          scToSwiftResultvaluevalue.append(scToSwiftResultvaluevaluevalue)
        }
        scToSwiftResultvalue.append(scToSwiftResultvaluevalue)
      }
      scToSwiftResult.append(scToSwiftResultvalue)
    }
    return scToSwiftResult
  }

  public func setComplexStringMap(m: Dictionary<String, Dictionary<String, Dictionary<String, String>>>) -> Void {

    let _swiftToScMKey = UnsafeMutablePointer<UnsafeMutablePointer<CChar>>.allocate(
      capacity: m.count)
    let _swiftToScMVal = UnsafeMutablePointer<CDataMap>.allocate(
      capacity: m.count)
    var swiftToScM = CDataMap()
    swiftToScM.keys = UnsafeMutableRawPointer(_swiftToScMKey)
    swiftToScM.values = UnsafeMutableRawPointer(_swiftToScMVal)
    swiftToScM.size = Int64(m.count)
    var mIdx = 0
    for (mKey, mVal) in m {
      let swiftToScMkey = strdup(mKey)!
      let _swiftToScMvalKey = UnsafeMutablePointer<UnsafeMutablePointer<CChar>>.allocate(
        capacity: mVal.count)
      let _swiftToScMvalVal = UnsafeMutablePointer<CDataMap>.allocate(
        capacity: mVal.count)
      var swiftToScMval = CDataMap()
      swiftToScMval.keys = UnsafeMutableRawPointer(_swiftToScMvalKey)
      swiftToScMval.values = UnsafeMutableRawPointer(_swiftToScMvalVal)
      swiftToScMval.size = Int64(mVal.count)
      var mValIdx = 0
      for (mValKey, mValVal) in mVal {
        let swiftToScMvalkey = strdup(mValKey)!
        let _swiftToScMvalvalKey = UnsafeMutablePointer<UnsafeMutablePointer<CChar>>.allocate(
          capacity: mValVal.count)
        let _swiftToScMvalvalVal = UnsafeMutablePointer<UnsafeMutablePointer<CChar>>.allocate(
          capacity: mValVal.count)
        var swiftToScMvalval = CDataMap()
        swiftToScMvalval.keys = UnsafeMutableRawPointer(_swiftToScMvalvalKey)
        swiftToScMvalval.values = UnsafeMutableRawPointer(_swiftToScMvalvalVal)
        swiftToScMvalval.size = Int64(mValVal.count)
        var mValValIdx = 0
        for (mValValKey, mValValVal) in mValVal {
          let swiftToScMvalvalkey = strdup(mValValKey)!
          let swiftToScMvalvalval = strdup(mValValVal)!
          _swiftToScMvalvalKey[mValValIdx] = swiftToScMvalvalkey
          _swiftToScMvalvalVal[mValValIdx] = swiftToScMvalvalval
          mValValIdx += 1
        }
        _swiftToScMvalKey[mValIdx] = swiftToScMvalkey
        _swiftToScMvalVal[mValIdx] = swiftToScMvalval
        mValIdx += 1
      }
      _swiftToScMKey[mIdx] = swiftToScMkey
      _swiftToScMVal[mIdx] = swiftToScMval
      mIdx += 1
    }
    var err = ErrorObj()
    _func_NestedExamples_setComplexStringMap(cself, swiftToScM, &err)
    
    let swiftToScMData = swiftToScM.values.assumingMemoryBound(to: CDataMap.self)
    for i in 0..<Int(swiftToScM.size) {
      let swiftToScMItem = swiftToScMData[i]
      
      let swiftToScMItemData = swiftToScMItem.values.assumingMemoryBound(to: CDataMap.self)
      for i in 0..<Int(swiftToScMItem.size) {
        let swiftToScMItemItem = swiftToScMItemData[i]
        
        swiftToScMItemItem.keys.deallocate()
        swiftToScMItemItem.values.deallocate()
      }
      swiftToScMItem.keys.deallocate()
      swiftToScMItem.values.deallocate()
    }
    swiftToScM.keys.deallocate()
    swiftToScM.values.deallocate()
    let errorType = Int(err.err_type)
    if errorType != 0 {
      switch errorType {
      case (1):
        let excObj = StdException(err.err_ptr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
  }

  public func getComplexStringMap() -> Dictionary<String, Dictionary<String, Dictionary<String, String>>> {

    var err = ErrorObj()
    let result = _func_NestedExamples_getComplexStringMap(cself, &err)
    let errorType = Int(err.err_type)
    if errorType != 0 {
      switch errorType {
      case (1):
        let excObj = StdException(err.err_ptr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    let resultBufferKey = UnsafeBufferPointer<UnsafeMutablePointer<CChar>>(
      start: result.keys.assumingMemoryBound(to: UnsafeMutablePointer<CChar>.self),
      count: Int(result.size))
    let resultBufferVal = UnsafeBufferPointer<CDataMap>(
      start: result.values.assumingMemoryBound(to: CDataMap.self),
      count: Int(result.size))
    var scToSwiftResult: [String:Dictionary<String, Dictionary<String, String>>] = [:]
    defer {
      resultBufferKey.deallocate()
      resultBufferVal.deallocate()
    }
    for resultIdx in 0..<Int(result.size) {
      let resultKey = resultBufferKey[resultIdx]
      let resultVal = resultBufferVal[resultIdx]
      do {
        let scToSwiftResultkey = String(cString: resultKey)
        defer {
          resultKey.deallocate()
        }
        let resultValBufferKey = UnsafeBufferPointer<UnsafeMutablePointer<CChar>>(
          start: resultVal.keys.assumingMemoryBound(to: UnsafeMutablePointer<CChar>.self),
          count: Int(resultVal.size))
        let resultValBufferVal = UnsafeBufferPointer<CDataMap>(
          start: resultVal.values.assumingMemoryBound(to: CDataMap.self),
          count: Int(resultVal.size))
        var scToSwiftResultval: [String:Dictionary<String, String>] = [:]
        defer {
          resultValBufferKey.deallocate()
          resultValBufferVal.deallocate()
        }
        for resultValIdx in 0..<Int(resultVal.size) {
          let resultValKey = resultValBufferKey[resultValIdx]
          let resultValVal = resultValBufferVal[resultValIdx]
          do {
            let scToSwiftResultvalkey = String(cString: resultValKey)
            defer {
              resultValKey.deallocate()
            }
            let resultValValBufferKey = UnsafeBufferPointer<UnsafeMutablePointer<CChar>>(
              start: resultValVal.keys.assumingMemoryBound(to: UnsafeMutablePointer<CChar>.self),
              count: Int(resultValVal.size))
            let resultValValBufferVal = UnsafeBufferPointer<UnsafeMutablePointer<CChar>>(
              start: resultValVal.values.assumingMemoryBound(to: UnsafeMutablePointer<CChar>.self),
              count: Int(resultValVal.size))
            var scToSwiftResultvalval: [String:String] = [:]
            defer {
              resultValValBufferKey.deallocate()
              resultValValBufferVal.deallocate()
            }
            for resultValValIdx in 0..<Int(resultValVal.size) {
              let resultValValKey = resultValValBufferKey[resultValValIdx]
              let resultValValVal = resultValValBufferVal[resultValValIdx]
              do {
                let scToSwiftResultvalvalkey = String(cString: resultValValKey)
                defer {
                  resultValValKey.deallocate()
                }
                let scToSwiftResultvalvalval = String(cString: resultValValVal)
                defer {
                  resultValValVal.deallocate()
                }
                scToSwiftResultvalval[scToSwiftResultvalvalkey] = scToSwiftResultvalvalval
              }
            }
            scToSwiftResultval[scToSwiftResultvalkey] = scToSwiftResultvalval
          }
        }
        scToSwiftResult[scToSwiftResultkey] = scToSwiftResultval
      }
    }
    return scToSwiftResult
  }

}

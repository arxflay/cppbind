/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 02/23/2022-11:06.
 * Please do not change it manually.
 */

import CWrapper
import Foundation

/**
 * comments
 * 
 */
public class WrapperPairStrings {

  public let cself: IEGenCObject
  public let owner: Bool
  private var refs: [Any]

  // internal main initializer
  internal required init(_ _cself: IEGenCObject, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
    self.refs = []
  }

  deinit {
    release_WrapperPairStrings(cself, owner)
  }

  public func keepIEGenReference(_ object: Any) {
    self.refs.append(object)
  }

  public convenience init(value: (String, String)) {
    let _swifttoscvalueFirst = UnsafeMutablePointer<UnsafeMutablePointer<CChar>>.allocate(capacity: 1)
    let _swifttoscvalueSecond = UnsafeMutablePointer<UnsafeMutablePointer<CChar>>.allocate(capacity: 1)
    defer {
      _swifttoscvalueFirst.deallocate()
      _swifttoscvalueSecond.deallocate()
    }
    var swifttoscvalue = IEGenCDataPair()
    swifttoscvalue.first = UnsafeMutableRawPointer(_swifttoscvalueFirst)
    swifttoscvalue.second = UnsafeMutableRawPointer(_swifttoscvalueSecond)
    let valueFirst = value.0
    let valueSecond = value.1
    let swifttoscvalueFirst = strdup(valueFirst)!
    let swifttoscvalueSecond = strdup(valueSecond)!
    _swifttoscvalueFirst[0] = swifttoscvalueFirst
    _swifttoscvalueSecond[0] = swifttoscvalueSecond
    var err = IEGenCObject()
    self.init(create_WrapperPairStrings(swifttoscvalue, &err), true)
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(err, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        err.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
  }

  public var value: (String, String) {
    get {
      var err = IEGenCObject()
      let result = _prop_get_WrapperPairStrings_value(cself, &err)
      
      if err.type != nil {
        let errorType = String(cString: err.type!)
        switch errorType {
        case ("std::exception"):
          let excObj = StdException(err, true)
          ExceptionHandler.handleUncaughtException(excObj.what())
        default:
          err.type.deallocate()
          ExceptionHandler.handleUncaughtException("Uncaught Exception")
        }
      }
      let _resultFirstData = UnsafeBufferPointer<UnsafeMutablePointer<CChar>>(
        start: result.first.assumingMemoryBound(to: UnsafeMutablePointer<CChar>.self),
        count: 1)
      let _resultSecondData = UnsafeBufferPointer<UnsafeMutablePointer<CChar>>(
        start: result.second.assumingMemoryBound(to: UnsafeMutablePointer<CChar>.self),
        count: 1)
      defer {
        _resultFirstData.deallocate()
        _resultSecondData.deallocate()
      }
      let resultFirst = _resultFirstData[0]
      let resultSecond = _resultSecondData[0]
      let sctoswiftresultFirst = String(cString: resultFirst)
      defer {
        resultFirst.deallocate()
      }
      let sctoswiftresultSecond = String(cString: resultSecond)
      defer {
        resultSecond.deallocate()
      }
      let sctoswiftresult: (String, String) = (sctoswiftresultFirst, sctoswiftresultSecond)
      return sctoswiftresult
    }

    set(value) {
      let _swifttoscvalueFirst = UnsafeMutablePointer<UnsafeMutablePointer<CChar>>.allocate(capacity: 1)
      let _swifttoscvalueSecond = UnsafeMutablePointer<UnsafeMutablePointer<CChar>>.allocate(capacity: 1)
      defer {
        _swifttoscvalueFirst.deallocate()
        _swifttoscvalueSecond.deallocate()
      }
      var swifttoscvalue = IEGenCDataPair()
      swifttoscvalue.first = UnsafeMutableRawPointer(_swifttoscvalueFirst)
      swifttoscvalue.second = UnsafeMutableRawPointer(_swifttoscvalueSecond)
      let valueFirst = value.0
      let valueSecond = value.1
      let swifttoscvalueFirst = strdup(valueFirst)!
      let swifttoscvalueSecond = strdup(valueSecond)!
      _swifttoscvalueFirst[0] = swifttoscvalueFirst
      _swifttoscvalueSecond[0] = swifttoscvalueSecond
      var err = IEGenCObject()
      _prop_set_WrapperPairStrings_value(cself, swifttoscvalue, &err)
      
      if err.type != nil {
        let errorType = String(cString: err.type!)
        switch errorType {
        case ("std::exception"):
          let excObj = StdException(err, true)
          ExceptionHandler.handleUncaughtException(excObj.what())
        default:
          err.type.deallocate()
          ExceptionHandler.handleUncaughtException("Uncaught Exception")
        }
      }
    }
  }

}

/**
 * comments
 * 
 */
public class WrapperPairIntInt {

  public let cself: IEGenCObject
  public let owner: Bool
  private var refs: [Any]

  // internal main initializer
  internal required init(_ _cself: IEGenCObject, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
    self.refs = []
  }

  deinit {
    release_WrapperPairIntInt(cself, owner)
  }

  public func keepIEGenReference(_ object: Any) {
    self.refs.append(object)
  }

  public convenience init(value: (Int, Int)) {
    let _swifttoscvalueFirst = UnsafeMutablePointer<CInt>.allocate(capacity: 1)
    let _swifttoscvalueSecond = UnsafeMutablePointer<CInt>.allocate(capacity: 1)
    defer {
      _swifttoscvalueFirst.deallocate()
      _swifttoscvalueSecond.deallocate()
    }
    var swifttoscvalue = IEGenCDataPair()
    swifttoscvalue.first = UnsafeMutableRawPointer(_swifttoscvalueFirst)
    swifttoscvalue.second = UnsafeMutableRawPointer(_swifttoscvalueSecond)
    let valueFirst = value.0
    let valueSecond = value.1
    let swifttoscvalueFirst = CInt(valueFirst)
    let swifttoscvalueSecond = CInt(valueSecond)
    _swifttoscvalueFirst[0] = swifttoscvalueFirst
    _swifttoscvalueSecond[0] = swifttoscvalueSecond
    var err = IEGenCObject()
    self.init(create_WrapperPairIntInt(swifttoscvalue, &err), true)
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(err, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        err.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
  }

  public var value: (Int, Int) {
    get {
      var err = IEGenCObject()
      let result = _prop_get_WrapperPairIntInt_value(cself, &err)
      
      if err.type != nil {
        let errorType = String(cString: err.type!)
        switch errorType {
        case ("std::exception"):
          let excObj = StdException(err, true)
          ExceptionHandler.handleUncaughtException(excObj.what())
        default:
          err.type.deallocate()
          ExceptionHandler.handleUncaughtException("Uncaught Exception")
        }
      }
      let _resultFirstData = UnsafeBufferPointer<CInt>(
        start: result.first.assumingMemoryBound(to: CInt.self),
        count: 1)
      let _resultSecondData = UnsafeBufferPointer<CInt>(
        start: result.second.assumingMemoryBound(to: CInt.self),
        count: 1)
      defer {
        _resultFirstData.deallocate()
        _resultSecondData.deallocate()
      }
      let resultFirst = _resultFirstData[0]
      let resultSecond = _resultSecondData[0]
      let sctoswiftresultFirst = Int(resultFirst)
      let sctoswiftresultSecond = Int(resultSecond)
      let sctoswiftresult: (Int, Int) = (sctoswiftresultFirst, sctoswiftresultSecond)
      return sctoswiftresult
    }

    set(value) {
      let _swifttoscvalueFirst = UnsafeMutablePointer<CInt>.allocate(capacity: 1)
      let _swifttoscvalueSecond = UnsafeMutablePointer<CInt>.allocate(capacity: 1)
      defer {
        _swifttoscvalueFirst.deallocate()
        _swifttoscvalueSecond.deallocate()
      }
      var swifttoscvalue = IEGenCDataPair()
      swifttoscvalue.first = UnsafeMutableRawPointer(_swifttoscvalueFirst)
      swifttoscvalue.second = UnsafeMutableRawPointer(_swifttoscvalueSecond)
      let valueFirst = value.0
      let valueSecond = value.1
      let swifttoscvalueFirst = CInt(valueFirst)
      let swifttoscvalueSecond = CInt(valueSecond)
      _swifttoscvalueFirst[0] = swifttoscvalueFirst
      _swifttoscvalueSecond[0] = swifttoscvalueSecond
      var err = IEGenCObject()
      _prop_set_WrapperPairIntInt_value(cself, swifttoscvalue, &err)
      
      if err.type != nil {
        let errorType = String(cString: err.type!)
        switch errorType {
        case ("std::exception"):
          let excObj = StdException(err, true)
          ExceptionHandler.handleUncaughtException(excObj.what())
        default:
          err.type.deallocate()
          ExceptionHandler.handleUncaughtException("Uncaught Exception")
        }
      }
    }
  }

}

/**
 * comments
 * 
 */
public class WrapperString {

  public let cself: IEGenCObject
  public let owner: Bool
  private var refs: [Any]

  // internal main initializer
  internal required init(_ _cself: IEGenCObject, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
    self.refs = []
  }

  deinit {
    release_WrapperString(cself, owner)
  }

  public func keepIEGenReference(_ object: Any) {
    self.refs.append(object)
  }

  public convenience init(value: String) {
    let swifttoscvalue = strdup(value)!
    var err = IEGenCObject()
    self.init(create_WrapperString(swifttoscvalue, &err), true)
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(err, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        err.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
  }

  public var value: String {
    get {
      var err = IEGenCObject()
      let result = _prop_get_WrapperString_value(cself, &err)
      
      if err.type != nil {
        let errorType = String(cString: err.type!)
        switch errorType {
        case ("std::exception"):
          let excObj = StdException(err, true)
          ExceptionHandler.handleUncaughtException(excObj.what())
        default:
          err.type.deallocate()
          ExceptionHandler.handleUncaughtException("Uncaught Exception")
        }
      }
      let sctoswiftresult = String(cString: result)
      defer {
        result.deallocate()
      }
      return sctoswiftresult
    }

    set(value) {
      let swifttoscvalue = strdup(value)!
      var err = IEGenCObject()
      _prop_set_WrapperString_value(cself, swifttoscvalue, &err)
      
      if err.type != nil {
        let errorType = String(cString: err.type!)
        switch errorType {
        case ("std::exception"):
          let excObj = StdException(err, true)
          ExceptionHandler.handleUncaughtException(excObj.what())
        default:
          err.type.deallocate()
          ExceptionHandler.handleUncaughtException("Uncaught Exception")
        }
      }
    }
  }

}

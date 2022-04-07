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

public class QueueIntShared {

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
    release_IegenExample_QueueIntShared(cself, owner)
  }

  public func keepIEGenReference(_ object: Any) {
    self.refs.append(object)
  }

  public convenience init() {
    var iegenErr = IEGenCObject()
    self.init(create_IegenExample_QueueIntShared(&iegenErr), true)
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

  public func push_back(element: Int) -> Void {

    let swifttoscelement = CInt(element)
    var iegenErr = IEGenCObject()
    _func_IegenExample_QueueIntShared_push_back(cself, swifttoscelement, &iegenErr)
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

  public func get_size() -> Int {

    var iegenErr = IEGenCObject()
    let result = _func_IegenExample_QueueIntShared_get_size(cself, &iegenErr)
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
    let sctoswiftresult = Int(result)
    return sctoswiftresult
  }

  class var iegenCxxTypeName : String { return "iegen::example::QueueIntShared" }
}

public class QueueIntSharedUsage {

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
    release_IegenExample_QueueIntSharedUsage(cself, owner)
  }

  public func keepIEGenReference(_ object: Any) {
    self.refs.append(object)
  }

  public convenience init(q: QueueIntShared) {
    let swifttoscq = q.cself
    var iegenErr = IEGenCObject()
    self.init(create_IegenExample_QueueIntSharedUsage(swifttoscq, &iegenErr), true)
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

  public var saved_queue: QueueIntShared {
    let result = _prop_get_IegenExample_QueueIntSharedUsage_saved_queue(cself)
    var sctoswiftresult: QueueIntShared
    sctoswiftresult = QueueIntShared(result, true)
    return sctoswiftresult
  }

  public static func getSize(q: QueueIntShared) -> Int {

    let swifttoscq = q.cself
    var iegenErr = IEGenCObject()
    let result = _func_IegenExample_QueueIntSharedUsage_getSize(swifttoscq, &iegenErr)
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
    let sctoswiftresult = Int(result)
    return sctoswiftresult
  }

  public static func getLastElement(q: QueueIntShared) -> Int {

    let swifttoscq = q.cself
    var iegenErr = IEGenCObject()
    let result = _func_IegenExample_QueueIntSharedUsage_getLastElement(swifttoscq, &iegenErr)
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
    let sctoswiftresult = Int(result)
    return sctoswiftresult
  }

  public static func getFirstElement(q: QueueIntShared) -> Int {

    let swifttoscq = q.cself
    var iegenErr = IEGenCObject()
    let result = _func_IegenExample_QueueIntSharedUsage_getFirstElement(swifttoscq, &iegenErr)
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
    let sctoswiftresult = Int(result)
    return sctoswiftresult
  }

  public static func getInvQueue(v: Array<Int>) -> QueueIntShared {

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
    let result = _func_IegenExample_QueueIntSharedUsage_getInvQueue(swifttoscv, &iegenErr)
    
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
    var sctoswiftresult: QueueIntShared
    sctoswiftresult = QueueIntShared(result, true)
    return sctoswiftresult
  }

  public func getSavedQueue() -> QueueIntShared {

    var iegenErr = IEGenCObject()
    let result = _func_IegenExample_QueueIntSharedUsage_getSavedQueue(cself, &iegenErr)
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
    var sctoswiftresult: QueueIntShared
    sctoswiftresult = QueueIntShared(result, true)
    return sctoswiftresult
  }

  class var iegenCxxTypeName : String { return "iegen::example::QueueIntSharedUsage" }
}

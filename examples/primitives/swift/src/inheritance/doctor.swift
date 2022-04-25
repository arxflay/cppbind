/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 04/13/2022-10:43.
 * Please do not change it manually.
 */

import CWrapper
import Foundation

/**
 * A base class for checking single branch non-polymorphic inheritance cases
 */
public class Doctor {

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
    release_IegenExample_Doctor(cself, owner)
  }

  public func keepIEGenReference(_ object: Any) {
    self.refs.append(object)
  }

  /// internal dummy initializer to prevent automatic initializer inheritance
  internal init(_cself: IEGenCObject, _self: Doctor) {
    fatalError("A dummy internal initializer should not be called.")
  }

  public convenience init(doctorName: String) {
    let swifttoscdoctorName = strdup(doctorName)!
    var iegenErr = IEGenCObject()
    self.init(create_IegenExample_Doctor(swifttoscdoctorName, &iegenErr), true)
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

  class var iegenCxxTypeName : String { return "iegen::example::Doctor" }
}

public class Surgeon: Doctor {
  /// internal main initializer
  internal required init(_ _cself: IEGenCObject, _ _owner: Bool = false) {
    super.init(_cself, _owner)
  }

  public convenience init(surgeonName: String) {
    let swifttoscsurgeonName = strdup(surgeonName)!
    var iegenErr = IEGenCObject()
    self.init(create_IegenExample_Surgeon(swifttoscsurgeonName, &iegenErr), true)
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

  override class var iegenCxxTypeName : String { return "iegen::example::Surgeon" }
}

/**
 * A base class for checking multibranch mixed polymorphic inheritance cases
 */
public protocol GoodVirtualDoctor {
  var cself: IEGenCObject { get }

  func keepIEGenReference(_ object: Any)
}

extension GoodVirtualDoctor {
}

public class GoodVirtualDoctorImpl: GoodVirtualDoctor {
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
    release_IegenExample_GoodVirtualDoctorImpl(cself, owner)
  }

  public func keepIEGenReference(_ object: Any) {
    self.refs.append(object)
  }

  class var iegenCxxTypeName : String { return "iegen::example::GoodVirtualDoctor" }

  class func iegenDowncast(_ iegenObj: IEGenCObject, _ owner: Bool = false) -> GoodVirtualDoctor {
    let typeName = String(cString: iegenObj.type)
    switch(typeName) {
    case(GoodYoungDoctor.iegenCxxTypeName):
      return GoodYoungDoctor(iegenObj, owner)
    default:
      return GoodVirtualDoctorImpl(iegenObj, owner)
    }
  }
}

public class GoodDoctor {

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
    release_IegenExample_GoodDoctor(cself, owner)
  }

  public func keepIEGenReference(_ object: Any) {
    self.refs.append(object)
  }

  /// internal dummy initializer to prevent automatic initializer inheritance
  internal init(_cself: IEGenCObject, _self: GoodDoctor) {
    fatalError("A dummy internal initializer should not be called.")
  }

  public convenience init(doctorName: String) {
    let swifttoscdoctorName = strdup(doctorName)!
    var iegenErr = IEGenCObject()
    self.init(create_IegenExample_GoodDoctor(swifttoscdoctorName, &iegenErr), true)
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

  class var iegenCxxTypeName : String { return "iegen::example::GoodDoctor" }
}

/**
 * Polymorphic subclass
 */
public class GoodYoungDoctor: GoodDoctor, GoodVirtualDoctor {
  /// internal main initializer
  internal required init(_ _cself: IEGenCObject, _ _owner: Bool = false) {
    super.init(_cself, _owner)
  }

  public convenience init(doctorName: String) {
    let swifttoscdoctorName = strdup(doctorName)!
    var iegenErr = IEGenCObject()
    self.init(create_IegenExample_GoodYoungDoctor(swifttoscdoctorName, &iegenErr), true)
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

  override class var iegenCxxTypeName : String { return "iegen::example::GoodYoungDoctor" }
}

/**
 * Non-polymorphic subclass
 */
public class GoodOldDoctor: GoodDoctor {
  /// internal main initializer
  internal required init(_ _cself: IEGenCObject, _ _owner: Bool = false) {
    super.init(_cself, _owner)
  }

  public convenience init(doctorName: String) {
    let swifttoscdoctorName = strdup(doctorName)!
    var iegenErr = IEGenCObject()
    self.init(create_IegenExample_GoodOldDoctor(swifttoscdoctorName, &iegenErr), true)
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

  override class var iegenCxxTypeName : String { return "iegen::example::GoodOldDoctor" }
}

public class DoctorInfo {

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
    release_IegenExample_DoctorInfo(cself, owner)
  }

  public func keepIEGenReference(_ object: Any) {
    self.refs.append(object)
  }

  public convenience init(s: Surgeon) {
    let swifttoscs = s.cself
    var iegenErr = IEGenCObject()
    self.init(create_IegenExample_DoctorInfo(swifttoscs, &iegenErr), true)
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

  public convenience init(d: GoodYoungDoctor) {
    let swifttoscd = d.cself
    var iegenErr = IEGenCObject()
    self.init(create_IegenExample_DoctorInfo_1(swifttoscd, &iegenErr), true)
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

  public func getDoctorName(d: Doctor) -> String {

    let swifttoscd = d.cself
    var iegenErr = IEGenCObject()
    let result = _func_IegenExample_DoctorInfo_getDoctorName(cself, swifttoscd, &iegenErr)
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
    let sctoswiftresult = String(cString: result)
    defer {
      result.deallocate()
    }
    return sctoswiftresult
  }

  public func getSurgeonName(s: Surgeon) -> String {

    let swifttoscs = s.cself
    var iegenErr = IEGenCObject()
    let result = _func_IegenExample_DoctorInfo_getSurgeonName(cself, swifttoscs, &iegenErr)
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
    let sctoswiftresult = String(cString: result)
    defer {
      result.deallocate()
    }
    return sctoswiftresult
  }

  public func getDoctor() -> Doctor {

    var iegenErr = IEGenCObject()
    let result = _func_IegenExample_DoctorInfo_getDoctor(cself, &iegenErr)
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
    var sctoswiftresult: Doctor
    sctoswiftresult = Doctor(result)
    return sctoswiftresult
  }

  public func getGoodDoctor() -> GoodDoctor {

    var iegenErr = IEGenCObject()
    let result = _func_IegenExample_DoctorInfo_getGoodDoctor(cself, &iegenErr)
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
    var sctoswiftresult: GoodDoctor
    sctoswiftresult = GoodDoctor(result)
    return sctoswiftresult
  }

  public func getGoodVirtualDoctor() -> GoodVirtualDoctor {

    var iegenErr = IEGenCObject()
    let result = _func_IegenExample_DoctorInfo_getGoodVirtualDoctor(cself, &iegenErr)
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
    var sctoswiftresult: GoodVirtualDoctor
    sctoswiftresult = GoodVirtualDoctorImpl.iegenDowncast(result)
    return sctoswiftresult
  }

  public func getGoodDoctorName(d: GoodDoctor) -> String {

    let swifttoscd = d.cself
    var iegenErr = IEGenCObject()
    let result = _func_IegenExample_DoctorInfo_getGoodDoctorName(cself, swifttoscd, &iegenErr)
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
    let sctoswiftresult = String(cString: result)
    defer {
      result.deallocate()
    }
    return sctoswiftresult
  }

  class var iegenCxxTypeName : String { return "iegen::example::DoctorInfo" }
}
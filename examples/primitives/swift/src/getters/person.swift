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
 * This class contains a private string field and getter/setter methods for it.
 */
public class Person {

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
    release_Person(cself, owner)
  }

  public func keepIEGenReference(_ object: Any) {
    self.refs.append(object)
  }

  public convenience init(name: String, email: String, age: Int) {
    let swifttoscname = strdup(name)!
    let swifttoscemail = strdup(email)!
    let swifttoscage = CInt(age)
    var err = IEGenCObject()
    self.init(create_Person(swifttoscname, swifttoscemail, swifttoscage, &err), true)
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

  public var name: String {
    get {
      var err = IEGenCObject()
      let result = _prop_get_Person_name(cself, &err)
      
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
      _prop_set_Person_name(cself, swifttoscvalue, &err)
      
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

  public var email: String {
    get {
      let result = _prop_get_Person_email(cself)
      let sctoswiftresult = String(cString: result)
      defer {
        result.deallocate()
      }
      return sctoswiftresult
    }
  }

  public var age: Int {
    get {
      let result = _prop_get_Person_age(cself)
      let sctoswiftresult = Int(result)
      return sctoswiftresult
    }

    set(value) {
      let swifttoscvalue = CInt(value)
      _prop_set_Person_age(cself, swifttoscvalue)
    }
  }

}

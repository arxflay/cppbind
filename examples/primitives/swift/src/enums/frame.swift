/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 02/04/2022-14:10.
 * Please do not change it manually.
 */

import CWrapper
import Foundation

/**
 * Class Frame.
 */
public class Frame {

  public let cself: IEGenCObject
  public let owner: Bool

  // internal main initializer
  internal required init(_ _cself: IEGenCObject, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
  }

  deinit {
    release_Frame(cself, owner)
  }

  public convenience init() {
    var err = IEGenCObject()
    self.init(create_Frame(&err), true)
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

  public var backgroundColor: Color {
    get {
      let result = _prop_get_Frame_backgroundColor(cself)
      let sctoswiftresultOptional = Color(rawValue: result)
      if (sctoswiftresultOptional == nil) {
        ExceptionHandler.handleUncaughtException(
        "Internal error: unresolved reference to non existing field of Color enum.")
      }
      let sctoswiftresult = sctoswiftresultOptional!
      return sctoswiftresult
    }

    set(value) {
      let swifttoscvalue = value.rawValue
      _prop_set_Frame_backgroundColor(cself, swifttoscvalue)
    }
  }

  public var backgroundColorShade: ColorShade {
    get {
      let result = _prop_get_Frame_backgroundColorShade(cself)
      let sctoswiftresultOptional = ColorShade(rawValue: result)
      if (sctoswiftresultOptional == nil) {
        ExceptionHandler.handleUncaughtException(
        "Internal error: unresolved reference to non existing field of ColorShade enum.")
      }
      let sctoswiftresult = sctoswiftresultOptional!
      return sctoswiftresult
    }

    set(value) {
      let swifttoscvalue = value.rawValue
      _prop_set_Frame_backgroundColorShade(cself, swifttoscvalue)
    }
  }

}

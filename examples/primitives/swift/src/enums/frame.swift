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
 * Class Frame.
 */
public class Frame {

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
    release_IegenExample_Frame(cself, owner)
  }

  public func keepIEGenReference(_ object: Any) {
    self.refs.append(object)
  }

  public convenience init() {
    var iegenErr = IEGenCObject()
    self.init(create_IegenExample_Frame(&iegenErr), true)
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

  public var backgroundColor: Color {
    get {
      let result = _prop_get_IegenExample_Frame_backgroundColor(cself)
      guard let sctoswiftresult = Color(rawValue: result) else {
         ExceptionHandler.handleUncaughtException(
            "Internal error: unresolved reference to non existing field of Color enum.")
      }
      return sctoswiftresult
    }

    set(value) {
      let swifttoscvalue = value.rawValue
      _prop_set_IegenExample_Frame_backgroundColor(cself, swifttoscvalue)
    }
  }

  public var backgroundColorShade: ColorShade {
    get {
      let result = _prop_get_IegenExample_Frame_backgroundColorShade(cself)
      guard let sctoswiftresult = ColorShade(rawValue: result) else {
         ExceptionHandler.handleUncaughtException(
            "Internal error: unresolved reference to non existing field of ColorShade enum.")
      }
      return sctoswiftresult
    }

    set(value) {
      let swifttoscvalue = value.rawValue
      _prop_set_IegenExample_Frame_backgroundColorShade(cself, swifttoscvalue)
    }
  }

  class var iegenCxxTypeName : String { return "iegen::example::Frame" }
}

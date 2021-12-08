/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 12/08/2021-11:58.
 * Please do not change it manually.
 */

import CWrapper
import Foundation

/**
 * Addressable is a base class for all the objects, that have abs path.
 */
public protocol AddressableRoot {
  var cself: CObject { get }

  /**
   * comments
   * @brief Get object's abs path based on parent's abs path and object's name
   * @return the abs path of the object
   */
  func absPath() -> String
}

extension AddressableRoot {
  /**
   * comments
   * @brief Get object's abs path based on parent's abs path and object's name
   * @return the abs path of the object
   */
  public func absPath() -> String {

    var err = ErrorObj()
    let result = _func_AddressableRoot_absPath(cself, &err)
    let errorType = Int(err.err_type)
    if errorType != 0 {
      switch errorType {
      case (1):
        let excObj = StdException(CObject(type: strdup("std::exception"), ptr: err.err_ptr), true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    let sctoswiftresult = String(cString: result)
    defer {
      result.deallocate()
    }
    return sctoswiftresult
  }

}

public class AddressableImplRoot: AddressableRoot {
  public let cself: CObject
  public let owner: Bool

  // internal main initializer
  internal required init(_ _cself: CObject, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
  }

  deinit {
    release_AddressableImplRoot(cself, owner)
  }

  /**
   * comments
   */
  public convenience init(parent: Root, name: String) {
    let swifttoscparent = parent.cself
    let swifttoscname = strdup(name)!
    var err = ErrorObj()
    self.init(create_AddressableRoot(swifttoscparent, swifttoscname, &err), true)
    let errorType = Int(err.err_type)
    if errorType != 0 {
      switch errorType {
      case (1):
        let excObj = StdException(CObject(type: strdup("std::exception"), ptr: err.err_ptr), true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
  }

}

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

/**
 * An example for with overloaded operators.
 */
public protocol IntArray {
  var cself: UnsafeMutableRawPointer { get }

  subscript(i: Int) -> Int { get set }
  subscript(i: String) -> Int { get }
  subscript(i: Double) -> Int { get }
}

extension IntArray {
  
  public subscript(i: Int) -> Int {
    get {
      let swiftToScI = CInt(i)
      let result = _func_IntArray_operator_getitem_(cself, swiftToScI)
      let scToSwiftResult = Int(result)
      return scToSwiftResult
    }

    set(value) {
      let swiftToScI = CInt(i)
      let swiftToScValue = CInt(value)
      _func_IntArray_operator_setitem_(cself, swiftToScI, swiftToScValue)
    }
  }


  public subscript(i: String) -> Int {
    get {
      let swiftToScI = strdup(i)!
      let result = _func_IntArray_operator_getitem__1(cself, swiftToScI)
      let scToSwiftResult = Int(result)
      return scToSwiftResult
    }
  }


  public subscript(i: Double) -> Int {
    get {
      let result = _func_IntArray_operator_getitem__2(cself, i)
      let scToSwiftResult = Int(result)
      return scToSwiftResult
    }
  }

}

public class IntArrayImpl: IntArray {
  public let cself: UnsafeMutableRawPointer
  public let owner: Bool

  // internal main initializer
  internal required init(_ _cself: UnsafeMutableRawPointer, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
  }

  deinit {
    if owner {
      release_IntArrayImpl(cself)
    }
  }

  public convenience init() {
    var err = ErrorObj()
    self.init(create_IntArray(&err), true)
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

}

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
 * An example for with overloaded operators.
 */
public protocol IntArray {
  var cself: IEGenCObject { get }

  subscript(i: Int) -> Int { get set }
  subscript(i: String) -> Int { get }
  subscript(i: Double) -> Int { get }
}

extension IntArray {
  
  public subscript(i: Int) -> Int {
    get {
      let swifttosci = CInt(i)
      let result = _func_IntArray__getitem_(cself, swifttosci)
      let sctoswiftresult = Int(result)
      return sctoswiftresult
    }

    set(value) {
      let swifttosci = CInt(i)
      let swifttoscvalue = CInt(value)
      _func_IntArray__setitem_(cself, swifttosci, swifttoscvalue)
    }
  }


  public subscript(i: String) -> Int {
    get {
      let swifttosci = strdup(i)!
      let result = _func_IntArray__getitem__1(cself, swifttosci)
      let sctoswiftresult = Int(result)
      return sctoswiftresult
    }
  }


  public subscript(i: Double) -> Int {
    get {
      let result = _func_IntArray__getitem__2(cself, i)
      let sctoswiftresult = Int(result)
      return sctoswiftresult
    }
  }

}

public class IntArrayImpl: IntArray {
  public let cself: IEGenCObject
  public let owner: Bool

  // internal main initializer
  internal required init(_ _cself: IEGenCObject, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
  }

  deinit {
    release_IntArrayImpl(cself, owner)
  }

  public convenience init() {
    var err = IEGenCObject()
    self.init(create_IntArray(&err), true)
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

}

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
 * An example for with overloaded operators.
 */
public protocol IntArray {
  var cself: IEGenCObject { get }

  func keepIEGenReference(_ object: Any)
  subscript(i: Int) -> Int { get set }
  subscript(i: String) -> Int { get }
  subscript(i: Double) -> Int { get }
}

extension IntArray {
  

  public subscript(i: Int) -> Int {
    get {
      let swifttosci = CInt(i)
      let result = _func_IegenExample_IntArray__getitem_(cself, swifttosci)
      let sctoswiftresult = Int(result)
      return sctoswiftresult
    }

    set(value) {
      let swifttosci = CInt(i)
      let swifttoscvalue = CInt(value)
      _func_IegenExample_IntArray__setitem_(cself, swifttosci, swifttoscvalue)
    }
  }



  public subscript(i: String) -> Int {
    let swifttosci = strdup(i)!
    let result = _func_IegenExample_IntArray__getitem__1(cself, swifttosci)
    let sctoswiftresult = Int(result)
    return sctoswiftresult
  }



  public subscript(i: Double) -> Int {
    let result = _func_IegenExample_IntArray__getitem__2(cself, i)
    let sctoswiftresult = Int(result)
    return sctoswiftresult
  }

}

public class IntArrayImpl: IntArray {
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
    release_IegenExample_IntArrayImpl(cself, owner)
  }

  public func keepIEGenReference(_ object: Any) {
    self.refs.append(object)
  }

  public convenience init() {
    var iegenErr = IEGenCObject()
    self.init(create_IegenExample_IntArray(&iegenErr), true)
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

  class var iegenCxxTypeName : String { return "iegen::example::IntArray" }
}

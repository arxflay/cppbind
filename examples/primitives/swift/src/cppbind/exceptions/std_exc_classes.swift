/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 10/18/2022-08:51.
 * Please do not change it manually.
 */

import CWrapper
import Foundation

public class StdException: Error {

  /// An internal property to keep a reference to the original C++ object.
  /// It is intended to be used by the generated code.
  public let cself: CppBindCObject

  /// An internal property to keep track whether Swift is responsible for deallocating the underlying C++ object or not.
  /// It is intended to be used by the generated code.
  public let owner: Bool
  private var refs: [Any]

  /// internal main initializer
  internal required init(_ _cself: CppBindCObject, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
    self.refs = []
  }

  deinit {
    release_Std_StdException(cself, owner)
  }

  /// An internal method to bind the lifetimes of the current and another object.
  /// It is intended to be used by the generated code.
  public func keepCppBindReference(_ object: Any) {
    self.refs.append(object)
  }

  /// internal dummy initializer to prevent automatic initializer inheritance
  internal init(_cself: CppBindCObject, _self: StdException) {
    fatalError("A dummy internal initializer should not be called.")
  }

  public func what() -> String {

    var cppbindErr = CppBindCObject()
    let result = _func_Std_StdException_what(cself, &cppbindErr)
    if cppbindErr.type != nil {
      let errorType = String(cString: cppbindErr.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(cppbindErr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        cppbindErr.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    let sctoswiftresult = String(cString: result)
    return sctoswiftresult
  }

  /// An internal property to keep an information about the underlying C++ object type.
  /// It is intended to be used by the generated code.
  class var cppbindCxxTypeName : String { return "std::exception" }

  /// An internal method to create a Swift object from a C++ object.
  /// It is intended to be used by the generated code.
  class func cppbindConstructObject(_ cppbindObj: CppBindCObject, _ owner: Bool = false) -> StdException {
    let typeName = String(cString: cppbindObj.type)
    var obj : StdException
    switch(typeName) {
    case(FileError.cppbindCxxTypeName):
      obj = FileError(cppbindObj, owner)
    case(StdDomainError.cppbindCxxTypeName):
      obj = StdDomainError(cppbindObj, owner)
    case(StdInvalidArgument.cppbindCxxTypeName):
      obj = StdInvalidArgument(cppbindObj, owner)
    case(StdLengthError.cppbindCxxTypeName):
      obj = StdLengthError(cppbindObj, owner)
    case(StdOutOfRange.cppbindCxxTypeName):
      obj = StdOutOfRange(cppbindObj, owner)
    case(StdOverflowError.cppbindCxxTypeName):
      obj = StdOverflowError(cppbindObj, owner)
    case(StdRangeError.cppbindCxxTypeName):
      obj = StdRangeError(cppbindObj, owner)
    case(StdUnderflowError.cppbindCxxTypeName):
      obj = StdUnderflowError(cppbindObj, owner)
    case(SystemError.cppbindCxxTypeName):
      obj = SystemError(cppbindObj, owner)
    case(StdBadAlloc.cppbindCxxTypeName):
      obj = StdBadAlloc(cppbindObj, owner)
    case(StdBadCast.cppbindCxxTypeName):
      obj = StdBadCast(cppbindObj, owner)
    case(StdBadTypeId.cppbindCxxTypeName):
      obj = StdBadTypeId(cppbindObj, owner)
    case(StdLogicError.cppbindCxxTypeName):
      obj = StdLogicError(cppbindObj, owner)
    case(StdRuntimeError.cppbindCxxTypeName):
      obj = StdRuntimeError(cppbindObj, owner)
    default:
      obj = StdException(cppbindObj, owner)
    }
    return obj
  }
}

public class StdLogicError: StdException {
  /// internal main initializer
  internal required init(_ _cself: CppBindCObject, _ _owner: Bool = false) {
    super.init(_cself, _owner)
  }

  /// internal dummy initializer to prevent automatic initializer inheritance
  internal init(_cself: CppBindCObject, _self: StdLogicError) {
    fatalError("A dummy internal initializer should not be called.")
  }

  /// An internal property to keep an information about the underlying C++ object type.
  /// It is intended to be used by the generated code.
  override class var cppbindCxxTypeName : String { return "std::logic_error" }

  /// An internal method to create a Swift object from a C++ object.
  /// It is intended to be used by the generated code.
  override class func cppbindConstructObject(_ cppbindObj: CppBindCObject, _ owner: Bool = false) -> StdLogicError {
    let typeName = String(cString: cppbindObj.type)
    var obj : StdLogicError
    switch(typeName) {
    case(StdDomainError.cppbindCxxTypeName):
      obj = StdDomainError(cppbindObj, owner)
    case(StdInvalidArgument.cppbindCxxTypeName):
      obj = StdInvalidArgument(cppbindObj, owner)
    case(StdLengthError.cppbindCxxTypeName):
      obj = StdLengthError(cppbindObj, owner)
    case(StdOutOfRange.cppbindCxxTypeName):
      obj = StdOutOfRange(cppbindObj, owner)
    default:
      obj = StdLogicError(cppbindObj, owner)
    }
    return obj
  }
}

public class StdRuntimeError: StdException {
  /// internal main initializer
  internal required init(_ _cself: CppBindCObject, _ _owner: Bool = false) {
    super.init(_cself, _owner)
  }

  /// internal dummy initializer to prevent automatic initializer inheritance
  internal init(_cself: CppBindCObject, _self: StdRuntimeError) {
    fatalError("A dummy internal initializer should not be called.")
  }

  /// An internal property to keep an information about the underlying C++ object type.
  /// It is intended to be used by the generated code.
  override class var cppbindCxxTypeName : String { return "std::runtime_error" }

  /// An internal method to create a Swift object from a C++ object.
  /// It is intended to be used by the generated code.
  override class func cppbindConstructObject(_ cppbindObj: CppBindCObject, _ owner: Bool = false) -> StdRuntimeError {
    let typeName = String(cString: cppbindObj.type)
    var obj : StdRuntimeError
    switch(typeName) {
    case(StdOverflowError.cppbindCxxTypeName):
      obj = StdOverflowError(cppbindObj, owner)
    case(StdRangeError.cppbindCxxTypeName):
      obj = StdRangeError(cppbindObj, owner)
    case(StdUnderflowError.cppbindCxxTypeName):
      obj = StdUnderflowError(cppbindObj, owner)
    default:
      obj = StdRuntimeError(cppbindObj, owner)
    }
    return obj
  }
}

public class StdDomainError: StdLogicError {
  /// internal main initializer
  internal required init(_ _cself: CppBindCObject, _ _owner: Bool = false) {
    super.init(_cself, _owner)
  }

  /// An internal property to keep an information about the underlying C++ object type.
  /// It is intended to be used by the generated code.
  override class var cppbindCxxTypeName : String { return "std::domain_error" }
}

public class StdInvalidArgument: StdLogicError {
  /// internal main initializer
  internal required init(_ _cself: CppBindCObject, _ _owner: Bool = false) {
    super.init(_cself, _owner)
  }

  /// An internal property to keep an information about the underlying C++ object type.
  /// It is intended to be used by the generated code.
  override class var cppbindCxxTypeName : String { return "std::invalid_argument" }
}

public class StdLengthError: StdLogicError {
  /// internal main initializer
  internal required init(_ _cself: CppBindCObject, _ _owner: Bool = false) {
    super.init(_cself, _owner)
  }

  /// An internal property to keep an information about the underlying C++ object type.
  /// It is intended to be used by the generated code.
  override class var cppbindCxxTypeName : String { return "std::length_error" }
}

public class StdOutOfRange: StdLogicError {
  /// internal main initializer
  internal required init(_ _cself: CppBindCObject, _ _owner: Bool = false) {
    super.init(_cself, _owner)
  }

  /// An internal property to keep an information about the underlying C++ object type.
  /// It is intended to be used by the generated code.
  override class var cppbindCxxTypeName : String { return "std::out_of_range" }
}

public class StdRangeError: StdRuntimeError {
  /// internal main initializer
  internal required init(_ _cself: CppBindCObject, _ _owner: Bool = false) {
    super.init(_cself, _owner)
  }

  /// An internal property to keep an information about the underlying C++ object type.
  /// It is intended to be used by the generated code.
  override class var cppbindCxxTypeName : String { return "std::range_error" }
}

public class StdOverflowError: StdRuntimeError {
  /// internal main initializer
  internal required init(_ _cself: CppBindCObject, _ _owner: Bool = false) {
    super.init(_cself, _owner)
  }

  /// An internal property to keep an information about the underlying C++ object type.
  /// It is intended to be used by the generated code.
  override class var cppbindCxxTypeName : String { return "std::overflow_error" }
}

public class StdUnderflowError: StdRuntimeError {
  /// internal main initializer
  internal required init(_ _cself: CppBindCObject, _ _owner: Bool = false) {
    super.init(_cself, _owner)
  }

  /// An internal property to keep an information about the underlying C++ object type.
  /// It is intended to be used by the generated code.
  override class var cppbindCxxTypeName : String { return "std::underflow_error" }
}

public class StdBadAlloc: StdException {
  /// internal main initializer
  internal required init(_ _cself: CppBindCObject, _ _owner: Bool = false) {
    super.init(_cself, _owner)
  }

  /// An internal property to keep an information about the underlying C++ object type.
  /// It is intended to be used by the generated code.
  override class var cppbindCxxTypeName : String { return "std::bad_alloc" }
}

public class StdBadCast: StdException {
  /// internal main initializer
  internal required init(_ _cself: CppBindCObject, _ _owner: Bool = false) {
    super.init(_cself, _owner)
  }

  /// An internal property to keep an information about the underlying C++ object type.
  /// It is intended to be used by the generated code.
  override class var cppbindCxxTypeName : String { return "std::bad_cast" }
}

public class StdBadTypeId: StdException {
  /// internal main initializer
  internal required init(_ _cself: CppBindCObject, _ _owner: Bool = false) {
    super.init(_cself, _owner)
  }

  /// An internal property to keep an information about the underlying C++ object type.
  /// It is intended to be used by the generated code.
  override class var cppbindCxxTypeName : String { return "std::bad_typeid" }
}

/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 08/14/2022-10:58.
 * Please do not change it manually.
 */

import CWrapper
import Foundation

public typealias Item = List.Item

/// An example with multi level nested type using header_code_fragment to create an alias in target languages.
public class List {

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
    release_CppbindExample_List(cself, owner)
  }

  /// An internal method to bind the lifetimes of the current and another object.
  /// It is intended to be used by the generated code.
  public func keepCppBindReference(_ object: Any) {
    self.refs.append(object)
  }

  public convenience init() {
    var cppbindErr = CppBindCObject()
    self.init(create_CppbindExample_List(&cppbindErr), true)
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
  }

  public var back: List.Item {
    var cppbindErr = CppBindCObject()
    let result = _prop_get_CppbindExample_List_back(cself, &cppbindErr)
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
    var sctoswiftresult: List.Item
    sctoswiftresult = List.Item(result)
    return sctoswiftresult
  }

  public class Item {

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
      release_List_Item(cself, owner)
    }

    /// An internal method to bind the lifetimes of the current and another object.
    /// It is intended to be used by the generated code.
    public func keepCppBindReference(_ object: Any) {
      self.refs.append(object)
    }

    public convenience init(v: List.Item.Value) {
      let swifttoscv = v.cself
      var cppbindErr = CppBindCObject()
      self.init(create_List_Item(swifttoscv, &cppbindErr), true)
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
    }

    public var value: List.Item.Value {
      get {
        let result = _prop_get_List_Item_value(cself)
        var sctoswiftresult: List.Item.Value
        sctoswiftresult = List.Item.Value(result)
        sctoswiftresult.keepCppBindReference(self)
        return sctoswiftresult
      }

      set(value) {
        let swifttoscvalue = value.cself
        _prop_set_List_Item_value(cself, swifttoscvalue)
      }
    }

    public class Value {

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
        release_List_Item_Value(cself, owner)
      }

      /// An internal method to bind the lifetimes of the current and another object.
      /// It is intended to be used by the generated code.
      public func keepCppBindReference(_ object: Any) {
        self.refs.append(object)
      }

      public convenience init(value: Int) {
        let swifttoscvalue = CInt(value)
        var cppbindErr = CppBindCObject()
        self.init(create_List_Item_Value(swifttoscvalue, &cppbindErr), true)
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
      }

      public var value: Int {
        get {
          let result = _prop_get_List_Item_Value_value(cself)
          let sctoswiftresult = Int(result)
          return sctoswiftresult
        }

        set(value) {
          let swifttoscvalue = CInt(value)
          _prop_set_List_Item_Value_value(cself, swifttoscvalue)
        }
      }

      /// An internal property to keep an information about the underlying C++ object type.
      /// It is intended to be used by the generated code.
      class var cppbindCxxTypeName : String { return "cppbind::example::List::Item::Value" }
    }

    /// An internal property to keep an information about the underlying C++ object type.
    /// It is intended to be used by the generated code.
    class var cppbindCxxTypeName : String { return "cppbind::example::List::Item" }
  }

  public func push_back(item: List.Item) -> Void {

    let swifttoscitem = item.cself
    var cppbindErr = CppBindCObject()
    _func_CppbindExample_List_push_back(cself, swifttoscitem, &cppbindErr)
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
  }

  public func pop_back() -> Void {

    var cppbindErr = CppBindCObject()
    _func_CppbindExample_List_pop_back(cself, &cppbindErr)
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
  }

  /// An internal property to keep an information about the underlying C++ object type.
  /// It is intended to be used by the generated code.
  class var cppbindCxxTypeName : String { return "cppbind::example::List" }
}

public typealias Value = List.Item.Value

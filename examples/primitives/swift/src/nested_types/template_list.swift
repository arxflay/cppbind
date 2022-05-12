/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 05/12/2022-10:26.
 * Please do not change it manually.
 */

import CWrapper
import Foundation

/**
 * An example with template nested types.
 */
public class TemplateListInt {

  public let cself: CppBindCObject
  public let owner: Bool
  private var refs: [Any]

  /// internal main initializer
  internal required init(_ _cself: CppBindCObject, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
    self.refs = []
  }

  deinit {
    release_CppbindExample_TemplateListInt(cself, owner)
  }

  public func keepCppBindReference(_ object: Any) {
    self.refs.append(object)
  }

  public convenience init() {
    var cppbindErr = CppBindCObject()
    self.init(create_CppbindExample_TemplateListInt(&cppbindErr), true)
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

  public class Item {

    public let cself: CppBindCObject
    public let owner: Bool
    private var refs: [Any]

    /// internal main initializer
    internal required init(_ _cself: CppBindCObject, _ _owner: Bool = false) {
      self.cself = _cself
      self.owner = _owner
      self.refs = []
    }

    deinit {
      release_TemplateListInt_Item(cself, owner)
    }

    public func keepCppBindReference(_ object: Any) {
      self.refs.append(object)
    }

    public convenience init(v: Int) {
      let swifttoscv = CInt(v)
      var cppbindErr = CppBindCObject()
      self.init(create_TemplateListInt_Item(swifttoscv, &cppbindErr), true)
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
        let result = _prop_get_TemplateListInt_Item_value(cself)
        let sctoswiftresult = Int(result)
        return sctoswiftresult
      }

      set(value) {
        let swifttoscvalue = CInt(value)
        _prop_set_TemplateListInt_Item_value(cself, swifttoscvalue)
      }
    }

    class var cppbindCxxTypeName : String { return "cppbind::example::TemplateList<int>::Item" }
  }

  class var cppbindCxxTypeName : String { return "cppbind::example::TemplateList<int>" }
}

/**
 * An example with template nested types.
 */
public class TemplateListDouble {

  public let cself: CppBindCObject
  public let owner: Bool
  private var refs: [Any]

  /// internal main initializer
  internal required init(_ _cself: CppBindCObject, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
    self.refs = []
  }

  deinit {
    release_CppbindExample_TemplateListDouble(cself, owner)
  }

  public func keepCppBindReference(_ object: Any) {
    self.refs.append(object)
  }

  public convenience init() {
    var cppbindErr = CppBindCObject()
    self.init(create_CppbindExample_TemplateListDouble(&cppbindErr), true)
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

  public class Item {

    public let cself: CppBindCObject
    public let owner: Bool
    private var refs: [Any]

    /// internal main initializer
    internal required init(_ _cself: CppBindCObject, _ _owner: Bool = false) {
      self.cself = _cself
      self.owner = _owner
      self.refs = []
    }

    deinit {
      release_TemplateListDouble_Item(cself, owner)
    }

    public func keepCppBindReference(_ object: Any) {
      self.refs.append(object)
    }

    public convenience init(v: Double) {
      var cppbindErr = CppBindCObject()
      self.init(create_TemplateListDouble_Item(v, &cppbindErr), true)
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

    public var value: Double {
      get {
        let result = _prop_get_TemplateListDouble_Item_value(cself)
        return result
      }

      set(value) {
        _prop_set_TemplateListDouble_Item_value(cself, value)
      }
    }

    class var cppbindCxxTypeName : String { return "cppbind::example::TemplateList<double>::Item" }
  }

  class var cppbindCxxTypeName : String { return "cppbind::example::TemplateList<double>" }
}

import Foundation

import CWrapper

/**
 * Structure to describe user.
 */
public class UserInfo  {
    
    public let cself : UnsafeMutableRawPointer
    public let owner : Bool

    // internal main initializer
    internal required init(_ _cself: UnsafeMutableRawPointer , _ _owner: Bool = false) {
      self.cself = _cself
      self.owner = _owner
    }
    deinit {
      if owner {
        release_UserInfo(cself)
      }
    }
    
    /**
     * Creates user
     */
    public convenience init(user_name: String, user_age: UInt) {

        let swift_to_sc_user_name = strdup(user_name)!
        let swift_to_sc_user_age = CUnsignedInt(user_age)
        self.init(create_UserInfo(swift_to_sc_user_name, swift_to_sc_user_age), true)
    }
    
    /**
     * Age of user.
     */
    public var age: UInt {
          get {
            let result = _prop_get_UserInfo_age(cself);
            let sc_to_swift_result = UInt(result)
            return sc_to_swift_result
          }
          
          
          set(value) {
            let swift_to_sc_value = CUnsignedInt(value)
            _prop_set_UserInfo_age(cself, swift_to_sc_value)
          }
          
    }

    /**
     * Name of user.
     */
    public var name: String {
          get {
            let result = _prop_get_UserInfo_name(cself);
            let sc_to_swift_result = String(cString: result)
            defer{
              result.deallocate()
            }
            return sc_to_swift_result
          }
          
          
          set(value) {
            let swift_to_sc_value = strdup(value)!
            _prop_set_UserInfo_name(cself, swift_to_sc_value)
          }
          
    }

    /**
     * Some wishes of the user.
     */
    public var want_a_drink: Bool {
          get {
            let result = _prop_get_UserInfo_want_a_drink(cself);
            
            return result
          }
          
          
          set(value) {
            
            _prop_set_UserInfo_want_a_drink(cself, value)
          }
          
    }
    
}
/**
 * Host class.
 */
public class Host  {
    
    public let cself : UnsafeMutableRawPointer
    public let owner : Bool

    // internal main initializer
    internal required init(_ _cself: UnsafeMutableRawPointer , _ _owner: Bool = false) {
      self.cself = _cself
      self.owner = _owner
    }
    deinit {
      if owner {
        release_Host(cself)
      }
    }
    
    /**
     * Creates host
     */
    public convenience init() {

        self.init(create_Host(), true)
    }
    
    /**
     * Greeting function.
     */
    public func hello(user: UserInfo) -> String {

        let swift_to_sc_user = user.cself
        var err = ErrorObj()
        let result = _func_Host_hello(cself, swift_to_sc_user, &err);
        let sc_to_swift_result = String(cString: result)
        defer{
          result.deallocate()
        }
        if (err.is_err) {
            let err_type = Int(err.err_type)
            switch(err_type) {
                case(1):
                    let exc_obj = Exceptions.StdException(err.err_ptr, true)
                    ExceptionHandler.handleUncaughtException(exc_obj.what())
                default:
                    ExceptionHandler.handleUncaughtException("Uncaught Exception")
            }
        }
        return sc_to_swift_result;
    }
    /**
     * Welcome function.
     */
    public func welcome(user: UserInfo) -> String {

        let swift_to_sc_user = user.cself
        var err = ErrorObj()
        let result = _func_Host_welcome(cself, swift_to_sc_user, &err);
        let sc_to_swift_result = String(cString: result)
        defer{
          result.deallocate()
        }
        if (err.is_err) {
            let err_type = Int(err.err_type)
            switch(err_type) {
                case(1):
                    let exc_obj = Exceptions.StdException(err.err_ptr, true)
                    ExceptionHandler.handleUncaughtException(exc_obj.what())
                default:
                    ExceptionHandler.handleUncaughtException("Uncaught Exception")
            }
        }
        return sc_to_swift_result;
    }
}
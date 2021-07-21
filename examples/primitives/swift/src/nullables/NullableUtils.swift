/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 07/21/2021-06:13.
 * Please do not change it manually.
 */

import Foundation
import CWrapper




public class NumInt  {
    
    public let cself : UnsafeMutableRawPointer
    public let owner : Bool

    // internal main initializer
    internal required init(_ _cself: UnsafeMutableRawPointer, _ _owner: Bool = false) {
      self.cself = _cself
      self.owner = _owner
    }
    deinit {
      if owner {
        release_NumInt(cself)
      }
    }
    
    
    public convenience init(val_: Int) {

        let swift_to_sc_val_ = CInt(val_)
        self.init(create_NumInt(swift_to_sc_val_), true)
    }
    

    public var value: Int {
          get {
            let result = _prop_get_NumInt_value(cself);
            let sc_to_swift_result = Int(result)
            return sc_to_swift_result
          }
    }
    
}

public class NumDouble  {
    
    public let cself : UnsafeMutableRawPointer
    public let owner : Bool

    // internal main initializer
    internal required init(_ _cself: UnsafeMutableRawPointer, _ _owner: Bool = false) {
      self.cself = _cself
      self.owner = _owner
    }
    deinit {
      if owner {
        release_NumDouble(cself)
      }
    }
    
    
    public convenience init(val_: Double) {

        
        self.init(create_NumDouble(val_), true)
    }
    

    public var value: Double {
          get {
            let result = _prop_get_NumDouble_value(cself);
            
            return result
          }
    }
    
}
/**
 * An example with nullable arguments.
 */
public class NullableUtils  {
    
    public let cself : UnsafeMutableRawPointer
    public let owner : Bool

    // internal main initializer
    internal required init(_ _cself: UnsafeMutableRawPointer, _ _owner: Bool = false) {
      self.cself = _cself
      self.owner = _owner
    }
    deinit {
      if owner {
        release_NullableUtils(cself)
      }
    }
    
    
    public convenience init(num: NumDouble?) {

        let swift_to_sc_num = num?.cself
        self.init(create_NullableUtils(swift_to_sc_num), true)
    }
    

    public var nullable: NumDouble? {
          get {
            let result = _prop_get_NullableUtils_nullable(cself);
            let sc_to_swift_result: NumDouble?
            if let result = result {
                sc_to_swift_result = NumDouble(result)
            } else {
                sc_to_swift_result = nil
            }
            return sc_to_swift_result
          }
          
          
          set(value) {
            let swift_to_sc_value = value?.cself
            _prop_set_NullableUtils_setNullable(cself, swift_to_sc_value)
          }
          
    }


    public var nonNull: NumDouble {
          get {
            let result = _prop_get_NullableUtils_nonNull(cself);
            let sc_to_swift_result = NumDouble(result)
            return sc_to_swift_result
          }
          
          
          set(value) {
            let swift_to_sc_value = value.cself
            _prop_set_NullableUtils_setNonNull(cself, swift_to_sc_value)
          }
          
    }


    public var numDouble: NumDouble? {
          get {
            let result = _prop_get_NullableUtils_numDouble(cself);
            let sc_to_swift_result: NumDouble?
            if let result = result {
                sc_to_swift_result = NumDouble(result)
            } else {
                sc_to_swift_result = nil
            }
            return sc_to_swift_result
          }
          
          set(value) {
            let swift_to_sc_value = value?.cself
            _prop_set_NullableUtils_numDouble(cself, swift_to_sc_value)
          }
          
    }


    public var numInt: NumInt {
          get {
            let result = _prop_get_NullableUtils_numInt(cself);
            let sc_to_swift_result = NumInt(result, true)
            return sc_to_swift_result
          }
          
          set(value) {
            let swift_to_sc_value = value.cself
            _prop_set_NullableUtils_numInt(cself, swift_to_sc_value)
          }
          
    }
    
    public static func max(first: NumDouble?, second: NumDouble) -> NumDouble? {

        let swift_to_sc_first = first?.cself
        let swift_to_sc_second = second.cself
        var err = ErrorObj()
        let result = _func_NullableUtils_max(swift_to_sc_first, swift_to_sc_second, &err);
        let sc_to_swift_result: NumDouble?
        if let result = result {
            sc_to_swift_result = NumDouble(result)
        } else {
            sc_to_swift_result = nil
        }
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
        return sc_to_swift_result;
    }

    public static func max(first: NumInt?, second: NumInt?) -> NumInt? {

        let swift_to_sc_first = first?.cself
        let swift_to_sc_second = second?.cself
        var err = ErrorObj()
        let result = _func_NullableUtils_max_1(swift_to_sc_first, swift_to_sc_second, &err);
        let sc_to_swift_result: NumInt?
            if let result = result {
                sc_to_swift_result = NumInt(result, true)
            } else {
                sc_to_swift_result = nil
            }
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
        return sc_to_swift_result;
    }

    public static func checkNonnullArg(number: NumDouble) -> Void {

        let swift_to_sc_number = number.cself
        var err = ErrorObj()
        _func_NullableUtils_checkNonnullArg(swift_to_sc_number, &err);
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

    public static func checkNonnullReturn() -> NumDouble {

        var err = ErrorObj()
        let result = _func_NullableUtils_checkNonnullReturn(&err);
        let sc_to_swift_result = NumDouble(result)
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
        return sc_to_swift_result;
    }
}
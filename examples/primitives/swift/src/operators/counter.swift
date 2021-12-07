/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 12/07/2021-15:55.
 * Please do not change it manually.
 */

import CWrapper
import Foundation
/**
 * An example for with overloaded methods.
 */
public class Counter  {
    
    public let cself : CObject
    public let owner : Bool

    // internal main initializer
    internal required init(_ _cself: CObject, _ _owner: Bool = false) {
        self.cself = _cself
        self.owner = _owner
    }
    deinit {
      release_Counter(cself, owner)
    }
    
    /**
     * Counter constructor.
     */
    public convenience init(count: Int) {

        let swift_to_sc_count = CInt(count)
        var err = ErrorObj()
        self.init(create_Counter(swift_to_sc_count, &err), true)
        let err_type = Int(err.err_type)
        if (err_type != 0) {
            switch(err_type) {
                case(1):
                    let exc_obj = StdException(CObject(type: strdup("std::exception"), ptr: err.err_ptr), true)
                    ExceptionHandler.handleUncaughtException(exc_obj.what())
                default:
                    ExceptionHandler.handleUncaughtException("Uncaught Exception")
            }
        }
    }
    /**
     * Getter for count.
     */
    public var count: Int {
        get {
            let result = _prop_get_Counter_count(cself)
            let sc_to_swift_result = Int(result)
            return sc_to_swift_result
        }
        
    }
    /**
     * Plus operator
     */
    public static func +(cself: Counter, counter: Counter) -> Counter {
        let swift_to_sc_counter = counter.cself
        var err = ErrorObj()
        let result = _func_Counter_operator_add_(cself.cself, swift_to_sc_counter, &err)
        let err_type = Int(err.err_type)
        if (err_type != 0) {
            switch(err_type) {
                case(1):
                    let exc_obj = StdException(CObject(type: strdup("std::exception"), ptr: err.err_ptr), true)
                    ExceptionHandler.handleUncaughtException(exc_obj.what())
                default:
                    ExceptionHandler.handleUncaughtException("Uncaught Exception")
            }
        }
      var sc_to_swift_result: Counter
        sc_to_swift_result = Counter(result, true)
      return sc_to_swift_result
    }
    /**
     * Comparison operator for kotlin
     */
    public func compareTo(counter: Counter) -> Int {

        let swift_to_sc_counter = counter.cself
        var err = ErrorObj()
        let result = _func_Counter_compareTo(cself, swift_to_sc_counter, &err)
        let err_type = Int(err.err_type)
        if (err_type != 0) {
            switch(err_type) {
                case(1):
                    let exc_obj = StdException(CObject(type: strdup("std::exception"), ptr: err.err_ptr), true)
                    ExceptionHandler.handleUncaughtException(exc_obj.what())
                default:
                    ExceptionHandler.handleUncaughtException("Uncaught Exception")
            }
        }
      let sc_to_swift_result = Int(result)
      return sc_to_swift_result
    }

    public static func >(cself: Counter, counter: Counter) -> Bool {
        let swift_to_sc_counter = counter.cself
        var err = ErrorObj()
        let result = _func_Counter_operator_gt_(cself.cself, swift_to_sc_counter, &err)
        let err_type = Int(err.err_type)
        if (err_type != 0) {
            switch(err_type) {
                case(1):
                    let exc_obj = StdException(CObject(type: strdup("std::exception"), ptr: err.err_ptr), true)
                    ExceptionHandler.handleUncaughtException(exc_obj.what())
                default:
                    ExceptionHandler.handleUncaughtException("Uncaught Exception")
            }
        }
      
      return result
    }

    public static func +=(cself: Counter, counter: Counter) -> Counter {
        let swift_to_sc_counter = counter.cself
        var err = ErrorObj()
        let result = _func_Counter_operator_iadd_(cself.cself, swift_to_sc_counter, &err)
        let err_type = Int(err.err_type)
        if (err_type != 0) {
            switch(err_type) {
                case(1):
                    let exc_obj = StdException(CObject(type: strdup("std::exception"), ptr: err.err_ptr), true)
                    ExceptionHandler.handleUncaughtException(exc_obj.what())
                default:
                    ExceptionHandler.handleUncaughtException("Uncaught Exception")
            }
        }
      var sc_to_swift_result: Counter
        sc_to_swift_result = Counter(result)
      return sc_to_swift_result
    }
}
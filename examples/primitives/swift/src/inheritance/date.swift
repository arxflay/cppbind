/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 10/18/2021-06:58.
 * Please do not change it manually.
 */

import CWrapper
import Foundation

public class Date : Base {
    
    public let cself : UnsafeMutableRawPointer
    public let owner : Bool

    // internal main initializer
    internal required init(_ _cself: UnsafeMutableRawPointer, _ _owner: Bool = false) {
        self.cself = _cself
        self.owner = _owner
    }
    deinit {
        if owner {
            release_Date(cself)
        }
    }
    
    
    public convenience init(d: Int, m: Int, y: Int) {

        let swift_to_sc_d = CInt(d)
        let swift_to_sc_m = CInt(m)
        let swift_to_sc_y = CInt(y)
        self.init(create_Date(swift_to_sc_d, swift_to_sc_m, swift_to_sc_y), true)
    }
    
    public var date: String {
        get {
            let result = _prop_get_Date_date(cself)
            let sc_to_swift_result = String(cString: result)
            defer{
              result.deallocate()
            }
            return sc_to_swift_result
        }
        
    }
    
    public func value() -> String {

        var err = ErrorObj()
        let result = _func_Date_value(cself, &err)
        let sc_to_swift_result = String(cString: result)
        defer{
          result.deallocate()
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
        return sc_to_swift_result
    }
}
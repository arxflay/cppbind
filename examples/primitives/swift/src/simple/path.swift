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




public class Path  {
    
    public let cself : UnsafeMutableRawPointer
    public let owner : Bool

    // internal main initializer
    internal required init(_ _cself: UnsafeMutableRawPointer, _ _owner: Bool = false) {
      self.cself = _cself
      self.owner = _owner
    }
    deinit {
      if owner {
        release_Path(cself)
      }
    }
    
    
    public convenience init(_value: String) {

        let swift_to_sc__value = strdup(_value)!
        self.init(create_Path(swift_to_sc__value), true)
    }
    

    public var value: String {
          get {
            let result = _prop_get_Path_value(cself);
            let sc_to_swift_result = String(cString: result)
            defer{
              result.deallocate()
            }
            return sc_to_swift_result
          }
    }
    
    public func toString() -> String {

        var err = ErrorObj()
        let result = _func_Path_toString(cself, &err);
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
        return sc_to_swift_result;
    }
}
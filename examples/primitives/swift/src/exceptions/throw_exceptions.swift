/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 09/25/2021-11:25.
 * Please do not change it manually.
 */

import CWrapper
import Foundation

public class ThrowExc  {
    
    public let cself : UnsafeMutableRawPointer
    public let owner : Bool

    // internal main initializer
    internal required init(_ _cself: UnsafeMutableRawPointer, _ _owner: Bool = false) {
        self.cself = _cself
        self.owner = _owner
    }
    deinit {
        if owner {
            release_ThrowExc(cself)
        }
    }
    
    
    
    
    public static func getByKey(m: Dictionary<Int, Int>, key: Int) throws -> Int {

        let _key_swift_to_sc_m = UnsafeMutablePointer<CInt>.allocate(capacity: m.count)
        let _val_swift_to_sc_m = UnsafeMutablePointer<CInt>.allocate(capacity: m.count)
        var swift_to_sc_m = CDataMap()
        swift_to_sc_m.keys = UnsafeMutableRawPointer(_key_swift_to_sc_m)
        swift_to_sc_m.values = UnsafeMutableRawPointer(_val_swift_to_sc_m)
        swift_to_sc_m.size = Int64(m.count)
        var _i_m = 0
        for (key_m, val_m) in m {
            let swift_to_sc_key_m = CInt(key_m)
            let swift_to_sc_val_m = CInt(val_m)
            _key_swift_to_sc_m[_i_m] = swift_to_sc_key_m
            _val_swift_to_sc_m[_i_m] = swift_to_sc_val_m
            _i_m += 1
        }
        let swift_to_sc_key = CInt(key)
        var err = ErrorObj()
        let result = _func_ThrowExc_getByKey(swift_to_sc_m, swift_to_sc_key, &err)
        let sc_to_swift_result = Int(result)
        let err_type = Int(err.err_type)
        if (err_type != 0) {
            switch(err_type) {
                case(1):
                    throw StdOutOfRange(err.err_ptr, true)
                case(2):
                    throw SystemError(err.err_ptr, true)
                case(3):
                    let exc_obj = StdException(err.err_ptr, true)
                    ExceptionHandler.handleUncaughtException(exc_obj.what())
                default:
                    ExceptionHandler.handleUncaughtException("Uncaught Exception")
            }
        }
          
        swift_to_sc_m.keys.deallocate()
        swift_to_sc_m.values.deallocate()
        return sc_to_swift_result
    }
}
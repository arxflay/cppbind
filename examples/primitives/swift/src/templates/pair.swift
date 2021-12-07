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

public class PairEmployee  {
    
    public let cself : CObject
    public let owner : Bool

    // internal main initializer
    internal required init(_ _cself: CObject, _ _owner: Bool = false) {
        self.cself = _cself
        self.owner = _owner
    }
    deinit {
      release_PairEmployee(cself, owner)
    }
    
    
    public convenience init(first: String, second: Employee) {

        let swift_to_sc_first = strdup(first)!
        let swift_to_sc_second = second.cself
        var err = ErrorObj()
        self.init(create_PairEmployee(swift_to_sc_first, swift_to_sc_second, &err), true)
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
    
    public var first: String {
        get {
            let result = _prop_get_PairEmployee_first(cself)
            let sc_to_swift_result = String(cString: result)
            defer {
              result.deallocate()
            }
            return sc_to_swift_result
        }
        
    }

    public var second: Employee {
        get {
            let result = _prop_get_PairEmployee_second(cself)
            var sc_to_swift_result: Employee
                sc_to_swift_result = Employee(result, true)
            return sc_to_swift_result
        }
        
    }
    
}

public class PairStudent  {
    
    public let cself : CObject
    public let owner : Bool

    // internal main initializer
    internal required init(_ _cself: CObject, _ _owner: Bool = false) {
        self.cself = _cself
        self.owner = _owner
    }
    deinit {
      release_PairStudent(cself, owner)
    }
    
    
    public convenience init(first: String, second: Student) {

        let swift_to_sc_first = strdup(first)!
        let swift_to_sc_second = second.cself
        var err = ErrorObj()
        self.init(create_PairStudent(swift_to_sc_first, swift_to_sc_second, &err), true)
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
    
    public var first: String {
        get {
            let result = _prop_get_PairStudent_first(cself)
            let sc_to_swift_result = String(cString: result)
            defer {
              result.deallocate()
            }
            return sc_to_swift_result
        }
        
    }

    public var second: Student {
        get {
            let result = _prop_get_PairStudent_second(cself)
            var sc_to_swift_result: Student
                sc_to_swift_result = Student(result, true)
            return sc_to_swift_result
        }
        
    }
    
}
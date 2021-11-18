/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 11/18/2021-06:07.
 * Please do not change it manually.
 */

import CWrapper
import Foundation

public class PairEmployee  {
    
    public let cself : UnsafeMutableRawPointer
    public let owner : Bool

    // internal main initializer
    internal required init(_ _cself: UnsafeMutableRawPointer, _ _owner: Bool = false) {
        self.cself = _cself
        self.owner = _owner
    }
    deinit {
        if owner {
            release_PairEmployee(cself)
        }
    }
    
    
    public convenience init(first: String, second: Employee) {

        let swift_to_sc_first = strdup(first)!
        let swift_to_sc_second = second.cself
        self.init(create_PairEmployee(swift_to_sc_first, swift_to_sc_second), true)
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
            let sc_to_swift_result = Employee(result, true)
            return sc_to_swift_result
        }
        
    }
    
}

public class PairStudent  {
    
    public let cself : UnsafeMutableRawPointer
    public let owner : Bool

    // internal main initializer
    internal required init(_ _cself: UnsafeMutableRawPointer, _ _owner: Bool = false) {
        self.cself = _cself
        self.owner = _owner
    }
    deinit {
        if owner {
            release_PairStudent(cself)
        }
    }
    
    
    public convenience init(first: String, second: Student) {

        let swift_to_sc_first = strdup(first)!
        let swift_to_sc_second = second.cself
        self.init(create_PairStudent(swift_to_sc_first, swift_to_sc_second), true)
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
            let sc_to_swift_result = Student(result, true)
            return sc_to_swift_result
        }
        
    }
    
}
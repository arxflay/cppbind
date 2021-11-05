/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 10/27/2021-14:25.
 * Please do not change it manually.
 */

import CWrapper
import Foundation

public class Holder  {
    
    public let cself : UnsafeMutableRawPointer
    public let owner : Bool

    // internal main initializer
    internal required init(_ _cself: UnsafeMutableRawPointer, _ _owner: Bool = false) {
        self.cself = _cself
        self.owner = _owner
    }
    deinit {
        if owner {
            release_Holder(cself)
        }
    }
    
    
    public convenience init() {

        self.init(create_Holder(), true)
    }
    
    public var task: Task {
        get {
            let result = _prop_get_Holder_task(cself)
            let sc_to_swift_result = Task(result)
            return sc_to_swift_result
        }
        
    }
    
}
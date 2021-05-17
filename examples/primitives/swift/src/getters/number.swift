import Foundation

import CWrapper

/**
 */
public class NumberInt  {
    
    public let cself : UnsafeMutableRawPointer
    public let owner : Bool

    // internal main initializer
    internal required init(_ _cself: UnsafeMutableRawPointer , _ _owner: Bool = false) {
      self.cself = _cself
      self.owner = _owner
    }
    deinit {
      if owner {
        release_NumberInt(cself)
      }
    }
    
    /**
     */
    public convenience init(n: Int) {

        let swift_to_sc_n = CInt(n)
        self.init(create_NumberInt(swift_to_sc_n), true)
    }
    
    /**
     */
    public var num: Int {
          get {
            let result = _prop_get_NumberInt_num(cself);
            let sc_to_swift_result = Int(result)
            return sc_to_swift_result
          }
          
          
          set(value) {
            let swift_to_sc_value = CInt(value)
            _prop_set_NumberInt_num(cself, swift_to_sc_value)
          }
          
    }
    
}
/**
 */
public class NumberDouble  {
    
    public let cself : UnsafeMutableRawPointer
    public let owner : Bool

    // internal main initializer
    internal required init(_ _cself: UnsafeMutableRawPointer , _ _owner: Bool = false) {
      self.cself = _cself
      self.owner = _owner
    }
    deinit {
      if owner {
        release_NumberDouble(cself)
      }
    }
    
    /**
     */
    public convenience init(n: Double) {

        
        self.init(create_NumberDouble(n), true)
    }
    
    /**
     */
    public var num: Double {
          get {
            let result = _prop_get_NumberDouble_num(cself);
            
            return result
          }
          
          
          set(value) {
            
            _prop_set_NumberDouble_num(cself, value)
          }
          
    }
    
}
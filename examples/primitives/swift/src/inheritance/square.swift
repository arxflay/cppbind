import Foundation

import CWrapper

/**
 */
public class Square : IRhombus, IRectangle {
    
    public let cself : UnsafeMutableRawPointer
    public let owner : Bool

    // internal main initializer
    internal required init(_ _cself: UnsafeMutableRawPointer , _ _owner: Bool = false) {
      self.cself = _cself
      self.owner = _owner
    }
    deinit {
      if owner {
        release_Square(cself)
      }
    }
    
    /**
     */
    public convenience init(side: Double) {

        
        self.init(create_Square(side), true)
    }
    
    /**
     */
    public var area: Double {
          get {
            let result = _prop_get_Square_area(cself);
            
            return result
          }
          
    }
    /**
     */
    public func perimeter() -> Double {

        var err = ErrorObj()
        let result = _func_Square_perimeter(cself, &err);
        
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
        return result;
    }
}
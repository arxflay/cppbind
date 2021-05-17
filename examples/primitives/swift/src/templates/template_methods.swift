import Foundation

import CWrapper

/**
 */
public class TemplateMethods  {
    
    public let cself : UnsafeMutableRawPointer
    public let owner : Bool

    // internal main initializer
    internal required init(_ _cself: UnsafeMutableRawPointer , _ _owner: Bool = false) {
      self.cself = _cself
      self.owner = _owner
    }
    deinit {
      if owner {
        release_TemplateMethods(cself)
      }
    }
    
    /**
     */
    public convenience init() {

        self.init(create_TemplateMethods(), true)
    }
    
    /**
     */
    public func max(arg0: Int, arg1: Int) -> Int {

        let swift_to_sc_arg0 = CInt(arg0)
        let swift_to_sc_arg1 = CInt(arg1)
        var err = ErrorObj()
        let result = _func_TemplateMethods_maxInt(cself, swift_to_sc_arg0, swift_to_sc_arg1, &err);
        let sc_to_swift_result = Int(result)
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
        return sc_to_swift_result;
    }
    /**
     */
    public func max(arg0: String, arg1: String) -> String {

        let swift_to_sc_arg0 = strdup(arg0)!
        let swift_to_sc_arg1 = strdup(arg1)!
        var err = ErrorObj()
        let result = _func_TemplateMethods_maxString(cself, swift_to_sc_arg0, swift_to_sc_arg1, &err);
        let sc_to_swift_result = String(cString: result)
        defer{
          result.deallocate()
        }
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
        return sc_to_swift_result;
    }
    /**
     */
    public func makePair(arg0: Project, arg1: Project) -> (Project, Project) {

        let swift_to_sc_arg0 = arg0.cself
        let swift_to_sc_arg1 = arg1.cself
        var err = ErrorObj()
        let result = _func_TemplateMethods_makePairProjectProject(cself, swift_to_sc_arg0, swift_to_sc_arg1, &err);
        let _tmp_pair_first_result_data = UnsafeBufferPointer<UnsafeMutableRawPointer>(start: result.first.assumingMemoryBound(to: UnsafeMutableRawPointer.self), count: 1)
        let _tmp_pair_second_result_data = UnsafeBufferPointer<UnsafeMutableRawPointer>(start: result.second.assumingMemoryBound(to: UnsafeMutableRawPointer.self), count: 1)
        defer {
          _tmp_pair_first_result_data.deallocate()
          _tmp_pair_second_result_data.deallocate()
        }
        let first_result = _tmp_pair_first_result_data[0];
        let second_result = _tmp_pair_second_result_data[0];
        let sc_to_swift_first_result = Project(first_result)
        let sc_to_swift_second_result = Project(second_result)
        let sc_to_swift_result: (Project, Project) = ( sc_to_swift_first_result, sc_to_swift_second_result )
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
        return sc_to_swift_result;
    }
    /**
     */
    public func makePair(arg0: Root, arg1: Project) -> (Root, Project) {

        let swift_to_sc_arg0 = arg0.cself
        let swift_to_sc_arg1 = arg1.cself
        var err = ErrorObj()
        let result = _func_TemplateMethods_makePairRootProject(cself, swift_to_sc_arg0, swift_to_sc_arg1, &err);
        let _tmp_pair_first_result_data = UnsafeBufferPointer<UnsafeMutableRawPointer>(start: result.first.assumingMemoryBound(to: UnsafeMutableRawPointer.self), count: 1)
        let _tmp_pair_second_result_data = UnsafeBufferPointer<UnsafeMutableRawPointer>(start: result.second.assumingMemoryBound(to: UnsafeMutableRawPointer.self), count: 1)
        defer {
          _tmp_pair_first_result_data.deallocate()
          _tmp_pair_second_result_data.deallocate()
        }
        let first_result = _tmp_pair_first_result_data[0];
        let second_result = _tmp_pair_second_result_data[0];
        let sc_to_swift_first_result = Root(first_result)
        let sc_to_swift_second_result = Project(second_result)
        let sc_to_swift_result: (Root, Project) = ( sc_to_swift_first_result, sc_to_swift_second_result )
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
        return sc_to_swift_result;
    }
}
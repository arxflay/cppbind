/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 07/15/2021-04:27.
 * Please do not change it manually.
 */

import Foundation
import CWrapper




public class Student  {
    
    public let cself : UnsafeMutableRawPointer
    public let owner : Bool

    // internal main initializer
    internal required init(_ _cself: UnsafeMutableRawPointer , _ _owner: Bool = false) {
      self.cself = _cself
      self.owner = _owner
    }
    deinit {
      if owner {
        release_Student(cself)
      }
    }
    
    
    public convenience init(st_name: String) {

        let swift_to_sc_st_name = strdup(st_name)!
        self.init(create_Student(swift_to_sc_st_name), true)
    }

    public convenience init(teachers: Array<Teacher>) {

        let _data_swift_to_sc_teachers = UnsafeMutablePointer<UnsafeMutableRawPointer>.allocate(capacity: teachers.count)
        defer {
          _data_swift_to_sc_teachers.deallocate()
        }
        var swift_to_sc_teachers = CDataArray()
        swift_to_sc_teachers.data = UnsafeMutableRawPointer(_data_swift_to_sc_teachers)
        swift_to_sc_teachers.size = Int64(teachers.count)
        for _i in 0..<teachers.count {
          let value = teachers[_i];
          let swift_to_sc_value = value.cself
          _data_swift_to_sc_teachers[_i] = swift_to_sc_value;
        }
        self.init(create_Student_1(swift_to_sc_teachers), true)
    }
    

    public var name: String {
          get {
            let result = _prop_get_Student_name(cself);
            let sc_to_swift_result = String(cString: result)
            defer{
              result.deallocate()
            }
            return sc_to_swift_result
          }
          
          set(value) {
            let swift_to_sc_value = strdup(value)!
            _prop_set_Student_name(cself, swift_to_sc_value)
          }
          
    }
    
    public func addTeacher(t: Teacher) -> Void {

        let swift_to_sc_t = t.cself
        var err = ErrorObj()
        _func_Student_addTeacher(cself, swift_to_sc_t, &err);
        if (err.is_err) {
            let err_type = Int(err.err_type)
            switch(err_type) {
                case(1):
                    let exc_obj = StdException(err.err_ptr, true)
                    ExceptionHandler.handleUncaughtException(exc_obj.what())
                default:
                    ExceptionHandler.handleUncaughtException("Uncaught Exception")
            }
        }
    }

    public func teachers() -> Array<Teacher> {

        var err = ErrorObj()
        let result = _func_Student_teachers(cself, &err);
        let _tmp_result_data = UnsafeBufferPointer<UnsafeMutableRawPointer>(start: result.data.assumingMemoryBound(to: UnsafeMutableRawPointer.self), count: Int(result.size))
        var sc_to_swift_result: [Teacher] = [] 
        defer {
          _tmp_result_data.deallocate()
        }
        for _i in 0..<Int(result.size) {
          let value_result = _tmp_result_data[_i];
          let sc_to_swift_value_result = Teacher(value_result)
          sc_to_swift_result.append(sc_to_swift_value_result);
        }
        if (err.is_err) {
            let err_type = Int(err.err_type)
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
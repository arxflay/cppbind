/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 11/25/2021-10:01.
 * Please do not change it manually.
 */

import CWrapper
import Foundation

public enum FruitType: CUnsignedInt {
    case Apple = 1
    case Pineapple = 2
}

public class Fruit  {
    
    public let cself : UnsafeMutableRawPointer
    public let owner : Bool

    // internal main initializer
    internal required init(_ _cself: UnsafeMutableRawPointer, _ _owner: Bool = false) {
        self.cself = _cself
        self.owner = _owner
    }
    deinit {
        if owner {
            release_Fruit(cself)
        }
    }
    
    
    
    public var type: FruitType {
        get {
            let result = _prop_get_Fruit_type(cself)
            let sc_to_swift_result_optional = FruitType(rawValue: result)
            if (sc_to_swift_result_optional == nil) {
                ExceptionHandler.handleUncaughtException("Internal error: unresolved reference to non existing field of FruitType enum.")
            }
            let sc_to_swift_result = sc_to_swift_result_optional!
            return sc_to_swift_result
        }
        
    }
    
}

public class Apple : Fruit {
    
    
    public convenience init() {

        var err = ErrorObj()
        self.init(create_Apple(&err), true)
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
    }
    
    public override var type: FruitType {
        get {
            let result = _prop_get_Apple_type(cself)
            let sc_to_swift_result_optional = FruitType(rawValue: result)
            if (sc_to_swift_result_optional == nil) {
                ExceptionHandler.handleUncaughtException("Internal error: unresolved reference to non existing field of FruitType enum.")
            }
            let sc_to_swift_result = sc_to_swift_result_optional!
            return sc_to_swift_result
        }
        
    }
    
}

public class Pineapple : Fruit {
    
    
    public convenience init() {

        var err = ErrorObj()
        self.init(create_Pineapple(&err), true)
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
    }
    
    public override var type: FruitType {
        get {
            let result = _prop_get_Pineapple_type(cself)
            let sc_to_swift_result_optional = FruitType(rawValue: result)
            if (sc_to_swift_result_optional == nil) {
                ExceptionHandler.handleUncaughtException("Internal error: unresolved reference to non existing field of FruitType enum.")
            }
            let sc_to_swift_result = sc_to_swift_result_optional!
            return sc_to_swift_result
        }
        
    }
    
}
/**
 * An example class containing template getters.
 */
public class Fruits  {
    
    public let cself : UnsafeMutableRawPointer
    public let owner : Bool

    // internal main initializer
    internal required init(_ _cself: UnsafeMutableRawPointer, _ _owner: Bool = false) {
        self.cself = _cself
        self.owner = _owner
    }
    deinit {
        if owner {
            release_Fruits(cself)
        }
    }
    
    
    public convenience init(fruits: Array<Fruit>) {

        let _data_swift_to_sc_fruits = UnsafeMutablePointer<UnsafeMutableRawPointer>.allocate(capacity: fruits.count)
        var swift_to_sc_fruits = CDataArray()
        swift_to_sc_fruits.data = UnsafeMutableRawPointer(_data_swift_to_sc_fruits)
        swift_to_sc_fruits.size = Int64(fruits.count)
        for _i in 0..<fruits.count {
            let value_fruits = fruits[_i]
            let swift_to_sc_value_fruits = value_fruits.cself
            _data_swift_to_sc_fruits[_i] = swift_to_sc_value_fruits
        }
        var err = ErrorObj()
        self.init(create_Fruits(swift_to_sc_fruits, &err), true)
        
        swift_to_sc_fruits.data.deallocate()
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
    }
    
    public var apples: Array<Apple> {
        get {
            let result = _prop_get_Fruits_fruitsApple(cself)
            let _tmp_result_data = UnsafeBufferPointer<UnsafeMutableRawPointer>(start: result.data.assumingMemoryBound(to: UnsafeMutableRawPointer.self), count: Int(result.size))
            var sc_to_swift_result: [Apple] = []
            defer {
              _tmp_result_data.deallocate()
            }
            for _i in 0..<Int(result.size) {
                let value_result = _tmp_result_data[_i]
                let sc_to_swift_value_result = Apple(value_result)
                sc_to_swift_result.append(sc_to_swift_value_result)
            }
            return sc_to_swift_result
        }
        
    }

    public var pineapple: Array<Pineapple> {
        get {
            let result = _prop_get_Fruits_fruitsPineapple(cself)
            let _tmp_result_data = UnsafeBufferPointer<UnsafeMutableRawPointer>(start: result.data.assumingMemoryBound(to: UnsafeMutableRawPointer.self), count: Int(result.size))
            var sc_to_swift_result: [Pineapple] = []
            defer {
              _tmp_result_data.deallocate()
            }
            for _i in 0..<Int(result.size) {
                let value_result = _tmp_result_data[_i]
                let sc_to_swift_value_result = Pineapple(value_result)
                sc_to_swift_result.append(sc_to_swift_value_result)
            }
            return sc_to_swift_result
        }
        
    }

    public var applesWithPineapples: Array<Fruit> {
        get {
            let result = _prop_get_Fruits_allFruitsApplePineapple(cself)
            let _tmp_result_data = UnsafeBufferPointer<UnsafeMutableRawPointer>(start: result.data.assumingMemoryBound(to: UnsafeMutableRawPointer.self), count: Int(result.size))
            var sc_to_swift_result: [Fruit] = []
            defer {
              _tmp_result_data.deallocate()
            }
            for _i in 0..<Int(result.size) {
                let value_result = _tmp_result_data[_i]
                let sc_to_swift_value_result = Fruit(value_result)
                sc_to_swift_result.append(sc_to_swift_value_result)
            }
            return sc_to_swift_result
        }
        
        
        set(value) {
            let _data_swift_to_sc_value = UnsafeMutablePointer<UnsafeMutableRawPointer>.allocate(capacity: value.count)
            var swift_to_sc_value = CDataArray()
            swift_to_sc_value.data = UnsafeMutableRawPointer(_data_swift_to_sc_value)
            swift_to_sc_value.size = Int64(value.count)
            for _i in 0..<value.count {
                let value_value = value[_i]
                let swift_to_sc_value_value = value_value.cself
                _data_swift_to_sc_value[_i] = swift_to_sc_value_value
            }
            _prop_set_Fruits_allFruitsApplePineapple(cself, swift_to_sc_value)
              
            swift_to_sc_value.data.deallocate()
        }
        
    }
    
}
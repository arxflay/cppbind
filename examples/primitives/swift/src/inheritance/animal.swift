/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 02/04/2022-11:27.
 * Please do not change it manually.
 */

import CWrapper
import Foundation

public protocol Animal {
  var cself: IEGenCObject { get }

  func typeName() -> String
}

extension Animal {
  public func typeName() -> String {

    var err = IEGenCObject()
    let result = _func_Animal_typeName(cself, &err)
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(IEGenCObject(type: err.type, ptr: err.ptr), true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
        err.type.deallocate()
      }
    }
    let sctoswiftresult = String(cString: result)
    defer {
      result.deallocate()
    }
    return sctoswiftresult
  }

}

public class AnimalImpl: Animal {
  public let cself: IEGenCObject
  public let owner: Bool

  // internal main initializer
  internal required init(_ _cself: IEGenCObject, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
  }

  deinit {
    release_AnimalImpl(cself, owner)
  }

  public convenience init() {
    var err = IEGenCObject()
    self.init(create_Animal(&err), true)
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(IEGenCObject(type: err.type, ptr: err.ptr), true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
        err.type.deallocate()
      }
    }
  }

}

public protocol TerrestrialAnimal: Animal {
  func typeName() -> String
}

extension TerrestrialAnimal {
  public func typeName() -> String {

    var err = IEGenCObject()
    let result = _func_TerrestrialAnimal_typeName(cself, &err)
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(IEGenCObject(type: err.type, ptr: err.ptr), true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
        err.type.deallocate()
      }
    }
    let sctoswiftresult = String(cString: result)
    defer {
      result.deallocate()
    }
    return sctoswiftresult
  }

}

public class TerrestrialAnimalImpl: TerrestrialAnimal {
  public let cself: IEGenCObject
  public let owner: Bool

  // internal main initializer
  internal required init(_ _cself: IEGenCObject, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
  }

  deinit {
    release_TerrestrialAnimalImpl(cself, owner)
  }

  public convenience init() {
    var err = IEGenCObject()
    self.init(create_TerrestrialAnimal(&err), true)
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(IEGenCObject(type: err.type, ptr: err.ptr), true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
        err.type.deallocate()
      }
    }
  }

}

public class AquaticAnimal: Animal {

  public let cself: IEGenCObject
  public let owner: Bool

  // internal main initializer
  internal required init(_ _cself: IEGenCObject, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
  }

  deinit {
    release_AquaticAnimal(cself, owner)
  }

  public convenience init() {
    var err = IEGenCObject()
    self.init(create_AquaticAnimal(&err), true)
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(IEGenCObject(type: err.type, ptr: err.ptr), true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
        err.type.deallocate()
      }
    }
  }

  public func typeName() -> String {

    var err = IEGenCObject()
    let result = _func_AquaticAnimal_typeName(cself, &err)
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(IEGenCObject(type: err.type, ptr: err.ptr), true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
        err.type.deallocate()
      }
    }
    let sctoswiftresult = String(cString: result)
    defer {
      result.deallocate()
    }
    return sctoswiftresult
  }

}

public class Frog: AquaticAnimal, TerrestrialAnimal {
  public convenience init() {
    var err = IEGenCObject()
    self.init(create_Frog(&err), true)
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(IEGenCObject(type: err.type, ptr: err.ptr), true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
        err.type.deallocate()
      }
    }
  }

  public override func typeName() -> String {

    var err = IEGenCObject()
    let result = _func_Frog_typeName(cself, &err)
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(IEGenCObject(type: err.type, ptr: err.ptr), true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
        err.type.deallocate()
      }
    }
    let sctoswiftresult = String(cString: result)
    defer {
      result.deallocate()
    }
    return sctoswiftresult
  }

}

public class AnimalUsage {

  public let cself: IEGenCObject
  public let owner: Bool

  // internal main initializer
  internal required init(_ _cself: IEGenCObject, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
  }

  deinit {
    release_AnimalUsage(cself, owner)
  }

  public convenience init() {
    var err = IEGenCObject()
    self.init(create_AnimalUsage(&err), true)
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(IEGenCObject(type: err.type, ptr: err.ptr), true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
        err.type.deallocate()
      }
    }
  }

  public static func getAnimalTypeName(animal: Animal) -> String {

    let swifttoscanimal = animal.cself
    var err = IEGenCObject()
    let result = _func_AnimalUsage_getAnimalTypeName(swifttoscanimal, &err)
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(IEGenCObject(type: err.type, ptr: err.ptr), true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
        err.type.deallocate()
      }
    }
    let sctoswiftresult = String(cString: result)
    defer {
      result.deallocate()
    }
    return sctoswiftresult
  }

  public static func getAquaticAnimalTypeName(animal: AquaticAnimal) -> String {

    let swifttoscanimal = animal.cself
    var err = IEGenCObject()
    let result = _func_AnimalUsage_getAquaticAnimalTypeName(swifttoscanimal, &err)
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(IEGenCObject(type: err.type, ptr: err.ptr), true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
        err.type.deallocate()
      }
    }
    let sctoswiftresult = String(cString: result)
    defer {
      result.deallocate()
    }
    return sctoswiftresult
  }

  public func getAnimal() -> Animal {

    var err = IEGenCObject()
    let result = _func_AnimalUsage_getAnimal(cself, &err)
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(IEGenCObject(type: err.type, ptr: err.ptr), true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
        err.type.deallocate()
      }
    }
    var sctoswiftresult: Animal
    let resultIndex = String(cString: result.type)
    switch(resultIndex) {
    case("iegen::example::Frog"):
      sctoswiftresult = Frog(result)
    case("iegen::example::AquaticAnimal"):
      sctoswiftresult = AquaticAnimal(result)
    case("iegen::example::TerrestrialAnimal"):
      sctoswiftresult = TerrestrialAnimalImpl(result)
    default:
      sctoswiftresult = AnimalImpl(result)
    }
    return sctoswiftresult
  }

  public func getAquaticAnimal() -> AquaticAnimal {

    var err = IEGenCObject()
    let result = _func_AnimalUsage_getAquaticAnimal(cself, &err)
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(IEGenCObject(type: err.type, ptr: err.ptr), true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
        err.type.deallocate()
      }
    }
    var sctoswiftresult: AquaticAnimal
    let resultIndex = String(cString: result.type)
    switch(resultIndex) {
    case("iegen::example::Frog"):
      sctoswiftresult = Frog(result)
    default:
      sctoswiftresult = AquaticAnimal(result)
    }
    return sctoswiftresult
  }

  public func getFrog() -> Frog {

    var err = IEGenCObject()
    let result = _func_AnimalUsage_getFrog(cself, &err)
    if err.type != nil {
      let errorType = String(cString: err.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(IEGenCObject(type: err.type, ptr: err.ptr), true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
        err.type.deallocate()
      }
    }
    var sctoswiftresult: Frog
    sctoswiftresult = Frog(result)
    return sctoswiftresult
  }

}

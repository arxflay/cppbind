/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 04/07/2022-09:35.
 * Please do not change it manually.
 */

import CWrapper
import Foundation

public protocol Animal {
  var cself: IEGenCObject { get }

  func keepIEGenReference(_ object: Any)
  func typeName() -> String
  func equals(a: Animal) -> Bool
}

extension Animal {
  public func typeName() -> String {

    var iegenErr = IEGenCObject()
    let result = _func_IegenExample_Animal_typeName(cself, &iegenErr)
    if iegenErr.type != nil {
      let errorType = String(cString: iegenErr.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(iegenErr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        iegenErr.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    let sctoswiftresult = String(cString: result)
    defer {
      result.deallocate()
    }
    return sctoswiftresult
  }

  public func equals(a: Animal) -> Bool {

    let swifttosca = a.cself
    var iegenErr = IEGenCObject()
    let result = _func_IegenExample_Animal_equals(cself, swifttosca, &iegenErr)
    if iegenErr.type != nil {
      let errorType = String(cString: iegenErr.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(iegenErr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        iegenErr.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    return result
  }

}

public class AnimalImpl: Animal {
  public let cself: IEGenCObject
  public let owner: Bool
  private var refs: [Any]

  // internal main initializer
  internal required init(_ _cself: IEGenCObject, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
    self.refs = []
  }

  deinit {
    release_IegenExample_AnimalImpl(cself, owner)
  }

  public func keepIEGenReference(_ object: Any) {
    self.refs.append(object)
  }

  public convenience init() {
    var iegenErr = IEGenCObject()
    self.init(create_IegenExample_Animal(&iegenErr), true)
    if iegenErr.type != nil {
      let errorType = String(cString: iegenErr.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(iegenErr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        iegenErr.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
  }

  class var iegenCxxTypeName : String { return "iegen::example::Animal" }

  class func iegenDowncast(_ iegenObj: IEGenCObject, _ owner: Bool = false) -> Animal {
    let typeName = String(cString: iegenObj.type)
    switch(typeName) {
    case(LittleFrog.iegenCxxTypeName):
      return LittleFrog(iegenObj, owner)
    case(Frog.iegenCxxTypeName):
      return Frog(iegenObj, owner)
    case(AquaticAnimal.iegenCxxTypeName):
      return AquaticAnimal(iegenObj, owner)
    case(TerrestrialAnimalImpl.iegenCxxTypeName):
      return TerrestrialAnimalImpl(iegenObj, owner)
    default:
      return AnimalImpl(iegenObj, owner)
    }
  }
}

public protocol TerrestrialAnimal: Animal {
  func typeName() -> String
}

extension TerrestrialAnimal {
  public func typeName() -> String {

    var iegenErr = IEGenCObject()
    let result = _func_IegenExample_TerrestrialAnimal_typeName(cself, &iegenErr)
    if iegenErr.type != nil {
      let errorType = String(cString: iegenErr.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(iegenErr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        iegenErr.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
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
  private var refs: [Any]

  // internal main initializer
  internal required init(_ _cself: IEGenCObject, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
    self.refs = []
  }

  deinit {
    release_IegenExample_TerrestrialAnimalImpl(cself, owner)
  }

  public func keepIEGenReference(_ object: Any) {
    self.refs.append(object)
  }

  public convenience init() {
    var iegenErr = IEGenCObject()
    self.init(create_IegenExample_TerrestrialAnimal(&iegenErr), true)
    if iegenErr.type != nil {
      let errorType = String(cString: iegenErr.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(iegenErr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        iegenErr.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
  }

  class var iegenCxxTypeName : String { return "iegen::example::TerrestrialAnimal" }

  class func iegenDowncast(_ iegenObj: IEGenCObject, _ owner: Bool = false) -> TerrestrialAnimal {
    let typeName = String(cString: iegenObj.type)
    switch(typeName) {
    case(LittleFrog.iegenCxxTypeName):
      return LittleFrog(iegenObj, owner)
    case(Frog.iegenCxxTypeName):
      return Frog(iegenObj, owner)
    default:
      return TerrestrialAnimalImpl(iegenObj, owner)
    }
  }
}

public class AquaticAnimal: Animal {

  public let cself: IEGenCObject
  public let owner: Bool
  private var refs: [Any]

  /// internal main initializer
  internal required init(_ _cself: IEGenCObject, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
    self.refs = []
  }

  deinit {
    release_IegenExample_AquaticAnimal(cself, owner)
  }

  public func keepIEGenReference(_ object: Any) {
    self.refs.append(object)
  }

  /// internal private initializer to prevent automatic initializer inheritance
  private init(_cself: IEGenCObject, _self: AquaticAnimal) {
    fatalError("A private initializer should not be called.")
  }

  public convenience init() {
    var iegenErr = IEGenCObject()
    self.init(create_IegenExample_AquaticAnimal(&iegenErr), true)
    if iegenErr.type != nil {
      let errorType = String(cString: iegenErr.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(iegenErr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        iegenErr.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
  }

  public func typeName() -> String {

    var iegenErr = IEGenCObject()
    let result = _func_IegenExample_AquaticAnimal_typeName(cself, &iegenErr)
    if iegenErr.type != nil {
      let errorType = String(cString: iegenErr.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(iegenErr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        iegenErr.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    let sctoswiftresult = String(cString: result)
    defer {
      result.deallocate()
    }
    return sctoswiftresult
  }

  class var iegenCxxTypeName : String { return "iegen::example::AquaticAnimal" }

  class func iegenDowncast(_ iegenObj: IEGenCObject, _ owner: Bool = false) -> AquaticAnimal {
    let typeName = String(cString: iegenObj.type)
    switch(typeName) {
    case(LittleFrog.iegenCxxTypeName):
      return LittleFrog(iegenObj, owner)
    case(Frog.iegenCxxTypeName):
      return Frog(iegenObj, owner)
    default:
      return AquaticAnimal(iegenObj, owner)
    }
  }
}

public class Frog: AquaticAnimal, TerrestrialAnimal {
  /// internal main initializer
  internal required init(_ _cself: IEGenCObject, _ _owner: Bool = false) {
    super.init(_cself, _owner)
  }

  /// internal private initializer to prevent automatic initializer inheritance
  private init(_cself: IEGenCObject, _self: Frog) {
    fatalError("A private initializer should not be called.")
  }

  public convenience init() {
    var iegenErr = IEGenCObject()
    self.init(create_IegenExample_Frog(&iegenErr), true)
    if iegenErr.type != nil {
      let errorType = String(cString: iegenErr.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(iegenErr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        iegenErr.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
  }

  public override func typeName() -> String {

    var iegenErr = IEGenCObject()
    let result = _func_IegenExample_Frog_typeName(cself, &iegenErr)
    if iegenErr.type != nil {
      let errorType = String(cString: iegenErr.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(iegenErr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        iegenErr.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    let sctoswiftresult = String(cString: result)
    defer {
      result.deallocate()
    }
    return sctoswiftresult
  }

  override class var iegenCxxTypeName : String { return "iegen::example::Frog" }
}

/**
 * Class to help checking the empty case of descendants list
 */
public class LittleFrog: Frog {
  /// internal main initializer
  internal required init(_ _cself: IEGenCObject, _ _owner: Bool = false) {
    super.init(_cself, _owner)
  }

  public convenience init() {
    var iegenErr = IEGenCObject()
    self.init(create_IegenExample_LittleFrog(&iegenErr), true)
    if iegenErr.type != nil {
      let errorType = String(cString: iegenErr.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(iegenErr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        iegenErr.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
  }

  override class var iegenCxxTypeName : String { return "iegen::example::LittleFrog" }
}

public class AnimalUsage {

  public let cself: IEGenCObject
  public let owner: Bool
  private var refs: [Any]

  /// internal main initializer
  internal required init(_ _cself: IEGenCObject, _ _owner: Bool = false) {
    self.cself = _cself
    self.owner = _owner
    self.refs = []
  }

  deinit {
    release_IegenExample_AnimalUsage(cself, owner)
  }

  public func keepIEGenReference(_ object: Any) {
    self.refs.append(object)
  }

  public convenience init() {
    var iegenErr = IEGenCObject()
    self.init(create_IegenExample_AnimalUsage(&iegenErr), true)
    if iegenErr.type != nil {
      let errorType = String(cString: iegenErr.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(iegenErr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        iegenErr.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
  }

  public convenience init(littleFrog: LittleFrog) {
    let swifttosclittleFrog = littleFrog.cself
    var iegenErr = IEGenCObject()
    self.init(create_IegenExample_AnimalUsage_1(swifttosclittleFrog, &iegenErr), true)
    if iegenErr.type != nil {
      let errorType = String(cString: iegenErr.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(iegenErr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        iegenErr.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
  }

  public static func getAnimalTypeName(animal: Animal) -> String {

    let swifttoscanimal = animal.cself
    var iegenErr = IEGenCObject()
    let result = _func_IegenExample_AnimalUsage_getAnimalTypeName(swifttoscanimal, &iegenErr)
    if iegenErr.type != nil {
      let errorType = String(cString: iegenErr.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(iegenErr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        iegenErr.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
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
    var iegenErr = IEGenCObject()
    let result = _func_IegenExample_AnimalUsage_getAquaticAnimalTypeName(swifttoscanimal, &iegenErr)
    if iegenErr.type != nil {
      let errorType = String(cString: iegenErr.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(iegenErr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        iegenErr.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    let sctoswiftresult = String(cString: result)
    defer {
      result.deallocate()
    }
    return sctoswiftresult
  }

  public func getAnimal() -> Animal {

    var iegenErr = IEGenCObject()
    let result = _func_IegenExample_AnimalUsage_getAnimal(cself, &iegenErr)
    if iegenErr.type != nil {
      let errorType = String(cString: iegenErr.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(iegenErr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        iegenErr.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    var sctoswiftresult: Animal
    sctoswiftresult = AnimalImpl.iegenDowncast(result)
    return sctoswiftresult
  }

  public func getAquaticAnimal() -> AquaticAnimal {

    var iegenErr = IEGenCObject()
    let result = _func_IegenExample_AnimalUsage_getAquaticAnimal(cself, &iegenErr)
    if iegenErr.type != nil {
      let errorType = String(cString: iegenErr.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(iegenErr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        iegenErr.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    var sctoswiftresult: AquaticAnimal
    sctoswiftresult = AquaticAnimal.iegenDowncast(result)
    return sctoswiftresult
  }

  public func getFrog() -> Frog {

    var iegenErr = IEGenCObject()
    let result = _func_IegenExample_AnimalUsage_getFrog(cself, &iegenErr)
    if iegenErr.type != nil {
      let errorType = String(cString: iegenErr.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(iegenErr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        iegenErr.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    var sctoswiftresult: Frog
    sctoswiftresult = Frog(result)
    return sctoswiftresult
  }

  /**
   * Method to check that any downcast is not done when descendants=[]
   */
  public func getLittleFrog() -> Frog {

    var iegenErr = IEGenCObject()
    let result = _func_IegenExample_AnimalUsage_getLittleFrog(cself, &iegenErr)
    if iegenErr.type != nil {
      let errorType = String(cString: iegenErr.type!)
      switch errorType {
      case ("std::exception"):
        let excObj = StdException(iegenErr, true)
        ExceptionHandler.handleUncaughtException(excObj.what())
      default:
        iegenErr.type.deallocate()
        ExceptionHandler.handleUncaughtException("Uncaught Exception")
      }
    }
    var sctoswiftresult: Frog
    sctoswiftresult = Frog(result)
    return sctoswiftresult
  }

  class var iegenCxxTypeName : String { return "iegen::example::AnimalUsage" }
}

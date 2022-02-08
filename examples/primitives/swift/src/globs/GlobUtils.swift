/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 02/07/2022-16:23.
 * Please do not change it manually.
 */

import CWrapper
import Foundation

/**
 * A global function example.
 */
public func concat(str1: String, str2: String) -> String {
  let swifttoscstr1 = strdup(str1)!
  let swifttoscstr2 = strdup(str2)!
  var err = IEGenCObject()
  let result = _func__concat(swifttoscstr1, swifttoscstr2, &err)
  if err.type != nil {
    let errorType = String(cString: err.type!)
    switch errorType {
    case ("std::exception"):
      let excObj = StdException(err, true)
      ExceptionHandler.handleUncaughtException(excObj.what())
    default:
      err.type.deallocate()
      ExceptionHandler.handleUncaughtException("Uncaught Exception")
    }
  }
  let sctoswiftresult = String(cString: result)
  defer {
    result.deallocate()
  }
  return sctoswiftresult
}

/**
 * A global overloaded function example.
 */
public func concat(str1: String, str2: String, str3: String) -> String {
  let swifttoscstr1 = strdup(str1)!
  let swifttoscstr2 = strdup(str2)!
  let swifttoscstr3 = strdup(str3)!
  var err = IEGenCObject()
  let result = _func__concat_1(swifttoscstr1, swifttoscstr2, swifttoscstr3, &err)
  if err.type != nil {
    let errorType = String(cString: err.type!)
    switch errorType {
    case ("std::exception"):
      let excObj = StdException(err, true)
      ExceptionHandler.handleUncaughtException(excObj.what())
    default:
      err.type.deallocate()
      ExceptionHandler.handleUncaughtException("Uncaught Exception")
    }
  }
  let sctoswiftresult = String(cString: result)
  defer {
    result.deallocate()
  }
  return sctoswiftresult
}

/**
 * A global template function example.
 */
public func max(arg0: Int, arg1: Int) -> Int {
  let swifttoscarg0 = CInt(arg0)
  let swifttoscarg1 = CInt(arg1)
  var err = IEGenCObject()
  let result = _func__maxInt(swifttoscarg0, swifttoscarg1, &err)
  if err.type != nil {
    let errorType = String(cString: err.type!)
    switch errorType {
    case ("std::exception"):
      let excObj = StdException(err, true)
      ExceptionHandler.handleUncaughtException(excObj.what())
    default:
      err.type.deallocate()
      ExceptionHandler.handleUncaughtException("Uncaught Exception")
    }
  }
  let sctoswiftresult = Int(result)
  return sctoswiftresult
}

/**
 * A global template function example.
 */
public func max(arg0: String, arg1: String) -> String {
  let swifttoscarg0 = strdup(arg0)!
  let swifttoscarg1 = strdup(arg1)!
  var err = IEGenCObject()
  let result = _func__maxString(swifttoscarg0, swifttoscarg1, &err)
  if err.type != nil {
    let errorType = String(cString: err.type!)
    switch errorType {
    case ("std::exception"):
      let excObj = StdException(err, true)
      ExceptionHandler.handleUncaughtException(excObj.what())
    default:
      err.type.deallocate()
      ExceptionHandler.handleUncaughtException("Uncaught Exception")
    }
  }
  let sctoswiftresult = String(cString: result)
  defer {
    result.deallocate()
  }
  return sctoswiftresult
}

/**
 * A global template function example in namespace.
 */
public func makePair(arg0: Project, arg1: Project) -> (Project, Project) {
  let swifttoscarg0 = arg0.cself
  let swifttoscarg1 = arg1.cself
  var err = IEGenCObject()
  let result = _func_IegenExample_makePairProjectProject(swifttoscarg0, swifttoscarg1, &err)
  if err.type != nil {
    let errorType = String(cString: err.type!)
    switch errorType {
    case ("std::exception"):
      let excObj = StdException(err, true)
      ExceptionHandler.handleUncaughtException(excObj.what())
    default:
      err.type.deallocate()
      ExceptionHandler.handleUncaughtException("Uncaught Exception")
    }
  }
  let _resultFirstData = UnsafeBufferPointer<IEGenCObject>(
    start: result.first.assumingMemoryBound(to: IEGenCObject.self),
    count: 1)
  let _resultSecondData = UnsafeBufferPointer<IEGenCObject>(
    start: result.second.assumingMemoryBound(to: IEGenCObject.self),
    count: 1)
  defer {
    _resultFirstData.deallocate()
    _resultSecondData.deallocate()
  }
  let resultFirst = _resultFirstData[0]
  let resultSecond = _resultSecondData[0]
  var sctoswiftresultFirst: Project
  sctoswiftresultFirst = Project(resultFirst)
  var sctoswiftresultSecond: Project
  sctoswiftresultSecond = Project(resultSecond)
  let sctoswiftresult: (Project, Project) = (sctoswiftresultFirst, sctoswiftresultSecond)
  return sctoswiftresult
}

/**
 * A global template function example in namespace.
 */
public func makePair(arg0: Root, arg1: Project) -> (Root, Project) {
  let swifttoscarg0 = arg0.cself
  let swifttoscarg1 = arg1.cself
  var err = IEGenCObject()
  let result = _func_IegenExample_makePairRootProject(swifttoscarg0, swifttoscarg1, &err)
  if err.type != nil {
    let errorType = String(cString: err.type!)
    switch errorType {
    case ("std::exception"):
      let excObj = StdException(err, true)
      ExceptionHandler.handleUncaughtException(excObj.what())
    default:
      err.type.deallocate()
      ExceptionHandler.handleUncaughtException("Uncaught Exception")
    }
  }
  let _resultFirstData = UnsafeBufferPointer<IEGenCObject>(
    start: result.first.assumingMemoryBound(to: IEGenCObject.self),
    count: 1)
  let _resultSecondData = UnsafeBufferPointer<IEGenCObject>(
    start: result.second.assumingMemoryBound(to: IEGenCObject.self),
    count: 1)
  defer {
    _resultFirstData.deallocate()
    _resultSecondData.deallocate()
  }
  let resultFirst = _resultFirstData[0]
  let resultSecond = _resultSecondData[0]
  var sctoswiftresultFirst: Root
  sctoswiftresultFirst = Root(resultFirst)
  var sctoswiftresultSecond: Project
  sctoswiftresultSecond = Project(resultSecond)
  let sctoswiftresult: (Root, Project) = (sctoswiftresultFirst, sctoswiftresultSecond)
  return sctoswiftresult
}

/**
 * A global function with enum default value.
 */
public func optionalColor(c: Color = Color.Red) -> Color {
  let swifttoscc = c.rawValue
  var err = IEGenCObject()
  let result = _func__optionalColor(swifttoscc, &err)
  if err.type != nil {
    let errorType = String(cString: err.type!)
    switch errorType {
    case ("std::exception"):
      let excObj = StdException(err, true)
      ExceptionHandler.handleUncaughtException(excObj.what())
    default:
      err.type.deallocate()
      ExceptionHandler.handleUncaughtException("Uncaught Exception")
    }
  }
  let sctoswiftresultOptional = Color(rawValue: result)
  if (sctoswiftresultOptional == nil) {
    ExceptionHandler.handleUncaughtException(
    "Internal error: unresolved reference to non existing field of Color enum.")
  }
  let sctoswiftresult = sctoswiftresultOptional!
  return sctoswiftresult
}

/**
 * A global function with pointer default value and nullable return value.
 */
public func optionalFDPtr(project: Project? = nil) -> Project? {
  let swifttoscproject = project?.cself ?? IEGenCObject(type: nil, ptr: nil)
  var err = IEGenCObject()
  let result = _func__optionalFDPtr(swifttoscproject, &err)
  if err.type != nil {
    let errorType = String(cString: err.type!)
    switch errorType {
    case ("std::exception"):
      let excObj = StdException(err, true)
      ExceptionHandler.handleUncaughtException(excObj.what())
    default:
      err.type.deallocate()
      ExceptionHandler.handleUncaughtException("Uncaught Exception")
    }
  }
  var sctoswiftresult: Project? = nil
  if (result.ptr != nil) {
      sctoswiftresult = Project(result)
  }
  return sctoswiftresult
}

/**
 * A global function with no return value.
 */
public func doNothing() -> Void {
  var err = IEGenCObject()
  _func__doNothing(&err)
  if err.type != nil {
    let errorType = String(cString: err.type!)
    switch errorType {
    case ("std::exception"):
      let excObj = StdException(err, true)
      ExceptionHandler.handleUncaughtException(excObj.what())
    default:
      err.type.deallocate()
      ExceptionHandler.handleUncaughtException("Uncaught Exception")
    }
  }
}

/**
 * A global function with primitive default value.
 */
public func optionalInt(i: Int = 5) -> Int {
  let swifttosci = CInt(i)
  var err = IEGenCObject()
  let result = _func__optionalInt(swifttosci, &err)
  if err.type != nil {
    let errorType = String(cString: err.type!)
    switch errorType {
    case ("std::exception"):
      let excObj = StdException(err, true)
      ExceptionHandler.handleUncaughtException(excObj.what())
    default:
      err.type.deallocate()
      ExceptionHandler.handleUncaughtException("Uncaught Exception")
    }
  }
  let sctoswiftresult = Int(result)
  return sctoswiftresult
}

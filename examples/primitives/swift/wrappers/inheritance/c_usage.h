/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 02/22/2022-13:23.
 * Please do not change it manually.
 */

#ifndef _C_usage_WRAPPER_
#define _C_usage_WRAPPER_

#include "swift/wrappers/c_helpers.h"

#include <stdbool.h>

#if __cplusplus
extern "C" {
#endif
    void release_GeometricFigure(IEGenCObject cself, bool owner);

    IEGenCObject create_GeometricFigure(IEGenCObject p, IEGenCObject* _Nonnull err);
    IEGenCObject _prop_get_GeometricFigure_parallelogram(IEGenCObject cself, IEGenCObject* _Nonnull err);

    void _prop_set_GeometricFigure_parallelogram(IEGenCObject cself, IEGenCObject p, IEGenCObject* _Nonnull err);

    IEGenCObject _prop_get_GeometricFigure_nullableParallelogram(IEGenCObject cself, IEGenCObject* _Nonnull err);

    void _prop_set_GeometricFigure_nullableParallelogram(IEGenCObject cself, IEGenCObject p, IEGenCObject* _Nonnull err);

    void release_MyVehicle(IEGenCObject cself, bool owner);

    IEGenCObject create_MyVehicle(IEGenCObject v, IEGenCObject* _Nonnull err);
    IEGenCObject _prop_get_MyVehicle_vehicle(IEGenCObject cself, IEGenCObject* _Nonnull err);

    void _prop_set_MyVehicle_vehicle(IEGenCObject cself, IEGenCObject v, IEGenCObject* _Nonnull err);

    void release_MyBicycle(IEGenCObject cself, bool owner);

    IEGenCObject create_MyBicycle(IEGenCObject b, IEGenCObject* _Nonnull err);
    IEGenCObject _prop_get_MyBicycle_bicycle(IEGenCObject cself, IEGenCObject* _Nonnull err);

    void _prop_set_MyBicycle_bicycle(IEGenCObject cself, IEGenCObject b, IEGenCObject* _Nonnull err);

    void release_MyCalendar(IEGenCObject cself, bool owner);

    IEGenCObject create_MyCalendar(IEGenCDataArray events, IEGenCObject* _Nonnull err);
    void _func_MyCalendar_addEvent(IEGenCObject cself, IEGenCObject  e, IEGenCObject* _Nonnull err);
    IEGenCDataArray _prop_get_MyCalendar_events(IEGenCObject cself, IEGenCObject* _Nonnull err);
#if __cplusplus
}
#endif
#endif /* ifndef _C_usage_WRAPPER_ */

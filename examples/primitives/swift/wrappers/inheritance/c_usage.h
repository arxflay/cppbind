/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 12/08/2021-11:54.
 * Please do not change it manually.
 */

#ifndef _C_usage_WRAPPER_
#define _C_usage_WRAPPER_

#include "swift/wrappers/c_helpers.h"

#include <stdbool.h>

#if __cplusplus
extern "C" {
#endif
    void release_GeometricFigure(CObject cself, bool owner);

    CObject create_GeometricFigure(CObject p, ErrorObj* _Nonnull err);
    CObject _prop_get_GeometricFigure_parallelogram(CObject cself);

    void _prop_set_GeometricFigure_parallelogram(CObject cself, CObject p);

    CObject _prop_get_GeometricFigure_nullableParallelogram(CObject cself);

    void _prop_set_GeometricFigure_nullableParallelogram(CObject cself, CObject p);

    void release_MyVehicle(CObject cself, bool owner);

    CObject create_MyVehicle(CObject v, ErrorObj* _Nonnull err);
    CObject _prop_get_MyVehicle_vehicle(CObject cself);

    void _prop_set_MyVehicle_vehicle(CObject cself, CObject v);

    void release_MyBicycle(CObject cself, bool owner);

    CObject create_MyBicycle(CObject b, ErrorObj* _Nonnull err);
    CObject _prop_get_MyBicycle_bicycle(CObject cself);

    void _prop_set_MyBicycle_bicycle(CObject cself, CObject b);

    void release_MyCalendar(CObject cself, bool owner);

    CObject create_MyCalendar(CDataArray events, ErrorObj* _Nonnull err);
    void _func_MyCalendar_addEvent(CObject cself, CObject  e, ErrorObj* _Nonnull err);
    CDataArray _prop_get_MyCalendar_events(CObject cself);
#if __cplusplus
}
#endif
#endif /* ifndef _C_usage_WRAPPER_ */
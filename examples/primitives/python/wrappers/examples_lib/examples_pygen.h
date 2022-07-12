/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 07/07/2022-10:39.
 * Please do not change it manually.
 */

#ifndef examples_hpp
#define examples_hpp

#include "python/wrappers/examples_lib/misc/std_utils_pygen_pybind.h"
#include "python/wrappers/examples_lib/containers/map_pygen_pybind.h"
#include "python/wrappers/examples_lib/containers/nested_containers_pygen_pybind.h"
#include "python/wrappers/examples_lib/containers/pair_pygen_pybind.h"
#include "python/wrappers/examples_lib/containers/vector_pygen_pybind.h"
#include "python/wrappers/examples_lib/enums/color_pygen_pybind.h"
#include "python/wrappers/examples_lib/enums/frame_pygen_pybind.h"
#include "python/wrappers/examples_lib/enums/logging_pygen_pybind.h"
#include "python/wrappers/examples_lib/extra/object_pygen_pybind.h"
#include "python/wrappers/examples_lib/extra/object_usage_pygen_pybind.h"
#include "python/wrappers/examples_lib/forward_decl/student_pygen_pybind.h"
#include "python/wrappers/examples_lib/forward_decl/teacher_pygen_pybind.h"
#include "python/wrappers/examples_lib/functionals/functional_example_pygen_pybind.h"
#include "python/wrappers/examples_lib/getters/fruits_pygen_pybind.h"
#include "python/wrappers/examples_lib/getters/number_pygen_pybind.h"
#include "python/wrappers/examples_lib/getters/person_pygen_pybind.h"
#include "python/wrappers/examples_lib/simple/task/task_pygen_pybind.h"
#include "python/wrappers/examples_lib/simple/project_pygen_pybind.h"
#include "python/wrappers/examples_lib/simple/root_pygen_pybind.h"
#include "python/wrappers/examples_lib/globs/utils_pygen_pybind.h"
#include "python/wrappers/examples_lib/globs/primitiveDefaults_pygen_pybind.h"
#include "python/wrappers/examples_lib/globs/complexDefaults_pygen_pybind.h"
#include "python/wrappers/examples_lib/globs/customArgUtils_pygen_pybind.h"
#include "python/wrappers/examples_lib/globs/templateOverloadedUtils_pygen_pybind.h"
#include "python/wrappers/examples_lib/hashing/objects_pygen_pybind.h"
#include "python/wrappers/examples_lib/inheritance/animal_pygen_pybind.h"
#include "python/wrappers/examples_lib/inheritance/mammals/animal_pygen_pybind.h"
#include "python/wrappers/examples_lib/inheritance/base_pygen_pybind.h"
#include "python/wrappers/examples_lib/inheritance/vehicle_pygen_pybind.h"
#include "python/wrappers/examples_lib/inheritance/bicycle_pygen_pybind.h"
#include "python/wrappers/examples_lib/inheritance/car_pygen_pybind.h"
#include "python/wrappers/examples_lib/inheritance/date_pygen_pybind.h"
#include "python/wrappers/examples_lib/inheritance/datetime_pygen_pybind.h"
#include "python/wrappers/examples_lib/inheritance/doctor_pygen_pybind.h"
#include "python/wrappers/examples_lib/inheritance/parallelogram_pygen_pybind.h"
#include "python/wrappers/examples_lib/inheritance/rectangle_pygen_pybind.h"
#include "python/wrappers/examples_lib/inheritance/rhombus_pygen_pybind.h"
#include "python/wrappers/examples_lib/inheritance/square_pygen_pybind.h"
#include "python/wrappers/examples_lib/inheritance/symbol_pygen_pybind.h"
#include "python/wrappers/examples_lib/inheritance/usage_pygen_pybind.h"
#include "python/wrappers/examples_lib/misc/size_buffer_pygen_pybind.h"
#include "python/wrappers/examples_lib/misc/yaml_example_pygen_pybind.h"
#include "python/wrappers/examples_lib/nested_types/list_pygen_pybind.h"
#include "python/wrappers/examples_lib/nested_types/usage/list_usage_pygen_pybind.h"
#include "python/wrappers/examples_lib/nullables/nullable_utils_pygen_pybind.h"
#include "python/wrappers/examples_lib/operators/counter_pygen_pybind.h"
#include "python/wrappers/examples_lib/operators/intarray_pygen_pybind.h"
#include "python/wrappers/examples_lib/optionals/optionals_pygen_pybind.h"
#include "python/wrappers/examples_lib/overloads/employee_pygen_pybind.h"
#include "python/wrappers/examples_lib/overloads/utils_pygen_pybind.h"
#include "python/wrappers/examples_lib/rv_policies/keep_alive_policy_pygen_pybind.h"
#include "python/wrappers/examples_lib/rv_policies/return_value_policies_pygen_pybind.h"
#include "python/wrappers/examples_lib/shared_ptr/shared_ptr_pygen_pybind.h"
#include "python/wrappers/examples_lib/shared_ptr/shared_ptr_symbol_pygen_pybind.h"
#include "python/wrappers/examples_lib/simple/holder_pygen_pybind.h"
#include "python/wrappers/examples_lib/simple/path_pygen_pybind.h"
#include "python/wrappers/examples_lib/templates/addressable_pygen_pybind.h"
#include "python/wrappers/examples_lib/templates/array_pygen_pybind.h"
#include "python/wrappers/examples_lib/templates/component_pygen_pybind.h"
#include "python/wrappers/examples_lib/templates/container_pygen_pybind.h"
#include "python/wrappers/examples_lib/templates/pair_pygen_pybind.h"
#include "python/wrappers/examples_lib/templates/stack_pygen_pybind.h"
#include "python/wrappers/examples_lib/templates/stack_usage_pygen_pybind.h"
#include "python/wrappers/examples_lib/templates/my_stack_pygen_pybind.h"
#include "python/wrappers/examples_lib/templates/template_methods_pygen_pybind.h"
#include "python/wrappers/examples_lib/templates/value_pygen_pybind.h"
#include "python/wrappers/examples_lib/templates/wrapper_pygen_pybind.h"
#include "python/wrappers/examples_lib/typedefs/queue_int_pygen_pybind.h"
#include "python/wrappers/examples_lib/typedefs/queue_int_shared_pygen_pybind.h"
#include <pybind11/pybind11.h>

namespace py = pybind11;
void bindExamples(py::module& m);

#endif

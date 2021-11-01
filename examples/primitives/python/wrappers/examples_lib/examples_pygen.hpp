/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 10/27/2021-13:37.
 * Please do not change it manually.
 */

#ifndef examples_pygen_hpp
#define examples_pygen_hpp

#include "python/wrappers/examples_lib/containers/map_pygen.hpp"
#include "python/wrappers/examples_lib/containers/nested_containers_pygen.hpp"
#include "python/wrappers/examples_lib/containers/pair_pygen.hpp"
#include "python/wrappers/examples_lib/containers/vector_pygen.hpp"
#include "python/wrappers/examples_lib/enums/color_pygen.hpp"
#include "python/wrappers/examples_lib/enums/frame_pygen.hpp"
#include "python/wrappers/examples_lib/extra/object_pygen.hpp"
#include "python/wrappers/examples_lib/extra/object_usage_pygen.hpp"
#include "python/wrappers/examples_lib/forward_decl/student_pygen.hpp"
#include "python/wrappers/examples_lib/forward_decl/teacher_pygen.hpp"
#include "python/wrappers/examples_lib/functionals/functional_example_pygen.hpp"
#include "python/wrappers/examples_lib/getters/fruits_pygen.hpp"
#include "python/wrappers/examples_lib/getters/number_pygen.hpp"
#include "python/wrappers/examples_lib/getters/person_pygen.hpp"
#include "python/wrappers/examples_lib/inheritance/base_pygen.hpp"
#include "python/wrappers/examples_lib/inheritance/vehicle_pygen.hpp"
#include "python/wrappers/examples_lib/inheritance/bicycle_pygen.hpp"
#include "python/wrappers/examples_lib/inheritance/car_pygen.hpp"
#include "python/wrappers/examples_lib/inheritance/date_pygen.hpp"
#include "python/wrappers/examples_lib/inheritance/time_pygen.hpp"
#include "python/wrappers/examples_lib/inheritance/datetime_pygen.hpp"
#include "python/wrappers/examples_lib/inheritance/parallelogram_pygen.hpp"
#include "python/wrappers/examples_lib/inheritance/rectangle_pygen.hpp"
#include "python/wrappers/examples_lib/inheritance/rhombus_pygen.hpp"
#include "python/wrappers/examples_lib/inheritance/square_pygen.hpp"
#include "python/wrappers/examples_lib/inheritance/usage_pygen.hpp"
#include "python/wrappers/examples_lib/misc/size_buffer_pygen.hpp"
#include "python/wrappers/examples_lib/misc/yaml_example_pygen.hpp"
#include "python/wrappers/examples_lib/nullables/nullable_utils_pygen.hpp"
#include "python/wrappers/examples_lib/operators/counter_pygen.hpp"
#include "python/wrappers/examples_lib/simple/task/task_pygen.hpp"
#include "python/wrappers/examples_lib/optionals/optionals_pygen.hpp"
#include "python/wrappers/examples_lib/overloads/employee_pygen.hpp"
#include "python/wrappers/examples_lib/overloads/utils_pygen.hpp"
#include "python/wrappers/examples_lib/shared_ptr/shared_ptr_pygen.hpp"
#include "python/wrappers/examples_lib/simple/holder_pygen.hpp"
#include "python/wrappers/examples_lib/simple/path_pygen.hpp"
#include "python/wrappers/examples_lib/simple/project_pygen.hpp"
#include "python/wrappers/examples_lib/simple/root_pygen.hpp"
#include "python/wrappers/examples_lib/templates/addressable_pygen.hpp"
#include "python/wrappers/examples_lib/templates/component_pygen.hpp"
#include "python/wrappers/examples_lib/templates/pair_pygen.hpp"
#include "python/wrappers/examples_lib/templates/stack_pygen.hpp"
#include "python/wrappers/examples_lib/templates/stack_usage_pygen.hpp"
#include "python/wrappers/examples_lib/templates/template_methods_pygen.hpp"
#include "python/wrappers/examples_lib/templates/wrapper_pygen.hpp"
#include <pybind11/pybind11.h>

namespace py = pybind11;
void bindExamples(py::module& m);

#endif
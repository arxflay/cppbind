/*
 * This file was generated by iegen on 06/11/2021-18:31.
 * Please do not change it manually.
 */

#ifndef examples_pygen_hpp
#define examples_pygen_hpp

#include "python/wrappers/containers/map_pygen.hpp"
#include "python/wrappers/containers/vector_pygen.hpp"
#include "python/wrappers/enums/color_pygen.hpp"
#include "python/wrappers/enums/frame_pygen.hpp"
#include "python/wrappers/forward_decl/student_pygen.hpp"
#include "python/wrappers/forward_decl/teacher_pygen.hpp"
#include "python/wrappers/functionals/functional_example_pygen.hpp"
#include "python/wrappers/getters/many_type_template_getter_pygen.hpp"
#include "python/wrappers/getters/number_pygen.hpp"
#include "python/wrappers/getters/one_type_template_getter_pygen.hpp"
#include "python/wrappers/getters/person_pygen.hpp"
#include "python/wrappers/inheritance/vehicle_pygen.hpp"
#include "python/wrappers/inheritance/bicycle_pygen.hpp"
#include "python/wrappers/inheritance/parallelogram_pygen.hpp"
#include "python/wrappers/inheritance/rectangle_pygen.hpp"
#include "python/wrappers/inheritance/rhombus_pygen.hpp"
#include "python/wrappers/inheritance/square_pygen.hpp"
#include "python/wrappers/operators/counter_pygen.hpp"
#include "python/wrappers/simple/task/task_pygen.hpp"
#include "python/wrappers/optionals/optionals_pygen.hpp"
#include "python/wrappers/overloads/utils_pygen.hpp"
#include "python/wrappers/simple/path_pygen.hpp"
#include "python/wrappers/simple/project_pygen.hpp"
#include "python/wrappers/simple/root_pygen.hpp"
#include "python/wrappers/templates/addressable_pygen.hpp"
#include "python/wrappers/templates/component_pygen.hpp"
#include "python/wrappers/templates/stack_pygen.hpp"
#include "python/wrappers/templates/stack_usage_pygen.hpp"
#include "python/wrappers/templates/template_methods_pygen.hpp"
#include <pybind11/pybind11.h>

namespace py = pybind11;
void bindExamples(py::module& m);

#endif
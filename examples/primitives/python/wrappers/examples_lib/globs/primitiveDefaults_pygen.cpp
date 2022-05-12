/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 05/12/2022-10:33.
 * Please do not change it manually.
 */

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/functional.h>

#include "cxx/globs/utils.hpp"
#include "cxx/enums/color.hpp"

namespace py = pybind11;

void bindExamplesLibGlobsPrimitivedefaultsPygen(py::module& m) {
    {
        m.def("optional_color", &::optionalColor, py::arg("c") = cppbind::example::Color::Red, py::return_value_policy::automatic);
    }
    {
        m.def("optional_string", &::optionalString, py::arg("optional_str") = "abc", py::return_value_policy::automatic);
    }
    {
        m.def("optional_int", &::optionalInt, py::arg("i") = 5, py::return_value_policy::automatic);
    }
} /* bindExamplesLibGlobsPrimitivedefaultsPygen */

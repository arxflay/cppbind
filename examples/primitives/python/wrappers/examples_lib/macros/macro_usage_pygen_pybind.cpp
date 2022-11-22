/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 11/17/2022-14:10.
 * Please do not change it manually.
 */

#include <cxxabi.h>
#include <memory>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/functional.h>

#include "cxx/macros/macro_usage.hpp"

namespace py = pybind11;

void bindExamplesLibMacrosMacroUsagePygen(py::module& m) {
    {
        m.def("mul_d", py::overload_cast<double, double>(&::mul), py::arg("a"), py::arg("b"), py::return_value_policy::automatic);
    }
    {
        using namespace cppbind::example;
        m.def("mul_l", &cppbind::example::mul, py::arg("a"), py::arg("b"), py::return_value_policy::automatic);
    }
} /* bindExamplesLibMacrosMacroUsagePygen */
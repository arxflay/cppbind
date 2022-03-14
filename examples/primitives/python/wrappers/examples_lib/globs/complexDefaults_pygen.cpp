/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 03/01/2022-18:21.
 * Please do not change it manually.
 */

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/functional.h>

#include "cxx/globs/utils.hpp"
#include "cxx/simple/task.hpp"
#include "cxx/simple/root.hpp"

namespace py = pybind11;

void bindExamplesLibGlobsComplexdefaults(py::module& m) {
    
    m.def("single_complex_default_value", &::singleComplexDefaultValue, py::arg("task") = Task("MyTask"), py::return_value_policy::automatic);

    m.def("multiple_mixed_default_values", &::multipleMixedDefaultValues, py::arg("task") = Task("DefaultTask"), py::arg("i") = 1, py::arg("r") = Root("DefaultRoot"), py::return_value_policy::automatic);
} /* bindExamplesLibGlobsComplexdefaults */
/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 07/29/2021-14:29.
 * Please do not change it manually.
 */

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/functional.h>

#include "cxx/simple/path.hpp"

namespace py = pybind11;

void bindIegenExamplePath(py::module& m) {
    using namespace iegen::example;
    py::class_<iegen::example::Path> path(m, "Path");

    path.def(py::init<const std::string &>(), py::arg("_value"));
    path.def("__str__", &iegen::example::Path::toString);

    path.def_readonly("value", &iegen::example::Path::value);
}
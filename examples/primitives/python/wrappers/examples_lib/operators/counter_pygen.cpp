/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 01/12/2022-13:54.
 * Please do not change it manually.
 */

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/functional.h>

#include "cxx/operators/counter.hpp"

namespace py = pybind11;

void bindIegenExampleCounter(py::module& m) {
    using namespace iegen::example;
    py::class_<iegen::example::Counter> counter(m, "Counter");

    counter.def(py::init<int>(), py::arg("count"));


    counter.def_property_readonly("count", &iegen::example::Counter::count);
    counter.def("__add__", &iegen::example::Counter::operator+, py::arg("counter"));
    counter.def("__gt__", &iegen::example::Counter::operator>, py::arg("counter"));
    counter.def("__iadd__", &iegen::example::Counter::operator+=, py::arg("counter"));
}

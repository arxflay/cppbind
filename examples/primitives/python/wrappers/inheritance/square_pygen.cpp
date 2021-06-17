/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 06/17/2021-10:23.
 * Please do not change it manually.
 */

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/functional.h>

#include "cxx/inheritance/square.hpp"

namespace py = pybind11;

void bindSquare(py::module& m) {
    using namespace iegen::example;
    py::class_<iegen::example::Square,iegen::example::Rhombus, iegen::example::Rectangle> square(m, "Square", py::is_final());

    square.def(py::init<double>(), py::arg("side"));


    square.def_property_readonly("area", &iegen::example::Square::area);
    square.def("perimeter", &iegen::example::Square::perimeter);
}
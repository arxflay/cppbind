#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/functional.h>

#include "cxx/inheritance/rectangle.hpp"

namespace py = pybind11;

void bindRectangle(py::module& m) {
    using namespace iegen::example;
    py::class_<iegen::example::Rectangle,iegen::example::Parallelogram> rectangle(m, "Rectangle");

    rectangle.def(py::init<double, double>(), py::arg("length"), py::arg("width"));


    rectangle.def_property_readonly("area", &iegen::example::Rectangle::area);
    rectangle.def("perimeter", &iegen::example::Rectangle::perimeter);


    rectangle.def_property_readonly("length", &iegen::example::Rectangle::length);


    rectangle.def_property_readonly("width", &iegen::example::Rectangle::width);
}
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/functional.h>

#include "cxx/inheritance/parallelogram.hpp"

namespace py = pybind11;

void bindParallelogram(py::module& m) {
    using namespace iegen::example;
    py::class_<iegen::example::Parallelogram> parallelogram(m, "Parallelogram");


    parallelogram.def_property_readonly("area", &iegen::example::Parallelogram::area);
    parallelogram.def("perimeter", &iegen::example::Parallelogram::perimeter);
}
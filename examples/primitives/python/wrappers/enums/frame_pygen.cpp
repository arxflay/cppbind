#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/functional.h>

#include "cxx/enums/frame.hpp"

namespace py = pybind11;

void bindFrame(py::module& m) {
    using namespace iegen::example;
    py::class_<iegen::example::Frame> frame(m, "Frame");

    frame.def(py::init<>());

    frame.def_readwrite("background_color", &iegen::example::Frame::backgroundColor);
}
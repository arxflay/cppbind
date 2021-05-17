#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/functional.h>

#include "cxx/overloads/utils.hpp"

namespace py = pybind11;

void bindUtils(py::module& m) {
    using namespace iegen::example;
    py::class_<iegen::example::Utils, std::shared_ptr<iegen::example::Utils>> utils(m, "Utils");

    utils.def(py::init<>());
    utils.def_static("sum", py::overload_cast<int, int>(&iegen::example::Utils::sum), py::arg("first"), py::arg("second"));
    utils.def_static("sum", py::overload_cast<float, float>(&iegen::example::Utils::sum), py::arg("first"), py::arg("second"));
    utils.def("concatenate", py::overload_cast<std::string, std::string>(&iegen::example::Utils::concatenate), py::arg("first"), py::arg("second"));
    utils.def("concatenate", py::overload_cast<std::string, std::string, std::string>(&iegen::example::Utils::concatenate), py::arg("first"), py::arg("second"), py::arg("third"));
}
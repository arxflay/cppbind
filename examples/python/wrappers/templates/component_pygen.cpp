#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/functional.h>

#include "cxx/templates/component.hpp"

namespace py = pybind11;

void bindComponent(py::module& m) {
    using namespace iegen::example;
    py::class_<iegen::example::Component, std::shared_ptr<iegen::example::Component>,iegen::example::Addressable<iegen::example::Root>> component(m, "Component");

    component.def(py::init<const iegen::example::Root &, const std::string &>(), py::arg("parent"), py::arg("name"));
}
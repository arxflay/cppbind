#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/functional.h>

#include "cxx/getters/person.hpp"

namespace py = pybind11;

void bindPerson(py::module& m) {
    using namespace iegen::example;
    py::class_<iegen::example::Person, std::shared_ptr<iegen::example::Person>> person(m, "Person");

    person.def(py::init<const std::string &, const std::string &, int>(), py::arg("name"), py::arg("email"), py::arg("age"));


    person.def_property("full_name", &iegen::example::Person::fullName, &iegen::example::Person::setFullName);

    person.def_readonly("email", &iegen::example::Person::_email);

    person.def_readwrite("age", &iegen::example::Person::_age);
}
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/functional.h>

#include "cxx/forward_decl/student.hpp"
#include "cxx/forward_decl/teacher.hpp"

namespace py = pybind11;

void bindStudent(py::module& m) {
    using namespace iegen::example;
    py::class_<iegen::example::Student> student(m, "Student");

    student.def(py::init<>());
    student.def("add_teacher", &iegen::example::Student::addTeacher, py::arg("t"));
    student.def("teachers", &iegen::example::Student::teachers);
}
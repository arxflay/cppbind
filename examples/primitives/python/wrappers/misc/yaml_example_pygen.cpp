/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 07/15/2021-08:40.
 * Please do not change it manually.
 */

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/functional.h>

#include "cxx/misc/yaml_example.hpp"

namespace py = pybind11;

void bindIegenExampleWithExternalAPIComments(py::module& m) {
    using namespace iegen::example;
    py::class_<iegen::example::WithExternalAPIComments> withexternalapicomments(m, "WithExternalAPIComments");

    withexternalapicomments.def(py::init<std::string>(), py::arg("s"));
    withexternalapicomments.def_static("ret_int", &iegen::example::WithExternalAPIComments::retInt, py::arg("n"));


    withexternalapicomments.def_property("str", &iegen::example::WithExternalAPIComments::str, &iegen::example::WithExternalAPIComments::setStr);
    withexternalapicomments.def_static("max", &iegen::example::WithExternalAPIComments::max<int>, py::arg("arg0"), py::arg("arg1"));
    withexternalapicomments.def_static("max", &iegen::example::WithExternalAPIComments::max<std::string>, py::arg("arg0"), py::arg("arg1"));
}
void bindIegenExampleAdderint(py::module& m) {
    using namespace iegen::example;
    py::class_<iegen::example::Adder<int>> adderInt(m, "Adderint");
adderInt.def_static("add", &iegen::example::Adder<int>::add, py::arg("a"), py::arg("b"));
}
void bindIegenExampleAdderfloat(py::module& m) {
    using namespace iegen::example;
    py::class_<iegen::example::Adder<double>> adderFloat(m, "Adderfloat");
adderFloat.def_static("add", &iegen::example::Adder<double>::add, py::arg("a"), py::arg("b"));
}
void bindIegenExamplecolor(py::module& m) {
    py::enum_<iegen::example::color>(m, "color")
        .value("RED", iegen::example::color::RED)
        .value("GREEN", iegen::example::color::GREEN)
        .value("BLUE", iegen::example::color::BLUE)
        .export_values();
}
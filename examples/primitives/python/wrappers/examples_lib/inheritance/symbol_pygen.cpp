/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 01/24/2022-12:35.
 * Please do not change it manually.
 */

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/functional.h>

#include "cxx/inheritance/symbol.hpp"

namespace py = pybind11;

void bindIegenExampleSign(py::module& m) {
    using namespace iegen::example;
    py::class_<iegen::example::Sign> sign(m, "Sign");

    sign.def(py::init<>());
    sign.def("type_name", &iegen::example::Sign::typeName);
}
void bindIegenExampleText(py::module& m) {
    using namespace iegen::example;
    py::class_<iegen::example::Text> text(m, "Text");

    text.def(py::init<>());
    text.def("type_name", &iegen::example::Text::typeName);
}
void bindIegenExampleDigit(py::module& m) {
    using namespace iegen::example;
    py::class_<iegen::example::Digit, iegen::example::Sign, iegen::example::Text> digit(m, "Digit");

    digit.def(py::init<>());
    digit.def("type_name", &iegen::example::Digit::typeName);
}
void bindIegenExampleSymbolUsage(py::module& m) {
    using namespace iegen::example;
    py::class_<iegen::example::SymbolUsage> symbolUsage(m, "SymbolUsage");

    symbolUsage.def(py::init<>());

    symbolUsage.def(py::init<iegen::example::Digit *>(), py::arg("d"));
    symbolUsage.def("get_text_type", &iegen::example::SymbolUsage::getTextType, py::arg("t"));
    symbolUsage.def("get_sign_type", &iegen::example::SymbolUsage::getSignType, py::arg("n"));
    symbolUsage.def("get_text_ptr", &iegen::example::SymbolUsage::getTextPtr);
    symbolUsage.def("get_sign_ptr", &iegen::example::SymbolUsage::getSignPtr);
}

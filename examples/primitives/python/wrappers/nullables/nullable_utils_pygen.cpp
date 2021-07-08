/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 07/02/2021-09:03.
 * Please do not change it manually.
 */

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/functional.h>

#include "cxx/nullables/nullable_utils.hpp"

namespace py = pybind11;

void bindIegenExampleNullableNumberInt(py::module& m) {
    using namespace iegen::example::nullable;
    py::class_<iegen::example::nullable::NumberInt, std::shared_ptr<iegen::example::nullable::NumberInt>> numberint(m, "NumberInt");

    numberint.def(py::init<int>(), py::arg("val_"));

    numberint.def_readonly("value", &iegen::example::nullable::NumberInt::value);
}
void bindIegenExampleNullableNumberDouble(py::module& m) {
    using namespace iegen::example::nullable;
    py::class_<iegen::example::nullable::NumberDouble> numberdouble(m, "NumberDouble");

    numberdouble.def(py::init<double>(), py::arg("val_"));

    numberdouble.def_readonly("value", &iegen::example::nullable::NumberDouble::value);
}
void bindIegenExampleNullableUtils(py::module& m) {
    using namespace iegen::example::nullable;
    py::class_<iegen::example::nullable::Utils, std::shared_ptr<iegen::example::nullable::Utils>> utils(m, "Utils");

    utils.def(py::init<iegen::example::nullable::NumberDouble *>(), py::arg("num"));
    utils.def_static("max", py::overload_cast<iegen::example::nullable::NumberDouble *, iegen::example::nullable::NumberDouble *>(&iegen::example::nullable::Utils::max), py::arg("first"), py::arg("second"));
    utils.def_static("max", py::overload_cast<std::shared_ptr<NumberInt>, std::shared_ptr<NumberInt>>(&iegen::example::nullable::Utils::max), py::arg("first"), py::arg("second"));
    utils.def_static("check_nonnull_arg", &iegen::example::nullable::Utils::checkNonnullArg, py::arg("number"));
    utils.def_static("check_nonnull_return", &iegen::example::nullable::Utils::checkNonnullReturn);


    utils.def_property("nullable", &iegen::example::nullable::Utils::nullable, &iegen::example::nullable::Utils::setNullable);


    utils.def_property("non_null", &iegen::example::nullable::Utils::nonNull, &iegen::example::nullable::Utils::setNonNull);

    utils.def_readwrite("num_double", &iegen::example::nullable::Utils::numDouble);

    utils.def_readwrite("num_int", &iegen::example::nullable::Utils::numInt);
}
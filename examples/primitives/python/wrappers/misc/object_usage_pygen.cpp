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

#include "cxx/misc/object_usage.hpp"
#include "cxx/misc/object.hpp"

namespace py = pybind11;

void bindIegenExampleObjectUsage(py::module& m) {
    using namespace iegen::example;
    py::class_<iegen::example::ObjectUsage, std::shared_ptr<iegen::example::ObjectUsage>,iegen::example::Object> objectusage(m, "ObjectUsage");

    objectusage.def(py::init<>());
}
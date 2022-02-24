/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 02/16/2022-06:24.
 * Please do not change it manually.
 */

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/functional.h>

#include "cxx/containers/vector.hpp"

namespace py = pybind11;

void bindExamplesLibContainersVector(py::module& m) {
    {
        using namespace iegen::example;
        py::class_<iegen::example::VectorItem> vectorItem(m, "VectorItem");
        vectorItem.def_readwrite("value", &iegen::example::VectorItem::value, py::return_value_policy::reference_internal);

        vectorItem.def(py::init<int>(), py::arg("_value"));
    }
    {
        using namespace iegen::example;
        py::class_<iegen::example::VectorExamples> vectorExamples(m, "VectorExamples");
        
        vectorExamples.def(py::init<>());
        vectorExamples.def("add_int_vector", &iegen::example::VectorExamples::addIntVector, py::arg("v"));
        vectorExamples.def("add_obj_vector", &iegen::example::VectorExamples::addObjVector, py::arg("v"));
        vectorExamples.def("add_string_vector", &iegen::example::VectorExamples::addStringVector, py::arg("v"));
        vectorExamples.def("get_string_vector", &iegen::example::VectorExamples::getStringVector, py::return_value_policy::automatic);
        vectorExamples.def("get_obj_vector", &iegen::example::VectorExamples::getObjVector, py::return_value_policy::reference);
        vectorExamples.def("get_int_vector", &iegen::example::VectorExamples::getIntVector, py::return_value_policy::automatic);
    }
} /* bindExamplesLibContainersVector */

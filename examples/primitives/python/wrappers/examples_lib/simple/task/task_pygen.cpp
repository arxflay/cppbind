/**
 * ,--.,------. ,----.   ,------.,--.  ,--. 
 * |  ||  .---''  .-.|   |  .---'|  ,'.|  | 
 * |  ||  `--, |  | .---.|  `--, |  |' '  | 
 * |  ||  `---.'  '--'  ||  `---.|  | `   | 
 * `--'`------' `------' `------'`--'  `--' 
 * 
 * This file is generated by iegen on 02/22/2022-09:29.
 * Please do not change it manually.
 */

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/functional.h>

#include "cxx/simple/task.hpp"

namespace py = pybind11;

void bindExamplesLibSimpleTaskTask(py::module& m) {
    {
        using namespace iegen::example;
        py::class_<iegen::example::Task> pyTask(m, "PyTask");
        
        pyTask.def(py::init<const std::string &>(), py::arg("title"));

        pyTask.def_property_readonly("title", &iegen::example::Task::title, py::return_value_policy::reference_internal);
        pyTask.def("set_title", &iegen::example::Task::setTitle, py::arg("title"));
        pyTask.def("equals", &iegen::example::Task::equals, py::arg("t"), py::return_value_policy::automatic);
    }
} /* bindExamplesLibSimpleTaskTask */

/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 05/12/2022-10:33.
 * Please do not change it manually.
 */

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/functional.h>

#include "cxx/overloads/employee.hpp"

namespace py = pybind11;

void bindExamplesLibOverloadsEmployeePygen(py::module& m) {
    {
        using namespace cppbind::example;
        py::class_<cppbind::example::Employee, std::shared_ptr<cppbind::example::Employee>> employee(m, "Employee");
        
        employee.def(py::init<const std::string &>(), py::arg("name"));

        employee.def(py::init<int, const std::string &>(), py::arg("age"), py::arg("email") = "");
        employee.def("set_data", py::overload_cast<const std::string &, int, const std::string &>(&cppbind::example::Employee::setData), py::arg("name"), py::arg("age"), py::arg("email") = "");
        employee.def("set_data", py::overload_cast<int>(&cppbind::example::Employee::setData), py::arg("age"));

        employee.def_property_readonly("name", &cppbind::example::Employee::name, py::return_value_policy::reference_internal);

        employee.def_property_readonly("email", &cppbind::example::Employee::email, py::return_value_policy::reference_internal);

        employee.def_property_readonly("age", &cppbind::example::Employee::age, py::return_value_policy::reference_internal);
    }
} /* bindExamplesLibOverloadsEmployeePygen */

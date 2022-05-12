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

#include "cxx/inheritance/rectangle.hpp"
#include "cxx/inheritance/parallelogram.hpp"

namespace py = pybind11;

void bindExamplesLibInheritanceRectanglePygen(py::module& m) {
    {
        using namespace cppbind::example;
        py::class_<cppbind::example::Rectangle, cppbind::example::Parallelogram> rectangle(m, "Rectangle");
        
        rectangle.def(py::init<double, double>(), py::arg("length"), py::arg("width"));

        rectangle.def_property_readonly("area", &cppbind::example::Rectangle::area, py::return_value_policy::reference_internal);

        rectangle.def_property_readonly("length", &cppbind::example::Rectangle::length, py::return_value_policy::reference_internal);

        rectangle.def_property_readonly("width", &cppbind::example::Rectangle::width, py::return_value_policy::reference_internal);
    }
} /* bindExamplesLibInheritanceRectanglePygen */

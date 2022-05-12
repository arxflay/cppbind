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

#include "cxx/inheritance/parallelogram.hpp"

namespace py = pybind11;

void bindExamplesLibInheritanceParallelogramPygen(py::module& m) {
    {
        using namespace cppbind::example;
        py::class_<cppbind::example::Parallelogram> parallelogram(m, "Parallelogram");
        
        parallelogram.def_property_readonly("area", &cppbind::example::Parallelogram::area, py::return_value_policy::reference_internal);
        parallelogram.def("perimeter", &cppbind::example::Parallelogram::perimeter, py::return_value_policy::automatic);
        parallelogram.def("equals", &cppbind::example::Parallelogram::equals, py::arg("p"), py::return_value_policy::automatic);
    }
} /* bindExamplesLibInheritanceParallelogramPygen */

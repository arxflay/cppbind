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

#include "cxx/simple/holder.hpp"
#include "cxx/simple/task.hpp"

namespace py = pybind11;

void bindExamplesLibSimpleHolderPygen(py::module& m) {
    {
        using namespace cppbind::example;
        py::class_<cppbind::example::Holder> holder(m, "Holder");
        
        holder.def(py::init<>());

        holder.def_property_readonly("task", &cppbind::example::Holder::task, py::return_value_policy::reference_internal);
    }
} /* bindExamplesLibSimpleHolderPygen */

/**
 *   ______ .______   .______   .______    __  .__   __.  _______  
 *  /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
 * |  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
 * |  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
 * |  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 *  \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 
 * 
 * This file is generated by cppbind on 07/06/2022-10:46.
 * Please do not change it manually.
 */

#include <cxxabi.h>
#include <memory>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/functional.h>

#include "cxx/templates/template_methods.hpp"
#include "cxx/simple/project.hpp"
#include "cxx/simple/root.hpp"

namespace py = pybind11;

void bindExamplesLibTemplatesTemplateMethodsPygen(py::module& m) {
    {
        using namespace cppbind::example;
        py::class_<cppbind::example::TemplateMethods> templateMethods(m, "TemplateMethods");
        
        templateMethods.def(py::init<>());
        templateMethods.def("max", &cppbind::example::TemplateMethods::max<int>, py::arg("a"), py::arg("b"), py::return_value_policy::automatic);
        templateMethods.def("max", &cppbind::example::TemplateMethods::max<std::string>, py::arg("a"), py::arg("b"), py::return_value_policy::automatic);
        templateMethods.def("make_pair", &cppbind::example::TemplateMethods::makePair<cppbind::example::Project, cppbind::example::Project>, py::arg("a"), py::arg("b"), py::return_value_policy::reference);
        templateMethods.def("make_pair", &cppbind::example::TemplateMethods::makePair<cppbind::example::Root, cppbind::example::Project>, py::arg("a"), py::arg("b"), py::return_value_policy::reference);
        templateMethods.def_static("merge", &cppbind::example::TemplateMethods::merge<int>, py::arg("first"), py::arg("second"), py::return_value_policy::automatic);
        templateMethods.def_static("merge", &cppbind::example::TemplateMethods::merge<std::string>, py::arg("first"), py::arg("second"), py::return_value_policy::automatic);
        templateMethods.def("__repr__", [](const cppbind::example::TemplateMethods& self) -> std::string {
            int status;
            const char* name = typeid(self).name();
            std::unique_ptr<char[], std::function<void(char*)>> demangledSymbol(
                __cxxabiv1::__cxa_demangle(name, nullptr, nullptr, &status), free);
            const char * classname = "cppbind::example::TemplateMethods";
            if (status == 0) {
                classname = demangledSymbol.get();
            }
            char res[96];
            snprintf(res, sizeof(res), "<0x%08zx: %s>", reinterpret_cast<std::size_t>(&self), classname);
            return res;
        });  
    }
} /* bindExamplesLibTemplatesTemplateMethodsPygen */

#ifndef getters_many_type_template_getter_hpp
#define getters_many_type_template_getter_hpp

#include <pybind11/pybind11.h>

namespace py = pybind11;

void bindFoo(py::module& m);
void bindBar(py::module& m);
void bindManyTypeTemplateGetter(py::module& m);

#endif
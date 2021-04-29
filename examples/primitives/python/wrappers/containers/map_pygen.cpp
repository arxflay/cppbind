#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/functional.h>

#include "cxx/containers/map.hpp"

namespace py = pybind11;

void bindMapItem(py::module& m) {
    using namespace iegen::example;
    py::class_<iegen::example::MapItem> mapitem(m, "MapItem");

    mapitem.def_readwrite("value", &iegen::example::MapItem::value);

    mapitem.def(py::init<int>(), py::arg("_value"));
}
void bindMapExamples(py::module& m) {
    using namespace iegen::example;
    py::class_<iegen::example::MapExamples> mapexamples(m, "MapExamples");

    mapexamples.def(py::init<>());
    mapexamples.def("add_string_pair", &iegen::example::MapExamples::addStringPair, py::arg("info"));
    mapexamples.def("add_int_map", &iegen::example::MapExamples::addIntMap, py::arg("info"));
    mapexamples.def("add_string_map", &iegen::example::MapExamples::addStringMap, py::arg("info"));
    mapexamples.def("get_string_map", &iegen::example::MapExamples::getStringMap);
    mapexamples.def("get_int_map", &iegen::example::MapExamples::getIntMap);
    mapexamples.def("add_mixed_map", &iegen::example::MapExamples::addMixedMap, py::arg("info"));
    mapexamples.def("get_mixed_map", &iegen::example::MapExamples::getMixedMap);
}
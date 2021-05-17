#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <pybind11/functional.h>

#include "cxx/inheritance/vehicle.hpp"

namespace py = pybind11;

void bindVehicle(py::module& m) {
    using namespace iegen::example;
    py::class_<iegen::example::Vehicle> vehicle(m, "Vehicle");

    vehicle.def(py::init<int>(), py::arg("numberOfSeats"));


    vehicle.def_property_readonly("number_of_seats", &iegen::example::Vehicle::numberOfSeats);
}
from __future__ import annotations
from typing import *
import examples.inheritance.vehicle as pybind_vehicle_pygen
from bind_utils import *
from metaclass import *


class Vehicle(metaclass=OriginalMethodsMetaclass):
    """
    """
    
    @bind
    def __init__(self, number_of_seats: int):
        pass
    
    @property
    @bind
    def number_of_seats(self) -> int:
        """"""
        pass

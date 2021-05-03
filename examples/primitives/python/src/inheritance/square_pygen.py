from __future__ import annotations
from typing import *
import examples.inheritance.square as pybind_square_pygen
from bind_utils import *
from metaclass import *


class Square(Rhombus, Rectangle, metaclass=OriginalMethodsMetaclass):
    """
    """
    
    @bind
    def __init__(self, side: float):
        pass
    
    @property
    @bind
    def area(self) -> float:
        """
        """
        pass
    
    @bind
    def perimeter(self) -> float:
        """
        """
        pass

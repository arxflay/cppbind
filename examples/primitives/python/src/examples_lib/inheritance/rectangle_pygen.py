"""
  ______ .______   .______   .______    __  .__   __.  _______  
 /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
|  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
|  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
|  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 

This file is generated by cppbind on 11/24/2022-07:17.
Please do not change it manually.
"""
from __future__ import annotations

from typing import *

import examples.inheritance.rectangle as pybind_rectangle_pygen
import examples_lib.inheritance.parallelogram_pygen as parallelogram_pygen
from examples_lib.cppbind.cppbind_metaclass_pygen import *
from examples_lib.cppbind.cppbind_utils_pygen import *


class Rectangle(parallelogram_pygen.Parallelogram, metaclass=CppBindMetaclass):
    
    @bind
    def __init__(self, length: float, width: float):
        
        pass
    
    @property
    @bind
    def area(self) -> float:
        
        pass

    @property
    @bind
    def length(self) -> float:
        
        pass

    @property
    @bind
    def width(self) -> float:
        
        pass

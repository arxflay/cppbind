"""
  ______ .______   .______   .______    __  .__   __.  _______  
 /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
|  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
|  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
|  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 

This file is generated by cppbind on 05/12/2022-10:33.
Please do not change it manually.
"""
from __future__ import annotations

from typing import *

import examples.inheritance.rhombus as pybind_rhombus_pygen
import examples_lib.inheritance.parallelogram_pygen as parallelogram_pygen
from examples_lib.cppbind.bind_utils_pygen import *
from examples_lib.cppbind.metaclass_pygen import *


class RhombusFigure(parallelogram_pygen.Parallelogram, metaclass=CppBindMetaclass):
    """
    Documentation generated from: `cxx/inheritance/rhombus.hpp#L16
    <https://github.com/PicsArt/cppbind/tree/master/examples/primitives/cxx/inheritance/rhombus.hpp#L16>`_
    """
    
    @bind
    def __init__(self, diagonal1: float, diagonal2: float):
        """
        Documentation generated from: `cxx/inheritance/rhombus.hpp#L23
        <https://github.com/PicsArt/cppbind/tree/master/examples/primitives/cxx/inheritance/rhombus.hpp#L23>`_
        """
        pass

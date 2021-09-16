"""
,--.,------. ,----.   ,------.,--.  ,--. 
|  ||  .---''  .-.|   |  .---'|  ,'.|  | 
|  ||  `--, |  | .---.|  `--, |  |' '  | 
|  ||  `---.'  '--'  ||  `---.|  | `   | 
`--'`------' `------' `------'`--'  `--' 

This file is generated by iegen on 08/30/2021-10:41.
Please do not change it manually.
"""
from __future__ import annotations

from typing import *

import examples.enums.color as pybind_color_pygen
from examples_lib.bind_utils import *
from examples_lib.metaclass import *


class Color(metaclass=EnumMetaclass):
    """
    Color Enum.
    Documentation generated from: `cxx/enums/color.hpp#L27
    <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/enums/color.hpp#L27>`_
    """
    # Red = 1
    Red = pybind_color_pygen.Color.Red
    # Green = 1
    Green = pybind_color_pygen.Color.Green
    # Blue = 20
    Blue = pybind_color_pygen.Color.Blue

    def __int__(self):
        return self.value

    def __str__(self):
        return str(self.value)

"""
,--.,------. ,----.   ,------.,--.  ,--. 
|  ||  .---''  .-.|   |  .---'|  ,'.|  | 
|  ||  `--, |  | .---.|  `--, |  |' '  | 
|  ||  `---.'  '--'  ||  `---.|  | `   | 
`--'`------' `------' `------'`--'  `--' 

This file is generated by iegen on 10/26/2021-15:58.
Please do not change it manually.
"""
from __future__ import annotations

from typing import *

import examples.enums.color as pybind_color_pygen
from examples_lib.iegen.bind_utils import *
from examples_lib.iegen.metaclass import *


class Color(metaclass=EnumMetaclass):
    """
    Color Enum.
    Documentation generated from: `cxx/enums/color.hpp#L27
    <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/enums/color.hpp#L27>`_
    """
    # Red = 1
    Red = pybind_color_pygen.Color.Red
    # Green = 2
    Green = pybind_color_pygen.Color.Green
    # Blue = 20
    Blue = pybind_color_pygen.Color.Blue

    def __int__(self):
        return self.value

    def __str__(self):
        return str(self.value)


class ColorShade(metaclass=EnumMetaclass):
    """
    Documentation generated from: `cxx/enums/color.hpp#L50
    <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/enums/color.hpp#L50>`_
    """
    # Light = 1
    ShadeLight = pybind_color_pygen.ColorShade.Light
    # Dark = 2
    ShadeDark = pybind_color_pygen.ColorShade.Dark
    # SemiLight = 3
    ShadeSemiLight = pybind_color_pygen.ColorShade.SemiLight
    # SemiDark = 4
    ShadeSemiDark = pybind_color_pygen.ColorShade.SemiDark

    def __int__(self):
        return self.value

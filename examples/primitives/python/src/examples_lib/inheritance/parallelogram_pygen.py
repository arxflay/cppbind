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

from abc import abstractmethod
from typing import *

import examples.inheritance.parallelogram as pybind_parallelogram_pygen
from examples_lib.iegen.bind_utils import *
from examples_lib.iegen.metaclass import *


class Parallelogram(metaclass=OriginalMethodsMetaclass):
    """
    Documentation generated from: `cxx/inheritance/parallelogram.hpp#L12
    <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/inheritance/parallelogram.hpp#L12>`_
    """
    @abstractmethod
    def __init__(self, *args, **kwargs):
        pass
    
    @property
    @bind
    def area(self) -> float:
        """
        Documentation generated from: `cxx/inheritance/parallelogram.hpp#L22
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/inheritance/parallelogram.hpp#L22>`_
        """
        pass
    
    @bind
    def perimeter(self) -> float:
        """
        Documentation generated from: `cxx/inheritance/parallelogram.hpp#L29
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/inheritance/parallelogram.hpp#L29>`_
        """
        pass

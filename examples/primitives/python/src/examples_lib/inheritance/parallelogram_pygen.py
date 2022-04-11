"""
,--.,------. ,----.   ,------.,--.  ,--. 
|  ||  .---''  .-.|   |  .---'|  ,'.|  | 
|  ||  `--, |  | .---.|  `--, |  |' '  | 
|  ||  `---.'  '--'  ||  `---.|  | `   | 
`--'`------' `------' `------'`--'  `--' 

This file is generated by iegen on 03/24/2022-13:05.
Please do not change it manually.
"""
from __future__ import annotations

from abc import abstractmethod
from typing import *

import examples.inheritance.parallelogram as pybind_parallelogram_pygen
from examples_lib.iegen.bind_utils_pygen import *
from examples_lib.iegen.metaclass_pygen import *


class Parallelogram(metaclass=IEGenMetaclass):
    """
    Documentation generated from: `cxx/inheritance/parallelogram.hpp#L16
    <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/inheritance/parallelogram.hpp#L16>`_
    """
    @abstractmethod
    def __init__(self, *args, **kwargs):
        pass
    
    @property
    @bind
    def area(self) -> float:
        """
        Documentation generated from: `cxx/inheritance/parallelogram.hpp#L26
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/inheritance/parallelogram.hpp#L26>`_
        """
        pass
    
    @bind
    def perimeter(self) -> float:
        """
        Documentation generated from: `cxx/inheritance/parallelogram.hpp#L33
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/inheritance/parallelogram.hpp#L33>`_
        """
        pass

    @bind
    def equals(self, p: Parallelogram) -> bool:
        """
        Documentation generated from: `cxx/inheritance/parallelogram.hpp#L42
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/inheritance/parallelogram.hpp#L42>`_
        """
        pass

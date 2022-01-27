"""
,--.,------. ,----.   ,------.,--.  ,--. 
|  ||  .---''  .-.|   |  .---'|  ,'.|  | 
|  ||  `--, |  | .---.|  `--, |  |' '  | 
|  ||  `---.'  '--'  ||  `---.|  | `   | 
`--'`------' `------' `------'`--'  `--' 

This file is generated by iegen on 01/27/2022-06:50.
Please do not change it manually.
"""
from __future__ import annotations

from abc import abstractmethod
from typing import *

import examples.inheritance.base as pybind_base_pygen
from examples_lib.iegen.bind_utils_pygen import *
from examples_lib.iegen.metaclass_pygen import *


class Base(metaclass=OriginalMethodsMetaclass):
    """
    Documentation generated from: `cxx/inheritance/base.hpp#L14
    <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/inheritance/base.hpp#L14>`_
    """
    @abstractmethod
    def __init__(self, *args, **kwargs):
        pass
    
    @bind
    def value(self) -> str:
        """
        Documentation generated from: `cxx/inheritance/base.hpp#L24
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/inheritance/base.hpp#L24>`_
        """
        pass

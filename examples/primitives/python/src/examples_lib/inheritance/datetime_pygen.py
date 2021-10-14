"""
,--.,------. ,----.   ,------.,--.  ,--. 
|  ||  .---''  .-.|   |  .---'|  ,'.|  | 
|  ||  `--, |  | .---.|  `--, |  |' '  | 
|  ||  `---.'  '--'  ||  `---.|  | `   | 
`--'`------' `------' `------'`--'  `--' 

This file is generated by iegen on 10/13/2021-14:43.
Please do not change it manually.
"""
from __future__ import annotations

from typing import *

import examples.inheritance.datetime as pybind_datetime_pygen
import examples_lib.inheritance.date_pygen as date
import examples_lib.inheritance.time_pygen as time
from examples_lib.bind_utils import *
from examples_lib.metaclass import *


class DateTime(time.Time, date.Date, metaclass=OriginalMethodsMetaclass):
    """
    Documentation generated from: `cxx/inheritance/datetime.hpp#L18
    <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/inheritance/datetime.hpp#L18>`_
    """
    
    @bind
    def __init__(self, d: int, mo: int, y: int, h: int, mi: int, s: int):
        """
        Documentation generated from: `cxx/inheritance/datetime.hpp#L24
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/inheritance/datetime.hpp#L24>`_
        """
        pass
    
    @property
    @bind
    def datetime(self) -> str:
        """
        Documentation generated from: `cxx/inheritance/datetime.hpp#L39
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/inheritance/datetime.hpp#L39>`_
        """
        pass

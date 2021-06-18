"""
This file was generated by iegen on 06/16/2021-14:04.
Please do not change it manually.
"""

from __future__ import annotations

from typing import *

import examples.optionals.optionals as pybind_optionals_pygen
from bind_utils import *
from metaclass import *
from simple.task import *
from enums import *


class Optionals(metaclass=OriginalMethodsMetaclass):
    """
    Documentation generated from: `cxx/optionals/optionals.hpp#L21
    <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/optionals/optionals.hpp#L21>`_
    """
    
    @bind
    def __init__(self):
        """
        constructor
        Documentation generated from: `cxx/optionals/optionals.hpp#L30
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/optionals/optionals.hpp#L30>`_
        """
        pass
    
    @bind
    def optional_ptr_with_nullptr_default(self, task: PyTask = None) -> PyTask:
        """

        Documentation generated from: `cxx/optionals/optionals.hpp#L39
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/optionals/optionals.hpp#L39>`_
        """
        pass

    @bind
    def optional_int_with_default(self, val: int = 5) -> int:
        """
        Documentation generated from: `cxx/optionals/optionals.hpp#L48
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/optionals/optionals.hpp#L48>`_
        """
        pass

    @bind
    def optional_string_with_default(self, optional_str: str = "abc") -> str:
        """
        @param[in] optional_str string with default value
        Documentation generated from: `cxx/optionals/optionals.hpp#L58
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/optionals/optionals.hpp#L58>`_
        """
        pass

    @bind
    def optional_char_with_default(self, symbol: str = ',') -> str:
        """
        Documentation generated from: `cxx/optionals/optionals.hpp#L67
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/optionals/optionals.hpp#L67>`_
        """
        pass

    @bind
    def optional_ptr_with_null_default(self, task: PyTask = None) -> PyTask:
        """
        Documentation generated from: `cxx/optionals/optionals.hpp#L76
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/optionals/optionals.hpp#L76>`_
        """
        pass

    @bind
    def optional_enum_with_default(self, c: Color = Color.Red) -> Color:
        """
        Documentation generated from: `cxx/optionals/optionals.hpp#L85
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/optionals/optionals.hpp#L85>`_
        """
        pass

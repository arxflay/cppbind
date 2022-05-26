"""
  ______ .______   .______   .______    __  .__   __.  _______  
 /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
|  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
|  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
|  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 

This file is generated by cppbind on 05/23/2022-09:36.
Please do not change it manually.
"""
from __future__ import annotations

import array.array.array as pybind_array
from typing import *

from cppbind.bind_utils import *
from cppbind.metaclass import *


class Array(metaclass=CppBindMetaclass):
    """
    Documentation generated from: `cxx/array.hpp#L5
    <https://github.com/PicsArt/cppbind/tree/master/examples/tutorials/array/cxx/array.hpp#L5>`_
    """
    
    @bind
    def __init__(self):
        """
        Documentation generated from: `cxx/array.hpp#L7
        <https://github.com/PicsArt/cppbind/tree/master/examples/tutorials/array/cxx/array.hpp#L7>`_
        """
        pass
    
    @property
    @bind
    def size(self) -> int:
        """
        Documentation generated from: `cxx/array.hpp#L21
        <https://github.com/PicsArt/cppbind/tree/master/examples/tutorials/array/cxx/array.hpp#L21>`_
        """
        pass

    @property
    @bind
    def empty(self) -> bool:
        """
        Documentation generated from: `cxx/array.hpp#L25
        <https://github.com/PicsArt/cppbind/tree/master/examples/tutorials/array/cxx/array.hpp#L25>`_
        """
        pass
    
    @bind
    def front(self) -> int:
        """
        Documentation generated from: `cxx/array.hpp#L9
        <https://github.com/PicsArt/cppbind/tree/master/examples/tutorials/array/cxx/array.hpp#L9>`_
        """
        pass

    @bind
    def back(self) -> int:
        """
        Documentation generated from: `cxx/array.hpp#L13
        <https://github.com/PicsArt/cppbind/tree/master/examples/tutorials/array/cxx/array.hpp#L13>`_
        """
        pass

    @bind
    def push_back(self, element: int) -> None:
        """
        Documentation generated from: `cxx/array.hpp#L17
        <https://github.com/PicsArt/cppbind/tree/master/examples/tutorials/array/cxx/array.hpp#L17>`_
        """
        pass

    @bind
    def __getitem__(self, i: int) -> int:
        """
        Documentation generated from: `cxx/array.hpp#L29
        <https://github.com/PicsArt/cppbind/tree/master/examples/tutorials/array/cxx/array.hpp#L29>`_
        """
        pass

    @bind
    def __setitem__(self, i: int, value: int):
        """
        Documentation generated from: `cxx/array.hpp#L29
        <https://github.com/PicsArt/cppbind/tree/master/examples/tutorials/array/cxx/array.hpp#L29>`_
        """
        pass

    @bind
    def at(self, i: int) -> int:
        """
        Documentation generated from: `cxx/array.hpp#L33
        <https://github.com/PicsArt/cppbind/tree/master/examples/tutorials/array/cxx/array.hpp#L33>`_
        """
        pass

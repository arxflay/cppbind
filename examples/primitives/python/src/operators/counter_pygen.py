"""
This file was generated by iegen on 06/09/2021-14:03.
Please do not change it manually.
"""

from __future__ import annotations

from typing import *

import examples.operators.counter as pybind_counter_pygen
from bind_utils import *
from metaclass import *


class Counter(metaclass=OriginalMethodsMetaclass):
    """
    An example for with overloaded methods.
    Documentation generated from: `cxx/operators/counter.hpp#L13 <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/operators/counter.hpp#L13>`_
    """
    
    @bind
    def __init__(self, count: int):
        """
        Counter constructor.
        Documentation generated from: `cxx/operators/counter.hpp#L20 <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/operators/counter.hpp#L20>`_
        """
        pass
    
    @property
    @bind
    def count(self) -> int:
        """
        Getter for count.
        Documentation generated from: `cxx/operators/counter.hpp#L32 <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/operators/counter.hpp#L32>`_
        """
        pass
    
    @bind
    def __add__(self, counter: Counter) -> Counter:
        """
        Plus operator
        Documentation generated from: `cxx/operators/counter.hpp#L43 <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/operators/counter.hpp#L43>`_
        """
        pass

    @bind
    def compare_to(self, counter: Counter) -> int:
        """
        Comparison operator for kotlin
        Documentation generated from: `cxx/operators/counter.hpp#L55 <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/operators/counter.hpp#L55>`_
        """
        pass

    @bind
    def __gt__(self, counter: Counter) -> bool:
        """
        Documentation generated from: `cxx/operators/counter.hpp#L68 <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/operators/counter.hpp#L68>`_
        """
        pass

    @bind
    def __iadd__(self, counter: Counter) -> Counter:
        """
        Documentation generated from: `cxx/operators/counter.hpp#L79 <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/operators/counter.hpp#L79>`_
        """
        pass

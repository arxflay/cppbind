"""
This file was generated by iegen on 05/18/2021-20:19.
Please do not change it manually.
"""

from __future__ import annotations

from typing import *

import examples.functionals.functional_example as pybind_functional_example_pygen
from bind_utils import *
from metaclass import *


class FunctionalExamples(metaclass=OriginalMethodsMetaclass):
    """"""
    
    @bind
    def __init__(self):
        pass
    
    @classmethod
    @bind
    def gen_func_to_increment_result(cls, f: Callable[[int], int]) -> Callable[[int], int]:
        """"""
        pass
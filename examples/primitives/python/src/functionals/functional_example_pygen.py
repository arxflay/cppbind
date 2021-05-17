from __future__ import annotations
from typing import *
import examples.functionals.functional_example as pybind_functional_example_pygen
from bind_utils import *
from metaclass import *


class FunctionalExamples(metaclass=OriginalMethodsMetaclass):
    """
    comments"""
    
    @bind
    def __init__(self):
        pass
    
    @classmethod
    @bind
    def gen_func_to_increment_result(cls, f: Callable[[int], int]) -> Callable[[int], int]:
        """
        comments
        """
        pass

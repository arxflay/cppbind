"""
  ______ .______   .______   .______    __  .__   __.  _______  
 /      ||   _  \  |   _  \  |   _  \  |  | |  \ |  | |       \ 
|  ,----'|  |_)  | |  |_)  | |  |_)  | |  | |   \|  | |  .--.  |
|  |     |   ___/  |   ___/  |   _  <  |  | |  . `  | |  |  |  |
|  `----.|  |      |  |      |  |_)  | |  | |  |\   | |  '--'  |
 \______|| _|      | _|      |______/  |__| |__| \__| |_______/ 

This file is generated by cppbind on 11/24/2022-07:17.
Please do not change it manually.
"""
from __future__ import annotations

from typing import *

import examples.containers.pair as pybind_pair_pygen
from examples_lib.cppbind.cppbind_metaclass_pygen import *
from examples_lib.cppbind.cppbind_utils_pygen import *

if TYPE_CHECKING:
    import examples_lib.containers.map_pygen as map_pygen


class PairExamples(metaclass=CppBindMetaclass):
    """
    comments

    """
    
    @bind
    def __init__(self):
        """
        comments

        """
        pass
    
    @property
    @bind
    def complex_pair_obj(self) -> Tuple[map_pygen.MapItem, List[map_pygen.MapItem]]:
        
        pass

    @complex_pair_obj.setter
    @bind
    def complex_pair_obj(self, value: Tuple[map_pygen.MapItem, List[map_pygen.MapItem]]):
        
        pass
    
    @bind
    def sum_int_pairs(self, p1: Tuple[int, int], p2: Tuple[int, int]) -> Tuple[int, int]:
        """
        comments

        """
        pass

    @bind
    def set_nested_pair(self, p: Tuple[Tuple[str, str], Tuple[str, str]]) -> None:
        """
        comments

        """
        pass

    @bind
    def get_nested_pair(self) -> Tuple[Tuple[str, str], Tuple[str, str]]:
        """
        comments

        """
        pass

    @bind
    def get_string_pair(self) -> Tuple[str, str]:
        """
        comments

        """
        pass

    @bind
    def set_nested_vector_of_pairs(self, v: List[List[Tuple[int, str]]]) -> None:
        
        pass

    @bind
    def get_nested_vector_of_pairs(self) -> List[List[Tuple[int, str]]]:
        
        pass

    @bind
    def sum_pair_items(self, p: Tuple[int, int]) -> int:
        
        pass

    @bind
    def __repr__(self) -> str:
        """
        CppBind generated __repr__ method returning underlying C++ object type and id.
        """
        pass

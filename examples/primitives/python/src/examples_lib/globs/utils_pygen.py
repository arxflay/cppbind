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

import examples.globs.utils as pybind_utils_pygen
from examples_lib.cppbind.cppbind_metaclass_pygen import *
from examples_lib.cppbind.cppbind_utils_pygen import *

if TYPE_CHECKING:
    import examples_lib.enums.color_pygen as enums_color_pygen
    import examples_lib.simple.project_pygen as simple_project_pygen
    import examples_lib.simple.root_pygen as simple_root_pygen


@bind
def mul(first: int, second: int) -> int:
    """
    A global function example.
    """
    pass


@bind
def mul_three(first: int, second: int, third: int) -> int:
    """
    A global function example.
    """
    pass


@bind
def concat(str1: str, str2: str) -> str:
    """
    A global function example.
    """
    pass


@bind
def concat1(str1: str, str2: str, str3: str) -> str:
    """
    A global overloaded function example.
    """
    pass


@bind
def max_int(a: int, b: int) -> int:
    """
    A global template function example.
    """
    pass


@bind
def max_string(a: str, b: str) -> str:
    """
    A global template function example.
    """
    pass


@bind
def make_pair_project_project(a: simple_project_pygen.Project, b: simple_project_pygen.Project) -> Tuple[simple_project_pygen.Project, simple_project_pygen.Project]:
    """
    A global template function example in namespace.
    """
    pass


@bind
def make_pair_root_project(a: simple_root_pygen.Root, b: simple_project_pygen.Project) -> Tuple[simple_root_pygen.Root, simple_project_pygen.Project]:
    """
    A global template function example in namespace.
    """
    pass


@bind
def get_vector_color(c: List[enums_color_pygen.Color]) -> List[enums_color_pygen.Color]:
    
    pass


@bind
def optional_f_d_ptr(project: Optional[simple_project_pygen.Project] = None) -> Optional[simple_project_pygen.Project]:
    """
    A global function with pointer default value and nullable return value.
    """
    pass


@bind
def do_nothing() -> None:
    """
    A global function with no return value.
    """
    pass

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

import examples.templates.stack_usage as pybind_stack_usage_pygen
from examples_lib.cppbind.cppbind_metaclass_pygen import *
from examples_lib.cppbind.cppbind_utils_pygen import *

if TYPE_CHECKING:
    import examples_lib.simple.project_pygen as simple_project_pygen
    import examples_lib.templates.stack_pygen as stack_pygen


class StackUsage(metaclass=CppBindMetaclass):
    
    @bind
    def __init__(self):
        
        pass
    
    @bind
    def first_item_of_specialized_stack(self, p: stack_pygen.StackPrj) -> simple_project_pygen.Project:
        
        pass

    @bind
    def first_item_of_typedef_of_specialized_stack(self, p: stack_pygen.StackPrj) -> simple_project_pygen.Project:
        
        pass

    @bind
    def first_item_of_template_stack(self, p: stack_pygen.StackPrj) -> simple_project_pygen.Project:
        """
        Full type name(i.e., cppbind::example::Stack<V> not just Stack<V>) should be explicitly specified otherwise
        cppbind won't be able to generate a converter for the argument, as for templates libclang does not provide
        enough information.
        """
        pass

    @bind
    def first_item_of_specialized_stack_with_typedef_arg(self, p: stack_pygen.StackPrj) -> simple_project_pygen.Project:
        """
        Example to check typedef argument types
        """
        pass

    @bind
    def __repr__(self) -> str:
        """
        CppBind generated __repr__ method returning underlying C++ object type and id.
        """
        pass

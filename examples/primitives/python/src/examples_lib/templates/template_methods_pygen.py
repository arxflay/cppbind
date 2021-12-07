"""
,--.,------. ,----.   ,------.,--.  ,--. 
|  ||  .---''  .-.|   |  .---'|  ,'.|  | 
|  ||  `--, |  | .---.|  `--, |  |' '  | 
|  ||  `---.'  '--'  ||  `---.|  | `   | 
`--'`------' `------' `------'`--'  `--' 

This file is generated by iegen on 12/07/2021-12:30.
Please do not change it manually.
"""
from __future__ import annotations

from typing import *

import examples.templates.template_methods as pybind_template_methods_pygen
import examples_lib.simple.project_pygen as project
import examples_lib.simple.root_pygen as root
from examples_lib.iegen.bind_utils import *
from examples_lib.iegen.metaclass import *


class TemplateMethods(metaclass=OriginalMethodsMetaclass):
    """
    Documentation generated from: `cxx/templates/template_methods.hpp#L14
    <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/templates/template_methods.hpp#L14>`_
    """
    
    @bind
    def __init__(self):
        """
        Documentation generated from: `cxx/templates/template_methods.hpp#L21
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/templates/template_methods.hpp#L21>`_
        """
        pass
    
    @bind
    def max(self, arg0: int, arg1: int) -> int:
        """
        Documentation generated from: `cxx/templates/template_methods.hpp#L32
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/templates/template_methods.hpp#L32>`_
        """
        pass

    @bind
    def max(self, arg0: str, arg1: str) -> str:
        """
        Documentation generated from: `cxx/templates/template_methods.hpp#L32
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/templates/template_methods.hpp#L32>`_
        """
        pass

    @bind
    def make_pair(self, arg0: project.Project, arg1: project.Project) -> tuple:
        """
        Documentation generated from: `cxx/templates/template_methods.hpp#L48
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/templates/template_methods.hpp#L48>`_
        """
        pass

    @bind
    def make_pair(self, arg0: root.Root, arg1: project.Project) -> tuple:
        """
        Documentation generated from: `cxx/templates/template_methods.hpp#L48
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/templates/template_methods.hpp#L48>`_
        """
        pass

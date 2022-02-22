"""
,--.,------. ,----.   ,------.,--.  ,--. 
|  ||  .---''  .-.|   |  .---'|  ,'.|  | 
|  ||  `--, |  | .---.|  `--, |  |' '  | 
|  ||  `---.'  '--'  ||  `---.|  | `   | 
`--'`------' `------' `------'`--'  `--' 

This file is generated by iegen on 02/11/2022-07:24.
Please do not change it manually.
"""
from __future__ import annotations

from typing import *

import examples.simple.project as pybind_project_pygen
import examples_lib.simple.task.task_pygen as task
from examples_lib.iegen.bind_utils_pygen import *
from examples_lib.iegen.metaclass_pygen import *


class Project(metaclass=OriginalMethodsMetaclass):
    """
    Class holding project information.
    Documentation generated from: `cxx/simple/project.hpp#L18
    <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/simple/project.hpp#L18>`_
    """
    
    @bind
    def __init__(self, title: str):
        """
        Project constructor.
        Documentation generated from: `cxx/simple/project.hpp#L26
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/simple/project.hpp#L26>`_
        """
        pass
    
    @property
    @bind
    def title(self) -> str:
        """
        Get project´s title.
        Documentation generated from: `cxx/simple/project.hpp#L34
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/simple/project.hpp#L34>`_
        """
        pass
    
    @bind
    def add_task(self, task: task.PyTask) -> None:
        """
        Add a task to project.
        Documentation generated from: `cxx/simple/project.hpp#L45
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/simple/project.hpp#L45>`_
        """
        pass

    @bind
    def tasks(self) -> List[PyTask]:
        """
        Get project´s tasks.
        Documentation generated from: `cxx/simple/project.hpp#L56
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/simple/project.hpp#L56>`_
        """
        pass

    @bind
    def equals(self, p: Project) -> bool:
        """
        Documentation generated from: `cxx/simple/project.hpp#L65
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/simple/project.hpp#L65>`_
        """
        pass

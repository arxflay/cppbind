from __future__ import annotations
from typing import *
import examples.templates.stack as pybind_stack_pygen
from bind_utils import *
from metaclass import *
from simple import *


class StackProject(metaclass=OriginalMethodsMetaclass):
    """
    comments
    """
    
    @bind
    def __init__(self):
        pass

    @bind
    def __init__(self, st: Project):
        pass
    
    @bind
    def push(self, item: Project) -> None:
        """"""
        pass

    @bind
    def pop(self) -> None:
        """"""
        pass

    @bind
    def top(self) -> Project:
        """"""
        pass

    @bind
    def empty(self) -> bool:
        """"""
        pass


class StackPyTask(metaclass=OriginalMethodsMetaclass):
    """
    comments
    """
    
    @bind
    def __init__(self):
        pass

    @bind
    def __init__(self, st: PyTask):
        pass
    
    @bind
    def push(self, item: PyTask) -> None:
        """"""
        pass

    @bind
    def pop(self) -> None:
        """"""
        pass

    @bind
    def top(self) -> PyTask:
        """"""
        pass

    @bind
    def empty(self) -> bool:
        """"""
        pass

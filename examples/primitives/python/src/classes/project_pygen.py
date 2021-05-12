from __future__ import annotations
from typing import *
import examples.classes.project as pybind_project_pygen
from bind_utils import *
from metaclass import *
from classes.task import *


class Project(metaclass=OriginalMethodsMetaclass):
    """
    comments
    """
    
    @bind
    def __init__(self, title: str):
        pass
    
    @property
    @bind
    def title(self) -> str:
        """
        comments
        """
        pass
    
    @bind
    def add_task(self, task: PyTask) -> None:
        """
        comments
        """
        pass

    @bind
    def tasks(self) -> list:
        """
        comments
        """
        pass

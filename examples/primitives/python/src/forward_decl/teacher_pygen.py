from __future__ import annotations
from typing import *
import examples.forward_decl.teacher as pybind_teacher_pygen
from bind_utils import *
from metaclass import *


class Teacher(metaclass=OriginalMethodsMetaclass):
    """
    comments
    """
    
    @bind
    def __init__(self):
        pass
    
    @bind
    def add_student(self, s: Student) -> None:
        """"""
        pass

    @bind
    def students(self) -> list:
        """"""
        pass

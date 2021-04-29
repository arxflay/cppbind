from __future__ import annotations
from typing import *
import examples.getters.person as pybind_person_pygen
from bind_utils import *
from metaclass import *


class Person(metaclass=OriginalMethodsMetaclass):
    """
    This class contains a private string field and getter/setter methods for it."""
    
    @bind
    def __init__(self, name: str, email: str, age: int):
        pass
    
    @property
    @bind
    def full_name(self) -> str:
        """"""
        pass

    @full_name.setter
    @bind
    def full_name(self, value: str):
        """"""
        pass

    @property
    @bind
    def email(self) -> str:
        """"""
        pass


    @property
    @bind
    def age(self) -> int:
        """"""
        pass

    @age.setter
    @bind
    def age(self, value: int):
        """"""
        pass

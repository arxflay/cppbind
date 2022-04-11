"""
,--.,------. ,----.   ,------.,--.  ,--. 
|  ||  .---''  .-.|   |  .---'|  ,'.|  | 
|  ||  `--, |  | .---.|  `--, |  |' '  | 
|  ||  `---.'  '--'  ||  `---.|  | `   | 
`--'`------' `------' `------'`--'  `--' 

This file is generated by iegen on 03/24/2022-13:05.
Please do not change it manually.
"""
from __future__ import annotations

from typing import *

import examples.rv_policies.keep_alive_policy as pybind_keep_alive_policy_pygen
from examples_lib.iegen.bind_utils_pygen import *
from examples_lib.iegen.metaclass_pygen import *


class Child1(metaclass=IEGenMetaclass):
    """
    A test example for keep_alive policy with shared_ref=False.
    Documentation generated from: `cxx/rv_policies/keep_alive_policy.hpp#L18
    <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/rv_policies/keep_alive_policy.hpp#L18>`_
    """
    
    @bind
    def __init__(self, name: str):
        """
        Documentation generated from: `cxx/rv_policies/keep_alive_policy.hpp#L26
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/rv_policies/keep_alive_policy.hpp#L26>`_
        """
        pass
    
    @property
    @bind
    def name(self) -> str:
        """
        Documentation generated from: `cxx/rv_policies/keep_alive_policy.hpp#L35
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/rv_policies/keep_alive_policy.hpp#L35>`_
        """
        pass


class Child3(metaclass=IEGenMetaclass):
    """
    A test example for keep_alive policy with action=gen_interface.
    Documentation generated from: `cxx/rv_policies/keep_alive_policy.hpp#L55
    <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/rv_policies/keep_alive_policy.hpp#L55>`_
    """
    
    @bind
    def __init__(self, name: str):
        """
        Documentation generated from: `cxx/rv_policies/keep_alive_policy.hpp#L63
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/rv_policies/keep_alive_policy.hpp#L63>`_
        """
        pass
    
    @property
    @bind
    def name(self) -> str:
        """
        Documentation generated from: `cxx/rv_policies/keep_alive_policy.hpp#L72
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/rv_policies/keep_alive_policy.hpp#L72>`_
        """
        pass


class Child2(metaclass=IEGenMetaclass):
    """
    A test example for keep_alive policy with shared_ref=True.
    Documentation generated from: `cxx/rv_policies/keep_alive_policy.hpp#L92
    <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/rv_policies/keep_alive_policy.hpp#L92>`_
    """
    
    @bind
    def __init__(self, name: str):
        """
        Documentation generated from: `cxx/rv_policies/keep_alive_policy.hpp#L100
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/rv_policies/keep_alive_policy.hpp#L100>`_
        """
        pass
    
    @property
    @bind
    def name(self) -> str:
        """
        Documentation generated from: `cxx/rv_policies/keep_alive_policy.hpp#L109
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/rv_policies/keep_alive_policy.hpp#L109>`_
        """
        pass


class Parent1(metaclass=IEGenMetaclass):
    """
    A test example for keep_alive policy. Container holding shared_ref and non shared_ref class and interface types.
    Documentation generated from: `cxx/rv_policies/keep_alive_policy.hpp#L129
    <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/rv_policies/keep_alive_policy.hpp#L129>`_
    """
    
    @bind
    def __init__(self, name: str, child1: Child1, child2: Child2, _child3: Child3):
        """
        Documentation generated from: `cxx/rv_policies/keep_alive_policy.hpp#L139
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/rv_policies/keep_alive_policy.hpp#L139>`_
        """
        pass
    
    @property
    @bind
    def name(self) -> str:
        """
        Documentation generated from: `cxx/rv_policies/keep_alive_policy.hpp#L152
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/rv_policies/keep_alive_policy.hpp#L152>`_
        """
        pass

    @property
    @bind
    def child1(self) -> Child1:
        """
        Documentation generated from: `cxx/rv_policies/keep_alive_policy.hpp#L161
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/rv_policies/keep_alive_policy.hpp#L161>`_
        """
        pass

    @child1.setter
    @bind
    def child1(self, value: Child1):
        """
        Documentation generated from: `cxx/rv_policies/keep_alive_policy.hpp#L161
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/rv_policies/keep_alive_policy.hpp#L161>`_
        """
        pass

    @property
    @bind
    def child2(self) -> Child2:
        """
        Documentation generated from: `cxx/rv_policies/keep_alive_policy.hpp#L180
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/rv_policies/keep_alive_policy.hpp#L180>`_
        """
        pass

    @property
    @bind
    def child3(self) -> Child3:
        """
        Documentation generated from: `cxx/rv_policies/keep_alive_policy.hpp#L189
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/rv_policies/keep_alive_policy.hpp#L189>`_
        """
        pass

    @child3.setter
    @bind
    def child3(self, value: Child3):
        """
        Documentation generated from: `cxx/rv_policies/keep_alive_policy.hpp#L189
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/rv_policies/keep_alive_policy.hpp#L189>`_
        """
        pass


class Parent2(metaclass=IEGenMetaclass):
    """
    A test example for keep_alive policy. Container holding shared_ref and non shared_ref class and interface types.
    Documentation generated from: `cxx/rv_policies/keep_alive_policy.hpp#L212
    <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/rv_policies/keep_alive_policy.hpp#L212>`_
    """
    
    @bind
    def __init__(self, name: str):
        """
        Documentation generated from: `cxx/rv_policies/keep_alive_policy.hpp#L219
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/rv_policies/keep_alive_policy.hpp#L219>`_
        """
        pass
    
    @property
    @bind
    def name(self) -> str:
        """
        Documentation generated from: `cxx/rv_policies/keep_alive_policy.hpp#L228
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/rv_policies/keep_alive_policy.hpp#L228>`_
        """
        pass

    @property
    @bind
    def children1(self) -> List[Child1]:
        """
        Documentation generated from: `cxx/rv_policies/keep_alive_policy.hpp#L237
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/rv_policies/keep_alive_policy.hpp#L237>`_
        """
        pass

    @property
    @bind
    def children2(self) -> List[Child2]:
        """
        Documentation generated from: `cxx/rv_policies/keep_alive_policy.hpp#L283
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/rv_policies/keep_alive_policy.hpp#L283>`_
        """
        pass
    
    @bind
    def add_child1(self, c: Child1) -> None:
        """
        Documentation generated from: `cxx/rv_policies/keep_alive_policy.hpp#L246
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/rv_policies/keep_alive_policy.hpp#L246>`_
        """
        pass

    @bind
    def add_children1(self, c: List[Child1]) -> None:
        """
        Documentation generated from: `cxx/rv_policies/keep_alive_policy.hpp#L256
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/rv_policies/keep_alive_policy.hpp#L256>`_
        """
        pass

    @bind
    def add_child2(self, c: Child2) -> None:
        """
        Documentation generated from: `cxx/rv_policies/keep_alive_policy.hpp#L265
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/rv_policies/keep_alive_policy.hpp#L265>`_
        """
        pass

    @bind
    def add_children2(self, c: List[Child2]) -> None:
        """
        Documentation generated from: `cxx/rv_policies/keep_alive_policy.hpp#L274
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/rv_policies/keep_alive_policy.hpp#L274>`_
        """
        pass

"""
,--.,------. ,----.   ,------.,--.  ,--. 
|  ||  .---''  .-.|   |  .---'|  ,'.|  | 
|  ||  `--, |  | .---.|  `--, |  |' '  | 
|  ||  `---.'  '--'  ||  `---.|  | `   | 
`--'`------' `------' `------'`--'  `--' 

This file is generated by iegen on 01/24/2022-12:35.
Please do not change it manually.
"""
from __future__ import annotations

from typing import *

import examples.templates.addressable as pybind_addressable_pygen
import examples_lib.simple.root_pygen as root
from examples_lib.iegen.bind_utils import *
from examples_lib.iegen.metaclass import *


class AddressableRoot(metaclass=OriginalMethodsMetaclass):
    """
    Addressable is a base class for all the objects, that have abs path.
    FIXME: swift.descendants is given manually since we have an issue with descendants list formation for templates (#410)
    Documentation generated from: `cxx/templates/addressable.hpp#L25
    <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/templates/addressable.hpp#L25>`_
    """
    
    @bind
    def __init__(self, parent: root.Root, name: str):
        """
        comments
        Documentation generated from: `cxx/templates/addressable.hpp#L33
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/templates/addressable.hpp#L33>`_
        """
        pass
    
    @bind
    def abs_path(self) -> str:
        """
        comments
        @brief Get object's abs path based on parent's abs path and object's name
        @return the abs path of the object
        Documentation generated from: `cxx/templates/addressable.hpp#L43
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/templates/addressable.hpp#L43>`_
        """
        pass

"""
,--.,------. ,----.   ,------.,--.  ,--. 
|  ||  .---''  .-.|   |  .---'|  ,'.|  | 
|  ||  `--, |  | .---.|  `--, |  |' '  | 
|  ||  `---.'  '--'  ||  `---.|  | `   | 
`--'`------' `------' `------'`--'  `--' 

This file is generated by iegen on 10/26/2021-15:58.
Please do not change it manually.
"""
from __future__ import annotations

from typing import *

import examples.templates.component as pybind_component_pygen
import examples_lib.simple.root_pygen as root
import examples_lib.templates.addressable_pygen as addressable
from examples_lib.iegen.bind_utils import *
from examples_lib.iegen.metaclass import *


class Component(addressable.AddressableRoot, metaclass=OriginalMethodsMetaclass):
    """
    comments

    Documentation generated from: `cxx/templates/component.hpp#L22
    <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/templates/component.hpp#L22>`_
    """
    
    @bind
    def __init__(self, parent: root.Root, name: str):
        """
        comments

        Documentation generated from: `cxx/templates/component.hpp#L31
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/templates/component.hpp#L31>`_
        """
        pass

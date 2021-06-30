"""
,--.,------. ,----.   ,------.,--.  ,--. 
|  ||  .---''  .-.|   |  .---'|  ,'.|  | 
|  ||  `--, |  | .---.|  `--, |  |' '  | 
|  ||  `---.'  '--'  ||  `---.|  | `   | 
`--'`------' `------' `------'`--'  `--' 

This file is generated by iegen on 06/25/2021-12:41.
Please do not change it manually.
"""

from __future__ import annotations

from typing import *

import examples.getters.one_type_template_getter as pybind_one_type_template_getter_pygen
from bind_utils import *
from metaclass import *


class SimpleItem(metaclass=OriginalMethodsMetaclass):
    """
    Documentation generated from: `cxx/getters/one_type_template_getter.hpp#L12
    <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/getters/one_type_template_getter.hpp#L12>`_
    """
    
    @property
    @bind
    def value(self) -> int:
        """
        Documentation generated from: `cxx/getters/one_type_template_getter.hpp#L17
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/getters/one_type_template_getter.hpp#L17>`_
        """
        pass

    @value.setter
    @bind
    def value(self, value: int):
        """
        Documentation generated from: `cxx/getters/one_type_template_getter.hpp#L17
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/getters/one_type_template_getter.hpp#L17>`_
        """
        pass


class OneTypeTemplateGetter(metaclass=OriginalMethodsMetaclass):
    """
    An example class containing template getters that depend on the same type.

    Documentation generated from: `cxx/getters/one_type_template_getter.hpp#L30
    <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/getters/one_type_template_getter.hpp#L30>`_
    """
    
    @bind
    def __init__(self):
        """
        Default constructor.

        Documentation generated from: `cxx/getters/one_type_template_getter.hpp#L38
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/getters/one_type_template_getter.hpp#L38>`_
        """
        pass
    
    @property
    @bind
    def simple_item(self) -> one_type_template_getter.SimpleItem:
        """
        Template getter example with return type from one template argument.
        As we don´t specify a name here then type name(SimpleItem) will be used with appropriate naming convention.
        E.g. for python will be simple_item.

        Documentation generated from: `cxx/getters/one_type_template_getter.hpp#L52
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/getters/one_type_template_getter.hpp#L52>`_
        """
        pass

    @property
    @bind
    def simple_item_with_type(self) -> one_type_template_getter.SimpleItem:
        """
        Template getter example with return type from one template argument.
        Giving a name here is important as we have another template getter that can have the same type.
        If we won´t specify the name here then both will have the same name retrieved from type name
        thus this one will override the previous one or the code won´t compile.

        Documentation generated from: `cxx/getters/one_type_template_getter.hpp#L71
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/getters/one_type_template_getter.hpp#L71>`_
        """
        pass

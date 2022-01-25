"""
,--.,------. ,----.   ,------.,--.  ,--. 
|  ||  .---''  .-.|   |  .---'|  ,'.|  | 
|  ||  `--, |  | .---.|  `--, |  |' '  | 
|  ||  `---.'  '--'  ||  `---.|  | `   | 
`--'`------' `------' `------'`--'  `--' 

This file is generated by iegen on 01/25/2022-12:54.
Please do not change it manually.
"""
from __future__ import annotations

from typing import *

import examples.shared_ptr.shared_ptr_symbol as pybind_shared_ptr_symbol_pygen
from examples_lib.iegen.bind_utils import *
from examples_lib.iegen.metaclass import *


class SignShared(metaclass=OriginalMethodsMetaclass):
    """
    Documentation generated from: `cxx/shared_ptr/shared_ptr_symbol.hpp#L15
    <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/shared_ptr/shared_ptr_symbol.hpp#L15>`_
    """
    
    @bind
    def __init__(self):
        """
        Documentation generated from: `cxx/shared_ptr/shared_ptr_symbol.hpp#L24
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/shared_ptr/shared_ptr_symbol.hpp#L24>`_
        """
        pass
    
    @bind
    def type_name(self) -> str:
        """
        Documentation generated from: `cxx/shared_ptr/shared_ptr_symbol.hpp#L33
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/shared_ptr/shared_ptr_symbol.hpp#L33>`_
        """
        pass


class TextShared(metaclass=OriginalMethodsMetaclass):
    """
    Documentation generated from: `cxx/shared_ptr/shared_ptr_symbol.hpp#L47
    <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/shared_ptr/shared_ptr_symbol.hpp#L47>`_
    """
    
    @bind
    def __init__(self):
        """
        Documentation generated from: `cxx/shared_ptr/shared_ptr_symbol.hpp#L55
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/shared_ptr/shared_ptr_symbol.hpp#L55>`_
        """
        pass
    
    @bind
    def type_name(self) -> str:
        """
        Documentation generated from: `cxx/shared_ptr/shared_ptr_symbol.hpp#L64
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/shared_ptr/shared_ptr_symbol.hpp#L64>`_
        """
        pass


class DigitShared(SignShared, TextShared, metaclass=OriginalMethodsMetaclass):
    """
    Documentation generated from: `cxx/shared_ptr/shared_ptr_symbol.hpp#L78
    <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/shared_ptr/shared_ptr_symbol.hpp#L78>`_
    """
    
    @bind
    def __init__(self):
        """
        Documentation generated from: `cxx/shared_ptr/shared_ptr_symbol.hpp#L86
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/shared_ptr/shared_ptr_symbol.hpp#L86>`_
        """
        pass
    
    @bind
    def type_name(self) -> str:
        """
        Documentation generated from: `cxx/shared_ptr/shared_ptr_symbol.hpp#L93
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/shared_ptr/shared_ptr_symbol.hpp#L93>`_
        """
        pass


class SymbolUsageShared(metaclass=OriginalMethodsMetaclass):
    """
    Documentation generated from: `cxx/shared_ptr/shared_ptr_symbol.hpp#L106
    <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/shared_ptr/shared_ptr_symbol.hpp#L106>`_
    """
    
    @bind
    def __init__(self):
        """
        Documentation generated from: `cxx/shared_ptr/shared_ptr_symbol.hpp#L113
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/shared_ptr/shared_ptr_symbol.hpp#L113>`_
        """
        pass

    @bind
    def __init__(self, d: DigitShared):
        """
        Documentation generated from: `cxx/shared_ptr/shared_ptr_symbol.hpp#L120
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/shared_ptr/shared_ptr_symbol.hpp#L120>`_
        """
        pass
    
    @bind
    def get_text_type(self, t: TextShared) -> str:
        """
        Documentation generated from: `cxx/shared_ptr/shared_ptr_symbol.hpp#L127
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/shared_ptr/shared_ptr_symbol.hpp#L127>`_
        """
        pass

    @bind
    def get_sign_type(self, s: SignShared) -> str:
        """
        Documentation generated from: `cxx/shared_ptr/shared_ptr_symbol.hpp#L136
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/shared_ptr/shared_ptr_symbol.hpp#L136>`_
        """
        pass

    @bind
    def get_text_id(self, t: TextShared) -> int:
        """
        Documentation generated from: `cxx/shared_ptr/shared_ptr_symbol.hpp#L145
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/shared_ptr/shared_ptr_symbol.hpp#L145>`_
        """
        pass

    @bind
    def get_sign_id(self, s: SignShared) -> int:
        """
        Documentation generated from: `cxx/shared_ptr/shared_ptr_symbol.hpp#L154
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/shared_ptr/shared_ptr_symbol.hpp#L154>`_
        """
        pass

    @bind
    def get_text_ptr(self) -> TextShared:
        """
        Documentation generated from: `cxx/shared_ptr/shared_ptr_symbol.hpp#L163
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/shared_ptr/shared_ptr_symbol.hpp#L163>`_
        """
        pass

    @bind
    def get_sign_ptr(self) -> SignShared:
        """
        Documentation generated from: `cxx/shared_ptr/shared_ptr_symbol.hpp#L172
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/shared_ptr/shared_ptr_symbol.hpp#L172>`_
        """
        pass

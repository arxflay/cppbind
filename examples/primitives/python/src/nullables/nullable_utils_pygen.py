"""
,--.,------. ,----.   ,------.,--.  ,--. 
|  ||  .---''  .-.|   |  .---'|  ,'.|  | 
|  ||  `--, |  | .---.|  `--, |  |' '  | 
|  ||  `---.'  '--'  ||  `---.|  | `   | 
`--'`------' `------' `------'`--'  `--' 

This file is generated by iegen on 07/02/2021-09:03.
Please do not change it manually.
"""

from __future__ import annotations

from typing import *

import examples.nullables.nullable_utils as pybind_nullable_utils_pygen
from bind_utils import *
from metaclass import *


class NumberInt(metaclass=OriginalMethodsMetaclass):
    """
    Documentation generated from: `cxx/nullables/nullable_utils.hpp#L19
    <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/nullables/nullable_utils.hpp#L19>`_
    """
    
    @bind
    def __init__(self, val_: int):
        """
        Documentation generated from: `cxx/nullables/nullable_utils.hpp#L24
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/nullables/nullable_utils.hpp#L24>`_
        """
        pass
    @property
    @bind
    def value(self) -> int:
        """
        Documentation generated from: `cxx/nullables/nullable_utils.hpp#L30
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/nullables/nullable_utils.hpp#L30>`_
        """
        pass



class NumberDouble(metaclass=OriginalMethodsMetaclass):
    """
    Documentation generated from: `cxx/nullables/nullable_utils.hpp#L41
    <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/nullables/nullable_utils.hpp#L41>`_
    """
    
    @bind
    def __init__(self, val_: float):
        """
        Documentation generated from: `cxx/nullables/nullable_utils.hpp#L46
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/nullables/nullable_utils.hpp#L46>`_
        """
        pass
    @property
    @bind
    def value(self) -> float:
        """
        Documentation generated from: `cxx/nullables/nullable_utils.hpp#L52
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/nullables/nullable_utils.hpp#L52>`_
        """
        pass



class Utils(metaclass=OriginalMethodsMetaclass):
    """
    An example with nullable arguments.
    Documentation generated from: `cxx/nullables/nullable_utils.hpp#L67
    <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/nullables/nullable_utils.hpp#L67>`_
    """
    
    @bind
    def __init__(self, num: Optional[NumberDouble]):
        """
        Documentation generated from: `cxx/nullables/nullable_utils.hpp#L75
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/nullables/nullable_utils.hpp#L75>`_
        """
        pass
    @property
    @bind
    def nullable(self) -> Optional[NumberDouble]:
        """
        Documentation generated from: `cxx/nullables/nullable_utils.hpp#L138
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/nullables/nullable_utils.hpp#L138>`_
        """
        pass

    @nullable.setter
    @bind
    def nullable(self, value: Optional[NumberDouble]):
        """
        Documentation generated from: `cxx/nullables/nullable_utils.hpp#L138
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/nullables/nullable_utils.hpp#L138>`_
        """
        pass
    @property
    @bind
    def non_null(self) -> NumberDouble:
        """
        Documentation generated from: `cxx/nullables/nullable_utils.hpp#L157
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/nullables/nullable_utils.hpp#L157>`_
        """
        pass

    @non_null.setter
    @bind
    def non_null(self, value: NumberDouble):
        """
        Documentation generated from: `cxx/nullables/nullable_utils.hpp#L157
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/nullables/nullable_utils.hpp#L157>`_
        """
        pass
    @property
    @bind
    def num_double(self) -> Optional[NumberDouble]:
        """
        Documentation generated from: `cxx/nullables/nullable_utils.hpp#L175
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/nullables/nullable_utils.hpp#L175>`_
        """
        pass

    @num_double.setter
    @bind
    def num_double(self, value: Optional[NumberDouble]):
        """
        Documentation generated from: `cxx/nullables/nullable_utils.hpp#L175
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/nullables/nullable_utils.hpp#L175>`_
        """
        pass
    @property
    @bind
    def num_int(self) -> NumberInt:
        """
        Documentation generated from: `cxx/nullables/nullable_utils.hpp#L182
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/nullables/nullable_utils.hpp#L182>`_
        """
        pass

    @num_int.setter
    @bind
    def num_int(self, value: NumberInt):
        """
        Documentation generated from: `cxx/nullables/nullable_utils.hpp#L182
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/nullables/nullable_utils.hpp#L182>`_
        """
        pass
    
    @classmethod
    @bind
    def max(cls, first: Optional[NumberDouble], second: NumberDouble) -> Optional[NumberDouble]:
        """
        Documentation generated from: `cxx/nullables/nullable_utils.hpp#L85
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/nullables/nullable_utils.hpp#L85>`_
        """
        pass

    @classmethod
    @bind
    def max(cls, first: Optional[NumberInt], second: Optional[NumberInt]) -> Optional[NumberInt]:
        """
        Documentation generated from: `cxx/nullables/nullable_utils.hpp#L104
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/nullables/nullable_utils.hpp#L104>`_
        """
        pass

    @classmethod
    @bind
    def check_nonnull_arg(cls, number: NumberDouble) -> None:
        """
        Documentation generated from: `cxx/nullables/nullable_utils.hpp#L119
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/nullables/nullable_utils.hpp#L119>`_
        """
        pass

    @classmethod
    @bind
    def check_nonnull_return(cls) -> NumberDouble:
        """
        Documentation generated from: `cxx/nullables/nullable_utils.hpp#L128
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/nullables/nullable_utils.hpp#L128>`_
        """
        pass

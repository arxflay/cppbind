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

import examples.forward_decl.teacher as pybind_teacher_pygen
import examples_lib.forward_decl.student_pygen as student
from examples_lib.iegen.bind_utils import *
from examples_lib.iegen.metaclass import *


class Teacher(metaclass=OriginalMethodsMetaclass):
    """
    Documentation generated from: `cxx/forward_decl/teacher.hpp#L20
    <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/forward_decl/teacher.hpp#L20>`_
    """
    
    @bind
    def __init__(self):
        """
        Documentation generated from: `cxx/forward_decl/teacher.hpp#L26
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/forward_decl/teacher.hpp#L26>`_
        """
        pass
    
    @bind
    def add_student(self, s: Student) -> None:
        """
        Documentation generated from: `cxx/forward_decl/teacher.hpp#L33
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/forward_decl/teacher.hpp#L33>`_
        """
        pass

    @bind
    def students(self) -> List[Student]:
        """
        Documentation generated from: `cxx/forward_decl/teacher.hpp#L42
        <https://github.com/PicsArt/iegen/tree/master/examples/primitives/cxx/forward_decl/teacher.hpp#L42>`_
        """
        pass

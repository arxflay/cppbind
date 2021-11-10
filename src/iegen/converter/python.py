"""
Helper codes for python conversion
"""
import os

from isort.api import sort_code_string

from . import *

OPERATOR_MAPPING = {
    '*': '__mul__',
    '*=': '__imul__',
    '-': '__sub__',
    '-=': '__isub__',
    '+': '__add__',
    '+=': '__iadd__',
    '/': '__truediv__',
    '/=': '__itruediv__',
    '<': '__lt__',
    '<=': '__le__',
    '>': '__gt__',
    '>=': '__ge__',
    '==': '__eq__',
    '!=': '__ne__',
    '%': '__mod__',
    '&': '__and__',
    '|': '__or__',
    '|=': '__ior__',
    '^': '__xor__',
    '^=': '__ixor__',
    '~': '__invert__',
    '~=': '__iinvert__',
    '<<': '__lshift__',
    '>>': '__rshift__',
    '[]': '__getitem__',
}

sort_imports = sort_code_string


def get_operator_name(spelling):
    operator = spelling.replace('operator', '').strip()
    return OPERATOR_MAPPING.get(operator, spelling)

import types
import pytest
import hashlib

from iegnen.parser.ieg_parser import CXXParser
from iegnen.parser.ieg_api_parser import APIParser
from iegnen.parser.processor import CXXPrintProcsessor, CXXIEGIRBuilder


def test_parser(parser_config):
    parsser = CXXParser(parser_config=parser_config)
    print(parser_config)
    processor = CXXPrintProcsessor()
    for c in parsser.parss_x():
        processor(c)


def test_parser_processor(parser_config):
    parsser = CXXParser(parser_config=parser_config)
    # print(parser_config)
    processor = CXXPrintProcsessor()
    parsser.parse(processor)


def test_parser_processor_cr_counter(parser_config):
    parsser = CXXParser(parser_config=parser_config)
    # print(parser_config)
    count = 0
    max_dept = 0
    dept = 0

    count_processor = types.SimpleNamespace()

    def incr_dept(cursor):
        nonlocal max_dept
        nonlocal dept
        nonlocal count
        count += 1
        dept += 1
        max_dept = max(dept, max_dept)

    def decr_dept(cursor):
        nonlocal dept
        dept -= 1

    count_processor.start_cursor = incr_dept
    count_processor.end_cursor = decr_dept
    parsser.parse(count_processor)

    assert count == 34, "number of cursors has bean changed"
    assert max_dept == 7, "max depth has bean changed"


# @pytest.mark.skip(reason="Due to dict test is not stable")
def test_parser_build_ir(parser_config, attributes, api_start_kw):
    parsser = CXXParser(parser_config=parser_config)
    # print(config)

    ir_builder = CXXIEGIRBuilder(attributes=attributes,
                                 api_start_kw=api_start_kw)
    parsser.parse(ir_builder)

    ir = ir_builder.ir

    print(ir)
    assert hashlib.md5(repr(ir).encode()).hexdigest() == '4581f6efe8d7f1e658a4f813f75f255b',\
        "ir representation string has bean changed."


@pytest.mark.parametrize(
    "attributes, api_start_kw, test_data, res_md5",
    [
        (
            'attributes',
            'api_start_kw',
            """
            /**
            * comments
            *
            * __API__
            * kotlin.file: utils
            * kotlin.module: pi.xxx
            * swift.prefix: PI
            */
            """,
            "7a17d27ab9a47111d992a96e5c0435d8"
        ),
        (
            'attributes',
            'api_start_kw',
            """
            /**
            * commants
            *
            * __API__
            * gen: class
            * shared_ref: False
            */
            """,
            "bf66e71fa403183f677c476c82d61ddc"
        )
    ],
    indirect=['attributes', 'api_start_kw']
)
def test_API_parser(attributes, api_start_kw, test_data, res_md5):

    parsser = APIParser(attributes=attributes, api_start_kw=api_start_kw)
    api, args = parsser.parse(
        test_data
    )
    str_res = f"api={api}, args={args}"
    print(str_res)
    assert hashlib.md5(str_res.encode()).hexdigest() == res_md5,\
        "API parser result has bean changed."


@pytest.mark.parametrize(
    "attributes, api_start_kw, test_data",
    [
        (
            'attributes',
            'api_start_kw',
            """
            /**
            * comments
            *
            * __API__
            * kotlin.file: utils
            dd
            * kotlin.module: pi.xxx
            * swift_prefix: PI
            */
            """,
        ),
        (
            'attributes',
            'api_start_kw',
            """
            /**
            * commants
            *
            * __API__
            * gen: class
            * shared_ref
            */
            """,
        )
    ],
    indirect=['attributes', 'api_start_kw']
)
def test_API_parser_negative(attributes, api_start_kw, test_data):

    parsser = APIParser(attributes=attributes, api_start_kw=api_start_kw)
    try:
        api, args = parsser.parse(
            test_data
        )
    except Exception:
        pass
    else:
        assert False, "should get error"

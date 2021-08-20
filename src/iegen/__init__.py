"""
Iegen is a tool to generate c++ bindings for various languages.
"""
import logging
import os
import sys
from logging import getLevelName

from iegen.common.config import config as default_config, PROJECT_CONFIG_DIR

BANNER_LOGO = """
,--.,------. ,----.   ,------.,--.  ,--. 
|  ||  .---''  .-.|   |  .---'|  ,'.|  | 
|  ||  `--, |  | .---.|  `--, |  |' '  | 
|  ||  `---.'  '--'  ||  `---.|  | `   | 
`--'`------' `------' `------'`--'  `--' 
"""

LOGGING_FORMAT = '%(asctime)s:(%(levelname)s) %(message)s'
DATETIME_FORMAT = '%m/%d/%Y-%H:%M'
DATETIME_REGEX = r'^(0[1-9]|1[0-2])/([012][0-9]|3[0-1])/(20[0-9][0-9])-([01][0-9]|2[0-4]):([012345][0-9])'
LOG_LEVELS = ['DEBUG', 'INFO', 'WARNING', 'ERROR', 'CRITICAL']

def init_logger(log_level=default_config.logging.level):
    log_kwargs = {}
    if default_config.logging.log_file:
        log_kwargs['filename'] = os.path.expanduser(default_config.logging.log_file)
    else:
        log_kwargs['stream'] = sys.stdout

    logging.basicConfig(**log_kwargs,
                        format=LOGGING_FORMAT,
                        level=getLevelName(log_level))


def find_prj_dir(dirname):
    if not os.path.isabs(dirname):
        if not os.path.isdir(dirname):
            dirname = os.path.abspath(os.path.join(PROJECT_CONFIG_DIR, dirname))
    return dirname

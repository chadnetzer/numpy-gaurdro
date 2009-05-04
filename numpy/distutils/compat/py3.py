import imp
import sys

from distutils.errors import DistutilsExecError
from numpy.distutils.log import info as loginfo

def try_import_compiler(module_name):
    try:
        __import__ (module_name)
    except ImportError as msg:
        loginfo('%s in numpy.distutils; trying from distutils',
                 str(msg))
        module_name = module_name[6:]
        try:
            __import__(module_name)
        except ImportError as msg:
            raise DistutilsModuleError(
                    "can't compile C/C++ code: unable to load module '%s'" % \
                    module_name)

    return module_name

def try_load_module(config_instance, name, *info):
    try:
        version_module = imp.load_module(name, *info)
    except ImportError as msg:
        config_instance.warn(str(msg))
        version_module = None

    return version_module

def caught_spawn_command(func, *args):
    try:
        status = func(*args)
    except OSError as e:
        status = 999
        sys.stderr.write('%s: %s'%(e,argv[0]))

    return status

def caught_raise_spawn_command(func, args, display, raised):
    try:
       func(args, display=display)
    except DistutilsExecError as msg:
        raise raised(msg)

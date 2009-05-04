import imp
import sys

from distutils.errors import DistutilsExecError, CompileError

from numpy.distutils.log import info as loginfo

def try_import_compiler(module_name):
    try:
        __import__ (module_name)
    except ImportError, msg:
        loginfo('%s in numpy.distutils; trying from distutils',
                 str(msg))
        module_name = module_name[6:]
        try:
            __import__(module_name)
        except ImportError, msg:
            raise DistutilsModuleError(
                    "can't compile C/C++ code: unable to load module '%s'" % \
                    module_name)

    return module_name

def try_load_module(config_instance, name, *info):
    try:
        version_module = imp.load_module(name, *info)
    except ImportError, msg:
        config_instance.warn(str(msg))
        version_module = None

    return version_module

def caught_spawn_command(func, *args):
    try:
        status = func(*args)
    except OSError, e:
        status = 999
        sys.stderr.write('%s: %s'%(e,argv[0]))

    return status

def caught_raise_spawn_command(func, args, display, raised):
    try:
       func(args, display=display)
    except DistutilsExecError, msg:
        raise raised(msg)

def initialize_compiler(command_instance):
    try:
        compiler_instance.compiler.initialize()
    except IOError, e:
        msg = """\
============================================================================
Could not initialize compiler instance: do you have Visual Studio
installed ? If you are trying to build with mingw, please use python setup.py
build -c mingw32 instead ). If you have Visual Studio installed, check it is
correctly installed, and the right version (VS 2008 for python 2.6, VS 2003 for
2.5, etc...). Original exception was: %s, and the Compiler
class was %s
============================================================================""" \
            % (e, compiler_instance.compiler.__class__.__name__)
        raise distutils.errors.DistutilsPlatformError(msg)

def caught_wrap_method(method, instance, args, save_compiler):
    try:
        ret = method(*((instance,)+args))
    except (DistutilsExecError,CompileError),msg:
        instance.compiler = save_compiler
        raise CompileError
    return ret

def caught_numerix_info(which):
    try:
        import numpy
        which = "numpy", "defaulted"
    except ImportError,msg1:
        try:
            import Numeric
            which = "numeric", "defaulted"
        except ImportError,msg2:
            try:
                import numarray
                which = "numarray", "defaulted"
            except ImportError,msg3:
                loginfo(msg1)
                loginfo(msg2)
                loginfo(msg3)
    return which

def caught_replace(match, env, line):
    name = match.group(1)
    try :
        val = env[name]
    except KeyError, e :
        msg = 'line %d: %s'%(line, e)
        raise ValueError(msg)
    return val

def caught_parse_loop_header(head, newline):
    try :
        envlist = parse_loop_header(head)
    except ValueError, e :
        msg = "line %d: %s" % (newline, e)
        raise ValueError(msg)
    return envlist

def caught_process_str(func, allstr, sourcefile):
    try:
        code = func(allstr)
    except ValueError, e:
        raise ValueError('"%s", %s' % (sourcefile, e))

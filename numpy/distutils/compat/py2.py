"""Compatibility module, mainly to deal with caught exceptions and a few other
things whose syntax is incompatible between python 2 and python 3.

DO NOT EDIT py3.py BY HAND.

py2.py is the original file, py3.py is automatically generated from py2.py with
2to3. It should alway work this way."""
import imp
import sys
import warnings
import commands
import os

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

def caught_parse_loop_header(func, head, newline):
    try :
        envlist = func(head)
    except ValueError, e :
        msg = "line %d: %s" % (newline, e)
        raise ValueError(msg)
    return envlist

def caught_process_str(func, allstr, sourcefile):
    try:
        code = func(allstr)
    except ValueError, e:
        raise ValueError('"%s", %s' % (sourcefile, e))
    return code

def try_initialize_compiler(func, instance):
    try:
        func()
    except DistutilsPlatformError, e:
        if not instance._bypass_distutils_cc:
            raise e
        else:
            instance.scons_compiler = compiler_type

def try_import_numscons():
    try:
        import numscons
    except ImportError, e:
        raise RuntimeError("importing numscons failed (error was %s), using " \
                           "scons within distutils is not possible without "
                           "this package " % str(e))

def caught_fcompiler_version(func, compiler):
    try:
        c, v = func()
    except (DistutilsModuleError, CompilerNotFound), e:
        logdebug("show_fcompilers: %s not found" % (compiler,))
        logdebug(repr(e))

    return c, v

def getoutput(cmd, successful_status=(0,), stacklevel=1):
    try:
        status, output = commands.getstatusoutput(cmd)
    except EnvironmentError, e:
        warnings.warn(str(e), UserWarning, stacklevel=stacklevel)
        return False, output
    if os.WIFEXITED(status) and os.WEXITSTATUS(status) in successful_status:
        return True, output
    return False, output

def open_cpuinfo(info):
    try:
        fo = open('/proc/cpuinfo')
    except EnvironmentError, e:
        warnings.warn(str(e), UserWarning)
    else:
        for line in fo:
            name_value = [s.strip() for s in line.split(':', 1)]
            if len(name_value) != 2:
                continue
            name, value = name_value
            if not info or name in info[-1]: # next processor
                info.append({})
            info[-1][name] = value
        fo.close()

    return info

def get_ar_exe(klass):
    try:
        m = klass()
        m.initialize()
        ar_exe = m.lib
    except DistutilsPlatformError, msg:
        pass
    except AttributeError, msg:
        if '_MSVCCompiler__root' in str(msg):
            print('Ignoring "%s" (I think it is msvccompiler.py bug)' % (msg))
        else:
            raise
    except IOError, e:
        if not "vcvarsall.bat" in str(e):
            print("Unexpected IOError in", __file__)
            raise e
    except ValueError, e:
        if not "path']" in str(e):
            print("Unexpected ValueError in", __file__)
            raise e

    return ar_exe

def print_fcompiler_version(klass):
    try:
        compiler = klass()
        compiler.customize()
        print(compiler.get_version())
    except Exception, msg:
        print(msg)

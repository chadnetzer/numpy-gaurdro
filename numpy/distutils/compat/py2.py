import imp

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

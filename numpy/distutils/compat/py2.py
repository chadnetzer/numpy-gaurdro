from numpy.distutils import log

def try_import_compiler(module_name):
    try:
        __import__ (module_name)
    except ImportError, msg:
        log.info('%s in numpy.distutils; trying from distutils',
                 str(msg))
        module_name = module_name[6:]
        try:
            __import__(module_name)
        except ImportError, msg:
            raise DistutilsModuleError(
                    "can't compile C/C++ code: unable to load module '%s'" % \
                    module_name)

    return module_name

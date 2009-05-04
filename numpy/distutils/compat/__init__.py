import sys
if sys.version_info[0] < 3:
    from numpy.distutils.compat.py2 import try_import_compiler
else:
    from numpy.distutils.compat.py3 import try_import_compiler

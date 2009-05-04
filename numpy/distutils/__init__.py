
from numpy.distutils.__version__ import version as __version__

# Must import local ccompiler ASAP in order to get
# customized CCompiler.spawn effective.
import numpy.distutils.ccompiler
import numpy.distutils.unixccompiler

from numpy.distutils.info import __doc__

try:
    import numpy.distutils.__config__
    _INSTALLED = True
except ImportError:
    _INSTALLED = False

if _INSTALLED:
    from numpy.testing import Tester
    test = Tester().test
    bench = Tester().bench

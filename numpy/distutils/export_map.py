"""Utils to build export map files from a list of symbols."""

# This code is derived from create_symbols_file.py from the project libsndfile,
# by Erik de Castro Lopo

import re
from distutils.sysconfig import get_config_var

# Functions to generate the platform-specific output from a list of
# symbols/ordinals
def linux_symbols (name, symbols):
    ret = []
    ret.append("# Auto-generated by %s\n" % __file__)
    ret.append("%s" % name)
    ret.append("{")
    ret.append("  global:")
    for name, ordinal in symbols:
        ret.append("    %s ;" % name)
    ret.append("  local:")
    ret.append("    * ;")
    ret.append("} ;")
    ret.append("")
    return "\n".join(ret)

def darwin_symbols (name, symbols):
    ret = ["# Auto-generated by %s\n" % __file__]
    for name, ordinal in symbols:
        ret.append("_%s" % name)
    ret.append("")
    return "\n".join(ret)

def win32_symbols (name, symbols):
    ret = ["; Auto-generated by %s\n" % __file__]
    ret.append("LIBRARY %s" % name)
    ret.append("EXPORTS\n")
    for name, ordinal in symbols:
        ret.append("%-20s @%s" % (name, ordinal))
    ret.append("")
    return "\n".join(ret)

_PLATFORM_TO_FUNC = {'win32': win32_symbols, 'linux2': linux_symbols,
        'darwin': darwin_symbols}

def _generate_export_map(filename, fullextname, platform, symbols):
    """Write the export map file.

    Arguments
    ---------
    filename:
        name of the file to write the export map into
    fullextname:
        name of the extension name, including the file extension (e.g. foo.pyd,
        foo.so)
    platform:
        name of the platform, as returned by sys.platform
    symbols:
        sequence of (name, ordinal), where name is the symbol name, and ordinal
        its ordinal.
    """
    if _PLATFORM_TO_FUNC.has_key(platform):
        func = _PLATFORM_TO_FUNC[platform]
        f = open(filename, 'w')
        try:
            f.write(func(fullextname, symbols))
        finally:
            f.close()
    else:
        raise ValueError("Platform %s not supported" % platform)

def read_symbols_list(name):
    """Read the symbols list from the given file name."""
    r = re.compile('^(\S+)\s*(\d+)')
    f = open(name, 'r')
    symbols = []
    try:
        for line in f.readlines():
            m = r.match(line)
            if m:
                symbols.append((m.group(1), int(m.group(2))))
    finally:
        f.close()

    return symbols

# Misc
def export_name_filename(name, platform, debug=False):
    """Return the full file name of the symbols file for the given name and
    platform."""
    #if debug:
    #    name += '_d'

    if platform[:5] == 'linux':
        name += ".linux"
    else:
        name += ".%s" % platform

    return name

def extension_full_name(extname, platform, debug=False):
    # XXX: it is not clear how debug extensions are supposed to be named
    if debug and platform == 'win32':
        extname += '_d'

    if platform == 'win32':
        extname += '.pyd'
    else:
        extname += ".so"

    return extname

def generate_export_map(input, extname, platform, mapname, debug=False):
    """Generate a platform specific export map file."""
    symbols = read_symbols_list(input)
    name = extension_full_name(extname, platform, debug)
    mapfilename = export_name_filename(mapname, platform, debug)

    _generate_export_map(mapfilename, name, platform, symbols)
    return mapfilename

if __name__ == '__main__':
    extname = 'multiarray'
    mapname = 'Symbols'
    platform = 'win32'
    debug = True

    #generate_export_map('export.txt', extname, platform, mapname, debug)
    symbols = read_symbols_list('export.txt')
    #print extension_full_name(extname, platform, debug)
    #generate_export_map(export_name_filename(name, platform, debug),
    #        'multiarray.so', platform, symbols)

import sys
if sys.version_info[0] < 3:
    from numpy.distutils.compat.py2 import try_import_compiler, try_load_module, \
        caught_spawn_command, caught_raise_spawn_command, caught_wrap_method, initialize_compiler, \
        caught_numerix_info, caught_replace, caught_parse_loop_header, caught_process_str, \
        try_initialize_compiler, try_import_numscons
else:
    from numpy.distutils.compat.py3 import try_import_compiler, try_load_module, \
        caught_spawn_command, caught_raise_spawn_command, caught_wrap_method, initialize_compiler, \
        caught_numerix_info, caught_replace, caught_parse_loop_header, caught_process_str, \
        try_initialize_compiler, try_import_numscons

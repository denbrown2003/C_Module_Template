from distutils.core import setup, Extension

module = Extension(
    'module', 
    sources=['module.c']
)
 
setup(
    name='Module Template', 
    version='0.1', 
    description='Module Template',
    ext_modules=[module]
)
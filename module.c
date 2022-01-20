#define PY_SSIZE_T_CLEAN

#include "Python.h"
#include <stdio.h>


// TEst example 
static PyObject* mult(PyObject* self, PyObject * args)
{
    int n;
    if(!PyArg_ParseTuple(args, "i", &n))
        return NULL;
    int res = n * n;
    return Py_BuildValue("i", res);
}

// Module registration
static PyMethodDef methods[] = {
    {"mult", mult, METH_VARARGS, "mlt n"},
    {NULL, NULL, 0, NULL}
};

static PyModuleDef cmath = {
    PyModuleDef_HEAD_INIT,
    "module", "Module Template",
    -1,
    methods
};

PyMODINIT_FUNC PyInit_module(void)
{
    return PyModule_Create(&cmath);
}
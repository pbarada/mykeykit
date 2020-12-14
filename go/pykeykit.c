/* Generated by Pyrex 0.9.4.1 on Mon Apr 21 22:01:01 2008 */

#include "Python.h"
#include "structmember.h"
#ifndef PY_LONG_LONG
  #define PY_LONG_LONG LONG_LONG
#endif
#ifdef __cplusplus
#define __PYX_EXTERN_C extern "C"
#else
#define __PYX_EXTERN_C extern
#endif
__PYX_EXTERN_C double pow(double, double);
#include "pykeykit.h"


typedef struct {PyObject **p; char *s;} __Pyx_InternTabEntry; /*proto*/
typedef struct {PyObject **p; char *s; long n;} __Pyx_StringTabEntry; /*proto*/
static PyObject *__Pyx_UnpackItem(PyObject *, int); /*proto*/
static int __Pyx_EndUnpack(PyObject *, int); /*proto*/
static int __Pyx_PrintItem(PyObject *); /*proto*/
static int __Pyx_PrintNewline(void); /*proto*/
static void __Pyx_Raise(PyObject *type, PyObject *value, PyObject *tb); /*proto*/
static void __Pyx_ReRaise(void); /*proto*/
static PyObject *__Pyx_Import(PyObject *name, PyObject *from_list); /*proto*/
static PyObject *__Pyx_GetExcValue(void); /*proto*/
static int __Pyx_ArgTypeTest(PyObject *obj, PyTypeObject *type, int none_allowed, char *name); /*proto*/
static int __Pyx_TypeTest(PyObject *obj, PyTypeObject *type); /*proto*/
static int __Pyx_GetStarArgs(PyObject **args, PyObject **kwds, char *kwd_list[], int nargs, PyObject **args2, PyObject **kwds2); /*proto*/
static void __Pyx_WriteUnraisable(char *name); /*proto*/
static void __Pyx_AddTraceback(char *funcname); /*proto*/
static PyTypeObject *__Pyx_ImportType(char *module_name, char *class_name, long size);  /*proto*/
static int __Pyx_SetVtable(PyObject *dict, void *vtable); /*proto*/
static int __Pyx_GetVtable(PyObject *dict, void *vtabptr); /*proto*/
static PyObject *__Pyx_CreateClass(PyObject *bases, PyObject *dict, PyObject *name, char *modname); /*proto*/
static int __Pyx_InternStrings(__Pyx_InternTabEntry *t); /*proto*/
static int __Pyx_InitStrings(__Pyx_StringTabEntry *t); /*proto*/
static PyObject *__Pyx_GetName(PyObject *dict, PyObject *name); /*proto*/

static PyObject *__pyx_m;
static PyObject *__pyx_b;
static int __pyx_lineno;
static char *__pyx_filename;
static char **__pyx_f;

static char __pyx_mdoc[] = "\npykeykit - keykit module for python\n";

/* Declarations from pykeykit */


struct __pyx_obj_8pykeykit_keydevice {
  PyObject_HEAD
  int done;
};

static PyTypeObject *__pyx_ptype_8pykeykit_keydevice = 0;

/* Implementation of pykeykit */


static PyObject *__pyx_n_win32con;
static PyObject *__pyx_n_sys;
static PyObject *__pyx_n_ctypes;
static PyObject *__pyx_n_time;
static PyObject *__pyx_n_Timer;
static PyObject *__pyx_n_Gkeykit;
static PyObject *__pyx_n_threading;

static int __pyx_f_8pykeykit_9keydevice___new__(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static int __pyx_f_8pykeykit_9keydevice___new__(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  int __pyx_r;
  static char *__pyx_argnames[] = {0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "", __pyx_argnames)) return -1;
  Py_INCREF(__pyx_v_self);

  /* "C:\local\key76e\src\pykeykit.pyx":26 */
  if (PyObject_SetAttr(__pyx_m, __pyx_n_Gkeykit, __pyx_v_self) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 26; goto __pyx_L1;}

  /* "C:\local\key76e\src\pykeykit.pyx":27 */
  ((struct __pyx_obj_8pykeykit_keydevice *)__pyx_v_self)->done = 0;

  __pyx_r = 0;
  goto __pyx_L0;
  __pyx_L1:;
  __Pyx_AddTraceback("pykeykit.keydevice.__new__");
  __pyx_r = -1;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  return __pyx_r;
}

static PyObject *__pyx_f_8pykeykit_9keydevice_init(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static PyObject *__pyx_f_8pykeykit_9keydevice_init(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_hwnd = 0;
  PyObject *__pyx_v_hinst = 0;
  PyObject *__pyx_v_n;
  PyObject *__pyx_r;
  int __pyx_1;
  int __pyx_2;
  PyObject *__pyx_3 = 0;
  static char *__pyx_argnames[] = {"hwnd","hinst",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "OO", __pyx_argnames, &__pyx_v_hwnd, &__pyx_v_hinst)) return 0;
  Py_INCREF(__pyx_v_self);
  Py_INCREF(__pyx_v_hwnd);
  Py_INCREF(__pyx_v_hinst);
  __pyx_v_n = Py_None; Py_INCREF(Py_None);

  /* "C:\local\key76e\src\pykeykit.pyx":30 */
  __pyx_1 = PyInt_AsLong(__pyx_v_hwnd); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 30; goto __pyx_L1;}
  __pyx_2 = PyInt_AsLong(__pyx_v_hinst); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 30; goto __pyx_L1;}
  __pyx_3 = PyInt_FromLong(keykit_init(__pyx_1,__pyx_2)); if (!__pyx_3) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 30; goto __pyx_L1;}
  Py_DECREF(__pyx_v_n);
  __pyx_v_n = __pyx_3;
  __pyx_3 = 0;

  /* "C:\local\key76e\src\pykeykit.pyx":31 */
  Py_INCREF(__pyx_v_n);
  __pyx_r = __pyx_v_n;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_3);
  __Pyx_AddTraceback("pykeykit.keydevice.init");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_n);
  Py_DECREF(__pyx_v_self);
  Py_DECREF(__pyx_v_hwnd);
  Py_DECREF(__pyx_v_hinst);
  return __pyx_r;
}

static PyObject *__pyx_f_8pykeykit_9keydevice_setcallback(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static PyObject *__pyx_f_8pykeykit_9keydevice_setcallback(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_f = 0;
  PyObject *__pyx_r;
  static char *__pyx_argnames[] = {"f",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "O", __pyx_argnames, &__pyx_v_f)) return 0;
  Py_INCREF(__pyx_v_self);
  Py_INCREF(__pyx_v_f);

  /* "C:\local\key76e\src\pykeykit.pyx":34 */
  keykit_setcallback(__pyx_v_f);

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  __Pyx_AddTraceback("pykeykit.keydevice.setcallback");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_self);
  Py_DECREF(__pyx_v_f);
  return __pyx_r;
}

static PyObject *__pyx_f_8pykeykit_9keydevice_keyeval(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds); /*proto*/
static PyObject *__pyx_f_8pykeykit_9keydevice_keyeval(PyObject *__pyx_v_self, PyObject *__pyx_args, PyObject *__pyx_kwds) {
  PyObject *__pyx_v_s = 0;
  char (*__pyx_v_cstring);
  PyObject *__pyx_v_n;
  PyObject *__pyx_r;
  char (*__pyx_1);
  PyObject *__pyx_2 = 0;
  static char *__pyx_argnames[] = {"s",0};
  if (!PyArg_ParseTupleAndKeywords(__pyx_args, __pyx_kwds, "O", __pyx_argnames, &__pyx_v_s)) return 0;
  Py_INCREF(__pyx_v_self);
  Py_INCREF(__pyx_v_s);
  __pyx_v_n = Py_None; Py_INCREF(Py_None);

  /* "C:\local\key76e\src\pykeykit.pyx":38 */
  __pyx_1 = PyString_AsString(__pyx_v_s); if (PyErr_Occurred()) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 38; goto __pyx_L1;}
  __pyx_v_cstring = __pyx_1;

  /* "C:\local\key76e\src\pykeykit.pyx":39 */
  __pyx_2 = PyInt_FromLong(keykit_eval(__pyx_v_cstring)); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 39; goto __pyx_L1;}
  Py_DECREF(__pyx_v_n);
  __pyx_v_n = __pyx_2;
  __pyx_2 = 0;

  /* "C:\local\key76e\src\pykeykit.pyx":40 */
  Py_INCREF(__pyx_v_n);
  __pyx_r = __pyx_v_n;
  goto __pyx_L0;

  __pyx_r = Py_None; Py_INCREF(Py_None);
  goto __pyx_L0;
  __pyx_L1:;
  Py_XDECREF(__pyx_2);
  __Pyx_AddTraceback("pykeykit.keydevice.keyeval");
  __pyx_r = 0;
  __pyx_L0:;
  Py_DECREF(__pyx_v_n);
  Py_DECREF(__pyx_v_self);
  Py_DECREF(__pyx_v_s);
  return __pyx_r;
}

static __Pyx_InternTabEntry __pyx_intern_tab[] = {
  {&__pyx_n_Gkeykit, "Gkeykit"},
  {&__pyx_n_Timer, "Timer"},
  {&__pyx_n_ctypes, "ctypes"},
  {&__pyx_n_sys, "sys"},
  {&__pyx_n_threading, "threading"},
  {&__pyx_n_time, "time"},
  {&__pyx_n_win32con, "win32con"},
  {0, 0}
};

static PyObject *__pyx_tp_new_8pykeykit_keydevice(PyTypeObject *t, PyObject *a, PyObject *k) {
  PyObject *o = (*t->tp_alloc)(t, 0);
  struct __pyx_obj_8pykeykit_keydevice *p = (struct __pyx_obj_8pykeykit_keydevice *)o;
  if (__pyx_f_8pykeykit_9keydevice___new__(o, a, k) < 0) {
    Py_DECREF(o); o = 0;
  }
  return o;
}

static void __pyx_tp_dealloc_8pykeykit_keydevice(PyObject *o) {
  struct __pyx_obj_8pykeykit_keydevice *p = (struct __pyx_obj_8pykeykit_keydevice *)o;
  (*o->ob_type->tp_free)(o);
}

static int __pyx_tp_traverse_8pykeykit_keydevice(PyObject *o, visitproc v, void *a) {
  int e;
  struct __pyx_obj_8pykeykit_keydevice *p = (struct __pyx_obj_8pykeykit_keydevice *)o;
  return 0;
}

static int __pyx_tp_clear_8pykeykit_keydevice(PyObject *o) {
  struct __pyx_obj_8pykeykit_keydevice *p = (struct __pyx_obj_8pykeykit_keydevice *)o;
  return 0;
}

static struct PyMethodDef __pyx_methods_8pykeykit_keydevice[] = {
  {"init", (PyCFunction)__pyx_f_8pykeykit_9keydevice_init, METH_VARARGS|METH_KEYWORDS, 0},
  {"setcallback", (PyCFunction)__pyx_f_8pykeykit_9keydevice_setcallback, METH_VARARGS|METH_KEYWORDS, 0},
  {"keyeval", (PyCFunction)__pyx_f_8pykeykit_9keydevice_keyeval, METH_VARARGS|METH_KEYWORDS, 0},
  {0, 0, 0, 0}
};

static PyNumberMethods __pyx_tp_as_number_keydevice = {
  0, /*nb_add*/
  0, /*nb_subtract*/
  0, /*nb_multiply*/
  0, /*nb_divide*/
  0, /*nb_remainder*/
  0, /*nb_divmod*/
  0, /*nb_power*/
  0, /*nb_negative*/
  0, /*nb_positive*/
  0, /*nb_absolute*/
  0, /*nb_nonzero*/
  0, /*nb_invert*/
  0, /*nb_lshift*/
  0, /*nb_rshift*/
  0, /*nb_and*/
  0, /*nb_xor*/
  0, /*nb_or*/
  0, /*nb_coerce*/
  0, /*nb_int*/
  0, /*nb_long*/
  0, /*nb_float*/
  0, /*nb_oct*/
  0, /*nb_hex*/
  0, /*nb_inplace_add*/
  0, /*nb_inplace_subtract*/
  0, /*nb_inplace_multiply*/
  0, /*nb_inplace_divide*/
  0, /*nb_inplace_remainder*/
  0, /*nb_inplace_power*/
  0, /*nb_inplace_lshift*/
  0, /*nb_inplace_rshift*/
  0, /*nb_inplace_and*/
  0, /*nb_inplace_xor*/
  0, /*nb_inplace_or*/
  0, /*nb_floor_divide*/
  0, /*nb_true_divide*/
  0, /*nb_inplace_floor_divide*/
  0, /*nb_inplace_true_divide*/
};

static PySequenceMethods __pyx_tp_as_sequence_keydevice = {
  0, /*sq_length*/
  0, /*sq_concat*/
  0, /*sq_repeat*/
  0, /*sq_item*/
  0, /*sq_slice*/
  0, /*sq_ass_item*/
  0, /*sq_ass_slice*/
  0, /*sq_contains*/
  0, /*sq_inplace_concat*/
  0, /*sq_inplace_repeat*/
};

static PyMappingMethods __pyx_tp_as_mapping_keydevice = {
  0, /*mp_length*/
  0, /*mp_subscript*/
  0, /*mp_ass_subscript*/
};

static PyBufferProcs __pyx_tp_as_buffer_keydevice = {
  0, /*bf_getreadbuffer*/
  0, /*bf_getwritebuffer*/
  0, /*bf_getsegcount*/
  0, /*bf_getcharbuffer*/
};

PyTypeObject __pyx_type_8pykeykit_keydevice = {
  PyObject_HEAD_INIT(0)
  0, /*ob_size*/
  "pykeykit.keydevice", /*tp_name*/
  sizeof(struct __pyx_obj_8pykeykit_keydevice), /*tp_basicsize*/
  0, /*tp_itemsize*/
  __pyx_tp_dealloc_8pykeykit_keydevice, /*tp_dealloc*/
  0, /*tp_print*/
  0, /*tp_getattr*/
  0, /*tp_setattr*/
  0, /*tp_compare*/
  0, /*tp_repr*/
  &__pyx_tp_as_number_keydevice, /*tp_as_number*/
  &__pyx_tp_as_sequence_keydevice, /*tp_as_sequence*/
  &__pyx_tp_as_mapping_keydevice, /*tp_as_mapping*/
  0, /*tp_hash*/
  0, /*tp_call*/
  0, /*tp_str*/
  0, /*tp_getattro*/
  0, /*tp_setattro*/
  &__pyx_tp_as_buffer_keydevice, /*tp_as_buffer*/
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_CHECKTYPES|Py_TPFLAGS_BASETYPE|Py_TPFLAGS_HAVE_GC, /*tp_flags*/
  0, /*tp_doc*/
  __pyx_tp_traverse_8pykeykit_keydevice, /*tp_traverse*/
  __pyx_tp_clear_8pykeykit_keydevice, /*tp_clear*/
  0, /*tp_richcompare*/
  0, /*tp_weaklistoffset*/
  0, /*tp_iter*/
  0, /*tp_iternext*/
  __pyx_methods_8pykeykit_keydevice, /*tp_methods*/
  0, /*tp_members*/
  0, /*tp_getset*/
  0, /*tp_base*/
  0, /*tp_dict*/
  0, /*tp_descr_get*/
  0, /*tp_descr_set*/
  0, /*tp_dictoffset*/
  0, /*tp_init*/
  0, /*tp_alloc*/
  __pyx_tp_new_8pykeykit_keydevice, /*tp_new*/
  0, /*tp_free*/
  0, /*tp_is_gc*/
  0, /*tp_bases*/
  0, /*tp_mro*/
  0, /*tp_cache*/
  0, /*tp_subclasses*/
  0, /*tp_weaklist*/
};

static struct PyMethodDef __pyx_methods[] = {
  {0, 0, 0, 0}
};

static void __pyx_init_filenames(void); /*proto*/

PyMODINIT_FUNC initpykeykit(void); /*proto*/
PyMODINIT_FUNC initpykeykit(void) {
  PyObject *__pyx_1 = 0;
  PyObject *__pyx_2 = 0;
  __pyx_init_filenames();
  __pyx_m = Py_InitModule4("pykeykit", __pyx_methods, __pyx_mdoc, 0, PYTHON_API_VERSION);
  if (!__pyx_m) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 2; goto __pyx_L1;};
  __pyx_b = PyImport_AddModule("__builtin__");
  if (!__pyx_b) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 2; goto __pyx_L1;};
  if (PyObject_SetAttrString(__pyx_m, "__builtins__", __pyx_b) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 2; goto __pyx_L1;};
  if (__Pyx_InternStrings(__pyx_intern_tab) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 2; goto __pyx_L1;};
  if (PyType_Ready(&__pyx_type_8pykeykit_keydevice) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 20; goto __pyx_L1;}
  if (PyObject_SetAttrString(__pyx_m, "keydevice", (PyObject *)&__pyx_type_8pykeykit_keydevice) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 20; goto __pyx_L1;}
  __pyx_ptype_8pykeykit_keydevice = &__pyx_type_8pykeykit_keydevice;

  /* "C:\local\key76e\src\pykeykit.pyx":12 */
  __pyx_1 = __Pyx_Import(__pyx_n_win32con, 0); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 12; goto __pyx_L1;}
  if (PyObject_SetAttr(__pyx_m, __pyx_n_win32con, __pyx_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 12; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;

  /* "C:\local\key76e\src\pykeykit.pyx":13 */
  __pyx_1 = __Pyx_Import(__pyx_n_sys, 0); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 13; goto __pyx_L1;}
  if (PyObject_SetAttr(__pyx_m, __pyx_n_sys, __pyx_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 13; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;

  /* "C:\local\key76e\src\pykeykit.pyx":14 */
  __pyx_1 = __Pyx_Import(__pyx_n_ctypes, 0); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 14; goto __pyx_L1;}
  if (PyObject_SetAttr(__pyx_m, __pyx_n_ctypes, __pyx_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 14; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;

  /* "C:\local\key76e\src\pykeykit.pyx":15 */
  __pyx_1 = __Pyx_Import(__pyx_n_time, 0); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 15; goto __pyx_L1;}
  if (PyObject_SetAttr(__pyx_m, __pyx_n_time, __pyx_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 15; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;

  /* "C:\local\key76e\src\pykeykit.pyx":16 */
  __pyx_1 = PyList_New(1); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 16; goto __pyx_L1;}
  Py_INCREF(__pyx_n_Timer);
  PyList_SET_ITEM(__pyx_1, 0, __pyx_n_Timer);
  __pyx_2 = __Pyx_Import(__pyx_n_threading, __pyx_1); if (!__pyx_2) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 16; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  __pyx_1 = PyObject_GetAttr(__pyx_2, __pyx_n_Timer); if (!__pyx_1) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 16; goto __pyx_L1;}
  if (PyObject_SetAttr(__pyx_m, __pyx_n_Timer, __pyx_1) < 0) {__pyx_filename = __pyx_f[0]; __pyx_lineno = 16; goto __pyx_L1;}
  Py_DECREF(__pyx_1); __pyx_1 = 0;
  Py_DECREF(__pyx_2); __pyx_2 = 0;

  /* "C:\local\key76e\src\pykeykit.pyx":36 */
  return;
  __pyx_L1:;
  Py_XDECREF(__pyx_1);
  Py_XDECREF(__pyx_2);
  __Pyx_AddTraceback("pykeykit");
}

static char *__pyx_filenames[] = {
  "pykeykit.pyx",
};

/* Runtime support code */

static void __pyx_init_filenames(void) {
  __pyx_f = __pyx_filenames;
}

static PyObject *__Pyx_Import(PyObject *name, PyObject *from_list) {
    PyObject *__import__ = 0;
    PyObject *empty_list = 0;
    PyObject *module = 0;
    PyObject *global_dict = 0;
    PyObject *empty_dict = 0;
    PyObject *list;
    __import__ = PyObject_GetAttrString(__pyx_b, "__import__");
    if (!__import__)
        goto bad;
    if (from_list)
        list = from_list;
    else {
        empty_list = PyList_New(0);
        if (!empty_list)
            goto bad;
        list = empty_list;
    }
    global_dict = PyModule_GetDict(__pyx_m);
    if (!global_dict)
        goto bad;
    empty_dict = PyDict_New();
    if (!empty_dict)
        goto bad;
    module = PyObject_CallFunction(__import__, "OOOO",
        name, global_dict, empty_dict, list);
bad:
    Py_XDECREF(empty_list);
    Py_XDECREF(__import__);
    Py_XDECREF(empty_dict);
    return module;
}

static int __Pyx_InternStrings(__Pyx_InternTabEntry *t) {
    while (t->p) {
        *t->p = PyString_InternFromString(t->s);
        if (!*t->p)
            return -1;
        ++t;
    }
    return 0;
}

#include "compile.h"
#include "frameobject.h"
#include "traceback.h"

static void __Pyx_AddTraceback(char *funcname) {
    PyObject *py_srcfile = 0;
    PyObject *py_funcname = 0;
    PyObject *py_globals = 0;
    PyObject *empty_tuple = 0;
    PyObject *empty_string = 0;
    PyCodeObject *py_code = 0;
    PyFrameObject *py_frame = 0;
    
    py_srcfile = PyString_FromString(__pyx_filename);
    if (!py_srcfile) goto bad;
    py_funcname = PyString_FromString(funcname);
    if (!py_funcname) goto bad;
    py_globals = PyModule_GetDict(__pyx_m);
    if (!py_globals) goto bad;
    empty_tuple = PyTuple_New(0);
    if (!empty_tuple) goto bad;
    empty_string = PyString_FromString("");
    if (!empty_string) goto bad;
    py_code = PyCode_New(
        0,            /*int argcount,*/
        0,            /*int nlocals,*/
        0,            /*int stacksize,*/
        0,            /*int flags,*/
        empty_string, /*PyObject *code,*/
        empty_tuple,  /*PyObject *consts,*/
        empty_tuple,  /*PyObject *names,*/
        empty_tuple,  /*PyObject *varnames,*/
        empty_tuple,  /*PyObject *freevars,*/
        empty_tuple,  /*PyObject *cellvars,*/
        py_srcfile,   /*PyObject *filename,*/
        py_funcname,  /*PyObject *name,*/
        __pyx_lineno,   /*int firstlineno,*/
        empty_string  /*PyObject *lnotab*/
    );
    if (!py_code) goto bad;
    py_frame = PyFrame_New(
        PyThreadState_Get(), /*PyThreadState *tstate,*/
        py_code,             /*PyCodeObject *code,*/
        py_globals,          /*PyObject *globals,*/
        0                    /*PyObject *locals*/
    );
    if (!py_frame) goto bad;
    py_frame->f_lineno = __pyx_lineno;
    PyTraceBack_Here(py_frame);
bad:
    Py_XDECREF(py_srcfile);
    Py_XDECREF(py_funcname);
    Py_XDECREF(empty_tuple);
    Py_XDECREF(empty_string);
    Py_XDECREF(py_code);
    Py_XDECREF(py_frame);
}
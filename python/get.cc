#include <iostream>
#include <string>

#include <python2.7/Python.h>

int main()  {
	Py_Initialize();

	PyRun_SimpleString("import sys");
	PyRun_SimpleString("sys.path.append('./')");

	PyObject* pModule = NULL;
	PyObject* pFunc = NULL; 

	pModule = PyImport_ImportModule("test");
	pFunc = PyObject_GetAttrString(pModule, "world");
	PyEval_CallObject(pFunc, NULL);
	Py_Finalize();
	return 0;
}

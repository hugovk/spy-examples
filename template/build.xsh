#!/usr/bin/env xonsh
$RAISE_SUBPROC_ERROR = True
spy --cwrite *.spy
pyodide build .
print("To test:")
print(f"❯ pyodide venv .pyo-venv")
print(f"❯ .pyo-venv/bin/pip install dist/*.whl")
print(f'❯ .pyo-venv/bin/python -c "import mymod; print(mymod.lib.add(3, 5))"')
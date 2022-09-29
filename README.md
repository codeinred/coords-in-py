# Simple pybind11 template project

**Building**

```
cmake -B build
cmake --build build
```

This will create a folder called build/ and build it in there.

To build in release mode, use:

```
cmake -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build
```

This will generate a library that looks something like this in the build
directory:

```
coords.cpython-310-x86_64-linux-gnu.so
```

**Using with python**

Add location of the library to your python path:

```
export PYTHONPATH="$PWD/build:${PYTHONPATH}"
```

Now you can use it in python.

To make sure everything is working correctly, try running example.py:

```
python example.py
```

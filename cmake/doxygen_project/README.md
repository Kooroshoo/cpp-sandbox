## You can generate this file using:

```bash
cd docs
doxygen -g
```

## Then change these lines in Doxyfile:

```bash
PROJECT_NAME           = "DoxygenExample"
INPUT                  = ../include ../src ../main.cpp
RECURSIVE              = NO
OUTPUT_DIRECTORY       = ./output
GENERATE_LATEX         = NO

```

## Then run:
```bash
cd docs
doxygen Doxyfile

```
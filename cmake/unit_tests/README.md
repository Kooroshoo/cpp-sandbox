## Running Tests with Catch2

```bash
# Create the build directory and generate the build files using CMake:
mkdir build && cd build
cmake ..

# Build the project and tests:
cmake --build .

# Run tests using CTest (or directly via unit_tests executable):
ctest      # Or run directly using ./unit_tests
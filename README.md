# cpp-sandbox

A personal sandbox for experimenting with modern and advanced C++ concepts — from multithreading and design patterns to graphics and systems programming.

## Overview

This repository is a curated collection of C++ examples, mini-projects, and experiments built to explore:

- **CMake, Tests, and Tooling**
- **Data Structures & Algorithms**
- **Memory Management (Smart Pointers, RAII)**
- **Modern C++ Features (C++11, C++14, C++17, C++20)**
- **Design Patterns**
- **Multithreading & Concurrency**
- **Networking (Sockets, UDP/TCP)**
- **Graphics & Game Development (SFML, Dear ImGui)**

## Folder Structure

```plaintext
cpp-sandbox/
├── cmake/              # CMake configs, toolchains, and scripts
├── tests/              # Unit tests and testing setups
├── tooling/            # Build system tooling, scripts, etc.
├── dsa/                # Data structures and algorithms implementations
├── memory-management/  # Smart pointers, RAII, and memory handling examples
├── modern-cpp/         # Modern C++ features (C++11, C++14, C++17, C++20)
├── patterns/           # Design pattern implementations
├── threading/          # Multithreading & concurrency examples (std::thread, std::async, etc.)
├── networking/         # Networking examples (sockets, UDP/TCP)
├── graphics/           # Graphics and game development (SFML, Dear ImGui)
└── README.md           # This README file
```

## Setup & Dependencies

```bash
sudo apt-get update
sudo apt-get upgrade

# Mandatory
sudo apt-get install gcc g++ gdb
sudo apt-get install make cmake
sudo apt-get install git
sudo apt-get install doxygen
sudo apt-get install python3 python3-pip

# Optional
sudo apt-get install lcov gcovr
sudo apt-get install ccache
sudo apt-get install cppcheck
sudo apt-get install llvm clang-format clang-tidy
sudo apt-get install curl zip unzip tar
sudo apt-get install graphviz

```

## Build Instructions

```bash
# 1. Create build dir (if not done)
mkdir -p build

# 2. Go into it
cd build

# 3. Configure with compile_commands.json support
cmake .. -DCMAKE_EXPORT_COMPILE_COMMANDS=ON

# 4. Build it
cmake --build .

# 5. (Optional) Link the compile_commands.json for IntelliSense
cd ..
ln -sf build/compile_commands.json compile_commands.json


```


# Ember Project

## Overview

The Ember project is a C++ library focused on providing essential data structures for use in graph-related algorithms and other utilities. This library includes data structures like binary trees, search trees, graphs, and more. The project can be built as either a shared (`emberD`) or static (`emberS`) library.

## Requirements

- CMake 3.24 or higher
- A C++20 compatible compiler

## Features

- A variety of graph-related data structures, such as:
  - Binary Heap
  - Binary Search Tree
  - Binary Tree
  - Graph and Tree Nodes
- The project is configured to support both dynamic and static libraries.
- Includes headers for hash tables, lists, nodes, queue, stack, and more.

## Directory Structure

```
.
src
├── DataStructures
│   ├── Graphs
│   │   ├── binary_heap.cpp
│   │   ├── binary_heap.hpp
│   │   ├── binary_heap_node.cpp
│   │   ├── binary_heap_node.hpp
│   │   ├── binary_search_tree.cpp
│   │   ├── binary_search_tree.hpp
│   │   ├── binary_search_tree_node.cpp
│   │   ├── binary_search_tree_node.hpp
│   │   ├── binary_tree.cpp
│   │   ├── binary_tree.hpp
│   │   ├── binary_tree_node.cpp
│   │   ├── binary_tree_node.hpp
│   │   ├── graph.cpp
│   │   ├── graph.hpp
│   │   ├── graph_node.cpp
│   │   ├── graph_node.hpp
│   │   ├── tree.cpp
│   │   ├── tree.hpp
│   │   ├── tree_node.cpp
│   │   └── tree_node.hpp
│   ├── hash.hpp
│   ├── lists.hpp
│   ├── nodes.hpp
│   ├── queue.hpp
│   ├── stack.hpp
│   └── wrappers.hpp
├── emberAPI.hpp
├── emberCommon.hpp
├── emberDLL.hpp
├── emberLIB.hpp
└── types.hpp

```

## Building the Project

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/ember.git
   ```

2. Create a build directory and navigate to it:
   ```bash
   mkdir build
   cd build
   ```

3. Run CMake to configure the project:
   ```bash
   cmake ..
   ```

4. Build the project:
   ```bash
   cmake --build .
   ```

5. Optionally, install the libraries to a specific directory:
   ```bash
   cmake --install .
   ```

## Installation

Once the project is built, you can install the libraries. The installation process varies based on your build configuration (Debug or Release).

- For Debug builds:
  ```bash
  cmake --install . --config Debug
  ```

- For Release builds:
  ```bash
  cmake --install . --config Release
  ```

## License

The Ember project is open source and available under the MIT License. See the `LICENSE` file for details.

## Contributing

Contributions are welcome! If you'd like to contribute to the project, feel free to fork the repository and submit a pull request with your changes. Please ensure that your contributions adhere to the project's coding standards and conventions.

**Usage**

To use the `ember` library in your C++ project, include the necessary header files and link against the appropriate library (shared or static):

```c++
#include <ember/DataStructures/Graphs/graph.hpp>
#include <ember/DataStructures/queue.hpp>

// ...

int main() {
    // Create a graph and a queue
    ember::Graph<int> graph;
    ember::Queue<int> queue;

    // ...
}
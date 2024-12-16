cmake_minimum_required(VERSION 3.24)
set(CMAKE_CXX_STANDARD 20)
project(ember)


set(CMAKE_IMPORT_LIBRARY_SUFFIX .lib)
add_library(emberD SHARED 
src/DataStructures/Graphs/binary_heap.cpp
src/DataStructures/Graphs/binary_heap_node.cpp
src/DataStructures/Graphs/binary_search_tree.cpp
src/DataStructures/Graphs/binary_search_tree_node.cpp
src/DataStructures/Graphs/binary_tree.cpp
src/DataStructures/Graphs/binary_tree_node.cpp
src/DataStructures/Graphs/graph.cpp
src/DataStructures/Graphs/graph_node.cpp
src/DataStructures/Graphs/tree.cpp
src/DataStructures/Graphs/tree_node.cpp)

target_compile_definitions(emberD PRIVATE ember_EXPORT)


target_include_directories(
	emberD
	PRIVATE
	${CMAKE_SOURCE_DIR}/src
	PRIVATE
	${CMAKE_SOURCE_DIR}/src/DataStructures 
	PUBLIC
	${CMAKE_SOURCE_DIR}/src/DataStructures/Graphs

)

set(ember_HEADERS 
src/DataStructures/Graphs/binary_heap.hpp
src/DataStructures/Graphs/binary_heap_node.hpp
src/DataStructures/Graphs/binary_search_tree.hpp
src/DataStructures/Graphs/binary_search_tree_node.hpp
src/DataStructures/Graphs/binary_tree.hpp
src/DataStructures/Graphs/binary_tree_node.hpp
src/DataStructures/Graphs/graph.hpp
src/DataStructures/Graphs/graph_node.hpp
src/DataStructures/Graphs/tree.hpp
src/DataStructures/Graphs/tree_node.hpp
src/DataStructures/hash.hpp
src/DataStructures/lists.hpp
src/DataStructures/nodes.hpp
src/DataStructures/queue.hpp
src/DataStructures/stack.hpp
src/DataStructures/wrappers.hpp
src/emberAPI.hpp
src/emberCommon.hpp
src/emberDLL.hpp
src/emberLIB.hpp
src/types.hpp
)


add_library(emberS STATIC 
src/DataStructures/Graphs/binary_heap.cpp
src/DataStructures/Graphs/binary_heap_node.cpp
src/DataStructures/Graphs/binary_search_tree.cpp
src/DataStructures/Graphs/binary_search_tree_node.cpp
src/DataStructures/Graphs/binary_tree.cpp
src/DataStructures/Graphs/binary_tree_node.cpp
src/DataStructures/Graphs/graph.cpp
src/DataStructures/Graphs/graph_node.cpp
src/DataStructures/Graphs/tree.cpp
src/DataStructures/Graphs/tree_node.cpp)

target_compile_definitions(emberS PRIVATE ember_STATIC)

target_include_directories(
	emberS
	PRIVATE
	${CMAKE_SOURCE_DIR}/src 
	PRIVATE
	${CMAKE_SOURCE_DIR}/src/DataStructures 
	PUBLIC
	${CMAKE_SOURCE_DIR}/src/DataStructures/Graphs

)

install(FILES ${ember_HEADERS} DESTINATION include)

if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    message("Installing debug libraries.")
    install(TARGETS emberD RUNTIME DESTINATION bin/debug ARCHIVE DESTINATION lib/debug)
    install(TARGETS emberS ARCHIVE DESTINATION lib/debug)

elseif(CMAKE_BUILD_TYPE STREQUAL "Release")
    message("Installing release libraries.")
    install(TARGETS emberD RUNTIME DESTINATION bin/release ARCHIVE DESTINATION lib/release)
    install(TARGETS emberS ARCHIVE DESTINATION lib/release)
    
endif()



    
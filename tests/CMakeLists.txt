project(graph_hash)

set(EXECUTABLE_OUTPUT_PATH ../)

add_executable(test test.cpp)

target_link_libraries(test PRIVATE graph hash_table linked_list)
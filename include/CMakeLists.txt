project(graph_hash)

add_library(hash_table SHARED IMPORTED)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../external_libs/Hash_Table/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../external_libs/Linked_List/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../external_libs/Stack/include)

link_directories(${CMAKE_CURRENT_SOURCE_DIR}//../build/external_libs/Hash_Table/src/hash_table.dylib)
link_directories(${CMAKE_CURRENT_SOURCE_DIR}//../build/external_libs/Linked_List/src/linked_list.dylib)
link_directories(${CMAKE_CURRENT_SOURCE_DIR}//../build/external_libs/Stack/src/stack.dylib)


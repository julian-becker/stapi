cmake_minimum_required(VERSION 3.5)

list(INSERT CMAKE_MODULE_PATH 0 ${CMAKE_CURRENT_LIST_DIR}/cmake)
list(INSERT CMAKE_PREFIX_PATH 0 ${CMAKE_CURRENT_LIST_DIR}/cmake)

include(AddModule)
include(AddExternalModule)
include(SetupCatch2)

enable_testing()

add_module(NAME libstapi)
add_module(NAME libstapi_test)

add_module(NAME stapiapp)

add_subdirectory(doc)

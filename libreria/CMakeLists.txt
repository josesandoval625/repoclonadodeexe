add_library(libreria example.cpp "funcionesMatematicas.h")

target_include_directories(libreria PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

project(cpp_course)
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/bin)

cmake_minimum_required(VERSION 3.0)
set (CMAKE_CXX_STANDARD 11)

add_subdirectory(2_Exceptions)
add_subdirectory(3_Files)
add_subdirectory(4_TheStandardTemplateLibrary)
add_subdirectory(5_OperatorOveloading)
add_subdirectory(6_TemplateClassesAndFunctions)
add_subdirectory(7_FunctionPointers)

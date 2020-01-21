project(ComplexNumberClass)

# add the executable
add_executable(ComplexNumberClass ComplexNumberClass.cpp Complex.cpp)
target_compile_options(ComplexNumberClass PRIVATE -Wall -Wextra)

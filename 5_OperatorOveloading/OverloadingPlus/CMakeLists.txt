project(OverloadingPlus)

# add the executable
add_executable(OverloadingPlus OverloadingPlus.cpp Complex.cpp)
target_compile_options(OverloadingPlus PRIVATE -Wall -Wextra)

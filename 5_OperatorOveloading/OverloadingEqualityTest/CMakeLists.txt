project(OverloadingEqualityTest)

# add the executable
add_executable(OverloadingEqualityTest OverloadingEqualityTest.cpp Complex.cpp)
target_compile_options(OverloadingEqualityTest PRIVATE -Wall -Wextra)

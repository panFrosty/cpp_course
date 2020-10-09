rm -Rf build
cmake -S . -B build -GNinja
cmake --build build -j 4
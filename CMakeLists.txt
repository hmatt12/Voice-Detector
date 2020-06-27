cmake_minimum_required(VERSION 3.12...3.17)

project(Voice-Detector
    VERSION 0.1
    LANGUAGES CXX
)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

# enable some IDE support
set(CMAKE_EXPORT_COMPILE_COMMANDS 1)

set(SOURCE
    main.cpp
    decoder.cpp decoder.hpp
)

list(TRANSFORM SOURCE PREPEND src/vd/)

add_executable(vd ${SOURCE})
target_link_libraries(vd ${CONAN_LIBS})
target_include_directories(vd PRIVATE src)
target_compile_features(vd PUBLIC cxx_std_17)

cmake_minimum_required(VERSION 3.12...3.17)

project(Voice-Detector
    VERSION 0.1
    LANGUAGES CXX
)

set(SOURCE
    main.cpp
)

list(TRANSFORM SOURCE PREPEND src/vd/)

add_executable(vd ${SOURCE})
target_include_directories(vd PRIVATE src)
target_compile_features(vd PUBLIC cxx_std_17)

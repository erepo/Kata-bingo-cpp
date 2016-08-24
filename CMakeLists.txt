cmake_minimum_required(VERSION 2.8 FATAL_ERROR)
project(bingo-cpp)
enable_language(C CXX)
if(CMAKE_CXX_COMPILER_ID MATCHES GNU)
set(CMAKE_CXX_FLAGS "-Wall -Wno-unknown-pragmas -Wno-sign-compare -Woverloaded-virtual -Wwrite-strings -Wno-unused")
set(CMAKE_CXX_FLAGS_DEBUG "-O0 -g3")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fprofile-arcs -ftest-coverage")
endif()
include_directories(${PROJECT_SOURCE_DIR}/src)
include_directories(${PROJECT_SOURCE_DIR}/test)
set(GOOGLETEST_ROOT external/googletest/googletest CACHE STRING "Google Test source root")
set(GOOGLEMOCK_ROOT external/googletest/googlemock CACHE STRING "Google Test source root")
include_directories(
${PROJECT_SOURCE_DIR}/${GOOGLEMOCK_ROOT}
${PROJECT_SOURCE_DIR}/${GOOGLEMOCK_ROOT}/include
${PROJECT_SOURCE_DIR}/${GOOGLETEST_ROOT}
${PROJECT_SOURCE_DIR}/${GOOGLETEST_ROOT}/include
)
set(GOOGLETEST_SOURCES
${PROJECT_SOURCE_DIR}/${GOOGLETEST_ROOT}/src/gtest-all.cc
${PROJECT_SOURCE_DIR}/${GOOGLETEST_ROOT}/src/gtest_main.cc
${PROJECT_SOURCE_DIR}/${GOOGLEMOCK_ROOT}/src/gmock-all.cc
${PROJECT_SOURCE_DIR}/${GOOGLEMOCK_ROOT}/src/gmock_main.cc
)
foreach(_source ${GOOGLETEST_SOURCES})
set_source_files_properties(${_source} PROPERTIES GENERATED 1)
endforeach()
add_library(googletest ${GOOGLETEST_SOURCES})
add_executable(
Kata-bingo-cpp
src/Fila.cc
src/Carta.cc
src/Bombo.cc
src/Jugador.cc
test/FilaTest.cc
test/JugadorTest.cc
test/BomboTest.cc
test/CartaTest.cc
)
add_dependencies(Kata-bingo-cpp googletest)
target_link_libraries(
Kata-bingo-cpp
googletest
pthread
)
include(CTest)
enable_testing()
add_test(unit ${PROJECT_BINARY_DIR}/Kata-bingo-cpp)

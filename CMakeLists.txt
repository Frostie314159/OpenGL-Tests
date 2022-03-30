cmake_minimum_required(VERSION 3.13)

project(gltests)

set(SRCS
    ${CMAKE_CURRENT_SOURCE_DIR}/src/Main.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/GLFW/Window.cpp
)

add_executable(gltests ${SRCS})

target_link_libraries(gltests glfw GL glew fmt)
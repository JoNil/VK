#cmake_minimum_required(VERSION 3.8)

add_executable(target src/main.cpp)
target_link_libraries(target ${CMAKE_SOURCE_DIR}/deps/lib/glfw3.lib)
target_include_directories(target PUBLIC ${CMAKE_SOURCE_DIR}/deps/include/)
cmake_minimum_required(VERSION 3.8)

add_executable(serious_vulkan src/main.cpp)
target_link_libraries(serious_vulkan ${CMAKE_SOURCE_DIR}/deps/lib/glfw3.lib)
target_link_libraries(serious_vulkan ${CMAKE_SOURCE_DIR}/deps/lib/vulkan-1.lib)
target_include_directories(serious_vulkan PUBLIC ${CMAKE_SOURCE_DIR}/deps/include/)
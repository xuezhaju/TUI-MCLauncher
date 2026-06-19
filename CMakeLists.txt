cmake_minimum_required(VERSION 3.20)  # CMake 4.3.4 不存在，改为 3.20

project(TUI-MCLauncher)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 查找 ftxui 包
find_package(ftxui REQUIRED)

# 收集源文件（修正通配符）
file(GLOB SRC_FILES 
    "${PROJECT_SOURCE_DIR}/src/*.hpp"
    "${PROJECT_SOURCE_DIR}/src/*.cpp"
    "${PROJECT_SOURCE_DIR}/src/ui/*.cpp"
    "${PROJECT_SOURCE_DIR}/src/ui/*.hpp"
)

# 创建可执行文件（修正源文件列表）
add_executable(${PROJECT_NAME} ${SRC_FILES})

# 链接 ftxui 库（修正目标名称）
target_link_libraries(${PROJECT_NAME}
    PRIVATE ftxui::screen
    PRIVATE ftxui::dom
    PRIVATE ftxui::component
)

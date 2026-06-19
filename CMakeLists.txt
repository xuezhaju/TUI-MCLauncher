# CMake 最低版本号要求
cmake_minimum_required (VERSION 4.3.4)

# 项目信息
project (TUI-MCLauncher)

# 指定生成目标
add_executable(TUI-MCLauncher main.cc)

include(FetchContent)
 
FetchContent_Declare(ftxui
  GIT_REPOSITORY https://github.com/ArthurSonzogni/FTXUI
  GIT_TAG v6.1.9  # 替换为版本、标签或提交哈希
)
 
FetchContent_MakeAvailable(ftxui)
 
add_executable(main main.cpp)
target_link_libraries(main
  PRIVATE ftxui::screen
  PRIVATE ftxui::dom
  PRIVATE ftxui::component
)

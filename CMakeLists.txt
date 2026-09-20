# 声明cmake的最低版本
cmake_minimum_required(VERSION 3.16)

# cd build
# cmake ..            # 用上一级的 CMakeLists.txt 重新配置
# cmake --build .     # 编译（这里的 . 才是 build 目录本身）

# 给项目起名 CXX表明这是一个C++项目
project(WorkerManagerSystem CXX)

#设定C++语言标准为11
set(CMAKE_CXX_STANDARD 11)

#可执行文件有里面的cpp文件编译链接生成
add_executable(worker_system
    src/职工管理系统.cpp
    src/employee.cpp
    src/manager.cpp
    src/boss.cpp
    src/workerManager.cpp
)

#告诉编译器 编译这个可执行文件时 去include里面找头文件
target_include_directories(worker_system PRIVATE include)

#条件判断：如果用的是微软的 MSVC 编译器（也就是 Visual Studio），就加上 /utf-8 编译选项，
#让源文件里的中文字符（比如文件名 职工管理系统.cpp 里的中文）能被正确识别，避免乱码。
if(MSVC)
    target_compile_options(worker_system PRIVATE /utf-8)
endif()
#include <iostream>          // 系统/标准库头文件：用尖括号 <>
// #include <windows.h>         // Windows API：用于设置控制台编码

#include "workerManager.h"   // 自己项目的头文件：用双引号 ""，只写文件名，路径由 CMake 统一管理

#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

int main()
{
    // SetConsoleOutputCP(CP_UTF8);  // 控制台输出用 UTF-8，避免中文乱码
    // SetConsoleCP(CP_UTF8);        // 控制台输入也用 UTF-8（之后 cin 读中文会用到）

    // Worker* worker = nullptr;
    // worker = new Employee(1, "张三", 1);
    // worker->showInfo();
    // delete worker;

    // worker = new Manager(2, "里斯", 2);
    // worker->showInfo();
    // delete worker;

    // worker = new Boss(3, "网五", 3);
    // worker->showInfo();
    // delete worker;

    

    //实例化管理者对象
    WorkerManager wm;

    int choice = 0; //存储用户选项

    while (true)
    {
        //调用展示菜单
        wm.Show_Menu();

        std::cout << "请输入您的选择：" << std::endl;
        std::cin >> choice;

        switch (choice)
        {
        case 0: //退出管理程序
            wm.ExitSystem();
            break;
        case 1: //增加职工信息
            std::cout << "增加职工信息" << std::endl;
            break;
        case 2: //显示职工信息
            std::cout << "显示职工信息" << std::endl;
            break;
        case 3: //删除离职职工
            std::cout << "删除离职职工" << std::endl;
            break;
        case 4: //修改职工信息
            std::cout << "修改职工信息" << std::endl;   
            break;
        case 5: //查找职工信息
            std::cout << "查找职工信息" << std::endl;
            break;
        case 6: //按照编号排序
            std::cout << "按照编号排序" << std::endl;
            break;
        case 7: //清空所有文档
            std::cout << "清空所有文档" << std::endl;
            break;
        default:
            std::cout << "输入有误，请重新输入" << std::endl;
            break;
        }
    }
    std::cout << "Press Enter to continue..." << std::endl;
    std::cin.get();

    system("pause");

    return 0;


}
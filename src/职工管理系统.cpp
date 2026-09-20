#include <iostream>          // 系统/标准库头文件：用尖括号 <>
#include "workerManager.h"   // 自己项目的头文件：用双引号 ""，只写文件名，路径由 CMake 统一管理

#include "worker.h"
#include "employee.h"

int main()
{
    Worker* worker = nullptr;
    worker = new Employee(1, "张三", 1);
    worker->showInfo();

    //实例化管理者对象
    // WorkerManager wm;

    // int choice = 0; //存储用户选项

    // while (true)
    // {
    //     //调用展示菜单
    //     wm.Show_Menu();

    //     std::cout << "请输入您的选择：" << std::endl;
    //     std::cin >> choice;

    //     switch (choice)
    //     {
    //     case 0: //退出管理程序
    //         wm.ExitSystem();
    //         break;
    //     case 1: //增加职工信息
    //         std::cout << "增加职工信息" << std::endl;
    //         break;
    //     case 2: //显示职工信息
    //         std::cout << "显示职工信息" << std::endl;
    //         break;
    //     case 3: //删除离职职工
    //         std::cout << "删除离职职工" << std::endl;
    //         break;
    //     case 4: //修改职工信息
    //         std::cout << "修改职工信息" << std::endl;   
    //         break;
    //     case 5: //查找职工信息
    //         std::cout << "查找职工信息" << std::endl;
    //         break;
    //     case 6: //按照编号排序
    //         std::cout << "按照编号排序" << std::endl;
    //         break;
    //     case 7: //清空所有文档
    //         std::cout << "清空所有文档" << std::endl;
    //         break;
    //     default:
    //         std::cout << "输入有误，请重新输入" << std::endl;
    //         break;
    //     }
    // }
    // std::cout << "Press Enter to continue..." << std::endl;
    // std::cin.get();
    return 0;


}
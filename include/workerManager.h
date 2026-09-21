#pragma once //防止头文件重复包含
#include <iostream> //引入输入输出流头文件
#include "worker.h" //引入职工类头文件 


class WorkerManager 
{
public:
    WorkerManager();

    //展示菜单
    void Show_Menu();

    //退出系统
    void ExitSystem();

    //记录职工人数
    int m_EmpNum;

    //职工数组指针
    Worker** m_EmpArray;

    //添加职工
    void Add_Emp();

    //析构函数
    ~WorkerManager();
};
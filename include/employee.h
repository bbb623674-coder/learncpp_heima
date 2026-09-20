//普通员工文件
#pragma once
#include <iostream>
#include "worker.h"

class Employee : public Worker
{
public:
    Employee(int id, std::string name, int depId);

    //显示个人信息
    virtual void showInfo();

    //获取岗位名称
    virtual std::string getDeptName();

};
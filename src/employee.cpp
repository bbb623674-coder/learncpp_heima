#include "employee.h"

Employee::Employee(int id, std::string name, int depId)
{
    this->m_Id = id;
    this->m_Name = name;
    this->m_DepId = depId;
}

//显示个人信息
void Employee::showInfo()
{
    std::cout << "职工编号: " << m_Id << std::endl;
    std::cout << "职工姓名: " << m_Name << std::endl;
    std::cout << "岗位: " << m_DepId << std::endl;
    std::cout << "岗位职责：完成经理交给的任务" << std::endl;
}

//获取岗位名称
std::string Employee::getDepName()
{
    return std::string("员工");
}
#include "manager.h"

//构造函数
Manager::Manager(int id, std::string name, int dId)
{
    this->m_Id = id;
    this->m_Name = name;
    this->m_DepId = dId;
}

//显示个人信息
void Manager::showInfo()
{
    std::cout << "职工编号: " << m_Id << std::endl;
    std::cout << "\t职工姓名: " << m_Name << std::endl;
    std::cout << "\t岗位: " << m_DepId << std::endl;
    std::cout << "\t岗位职责：完成老板交代的任务，并下发任务给员工" << std::endl;

}

//获取岗位名称
std::string Manager::getDepName()
{
    return std::string("经理");
}
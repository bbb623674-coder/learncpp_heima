#include "Boss.h"

//构造函数
Boss::Boss(int id, std::string name, int dId)
{
    this->m_Id = id;
    this->m_Name = name;
    this->m_DepId = dId;
}

//显示个人信息
void Boss::showInfo()
{
    std::cout << "职工编号: " << m_Id << std::endl;
    std::cout << "\t职工姓名: " << m_Name << std::endl;
    std::cout << "\t岗位: " << m_DepId << std::endl;
    std::cout << "\t岗位职责：管理公司事务" << std::endl;

}

//获取岗位名称
std::string Boss::getDepName()
{
    return std::string("老板");
}
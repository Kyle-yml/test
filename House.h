//
// Created by 苑明亮 on 2022/3/19.
//

#ifndef TEMPLATE_HOUSE_H
#define TEMPLATE_HOUSE_H
#include "iostream"
using namespace std;

class House {
public:
    virtual ~House(){}

public:
    virtual void BuildPart1() = 0;
    virtual void BuildPart2() = 0;
};


class BoneHouse : public House
{
public:
    void BuildPart1()
    {
        cout << "建造石头房子第一步"<<endl;
    }
    void BuildPart2()
    {
        cout << "建造石头房子第二步"<<endl;
    }
};

class Builder
{
public:
    Builder(House * pHouse)
    {
        m_pHouse = pHouse;
    }
    void Construct()
    {
        m_pHouse->BuildPart1();
        m_pHouse->BuildPart2();
    }
public:
    House * m_pHouse;
};


#endif //TEMPLATE_HOUSE_H

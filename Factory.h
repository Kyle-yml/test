//
// Created by 苑明亮 on 2022/3/18.
//

#ifndef TEMPLATE_FACTORY_H
#define TEMPLATE_FACTORY_H
#include "iostream"
using namespace std;
//
class Factory {
public:
    virtual ~Factory(){}

public:
    virtual void CreateSomething() = 0;
};

class Company{
public:
    virtual ~Company(){}

public:
    virtual Factory * CreateFactory(Factory *f) = 0;
};

class NikeCompany : public Company
{
public:
    Factory *fac;

    Factory * CreateFactory(Factory *f)
    {
        fac = f;
    }
public:
    void CreateProduce(){
        cout <<"NikeCompany 生产："<<endl;
        fac->CreateSomething();
    }
};

class ShoseFactory : public Factory
{
public:
    virtual void CreateSomething(){
        cout << "生产鞋子"<<endl;
    }
};

class ColothFactory : public Factory
{
public:
    virtual void CreateSomething(){
        cout << "生产衣服"<<endl;
    }
};


#endif //TEMPLATE_FACTORY_H

//
// Created by 苑明亮 on 2022/3/16.
// 模版方法
//

#ifndef TEMPLATE_LIB_H
#define TEMPLATE_LIB_H
#include "iostream"
using namespace std;

class lib {
public:
    virtual ~lib(){}
private:
    void run1(){
        cout<<"run1"<<endl;
    }
    void run3(){
        cout<<"run3"<<endl;
    }
    void run5(){
        cout<<"run5"<<endl;
    }

protected:
    virtual void run2() = 0;
    virtual void run4() = 0;

public:
    void run(){
        run1();
        run2();
        run3();
        run4();
        run5();
    }
};


#endif //TEMPLATE_LIB_H

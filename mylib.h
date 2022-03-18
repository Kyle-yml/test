//
// Created by 苑明亮 on 2022/3/16.
//

#ifndef TEMPLATE_MYLIB_H
#define TEMPLATE_MYLIB_H

#include "lib.h"
#include "iostream"
using namespace std;

class mylib : public lib{

public:
    void run2(){
        cout<<"run2"<<endl;
    }
    void run4(){
        cout<<"run4"<<endl;
    }
};


#endif //TEMPLATE_MYLIB_H

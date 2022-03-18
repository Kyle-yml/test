#include <iostream>
#include "mylib.h"
#include "CSliptMan.h"
#include "fileStream.h"
#include "IMessage.h"
#include "Factory.h"
int main() {
    //工厂模式
    Factory *f = new ColothFactory();
    NikeCompany nk;
    nk.CreateFactory(f);
    nk.CreateProduce();
    delete f;
    //桥接模式
//    IMessage_Imp *imp = new Mobile_Message();
//    IMessage *msg = new PC_Message_Perfect(imp);
//    msg->login();
//    msg->connect();
//    delete imp;
//    delete msg;

//    std::cout << "Hello, World!" << std::endl;
    //模版方法
//    mylib *lb = new mylib;
//    lb->run();
//    delete lb;
    //观察者模式
//    CSliptMan sp;
//    sp.runSliptFile(10);
    //装饰着模式
//    fileStream * f = new fileStream();
//    f->Read(100);
//    jiamiFileStream jm(f);
//    jm.Read(100);
//    delete f;
    return 0;
}

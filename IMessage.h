//
// Created by 苑明亮 on 2022/3/17.
//桥接模式
//

#ifndef TEMPLATE_IMESSAGE_H
#define TEMPLATE_IMESSAGE_H
#include "iostream"
using namespace std;


//抽象类
class IMessage_Imp {
public:
    virtual ~IMessage_Imp(){}

public:
    virtual void sendMsg() = 0;
    virtual void playSound() = 0;
};

class IMessage {
public:
    virtual ~IMessage(){}
    IMessage(IMessage_Imp *mp){
        imp = mp;
    }
public:
    virtual void login() = 0;
    virtual void connect() = 0;

public:
    IMessage_Imp * imp;
};


class PC_Message : public IMessage_Imp
{
public:
    virtual void sendMsg(){
        cout<<"PC_Message SendMsg"<<endl;
    }
    virtual void playSound(){
        cout<<"PC_Message PlaySound"<<endl;
    }
};

class Mobile_Message : public IMessage_Imp
{
public:
    virtual void sendMsg(){
        cout<<"Mobile_Message SendMsg"<<endl;
    }
    virtual void playSound(){
        cout<<"Mobile_Message PlaySound"<<endl;
    }
};

//业务类
class PC_Message_Line : public IMessage
{
public:
    PC_Message_Line(IMessage_Imp *mp): IMessage(mp){}
public:
    virtual void login(){
        cout<<"Message_Line  login"<<endl;
        imp->playSound();
    }
    virtual void connect(){
        cout<<"Message_Line  connect"<<endl;
        imp->sendMsg();
    }
};

class PC_Message_Perfect : public IMessage
{
public:
    PC_Message_Perfect(IMessage_Imp *mp): IMessage(mp){}
public:
    virtual void login(){
        cout<<"PC_Message_Perfect  login"<<endl;
        imp->playSound();
    }
    virtual void connect(){
        cout<<"PC_Message_Perfect  connect"<<endl;
        imp->sendMsg();
    }
};




#endif //TEMPLATE_IMESSAGE_H

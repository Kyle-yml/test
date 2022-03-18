//
// Created by 苑明亮 on 2022/3/16.
// 装饰着模式
//

#ifndef TEMPLATE_STREAMBASE_H
#define TEMPLATE_STREAMBASE_H

//流基类
class Streambase {
public:
    virtual ~Streambase(){}

public:
    //读取数量
    virtual void Read(int nNum) = 0;
    //到指定位置
    virtual void Seek(int nPos) = 0;
    //写入字节数
    virtual void Write(int nNum) = 0;
};

//中间基类
class DeratorStream : public Streambase
{
public:
    DeratorStream(Streambase * stm):m_stm(stm){}

public:
    Streambase * m_stm;
};

#endif //TEMPLATE_STREAMBASE_H

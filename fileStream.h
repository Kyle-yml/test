//
// Created by 苑明亮 on 2022/3/16.
//

#ifndef TEMPLATE_FILESTREAM_H
#define TEMPLATE_FILESTREAM_H

#include "Streambase.h"
#include "iostream"
using namespace std;

//文件流
class fileStream : public Streambase{
public:
    void Read(int nNum){
        cout<<"Read fileStream"<<endl;
    }
    void Seek(int nPos){
        cout<<"Seek fileStream"<<endl;
    }
    void Write(int nNum){
        cout<<"Write fileStream"<<endl;
    }
};

//内存流
class memoryStream : public Streambase{
public:
    void Read(int nNum){
        cout<<"Read memoryStream"<<endl;
    }
    void Seek(int nPos){
        cout<<"Seek memoryStream"<<endl;
    }
    void Write(int nNum){
        cout<<"Write memoryStream"<<endl;
    }
};

class jiamiFileStream : public DeratorStream
{
public:
    jiamiFileStream(Streambase *stm): DeratorStream(stm){}
    void Read(int nNun){
        cout<<"jiami Read memoryStream"<<endl;
        m_stm->Read(nNun);
    }
    void Seek(int nPos){
        cout<<"jiami Seek memoryStream"<<endl;
        m_stm->Seek(nPos);
    }
    void Write(int nNum){
        cout<<"jiami Write memoryStream"<<endl;
        m_stm->Write(nNum);
    }
};

#endif //TEMPLATE_FILESTREAM_H

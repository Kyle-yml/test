//
// Created by 苑明亮 on 2022/3/16.
//

#ifndef TEMPLATE_CSLITFILE_H
#define TEMPLATE_CSLITFILE_H

#include "unistd.h"
#include "INotice.h"

class CSlitFile {
public:
     CSlitFile(int nCnt):count(nCnt){}

    virtual ~CSlitFile(){}
    //接口对象指针
    INotice * m_iNoticl;
private:
    int count;

public:
    //添加通知者
    void AddNoter(INotice * iNoticl){
        m_iNoticl = iNoticl;
    }
    //分解
    void Slipt()
    {
        for (int i = 0; i < count; ++i) {
            //通知
            m_iNoticl->Notice(i);
            sleep(1);
        }
    }
};


#endif //TEMPLATE_CSLITFILE_H

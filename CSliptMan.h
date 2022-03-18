//
// Created by 苑明亮 on 2022/3/16.
//

#ifndef TEMPLATE_CSLIPTMAN_H
#define TEMPLATE_CSLIPTMAN_H

#include "INotice.h"
#include "CSlitFile.h"
#include "iostream"
using namespace std;

class CSliptMan : public INotice{
public:
    void runSliptFile(int nCnt){
        CSlitFile pSlip(nCnt);

        pSlip.AddNoter(this);

        pSlip.Slipt();
    }

private:
    void Notice(int num){
        cout<<num<<endl;
    }
};


#endif //TEMPLATE_CSLIPTMAN_H

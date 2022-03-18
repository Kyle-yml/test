//
// Created by 苑明亮 on 2022/3/16.
//观察者模式
//

#ifndef TEMPLATE_INOTICE_H
#define TEMPLATE_INOTICE_H

class INotice {
public:
    virtual ~INotice(){}
    virtual void Notice(int ncount) = 0;
};


#endif //TEMPLATE_INOTICE_H

#ifndef ICONTROLLER_H
#define ICONTROLLER_H


#include "filespec.h"


class IController
{
public:
    virtual void TriggerOpenFile(FileSpec file) = 0;
    virtual ~IController() = default;
};


#endif // ICONTROLLER_H

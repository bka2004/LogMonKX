#ifndef IWORKSET_H
#define IWORKSET_H


#include "icontroller.h"


class IWorkset
{
public:
    virtual IController& GetController() = 0;
    virtual ~IWorkset() = default;
};

#endif // IWORKSET_H

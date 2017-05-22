#ifndef WORKSET_H
#define WORKSET_H


#include "iworkset.h"
#include "icontroller.h"
#include "controller.h"



class Workset : public IWorkset
{
public:

    // methods
    Workset();

    virtual IController& GetController() override;

private:

    // data members
    Controller m_controller;
};

#endif // WORKSET_H

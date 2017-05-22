#ifndef CONTROLLER_H
#define CONTROLLER_H


#include "icontroller.h"
#include "iworkset.h"


class Controller : public IController
{
public:
    Controller(IWorkset& workset);

    virtual void TriggerOpenFile(FileSpec file) override;


private:

    // data members
    IWorkset& m_workset;
};

#endif // CONTROLLER_H

#ifndef CONTROLLERMOCK_H
#define CONTROLLERMOCK_H


#include "gmock/gmock.h"
#include "icontroller.h"



class ControllerMock : public IController
{
 public:
  MOCK_METHOD1(TriggerOpenFile, void(FileSpec file));
};
#endif // CONTROLLERMOCK_H

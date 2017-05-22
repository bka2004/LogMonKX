#ifndef COMMANDLINEPROCESSOR_H
#define COMMANDLINEPROCESSOR_H

#include <QStringList>
#include "iworkset.h"

class CommandLineProcessor
{
public:

    // methods
    CommandLineProcessor(IController& controller);
    void Process(const QStringList& arguments);

private:

    // data members
    IController& m_controller;
};

#endif // COMMANDLINEPROCESSOR_H

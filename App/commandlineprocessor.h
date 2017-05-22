#ifndef COMMANDLINEPROCESSOR_H
#define COMMANDLINEPROCESSOR_H

#include <QStringList>
#include "iworkset.h"

class CommandLineProcessor
{
public:

    // methods
    CommandLineProcessor(IWorkset& workset);
    void Process(const QStringList& arguments);

private:

    // data members
    IWorkset& m_workset;
};

#endif // COMMANDLINEPROCESSOR_H

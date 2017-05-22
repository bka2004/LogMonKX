#include "commandlineprocessor.h"
#include <QCommandLineParser>
#include "filespec.h"


CommandLineProcessor::CommandLineProcessor(IWorkset& workset)
    : m_workset(workset)
{
}

void CommandLineProcessor::Process(const QStringList& arguments)
{
    QCommandLineParser qtParser;
    qtParser.process(arguments);

    for (auto curFileName : qtParser.positionalArguments())
        m_workset.GetController().TriggerOpenFile(FileSpec(curFileName));
}

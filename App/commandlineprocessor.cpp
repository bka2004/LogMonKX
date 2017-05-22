#include "commandlineprocessor.h"
#include <QCommandLineParser>
#include "filespec.h"


CommandLineProcessor::CommandLineProcessor(IController &controller)
    : m_controller(controller)
{
}

void CommandLineProcessor::Process(const QStringList& arguments)
{
    QCommandLineParser qtParser;
    qtParser.process(arguments);

    for (auto curFileName : qtParser.positionalArguments())
        m_controller.TriggerOpenFile(FileSpec(curFileName));
}

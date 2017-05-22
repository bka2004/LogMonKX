#include <QtTest>
#include "icontroller.h"
#include "commandlineprocessor.h"

class CommandLineProcessorTest : public QObject
{
    Q_OBJECT

public:
    CommandLineProcessorTest();

private Q_SLOTS:
    void passing_no_arguments_does_not_trigger_controller();
    void passing_one_argument_triggers_controller_once();
};

class ControllerMock : public IController
{
public:
    virtual void TriggerOpenFile(FileSpec file) override
    {
        ++m_triggerCount;
    }

    int GetTriggerCount()
    {
        return m_triggerCount;
    }

private:
    int m_triggerCount = 0;
};

CommandLineProcessorTest::CommandLineProcessorTest()
{
}

void CommandLineProcessorTest::passing_no_arguments_does_not_trigger_controller()
{
    // arrange
    ControllerMock controllerMock;
    CommandLineProcessor comLineProcessor(controllerMock);

    // act
    comLineProcessor.Process({ "LogMonKX.exe" });

    // assert
    QVERIFY(controllerMock.GetTriggerCount() == 0);
}

void CommandLineProcessorTest::passing_one_argument_triggers_controller_once()
{
    // arrange
    ControllerMock controllerMock;
    CommandLineProcessor comLineProcessor(controllerMock);

    // act
    comLineProcessor.Process({ "LogMonKX.exe someFile.log" });

    // assert
    QVERIFY(controllerMock.GetTriggerCount() == 1);
}


QTEST_APPLESS_MAIN(CommandLineProcessorTest)

#include "tst_commandlineprocessortest.moc"

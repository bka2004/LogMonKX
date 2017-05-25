#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

#include "controllermock.h"
#include "commandlineprocessor.h"

using namespace testing;


class CommandLineProcessorTests : public Test
{
public:

protected:
    ControllerMock m_controllerMock;
};


TEST_F(CommandLineProcessorTests, passing_no_cli_paramters_does_not_trigger_controller)
{
    QString executableName = "LogMonKX.exe";

    // arrange
    EXPECT_CALL(m_controllerMock, TriggerOpenFile(_)).Times(0);

    CommandLineProcessor comLineProcessor(m_controllerMock);

    // act
    comLineProcessor.Process({ executableName });
}


TEST_F(CommandLineProcessorTests, passing_one_filename_does_trigger_controller_once)
{
    QString executableName = "LogMonKX.exe";
    QString firstLogfileName = "myLogfile.txt";

    // arrange
    EXPECT_CALL(m_controllerMock, TriggerOpenFile(FileSpec(firstLogfileName))).Times(1);

    CommandLineProcessor comLineProcessor(m_controllerMock);

    // act
    comLineProcessor.Process({ executableName, firstLogfileName });
}


TEST_F(CommandLineProcessorTests, passing_two_filenames_does_trigger_controller_twice)
{
    QString executableName = "LogMonKX.exe";
    QString firstLogfileName = "myLogfile.txt";
    QString secondLogfileName = "something.log";

    // arrange
    EXPECT_CALL(m_controllerMock, TriggerOpenFile(FileSpec(firstLogfileName))).Times(1);
    EXPECT_CALL(m_controllerMock, TriggerOpenFile(FileSpec(secondLogfileName))).Times(1);

    CommandLineProcessor comLineProcessor(m_controllerMock);

    // act
    comLineProcessor.Process({ executableName, firstLogfileName, secondLogfileName });
}

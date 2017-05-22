#include <QString>
#include <QtTest>

class CommandLineProcessorTest : public QObject
{
    Q_OBJECT

public:
    CommandLineProcessorTest();

private Q_SLOTS:
    void testCase1();
};

CommandLineProcessorTest::CommandLineProcessorTest()
{
}

void CommandLineProcessorTest::testCase1()
{
    QVERIFY2(true, "Failure");
}

QTEST_APPLESS_MAIN(CommandLineProcessorTest)

#include "tst_commandlineprocessortest.moc"

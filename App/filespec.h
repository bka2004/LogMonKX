#ifndef FILESPEC_H
#define FILESPEC_H


#include <QString>


class FileSpec
{
public:

    // methods
    FileSpec(const QString& fileName);

private:

    // data members
    QString m_fileName;
};

#endif // FILESPEC_H

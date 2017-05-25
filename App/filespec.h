#ifndef FILESPEC_H
#define FILESPEC_H


#include <QString>


class FileSpec
{
public:

    // methods
    FileSpec(const QString& fileName);
    bool operator==(const FileSpec& other) const;

private:

    // data members
    QString m_fileName;
};

#endif // FILESPEC_H

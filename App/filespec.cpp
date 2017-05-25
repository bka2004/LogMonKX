#include "filespec.h"

FileSpec::FileSpec(const QString& fileName)
    : m_fileName(fileName)
{

}


bool FileSpec::operator==(const FileSpec& other) const
{
    return m_fileName == other.m_fileName;
}

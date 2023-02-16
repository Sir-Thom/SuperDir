#pragma once
#include "IFileInfo.h"
class FileInfo_Base :IFileInfo
{
	FileInfo_Base();
	~FileInfo_Base();
public:
	virtual void Init(const char* aFolder, const char* aFile);
	char mFolder[512];
	char mFile[256];

private:
};
FileInfo_Base::FileInfo_Base()
{
}

FileInfo_Base::~FileInfo_Base()
{
}

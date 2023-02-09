#pragma once
class FileInfo_Base
{
	char mFolder[512];
	char mFile[256];
	virtual void Init(const char* aFolder, const char* aFile);
public:
	FileInfo_Base();
	~FileInfo_Base();

private:
};

FileInfo_Base::FileInfo_Base()
{
}

FileInfo_Base::~FileInfo_Base()
{
}
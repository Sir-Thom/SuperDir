#pragma once
#include"FileInfo_Base.h"
class FileInfo_Text :FileInfo_Base
{
public:
	virtual void RetrieveInformation();
	FileInfo_Text();
	~FileInfo_Text();
};

/*FileInfo_Text::FileInfo_Text()
{
}

FileInfo_Text::~FileInfo_Text()
{
}*/
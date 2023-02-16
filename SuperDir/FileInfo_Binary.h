#include "IFileInfo.h"
#include <fstream>
#include "FileInfo_Base.h"
class FileInfo_Binary :FileInfo_Base
{
public:
	FileInfo_Binary(const char* aFolder, const char* aFileName);
	virtual ~FileInfo_Binary();

	virtual void RetrieveInformation();
	virtual void PrintInformation();
};

#include "FileInfo_Text.h"
#include <fstream>
#include <iostream>
int FileInfo_Text::RetrieveInformation()
{
	std::ifstream file(mFolderPath + "\\" + mFileName);
	if (!file.is_open())
	{
		return -1;
	}

	int lineCount = 0;
	std::string line;
	while (std::getline(file, line))
	{
		lineCount++;
	}

	file.close();
	return lineCount;
}
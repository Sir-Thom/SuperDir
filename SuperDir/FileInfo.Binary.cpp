#include "FileInfo_Binary.h"

#include <iostream>
void FileInfo_Binary::RetrieveInformation()
{
	std::ifstream file(m_Folder + std::string("\\") + m_FileName, std::ios::binary | std::ios::ate);
	if (file.is_open())
	{
		m_Size = (unsigned int)file.tellg();
		file.close();
	}
}

void FileInfo_Binary::PrintInformation()
{
	printf("Binary file %s\\%s has size %u bytes\n", m_Folder, m_FileName, m_Size);
}
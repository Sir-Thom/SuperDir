#include <windows.h>
#include "IFileInfo.h"
#include "FileInfo_Binary.h"
#include "FileInfo_Text.h"
#include <stdio.h>
#include <fileapi.h>
#include <fstream>

IFileInfo** FindFiles(const char* aFolder)
{
	IFileInfo** files = new IFileInfo * [100];
	for (int i = 0; i < 100; i++)
	{
		files[i] = NULL;
	}

	/*HANDLE hFind;
	WIN32_FIND_DATAA findData;

	char searchPath[MAX_PATH];
	sprintf_s(searchPath, "%s\\*.*", aFolder);

	hFind = FindFirstFileA(searchPath, &findData);

	if (hFind != INVALID_HANDLE_VALUE)
	{
		int i = 0;

		do
		{
			if ((findData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) == 0)
			{
				char fileExtension[10];
				char* lastDot = strrchr(findData.cFileName, '.');

				if (lastDot != NULL)
				{
					strcpy_s(fileExtension, lastDot + 1);

					if (_stricmp(fileExtension, "txt") == 0)
					{
						//files[i] = new FileInfo_Text(aFolder, findData.cFileName);
					}
					else
					{
						//files[i] = new FileInfo_Binary(aFolder, findData.cFileName);
					}

					i++;
				}
			}
		} while (FindNextFileA(hFind, &findData) && i < 100);

		FindClose(hFind);
	}*/

	return files;
}

void RetrieveInformation(IFileInfo** aFiles);
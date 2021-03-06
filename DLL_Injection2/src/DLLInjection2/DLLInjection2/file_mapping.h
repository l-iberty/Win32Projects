﻿#ifndef FILE_MAPPING_H
#define FILE_MAPPING_H

#include <Windows.h>

class FileMapping
{
public:
	FileMapping(PCWSTR pszFileName);
	~FileMapping();
	PVOID GetFileMappingBase();
	BOOL Flush();
private:
	HANDLE m_hFile;
	HANDLE m_hFileMapping;
	PVOID m_pFileMappingBase;
};

#endif /* FILE_MAPPING_H */

#ifndef __METHODS__
#define __METHODS__

#pragma once
#include <cstdio>
#include <assert.h>
#include "Defines.h"

//Writes immediately to file, appends to end
void GWriteLog(char* filename, char* toWrite);
void GWriteBuffer(char* buffer, U32 bufferLength, FILE* pFile);
void GReadBuffer(char* buffer, U32 fileLength, FILE* pFile);
U32 GFileSize(FILE* pFile);
U32 GStringLength(char* s);
int FindChar(char c,const char* inString);

template <class T> void ReadSingleObject(FILE* pFile,T& t)
{
	fread(&t,sizeof(T), 1,pFile);
}

template <class T> void WriteSingleObject(FILE* pFile,T& t)
{
	fwrite(&t,sizeof(T), 1,pFile);
}

#endif //__METHODS__
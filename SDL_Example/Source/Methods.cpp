#include "Methods.h"

U32 GStringLength(const char* s)
{
	U32 result = 0;
	while(*s++)
		result++;
	return result;
}

void GWriteLog(char* filename, char* toWrite)
{
	FILE* pfile;
	pfile = fopen(filename,"w");	
	fputs(toWrite,pfile);
	fclose(pfile);
}

void  GWriteBuffer(char* buffer, U32 bufferLength, FILE* pFile)
{
	fwrite((void*)buffer,bufferLength,1,pFile);
}
void GReadBuffer(char* buffer, U32 fileLength, FILE* pFile)
{
	fread((void*)buffer,fileLength,1,pFile);
}
U32 GFileSize(FILE* pFile)
{
	fseek(pFile, 0L, SEEK_END);
	U32 size = ftell(pFile);
	
	//Rewind
	fseek(pFile, 0L, SEEK_SET);
	return size;
}

int FindChar(char c,const char* inString)
{
	int length = GStringLength(inString);
	for(int i=0; i<length; i++)
	{
		if(inString[i] == c)
			return i;
	}
	return -1;
}
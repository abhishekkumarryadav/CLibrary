/*	THIS PROGRAM WILL CREATE FOLDERS READING THEIR DISCRIPTIONS FROM A TEXT FILE 
*	
*	Author		:	Abhishek Kumar Yadav
*	Created On	:	16/04/13 (12:55)
*/
#include <stdio.h>

int createFolder(const char *fileName);				/*
														file shouls ed with *
													*/

int main(main)
{
	char fileName[20];
	printf("Enter the File Name to be processed (WITH FILE EXTENTION).\n");
	gets(fileName);
    createFolder(fileName);
	return 0;
}

int createFolder(const char *fileName)
{
	FILE *fp;
	fp = fopen(fileName,"r");
	while(1)
	{
		int i;
        char tempString[100];
		for(i = 0; i <= 100; i++)
			tempString[i] = '\0';
		char ch = '\0';
		for(i = 0; ch != '\n'; i++)
		{
			ch = getc(fp);
			if(ch =='\t')
			      ch=' ';
			tempString[i] = ch;	
            if(ch =='*')   
                  exit(0);  
		}
		tempString[--i] = '\0';
		mkdir(tempString);
	}
	
	fclose(fp);
	return 0;
}

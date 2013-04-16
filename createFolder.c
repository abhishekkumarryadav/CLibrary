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
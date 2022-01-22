#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fptr1, *fptr2;
	char ch;

	printf("\n\n Copy a file in another name :\n");
	printf("----------------------------------\n");

	//printf(" Input the source file name : ");
	//scanf("%s",fname1);

	fptr1=fopen("C:\\Users\\user\\Desktop\\sahilnew.txt", "r");
	if(fptr1==NULL)
	{
		printf(" File does not found or error in opening.!!");
		exit(1);
	}
//	printf(" Input the new file name : ");
//	scanf("%s",fname2);
	fptr2=fopen("C:\\Users\\user\\Desktop\\sahil.txt", "w");
	if(fptr2==NULL)
	{
		printf(" File does not found or error in opening.!!");
		fclose(fptr1);
		exit(2);
	}
	while(1)
	{
		ch=fgetc(fptr1);
		if(ch==EOF)
		{
			break;
		}
		else
		{
			fputc(ch, fptr2);
		}
	}
	printf(" The file is  copied successfully. \n\n");
	fclose(fptr1);
	fclose(fptr2);


	return 0;
}

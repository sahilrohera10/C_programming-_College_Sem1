#include <stdio.h>
#include <stdlib.h>

int main()
{
	char  ch;
	FILE *fpts, *fptt;

	printf("\n\n Encrypt a text file :\n");
	printf("--------------------------\n");

//	printf(" Input the name of file to encrypt : ");
//	scanf("%s",fname);

	fpts=fopen("C:\\Users\\user\\Desktop\\sahil.txt", "r");
	if(fpts==NULL)
	{
		printf(" File does not exists or error in opening..!!");
		exit(1);
	}
	fptt=fopen("C:\\Users\\user\\Desktop\\temp.txt", "w");
	if(fptt==NULL)
	{
		printf(" Error in creation of file temp.txt ..!!");
		fclose(fpts);
		exit(2);
	}
	while(1)
	{
		ch=fgetc(fpts);
		if(ch==EOF)
		{
			break;
		}
		else
		{
			ch=ch+100;
			fputc(ch, fptt);
		}
	}
	fclose(fpts);
	fclose(fptt);
	fpts=fopen("C:\\Users\\user\\Desktop\\sahil.txt", "w");
	if(fpts==NULL)
	{
		printf(" File does not exists or error in opening..!!");
		exit(3);
	}
	fptt=fopen("C:\\Users\\user\\Desktop\\temp.txt", "r");
	if(fptt==NULL)
	{
		printf(" File does not exists or error in opening..!!");
		fclose(fpts);
		exit(4);
	}
	while(1)
	{
		ch=fgetc(fptt);
		if(ch==EOF)
		{
			break;
		}
		else
		{
			fputc(ch, fpts);
		}
	}
	printf(" File has successfully encrypted ..!!\n\n");
	fclose(fpts);
	fclose(fptt);

	return 0;
}

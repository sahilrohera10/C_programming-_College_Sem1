#include <stdio.h>
#include <stdlib.h>

int main()
{
	char ch;
	FILE *fpts, *fptt;

	printf("\n\n Decrypt a text file :\n");
	printf("--------------------------\n");

//	printf(" Input the name of file to decrypt : ");
//	scanf("%s",fname);

	fpts=fopen("C:\\Users\\user\\Desktop\\sahil.txt", "w");
	if(fpts==NULL)
	{
		printf(" File does not exists or error in opening..!!");
		exit(7);
	}
	fptt=fopen("C:\\Users\\user\\Desktop\\temp.txt", "r");
	if(fptt==NULL)
	{
		printf(" File does not exists or error in opening..!!");
		fclose(fpts);
		exit(9);
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
			ch=ch-100;
			fputc(ch, fpts);
		}
	}
	printf(" The file has been decrypted successfully..!!\n\n");
	fclose(fpts);
	fclose(fptt);

	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fold1, *fold2, *fnew;
	char ch;

	printf("\n\n Merge two files and write it in a new file :\n");
	printf("-------------------------------------------------\n");

//	printf(" Input the 1st file name : ");
	//scanf("%s",fname1);
//	printf(" Input the 2nd file name : ");
//	scanf("%s",fname2);
//	printf(" Input the new file name where to merge the above two files : ");
//	scanf("%s",fname3);
	fold1=fopen("C:\\Users\\user\\Desktop\\sahilnew.txt", "r");
	fold2=fopen("C:\\Users\\user\\Desktop\\sahilNew1.txt", "r");
	if(fold1==NULL || fold2==NULL)
	{
//		perror("Error Message ");
		printf(" File does not exist or error in opening...!!\n");
		exit(EXIT_FAILURE);
	}
	fnew=fopen("C:\\Users\\user\\Desktop\\sahilRohera.txt", "w");
	if(fnew==NULL)
	{
//		perror("Error Message ");
		printf(" File does not exist or error in opening...!!\n");
		exit(EXIT_FAILURE);
	}
	while((ch=fgetc(fold1))!=EOF)
	{
		fputc(ch, fnew);
	}
	while((ch=fgetc(fold2))!=EOF)
	{
		fputc(ch, fnew);
	}
	printf(" The two files merged successfully..!!\n\n");
	fclose(fold1);
	fclose(fold2);
	fclose(fnew);

	return 0;
}

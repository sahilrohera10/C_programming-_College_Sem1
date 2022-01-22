#include <stdio.h>

int main ()
{
  FILE * fptr;
  int i,n;
  char str[100];
  char fname[20];
  char str1;

	printf("\n\n Append multiple lines at the end of a text file :\n");
	printf("------------------------------------------------------\n");

    fptr = fopen("students.txt", "a");
    printf(" Input the number of lines to be written : ");
    scanf("%d", &n);
    printf(" The lines to write are : \n");
    for(i = 0; i < n+1;i++)
    {
    fgets(str, sizeof str, stdin);
    fputs(str, fptr);
  }
  fclose (fptr);

  return 0;
}

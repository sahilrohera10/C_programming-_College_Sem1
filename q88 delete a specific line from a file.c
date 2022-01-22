#include <stdio.h>
#include <string.h>

#define MAX 256

  int main()
  {
        int lno, ctr = 0;
        char ch;
        FILE *fptr1, *fptr2;
		char fname[MAX];
        char str[MAX];
		printf("\n\n Delete a specific line from a file :\n");
		printf("-----------------------------------------\n");

        fptr1 = fopen("students.txt", "r");
        if (!fptr1)
		{
                printf(" File not found or unable to open the input file!!\n");
                return 0;
        }
        fptr2 = fopen("replica", "w"); // open the temporary file in write mode
        if (!fptr2)
		{
                printf("Unable to open a replica file to write!!\n");
                fclose(fptr1);
                return 0;
        }
        printf(" Input the line you want to remove : ");
        scanf("%d", &lno);
	//	lno++;
        // copy all contents to the temporary file except the specific line
        while (!feof(fptr1))
        {
            strcpy(str, "\0");
            fgets(str, MAX, fptr1);
            if (!feof(fptr1))
            {
                ctr++;
                /* skip the line at given line number */
                if (ctr != lno)
                {
                    fprintf(fptr2, "%s", str);
                }
            }
        }
        fclose(fptr1);
        fclose(fptr2);
        remove("students.txt");  		// remove the original file
        rename("replica.txt", "students.txt"); 	// rename the temporary file to original name

        return 0;

  }

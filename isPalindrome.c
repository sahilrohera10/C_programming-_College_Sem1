#include <stdio.h>
#include <string.h>
int main() {

   char str[1000];
    scanf("%s" ,str);
    int n= strlen(str);

    int i=0;
    int j=n-1;
   while(i<j){
       if(str[i] != str[j]){
           printf("it is not a palindrome");
           return 0;
       }

       i++;
       j--;
   }
  printf("it is a palindrome");

    return 0;
}

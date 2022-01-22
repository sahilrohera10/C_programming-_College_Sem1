#include <stdio.h>
#include <string.h>

int isPalindrome ( char str[1000] , int n )
{
        int i=0;
        int j=n-1;
    while(i<j){
      if(str[i] != str [j])
      {
          if(str[i] != str[j] + 32)
          {
              if(str[i] + 32 !=str[j])
              {
                  return 1;
              }
              i++;
              j--;
          }
          i++;
          j--;
      }
      i++;
      j--;
   }

   return 2;
}



int main() {

   char str[1000];
    scanf("%s" ,str);
    int n= strlen(str);

printf("%d" , isPalindrome(str , n));

    return 0;
}


#include<stdio.h>
#include <string.h>

int findStringCode(char str[1000] )
{
    char arr [27] = {' ' , 'a' , 'b' , 'c' , 'd' , 'e' , 'f' ,'g' ,'h' , 'i' ,
 'j' , 'k' , 'l' , 'm' , 'n' , 'o' , 'p','q' , 'r' , 's' , 't' ,
  'u' , 'v' , 'w' , 'x' , 'y' , 'z' } ;

    int code = 0;
    int j;
    int p;


    int i = 0;
    int k = strlen(str) -1 ;

    while(i<=k)

    {


        for( j=0;j<28;j++)
        {
            if(str[i] == arr [j])
            {
                break;
            }
        }

        for( p=0;p<28;p++)
        {
            if(str[k] == arr [p])
            {
                break;
            }
        }
       if( j == p )
       {
           code = code + j ;
       }
       else{
        code = code + (j-p) ;
       }


        i++;
        k--;

    }

    return code;


}






int main (){

char str1[100];
char str2[100];
char str3[100];

scanf("%s" , str1);
scanf("%s" , str2);
scanf("%s" , str3);

int code1 = findStringCode(str1);
int code2 = findStringCode(str2);
int code3 = findStringCode(str3);

printf("%d%d%d" , code1 , code2 , code3);







return 0;
}

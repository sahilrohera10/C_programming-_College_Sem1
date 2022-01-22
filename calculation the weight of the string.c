#include<stdio.h>
#include<string.h>

int findWeight( char str [1000] , int n )
{

char arr [27] = {' ' , 'a' , 'b' , 'c' , 'd' , 'e' , 'f' ,'g' ,'h' , 'i' ,
 'j' , 'k' , 'l' , 'm' , 'n' , 'o' , 'p','q' , 'r' , 's' , 't' ,
  'u' , 'v' , 'w' , 'x' , 'y' , 'z' } ;

  char vowels [] = {'a' , 'e' , 'i' , 'o' , 'u' };

    int sum =0;

    if( n == 0)
    {
       int  k =0;
       int j ;
       int sumup = 0;
       while(k<strlen(str))
       {

           for( j=0;j<5 ;j++)
            {
            if(str[k] == vowels[j])
            {
                break;
            }
           }



           if(j == 5)
           {
                 int p ;
           for( p =0; p<28 ;p++ )
           {
                   if( str[k] == arr[p] )
                   {
                     break;
                   }

           }

           sumup = sumup + p;
           k++;

           }

           else{
            k++;
           }

       }



       return sumup;


    }






    else
    {
        int i = 0;
        while (i < strlen(str))
        {
           int j ;
           for( j =0; j<28 ;j++ )
           {
                   if( str[i] == arr[j] )
                   {
                     break;
                   }

           }

           sum = sum + j;
           i++;

        }

        return sum ;
    }


}



int main(){


char str [1000];
int n ;
scanf("%s %d" ,str , &n);

printf("%d" , findWeight(str , n));


return 0;
}

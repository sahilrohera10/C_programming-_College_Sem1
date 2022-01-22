#include <stdio.h>
int main() {

 int n;
 scanf("%d" , &n);

 char hexaDecimal[1000];
 int i=0;

 while(n != 0){
     int temp =n%16;

     if(temp<10){
        hexaDecimal[i] = temp +48 ;
        i++;
     }
     else{
         hexaDecimal[i] = temp + 55 ;
         i++;
     }

     n = n/16 ;
 }

i =i-1;
int j=0;
while(j<i){
    int temp =hexaDecimal[i];
    hexaDecimal[i] = hexaDecimal[j];
    hexaDecimal[j] = temp ;

    i--;
    j++;
}

printf("its hexDecimal is %s" , hexaDecimal);

    return 0;
}

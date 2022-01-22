#include <stdio.h>
int main() {

   int n1 , n2 , n3;

   scanf("%d" , &n1);
   scanf("%d" , &n2);
   scanf("%d" , &n3);

   int greatest = n1;

   if(n2 >greatest){
       greatest = n2;
   }
    if(n3 >greatest){
       greatest = n3;
   }

printf("the greatest among the three numbers is = %d" , greatest);



    return 0;
}

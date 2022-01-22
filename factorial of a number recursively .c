#include <stdio.h>


int findFactorial(int n){
    //base case
   if(n==0){
       return 1;
   }



    //recursive case

    return n * findFactorial(n-1);
}




int main() {

int n;
scanf("%d" , &n);

int ans = findFactorial(n);

printf("the factorial of %d is %d" , n , ans);


   return 0;
}

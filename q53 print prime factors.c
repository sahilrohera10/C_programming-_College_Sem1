#include <stdio.h>

int checkPrime(int n){

   for(int j=2; j<n ; j++){
       if(n%j == 0){
           return 0;
       }
   }
   return 1;
}


int main() {


int n;
scanf("%d" , &n);

printf("the prime factors of %d is : \n" ,n);

for(int i=2;i<=n/2;i++){
    if(n%i == 0){
        if(checkPrime(i)){
            printf("%d \n" , i);
        }
    }
}




    return 0;
}

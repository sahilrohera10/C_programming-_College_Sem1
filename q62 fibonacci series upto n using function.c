#include <stdio.h>

void generateFibonacci(int n){

   if(n==0){
       printf("0");
       return;
   }
   if(n==1){
       printf("0 1");
       return;
   }
printf("0 1 ");

    int f=0;
    int s=1;
    int t;

   for(int i=2;i<n;i++){
       t=f+s;
       printf("%d ", t);
       f = s;
       s = t;
}

}


int main() {

int n;
scanf("%d" ,&n);



generateFibonacci(n);

    return 0;
}

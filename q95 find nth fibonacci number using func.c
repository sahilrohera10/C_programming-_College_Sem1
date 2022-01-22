#include <stdio.h>

void nthFibonacci(int n) {

int first = 0 , second = 1;

if( n == 1 ){
    printf("the 1th fibonacci number is 0");
    return ;
}
else if ( n == 2){
    printf("the 2nd fibonacci number is 1");
    return ;
}

int next = 0 ;
for(int i=3 ; i<=n;i++){
    next = first + second ;
    first = second;
    second = next ;
}
printf("the %dth fibonacci number is %d" , n , next);

}

int main() {

int n;
scanf("%d" , &n);

nthFibonacci(n);

    return 0;
}

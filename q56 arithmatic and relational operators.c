#include <stdio.h>
int main() {


int n1,n2;
scanf("%d" , &n1);
scanf("%d" , &n2);

printf("the sum is %d \n" , n1+n2);
printf("the difference is %d \n" , n1-n2);
printf("the product is %d \n" , n1*n2);
printf("the quotient is %d \n" , n1/n2);
printf("the remender is %d \n" , n1%n2);

if(n1==n2){
    printf("the numbers are equal \n");
}
else{
    printf("the numbers are not equal \n");
}

if(n1>n2){
    printf("%d is greater than %d \n" , n1 , n2);
}
else{
    printf("%d is greater than %d \n" , n2 , n1);
}


return 0;
}

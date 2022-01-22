#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {

printf("enter any number but it should be less than 12 \n");

int m;
scanf("%d", &m);

srand(time(0));

int n , p;

for(int i=0;i<1;i++) {
     n = (rand() % (6-1) +1) +1 ;

}
for(int i=0;i<1;i++) {
     p = (rand() % (6-1) +1) +1 ;

}

printf("dice 1 : %d \n" , n);
printf("dice 2 : %d \n" , p);
printf("And the sum is  %d \n" , n+p);


if( n+p == m){
    printf("hurray !! , you wins");
}
else{
    printf("you lost , better luck next time");
}


   return 0;
}

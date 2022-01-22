#include <stdio.h>
int main() {
    // swap the two numbers without using any variable

int x , y;
scanf("%d" , &x);
scanf("%d" , &y);

printf("before swap x is %d and  y is %d \n" , x ,y);


x=x+y;
y=x-y;
x=x-y;

printf("after swap x is %d and y is %d" , x ,y);



   return 0;
}

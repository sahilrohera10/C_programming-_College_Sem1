#include <stdio.h>
int main() {


    int basic;
    scanf("%d" , &basic);

    int hra = (30*basic)/100;
    int ta = (10*basic)/100;

    printf("the gross salary is %d" , basic + hra + ta) ;

   return 0;
}

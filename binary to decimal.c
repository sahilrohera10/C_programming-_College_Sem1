#include <stdio.h>
int main() {

    int bNum , dNum , base=1 ,rem;

    scanf("%d" , &bNum);

   int num =bNum;

   while(num>0){

    rem = num%10;
    dNum = dNum + rem*base;
    base = base*2;
    num = num/10;
   }

   printf("the decimal of %d (binary number) is %d", bNum , dNum);


    return 0;
}

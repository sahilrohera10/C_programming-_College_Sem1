#include <stdio.h>
int main() {

int n=1;

printf("%d \n" , n++);   // print 1 --> n=1+1 =2

printf("%d \n" ,n++);    // print 2 --> n=2+1 =3

printf("%d \n" ,n);      // print 3 --> n=3

printf("%d \n" ,++n);    //n=3+1 = 4 --> print 4

    return 0;
}

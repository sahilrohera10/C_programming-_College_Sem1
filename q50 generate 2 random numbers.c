#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {

printf("the two random numbers are : \n");

srand(time(0));

for(int i=0;i<2;i++) {
    int n = (rand() % (100-1) +1) +1 ;
    printf("%d \n", n);

}

    return 0;
}

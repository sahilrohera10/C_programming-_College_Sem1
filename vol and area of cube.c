#include <stdio.h>
int main() {
    int s;
    scanf("%d" , &s);

    int vol = s*s*s ;
    int area = 6 * s*s ;

    printf("The volume is %d and surface area is %d" , vol , area);

   return 0;
}

#include <stdio.h>
int main() {
    int n ;
    float sum =0;
    scanf("%d" , &n);

    for(int i=2;i<=n+1;i++){
      sum += ((double)(i-1)*(i-1))/(i*i) ;
    }

printf("the sum of series is %f" , sum);

    return 0;
}

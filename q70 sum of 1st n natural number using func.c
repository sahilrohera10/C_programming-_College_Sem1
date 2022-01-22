#include <stdio.h>

void findSum(int n){
    int sum =0;

    for(int i=1;i<=n;i++){
       sum = sum + i;
    }
printf("the sum of first %d natural numbers is %d" ,n, sum);

}


int main() {

int n;
scanf("%d" , &n);

findSum(n);

    return 0;
}

#include <stdio.h>
int main() {

int n;
scanf("%d" , &n);

int binary[10000];

int i=0;

while(n!=0){
    binary[i] = n%2;
    i++;
    n = n/2 ;
}

for(int j=i-1;j>=0;j--){
    printf("%d" , binary[j]);
}

    return 0;
}

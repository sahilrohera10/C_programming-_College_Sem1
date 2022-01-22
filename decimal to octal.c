#include <stdio.h>
int main() {

int n;
scanf("%d" , &n);

int octa[10000];

int i=0;

while(n!=0){
    octa[i] = n%8;
    i++;
    n = n/8 ;
}

for(int j=i-1;j>=0;j--){
    printf("%d" , octa[j]);
}

    return 0;
}

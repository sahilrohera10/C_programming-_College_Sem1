#include <stdio.h>
int main() {

int arr[10];

for(int i=0;i<10;i++){
    scanf("%d" , &arr[i]);
}

int sum =0;
int j;

for(int i=0;i<10;i++){
    for( j=2;j<arr[i] ; j++){
        if(arr[i]%j == 0){
            break;
        }
    }
    if(j >= arr[i]){
        sum = sum +arr[i] ;

    }
}

printf("the sum of all prime numbers in this array is %d", sum);

    return 0;
}

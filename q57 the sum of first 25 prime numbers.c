#include <stdio.h>

int main() {

int count =0;
int sum = 0;
int j;

for(int i=2; count<25 ; i++){
    for( j=2 ; j<i ; j++){
        if(i%j == 0){
          break;
        }

    }
    if( j >= i){
        sum = sum + i;
        count ++;
    }

}

printf("the sum of first 25 prime numbers is %d" , sum);



    return 0;
}

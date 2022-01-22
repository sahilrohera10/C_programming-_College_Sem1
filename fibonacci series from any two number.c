#include <stdio.h>
int main() {

int first ,second , sum ,   terms , count =1;

scanf("%d" ,&terms);
scanf("%d" ,&first);
scanf("%d" ,&second);

printf("Fibonacci series is : %d %d " ,first , second);

while(count <= terms-2){
    sum =first + second ;
    printf("%d " ,sum);
    first = second ;
    second = sum ;
    count++;
}
    return 0;
}

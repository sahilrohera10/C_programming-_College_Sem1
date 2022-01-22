#include <stdio.h>

int min(int n1 , int n2 , int n3){
    int small = n1;
    if(n2<small){
        small = n2 ;
    }
    else if (n3< small ){
        small = n3;
    }

    return small ;
}

int max(int n1 , int n2, int n3){
    int large = n1 ;
    if(n2>large){
        large = n2;
    }
    else if (n3>large){
        large = n3;
    }
  return large;
}

int main() {

int input1 , input2 , input3 ;
scanf("%d %d %d" , &input1 , &input2 , &input3 );

//units place

int unit1 = input1 % 10;
input1 = input1 / 10;

int unit2 = input2 % 10;
input2 = input2 / 10;

int unit3 = input3 % 10;
input3 = input3 / 10;

int unitPlace = min(unit1 , unit2 , unit3);
// printf("unit place is %d", unitPlace);


//tens place

int ten1 = input1 % 10;
input1 = input1 / 10;

int ten2 = input2 % 10;
input2 = input2 / 10;

int ten3 = input3 % 10;
input3 = input3 / 10;

int tensPlace = min (ten1 , ten2 , ten3);

//hundreds place
int hundredPlace = min (input1 , input2 , input3);


//thousands place
int x = max(unit1 , unit2 , unit3);
int y = max(ten1 , ten2 , ten3);
int z = max(input1 , input2 , input3);

int thousandPlace = max(x, y ,z) ;

printf("the pin is %d%d%d%d" ,thousandPlace, hundredPlace, tensPlace, unitPlace);


    return 0;
}

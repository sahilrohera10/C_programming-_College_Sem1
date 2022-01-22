#include <stdio.h>
int main() {

 printf("enter 1st number");
int n1;
scanf("%d" , &n1);

 printf("enter 2nd number");
int n2;
scanf("%d" , &n2);



printf("1.addition \n");
printf("2.subtraction \n");
printf("3.multiplication \n");
printf("4.division \n");
printf("enter your choice : ");
int choice;
scanf("%d" ,&choice );

switch (choice){
    case 1:{
      printf("the sum is %d \n" , n1+n2) ;
       break;}

    case 2:
        {printf("the difference is %d \n" , n1-n2) ;
        break;}

    case 3:
       { printf("the product is %d \n" , n1*n2) ;
        break;}

    case 4:
       { printf("the division is %d \n" , n1/n2) ;
        break;}

    default:
        {printf("invalid operation");}

}

    return 0;
}

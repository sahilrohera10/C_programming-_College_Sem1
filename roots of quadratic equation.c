#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void findRoots(int a, int b ,int c){

    if(a==0){    //means the equation is linear
        printf("invalid");
        return ;
    }

    int d= b*b -4*a*c;
    double sqrRoot = sqrt(abs(d));
    double root1 = (-b + sqrRoot) / (2*a) ;
    double root2 = (-b - sqrRoot) / (2*a) ;

    if(d>0){
        printf("The roots are real and different \n");
        printf("%f\n%f" , root1 , root2) ;

    }

    else if(d==0){
        printf("The roots are real and equal \n");
        printf("%f" , -(double)b/(2*a) ) ;

    }

    else{   //d<0
            printf("The roots are complex \n");
            printf("%f + i%f\n%f -i%f" , -(double)b/(2*a),
            sqrRoot/(2*a) , -(double)b/(2*a) , sqrRoot/(2*a)) ;
    }

}



int main() {

int a , b ,c ;
scanf("%d" ,&a);
scanf("%d" ,&b);
scanf("%d" ,&c);

findRoots(a,b,c);



    return 0;
}

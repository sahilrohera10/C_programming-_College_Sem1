#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>



void toUpperCase(char str1[] , int n1){
    int i=0;
    while(i<n1){
    str1[i] = toupper(str1[i]);
    i++;
}
printf("%s \n" ,str1);

}

void toLowerCase(char str2[] , int n2){
     int i=0;
     while(i<n2){
     str2[i] = tolower(str2[i]);
     i++;
}
printf("%s \n" ,str2);
}

void powAndRoot(int m){
    int a = sqrt(m);
    int b = pow(m ,2);
    printf("the square of %d is %d and sqr root is %d \n" , m ,b ,a);
    }

void floorAndCeil(float k){
    int a = floor(k);
    int b = ceil(k);
    printf("floor value of %f is %d and ceil value is %d\n" , k , a , b);

}
void funcFabs(double x){
    double result = fabs(x);
    printf("|%.2lf| = %.2lf\n" , x , result);
}

int main() {

char str1[100] = "abcd";
char str2[100] = "ABCD";
int m = 25;
float k = 2.4;
double x = -1.5;
int n2 = strlen(str2);
int n1 = strlen(str1);
toUpperCase(str1 , n1);
toLowerCase(str2 , n2);
powAndRoot(m);
floorAndCeil(k);
funcFabs(x);



   return 0;
}

#include <stdio.h>
int main() {

int arr[3][3] ;

for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        scanf("%d" , &arr[i][j]) ;
    }
}


int n;
scanf("%d" , &n);   //the row no.

int greatest = arr[n-1][0];

for(int j=1;j<3 ;j++){
     if(arr[n-1][j] > greatest){
         greatest = arr[n-1][j];
     }
}

printf("the maximum element of row no. %d is %d",n,greatest);



    return 0;
}

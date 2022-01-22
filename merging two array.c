#include <stdio.h>
int main() {

   int n1;
   int n2;
    scanf("%d" ,&n1);
    scanf("%d" ,&n2);
    int arr1[n1+n2];

    for(int i=0;i<n1;i++){
        scanf("%d" , &arr1[i]);
    }



    int arr2[n2];

    for(int i=0;i<n2;i++){
        scanf("%d" , &arr2[i]);
    }

int i = n1;
int j = 0;

while(j<n2){
  arr1[i] = arr2[j];
  i++;
  j++;
}

 for(int i=0;i<n1+n2;i++){
        printf("%d " , arr1[i]);
    }

    return 0;
}

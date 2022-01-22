#include <stdio.h>
#include <limits.h>

int main() {

   int terms;
   scanf("%d" ,&terms);
   int arr[terms];

   for(int i=0;i<terms;i++){
       scanf("%d" , &arr[i]);
   }

    int i=0;
    int j=i+1;
    while(i<terms){
        while(j<terms){
            if(arr[i] == arr[j]){
                arr[j] = INT_MIN;
            }
            j++;
        }
        i++;
    }


 for(int i=0;i<terms;i++){
     if(arr[i] > 0 )
      { printf("%d " , arr[i]);}
   }

   return 0;
}

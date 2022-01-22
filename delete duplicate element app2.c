#include <stdio.h>


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
                int l = j;

                while(l<terms){
                    arr[l] = arr[l+1];
                    terms--;
                    l++;

                }

            }
            j++;
        }
        i++;
    }


 for(int i=0;i<terms;i++){
       printf("%d " , arr[i]);
   }

   return 0;
}

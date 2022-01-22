#include <stdio.h>
int main() {

      int n;
    scanf("%d" ,&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d" , &arr[i]);
    }

int target;
scanf("%d", &target);

int s= 0;
int e =n-1;

while(s<=e){
   int mid = (s+e)/2;

   if(target<arr[mid]){
       e = mid-1;
   }
   else if(target>arr[mid]){
       s= mid+1;
   }

   else{
       printf("target is found at index %d" ,mid);
       return 0;
   }


}


printf("target not found");




    return 0;
}

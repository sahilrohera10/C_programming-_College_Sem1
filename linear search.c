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

int i=0;
while(i<n){
    if(arr[i] == target){
        printf("the target is found at the index %d" , i);
        return 0;
    }
    i++;
}

printf("target not found");

    return 0;
}

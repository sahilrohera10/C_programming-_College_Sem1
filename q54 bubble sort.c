#include <stdio.h>
int main() {

int n;
scanf("%d" , &n);


int arr[n];

for(int i=0;i<n;i++){
    scanf("%d" , &arr[i]);
}


for(int part = 1;part<n;part++){
    for(int i=0;i<n-part;i++){
        if(arr[i]>arr[i+1]){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
}

for(int i=0;i<n;i++){
    printf("%d" , arr[i]);
}

    return 0;
}

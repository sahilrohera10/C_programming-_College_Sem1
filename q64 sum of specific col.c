#include <stdio.h>
int main() {

int n,m;

scanf("%d" , &n);
scanf("%d" , &m);


int arr[n][m];

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        scanf("%d" , &arr[i][j]);
    }
}


int c;
scanf("%d" , &c);

int sum = 0;

for(int i=0;i<n;i++){
    sum = sum + arr[i][c-1];
}


printf("the sum of coloumn %d is %d" , c , sum);


// for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//         printf("%d " , arr[i][j]);
//     }
//     printf("\n");
// }

    return 0;
}

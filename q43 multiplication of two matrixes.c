#include <stdio.h>
int main() {

int m , n;
scanf("%d" ,&m);
scanf("%d" ,&n);

  int A[m][n];

for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        scanf("%d" ,&A[i][j]);
    }
}
  int B[m][n];

for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        scanf("%d" ,&B[i][j]);
    }
}

int ans[m][n];

int i=0;
int j=0;

int k=0;
int l=0;

int p=0;
int q=0;


while(i<m){
    while(j<n){
        int product1 = A[i][j] * B[k][l];
        j++;
        k++;
        int product2 =  A[i][j] * B[k][l];
        ans[p][q] = product1+product2 ;
        q++;
        l++;


    }
}



    return 0;
}

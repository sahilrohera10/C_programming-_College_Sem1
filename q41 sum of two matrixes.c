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

int p = 0;


int i=0;


while(i<m){
    int j=0;
    int q = 0;
    while(j<n){
        int sum = A[i][j] + B[i][j] ;
        ans[p][q] = sum ;
        j++;
        q++;
    }
    i++;
    p++;
}


for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        printf("%d " ,ans[i][j]);
    }
    printf("\n");
}

    return 0;
}

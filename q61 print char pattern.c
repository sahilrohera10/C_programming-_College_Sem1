#include <stdio.h>
int main() {

int n;
scanf("%d" ,&n);
int k;

for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
        printf("  ");
    }

    for( k=1;k<=i;k++ ){
        printf("%c " , (64+k));
    }
    if(i!=1){
        for(int p=1;p<=i-1;p++){
            printf("%c " , (64+k-p-1) );
        }
    }
    printf("\n");
}


    return 0;
}

#include<stdio.h>


int main() {
    int n;

   scanf("%d" , &n);

	int A[n];
    for(int k=0;k<n;k++){
       scanf("%d" , &A[k]);
    }

	for(int i=1; i<n; i++) {

		int key = A[i];

		int j = i-1;
		while(j >= 0 && A[j] > key) {
			A[j+1] = A[j];
			j--;
		}


		A[j+1] = key;
	}

	for(int i=0; i<n; i++) {
		printf("%d " , A[i]);
	}

	return 0;
}

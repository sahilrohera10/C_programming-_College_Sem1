#include <stdio.h>
int main() {



     int n;
     scanf("%d" , &n);
	int A[n];
    for(int k=0;k<n;k++){
        scanf("%d" ,&A[k]);
    }


	for(int i=0; i<n-1; i++) {

		int min_idx = i;
		for(int j=i+1; j<n; j++) {
			if(A[j] < A[min_idx]) {
				min_idx = j;
			}
		}
        int temp = A[i];
        A[i] = A[min_idx];
        A[min_idx] = temp;
		// swap(A[i], A[min_idx]);
	}

	for(int i=0; i<n; i++) {
		printf("%d " , A[i]);
	}



	return 0;


}


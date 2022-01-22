#include <stdio.h>

void findSum(int row ,int coln , int arr[row][coln]){

int sum =0;

   for(int i=0;i<row;i++){
       for(int j=0;j<coln;j++){
          sum =sum + arr[i][j];
      }
   }

printf("the sum of the 2D array is %d" , sum);

}

int main() {

int row ,coln;
scanf("%d" , &row);
scanf("%d" , &coln);


int arr[row][coln];

   for(int i=0;i<row;i++){
      for(int j=0;j<coln;j++){
          scanf("%d" , &arr[i][j]);
      }
  }

findSum( row ,coln ,arr);

    return 0;
}

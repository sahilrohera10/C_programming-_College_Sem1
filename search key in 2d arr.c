#include <stdio.h>
#include <stdbool.h>

bool findKey(int m ,int n ,int arr[m][n] , int key){

  for(int i=0;i<m;i++){
      for(int j=0;j<n;j++){
          if(arr[i][j] == key){
              return true;
          }
      }
  }
  return false;

}

int main() {

int m =3 ,n =5;


int arr[m][n];

   for(int i=0;i<m;i++){
      for(int j=0;j<n;j++){
          scanf("%d" , &arr[i][j]);
      }
  }

int key;
scanf("%d" ,&key);

 if(findKey(m , n , arr ,key)){
     printf("true");
 }
 else{
     printf("false");
 }

    return 0;
}

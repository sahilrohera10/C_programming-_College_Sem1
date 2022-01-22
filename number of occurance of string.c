#include <stdio.h>
#include <string.h>

int main() {

char mainStr[100];
char reqStr[100];

scanf("%s" , mainStr);
scanf("%s" , reqStr);

int count = 0;

int n = strlen(reqStr);

int m = strlen(mainStr);


int i=0;

while(i<m){
    int j=0;
    while(j<n){
        if(mainStr[i] == reqStr[j]){
               count = count+0;
        }
        else{
            break;
        }
        i++;
        j++;

    }
    if(j==n){
        count++;
        i = i+0;
    }
    i=i+1;
}

printf("number of occurance of  %s is: %d", reqStr , count);





// for(int i=0;i<m;i++){
//     for(int j=0;j<n;j++){
//         if(mainStr[j] != reqStr[j]){
//                break;
//         }
//     }
// }


    return 0;
}

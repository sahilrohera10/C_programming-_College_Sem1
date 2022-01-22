#include <stdio.h>
#include <string.h>
int main() {

char str[1000];
scanf("%s" , str);

int n = strlen(str);

char arr[] = {'a' , 'e' , 'i' , 'o', 'u'};

int count =0;

for(int i=0;i<n;i++){
    for(int j=0; j<5; j++){

        if(str[i] == arr[j]){
            count++;
        }
    }

}

printf("the number of vowels present are %d" , count);

    return 0;
}

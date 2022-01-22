#include <stdio.h>
int main() {

  int n;
  scanf("%d", &n);

  int rev = 0;

  while(n>0){
      int m = n%10;
      rev = rev*10 + m;
      n = n/10;
  }

printf("the reversed number is %d", rev);

    return 0;
}

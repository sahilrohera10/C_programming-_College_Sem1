#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// return second word of str in uppercase
char* second_word_uppercase(char* str) {
    int n = strlen(str); // store length of str in n
    int i = 0, j = 0;
    char* temp = (char*)malloc(sizeof(str) + 1); // array to store second word of str
    // skipping first word of str
    while (i < n && str[i] != ' ') {
        ++i;
    }
    // if i == n, then the sentence have no second word
    // we simply return NULL
    if (i == n) {
        return NULL;
    }
    // storing second word of str in temp
    ++i;
    j = 0;
    while (i < n && str[i] != ' ') {
        // if str[i] is lowercase, we first convert it to uppercase
        // and then store it to temp[j]
        if (str[i] >= 'a' && str[i] <= 'z')
            temp[j] = str[i] - 'a' + 'A';
        // if str[i] is already uppercase, set temp[j] to str[i]
        else
            temp[j] = str[i];
        ++i, ++j;
    }
    temp[j] = '\0';
    return temp;
}
int main() {
    char str[100];
    printf("Enter a String: ");
    gets(str);
    printf("Output: %s", second_word_uppercase(str));
}

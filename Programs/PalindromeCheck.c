#include<stdio.h>
#include<string.h>
#include<ctype.h>
void checkPalindrome(char str[]) {
    int len = strlen(str);

    for(int i=0; i<len; i++) {
        str[i] = tolower(str[i]);
    }

    int isPalindrome = 1;
    for(int i=0; i<len/2; i++) {
        if(str[i]!=str[len-i-1]) {
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome) {
        printf("%d", len);
    } else {
        printf("%d", (int)str[0]);
    }
}
int main() {
    char str[1000];
    scanf("%s", str);
    checkPalindrome(str);
    return 0;
}
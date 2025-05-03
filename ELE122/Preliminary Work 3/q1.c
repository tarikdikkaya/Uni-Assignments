#include <stdio.h>
#include <string.h>
#include <ctype.h>
// function prototype
int isPalindrome(char str[]);
int main(){
    // declaring string variable
    char str[30];
    printf("Please enter a string >> ");
    // gets a string from user
    gets(str);
    // function call
    isPalindrome(str);
    return 0;
}
int isPalindrome(char str[]){
    // declaring variables
    int i = 0, j = 0, len;
    // getting the length of the string
    len = strlen(str);
    while (i < len){
        // if current char in string is null
        if (isalnum(str[i]) == 0){
            // slide all of the characters after that caracter to left
            for (j=i; j<len; j++){
                str[j] = str[j+1];
            }
            i--; // just in case if there are more null's
            len--;
        }                               
        i++;
    }
    for (i=0;i<len;i++){
        str[i] = tolower(str[i]);
    }
    // checking if the string is palindrome or not
    for (i=0; i<len; i++){ 
        if (str[i] != str[len-1-i]){
            puts("It is not palindrome :(");
            return 0;
        }
    }
    puts("It is palindrome!");
    return 1;
}

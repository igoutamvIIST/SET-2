/*
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and
removing all non-alphanumeric characters, it reads the same forward and backward.
Alphanumeric characters include letters and numbers.
Given a string s, return true if it is a palindrome, or false otherwise.
Example 1:
Input: s = “A man, a plan, a canal: Panama”
Output: true
Explanation: “amanaplanacanalpanama” is a palindrome.
Example 2:
Input: s = “race a car”;
Output: false
*/

#include <stdio.h>
int main() {
    char str[100]; 
    char filtered[100]; 
    int j = 0; 
    int len;
    int isPalindrome = 1; 
  
    printf("Enter a phrase to check Palindrome:\n");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalnum(str[i])) {
            filtered[j++] = tolower(str[i]);
        }
    }
    filtered[j] = '\0'; 
    len = j;

    for (int i = 0; i < len / 2; i++) {
        if (filtered[i] != filtered[len - 1 - i]) {
            isPalindrome = 0; 
            break;
        }
    }

    if (isPalindrome) {
        printf("Palindrome Phrase.\n");
    } else {
        printf("Not a Palindrome Phrase\n");
    }
    return 0;
}

#include <stdio.h>
int main() {
    char str[100]; 
    char filtered[100]; 
    int j = 0; 
    int len;
    int isPalindrome = 1; 
  
    printf("Enter a phrase to check Palindrome:\n");
    fgets(str, sizeof(str), stdin);

    // Filter the input string
    for (int i = 0; str[i] != '\0'; i++) {
        // Check if the character is alphanumeric
        if (isalnum(str[i])) {
            // Convert to lowercase and store in filtered array
            filtered[j++] = tolower(str[i]);
        }
    }
    filtered[j] = '\0'; // Null-terminate the filtered string

    // Calculate the length of the filtered string
    len = j;

    // Check if the filtered string is a palindrome
    for (int i = 0; i < len / 2; i++) {
        if (filtered[i] != filtered[len - 1 - i]) {
            isPalindrome = 0; // Not a palindrome
            break;
        }
    }

    // Output the result
    if (isPalindrome) {
        printf("The phrase is a palindrome.\n");
    } else {
        printf("The phrase is not a palindrome.\n");
    }

    return 0;
}

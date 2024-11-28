/*
Given a sorted array A (sorted in ascending order), having N integers, find if there exists any
pair of elements (A[i], A[j]) such that their sum is equal to X.
        a)Using Naive Approach
        b)Using Two Pointer Technique
Input: A = [1, 2, 4, 5, 7, 11]
       N = 6
       X = 9
Expected Output: Yes
(Explanation: The pair (2, 7) sums to 9.)
*/

#include <stdio.h>
int main() {
    int A[] = {1, 2, 4, 5, 7, 11}; 
    int N = 6;                     
    int X = 9;                    
    int found = 0;           

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (A[i] + A[j] == X) {
                printf("Yes, pair (%d, %d) sums to %d.\n", A[i], A[j], X);
                found = 1;
                break; 
            }
        }
        if (found) break; 
    }
    if (!found) {
        printf("No pair found that sums to %d.\n", X);
    }

    return 0;
}

/*
Given an array arr[] of size n, return an equilibrium index (if any) or -1 if no equilibrium index
exists. The equilibrium index of an array is an index such that the sum of elements at lower
indexes equals the sum of elements at higher indexes.
Note: Return equilibrium point in 1-based indexing. Return -1 if no such point exists.

Examples:
Input: arr[] = {-7, 1, 5, 2, -4, 3, 0}
Output: 4
Explanation: In 1-based indexing, 4 is an equilibrium index, because:
             arr[1] + arr[2] + arr[3] = arr[5] + arr[6] + arr[7]

Input: arr[] = {1, 2, 3}
Output: -1
Explanation: There is no equilibrium index in the array.
*/

#include <stdio.h>
int main() {
    int arr[] = {-7, 1, 5, 2, -4, 3, 0}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int totalSum = 0; 
    int leftSum = 0; 

    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    int equilibriumIndex = -1; 

    for (int i = 0; i < n; i++) {
        totalSum -= arr[i];
        if (leftSum == totalSum) {
            equilibriumIndex = i + 1; 
            break;
        }
        leftSum += arr[i];
    }

    printf("%d\n", equilibriumIndex);
    return 0;
}

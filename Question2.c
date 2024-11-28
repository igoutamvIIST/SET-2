/*
Given an integer array arr[] of size n, the task is to find the count inversions of the given array.
Two array elements arr[i] and arr[j] form an inversion if arr[i] > arr[j] and i < j.
Input: arr[] = {7, 2, 6, 3}
Output: 4
Explanation: Given array has 4 inversions: (7, 2), (7, 6), (7, 3), (6, 3)
*/

#include <stdio.h>
int main() {
    int arr[] = {7, 2, 6, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i_count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                i_count++;
            }
        }
    }
    printf("Inversion count: %d\n", i_count);
    return 0;
}

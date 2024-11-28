/*
Given an array of integers of size ‘n’, Our aim is to calculate the maximum sum of ‘k’
consecutive elements in the array(Using Sliding Window Technique)

Input : arr[] = {100, 200, 300, 400}, k = 2
Output : 700

Input : arr[] = {1, 4, 2, 10, 23, 3, 1, 0, 20}, k = 4
Output : 39
We get maximum sum by adding subarray {4, 2, 10, 23} of size 4.

Input : arr[] = {2, 3}, k = 3
Output : Invalid
There is no subarray of size 3 as size of whole array is 2.
*/

#include <stdio.h>
int main() {
    int arr[] = {1, 4, 2, 10, 23, 3, 1, 0, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;
    int max_sum = 0;
    int window_sum = 0;

    if (k > n) {
        printf("Invalid\n");
        return 0;
    }
    for (int i = 0; i < k; i++) {
        window_sum += arr[i];
    }

    max_sum = window_sum;

    for (int i = k; i < n; i++) {
        window_sum = window_sum - arr[i - k] + arr[i];
        if (window_sum > max_sum) {
            max_sum = window_sum;
        }
    }

    printf("Maximum sum of %d consecutive elements: %d\n", k, max_sum);

    return 0;
}

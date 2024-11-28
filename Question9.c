/*
Given an integer array, find the maximum length subarray having a given sum.(USE
HASHMAP Concept)

Input:nums[] = { 5, 6, -5, 5, 3, 5, 3, -2, 0 }target = 8
Output:{ -5, 5, 3, 5 }
Subarrays with sum 8 are { -5, 5, 3, 5 },{ 3, 5 },{ 5, 3 }
The longest subarray is { -5, 5, 3, 5 } having length 4.
*/

#include <stdio.h>
int main() {
    int nums[] = { 5, 6, -5, 5, 3, 5, 3, -2, 0 };
    int target = 8; 
    int n = sizeof(nums) / sizeof(nums[0]); 

    int max_length = 0;
    int start_index = -1;

  for (int i = 0; i < n; i++) {
        int sum = 0; 
        for (int j = i; j < n; j++) {
            sum += nums[j];
            if (sum == target) {
                int length = j - i + 1; 
                if (length > max_length) {
                    max_length = length; 
                    start_index = i;
                }
            }
        }
    }
    if (max_length > 0) {
        printf("Longest subarray with sum %d is: { ", target);
        for (int i = start_index; i < start_index + max_length; i++) {
            printf("%d ", nums[i]);
        }
        printf("}\n");
    } else {
        printf("No subarray found with sum %d\n", target);
    }

    return 0;
}

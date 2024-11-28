/*
Given an integer array nums and an integer k, return the kth largest element in the array.
Note that it is the kth largest element in the sorted order, not the kth distinct element.
Solve it without sorting.
Example:
Input: nums = [3,2,1,5,6,4], k = 2
Output: 5
*/

#include <stdio.h>
int main() {
    int nums[] = {3, 2, 1, 5, 6, 4};
    int k = 2;
    int n = sizeof(nums) / sizeof(nums[0]);
    int targetIndex = n - k;
    int left = 0, right = n - 1;

    while (left <= right) {
        int pivot = nums[right];
        int pivotIndex = left;

        for (int i = left; i < right; i++) {
            if (nums[i] < pivot) {
                int temp = nums[i];
                nums[i] = nums[pivotIndex];
                nums[pivotIndex] = temp;
                pivotIndex++;
            }
        }

        int temp = nums[pivotIndex];
        nums[pivotIndex] = nums[right];
        nums[right] = temp;

        if (pivotIndex == targetIndex) {
            printf("The %dth largest element is: %d\n", k, nums[pivotIndex]);
            break;
        } else if (pivotIndex < targetIndex) {
            left = pivotIndex + 1;
        } else {
            right = pivotIndex - 1;
        }
    }
    return 0;
}

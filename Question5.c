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

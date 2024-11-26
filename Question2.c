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

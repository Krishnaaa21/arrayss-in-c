#include <stdio.h>

int main() {
    int arr[100], n, i, j;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    printf("Duplicate elements: ");
    for (i = 0; i < n; ++i) {
        for (j = i + 1; j < n; ++j) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[j]);
            }
        }
    }
    return 0;
}

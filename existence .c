#include <stdio.h>

int main() {
    int arr[100], n, i, key, flag = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &key);
    for (i = 0; i < n; ++i) {
        if (arr[i] == key) {
            flag = 1;
            break;
        }
    }
    if (flag == 1) {
        printf("Element found at position %d.\n", i+1);
    } else {
        printf("Element not found.\n");
    }
    return 0;
}

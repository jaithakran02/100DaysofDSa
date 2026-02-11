#include <stdio.h>

int main() {
    int arr[20], n, x, pos, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &x);

    printf("Enter position: ");
    scanf("%d", &pos);

    // shift right
    for (i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = x;

    printf("Updated array:\n");
    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

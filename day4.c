#include <stdio.h>

int main() {
    int n, i;

    // Ask for size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Ask for elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int left = 0;
    int right = n - 1;
    int temp;

    // Two-pointer reverse
    while(left < right) {
        temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right--;
    }

    // Print result
    printf("Reversed array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}


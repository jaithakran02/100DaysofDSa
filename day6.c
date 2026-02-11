#include <stdio.h>

int main() {
    int n, i, j;

    scanf("%d", &n);
    int arr[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if(n == 0) {
        return 0;
    }

    i = 0;   // index of last unique element

    for(j = 1; j < n; j++) {
        if(arr[j] != arr[i]) {
            i++;
            arr[i] = arr[j];
        }
    }

    for(j = 0; j <= i; j++) {
        printf("%d ", arr[j]);
    }

    return 0;
}


#include <stdio.h>

int main() {
    char s[100];
    int left = 0, right = 0;
    int flag = 1;

    scanf("%s", s);

    // find length
    while (s[right] != '\0') {
        right++;
    }
    right--;   // last index

    // two-pointer comparison
    while (left < right) {
        if (s[left] != s[right]) {
            flag = 0;
            break;
        }
        left++;
        right--;
    }

    if (flag)
        printf("YES");
    else
        printf("NO");

    return 0;
}


#include <stdio.h>

int main() {
    int a[4] = {101, 102, 103, 101};
    int n = 4;
    int found = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                found = 1;
                break;
            }
        }
    }

    if (found)
        printf("Duplicate found");
    else
        printf("No duplicate");

    return 0;
}

#include <stdio.h>

int main() {
    int prices[] = {100, 250, 400, 150};
    int key = 400;

    for (int i = 0; i < 4; i++) {
        if (prices[i] == key) {
            printf("Price found");
            return 0;
        }
    }

    printf("Price not found");
    return 0;
}


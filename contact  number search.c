#include <stdio.h>

int main() {
    int contacts[] = {98765, 91234, 99887};
    int key = 11111;
    int found = 0;

    for (int i = 0; i < 3; i++) {
        if (contacts[i] == key) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Contact found");
    else
        printf("Contact not found");

    return 0;
}


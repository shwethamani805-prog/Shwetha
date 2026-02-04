#include <stdio.h>
#include <string.h>

int main() {
    char username[] = "admin";
    char password[] = "1234";

    if (strcmp(username, "admin") == 0 && strcmp(password, "1234") == 0)
        printf("Login successful");
    else
        printf("Login failed");

    return 0;
}


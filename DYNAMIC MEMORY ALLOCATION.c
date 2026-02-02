#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *marks;

    
    printf("Enter number of subjects: ");
    scanf("%d", &n);

    
    marks = (int *)malloc(n * sizeof(int));

    
    if (marks == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    
    for (i = 0; i < n; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    
    printf("\nStudent Marks:\n");
    for (i = 0; i < n; i++) {
        printf("Subject %d: %d\n", i + 1, marks[i]);
    }

    
    free(marks);

    return 0;
}
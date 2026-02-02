#include <stdio.h>
#include<stdlib.h>

int main() {
    int n, i;
    int *array;
    int sum =0;
    printf("Enter the number of element:");
    scanf("%d", &n);
    array = (int*)malloc(n *sizeof(int));
    if(array == NULL){
        printf("Memory not allocated \n");
        return 0;
    }
    else{
        printf("Memory allocated and the allocated memory is %d \n",n);
    }
    printf("Enter %d Numbers by adding a gap for each number \n",n);
    for(i=0; i<n; i++){
        scanf ("%d", &array[i]);
        sum +=array[i];
        
    }
    printf("The sum of all elments is: %d \n", sum);
    free (array);
    printf("Memory deleted successfully");


    return 0;
}
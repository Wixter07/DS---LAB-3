#include <stdio.h>
#include <stdlib.h>

int Smallest(int *arr, int size);

int main() {
    int size;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int *array = (int *)malloc(size * sizeof(int));
    if (array == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i);
        scanf("%d", &array[i]);
    }

    int smallest = Smallest(array, size);

    printf("The smallest element in the array is: %d\n", smallest);

    free(array);

    return 0;
}

int Smallest(int *arr, int size) {
    if (size <= 0) {
        printf("Invalid size!\n");
        return -1;  
    }

    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

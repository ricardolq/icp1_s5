#include <stdio.h>
#include <stdlib.h>

void allocate_memory(int **arr, int n) {
    *arr = (int *)malloc(n * sizeof(int));
    if (*arr == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    printf("Memory successfully allocated using malloc.\n");
}

void initialize_array(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }
}

void print_array(int *arr, int n) {
    printf("Elements of the array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void reallocate_memory(int **arr, int n) {
    *arr = (int *)realloc(*arr, n * sizeof(int));
    if (*arr == NULL) {
        printf("Memory reallocation failed\n");
        exit(1);
    }
    printf("Memory successfully reallocated using realloc.\n");
}

void free_memory(int *arr) {
    free(arr);
    printf("Memory successfully freed.\n");
}

int main() {
    int *arr;
    int n;

    // Dynamic memory allocation using malloc
    printf("Enter number of elements: ");
    scanf("%d", &n);

    allocate_memory(&arr, n);
    initialize_array(arr, n);
    print_array(arr, n);

    // Dynamic memory allocation using calloc
    arr = (int *)calloc(n, sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Memory successfully allocated using calloc.\n");

    initialize_array(arr, n);
    print_array(arr, n);

    // Reallocate memory using realloc
    printf("Enter new number of elements: ");
    scanf("%d", &n);

    reallocate_memory(&arr, n);
    //initialize_array(arr, n);
    print_array(arr, n);

    // Free the allocated memory
    free_memory(arr);

    return 0;
}

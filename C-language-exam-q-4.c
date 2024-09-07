#include <stdio.h>

void findCube(int *arr, int size) {
    for(int i = 0; i < size; i++) {
        *(arr + i) = (*(arr + i)) * (*(arr + i)) * (*(arr + i)); 
    }
}

 main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements:\n", size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    findCube(arr, size);

    printf("Cubes of the array elements are:\n");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

}





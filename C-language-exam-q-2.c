#include <stdio.h>

int sumOfArray(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

 main() {
    int size;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    int result = sumOfArray(arr, size);
    
    printf("The sum of the array elements is: %d\n", result);
    
}

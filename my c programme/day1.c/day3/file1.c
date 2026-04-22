#include <stdio.h>

int main() {
    int size;
    
    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];

    
    for(int i = 0; i < size; i++) {
        printf("Enter the integer: ");
        scanf("%d", &arr[i]);
    }

    printf("Array elements: ");
    for(int i = 0; i < size; i++) {
        printf("%d  ", arr[i]);
    }

   
    int max = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    
    printf("\nMaximum value = %d", max);

    return 0;
}
#include <stdio.h>
int Sum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    
    int size = sizeof(arr) / sizeof(int);
    
	int sum = Sum(arr, size);
    
	printf("Sum of all elements in the array is %d\n", sum);
    return 0;
}


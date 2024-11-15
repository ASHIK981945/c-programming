  #include <stdio.h>

void findMinMax(int *arr, int size, int *min, int *max) {
    *min = *max = *arr;  // Initialize min and max to the first element

    // Traverse the array using pointers
    for (int i = 1; i < size; i++) {
        if (*(arr + i) < *min) { //12<23
            *min = *(arr + i);//12
        }
        if (*(arr + i) > *max) { //56>23
            *max = *(arr + i);//56
        }
    }
}

int main() {
    int arr[] = {23, 12, 56, 78, 5, 89, 34, 90};
    int size = sizeof(arr) / sizeof(arr[0]);
    int min, max;

    // Call function to find min and max
    findMinMax(arr, size, &min, &max);

    printf("Minimum value in the array: %d\n", min);
    printf("Maximum value in the array: %d\n", max);

    return 0;
}
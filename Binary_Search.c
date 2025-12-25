/**
 * Binary Search Implementation in C
 * Author: [Your Name/Team Name]
 * Date: [Date]
 * Description: Efficient algorithm for searching sorted arrays
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * Performs binary search on a sorted array
 * 
 * @param arr Sorted integer array
 * @param size Number of elements in array
 * @param target Value to search for
 * @return Index of target if found, -1 otherwise
 */
int binary_search(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;  // Prevents integer overflow
        
        if (arr[mid] == target) {
            return mid;  // Target found
        }
        
        if (arr[mid] < target) {
            left = mid + 1;  // Search in right half
        } else {
            right = mid - 1;  // Search in left half
        }
    }
    
    return -1;  // Target not found
}

/**
 * Main function to demonstrate binary search
 */
int main() {
    int arr[] = {2, 4, 6, 8, 10, 14, 16, 20};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;
    int result;

    printf("Binary Search Demo\n");
    printf("Array: [2, 4, 6, 8, 10, 14, 16, 20]\n");
    printf("Enter target number to search: ");
    
    if (scanf("%d", &target) != 1) {
        fprintf(stderr, "Error: Invalid input\n");
        return EXIT_FAILURE;
    }
    
    result = binary_search(arr, size, target);
    
    if (result != -1) {
        printf("Number found at index: %d\n", result);
    } else {
        printf("Number not found in array\n");
    }
    
    return EXIT_SUCCESS;
}

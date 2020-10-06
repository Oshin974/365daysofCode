#include "stdio.h"
#include "stdlib.h"

/**
 * Function: l_search
 * ------------------
 * 
 * Summary:
 * Given an array _arr_ of _arrSize_ length, find the _target_ value using the linear search algorithm.
 * 
 * Parameters:
 * arr: An integer array populated with values.
 * arrSize: An integer which is less than or equal to the size of _arr_.
 * target: An integer to search for inside _arr_.
 * 
 * Output:
 * An integer with the following values:
 * >= 0: A valid index for the _target_ was found in _arr_.
 * -1: The _target_ was not found in _arr_.
 */
int l_search(int arr[], int arrSize, int target) {
    // For each element in the array...
    for(int i = 0; i < arrSize; i++) {
        // If it is equal to our target, return it's location in the array (index).
        if (arr[i] == target) {
            return i;
        }
    }

    return -1;
}

int main() {
    printf("Welcome to the linear searcher!\n");

    int arrSize;

    // Ask the user for the desired number of elements.
    printf("Select your number array size: ");
    scanf("%d", &arrSize);

    int arr[arrSize];

    // Fill out the array with user-provided values.
    for(int i = 0; i < arrSize; i++) {
        printf("Enter value of element %d: ", i);
        scanf("%d", &arr[i]);
    }

    int target;

    // Get the value the user wants to search for.
    printf("Enter the element you'd like to search for: ");
    scanf("%d", &target);

    // Search for the target value in the given array.
    int location = l_search(arr, arrSize, target);
    
    // If the location is not -1, we found the target!
    if (location != -1) {
        printf("\nTarget %d located at index %d\n", target, location);
    } else {
        printf("\nTarget doesn't exist in array!\n");
    }

    return 0;
}

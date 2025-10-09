#ifndef SORTS_H
#define SORTS_H
#include <stdbool.h>
#include <stdlib.h>
#include "sort_helper.h"

/*** code for selection sort ****/

// Returns the minimum integer from a range in an array
// Input: array - An array of integers
//        start - Where to start looking in an array
//        stop - End of where to search. Typically the 'size' of the array.
// Output: The index in an array of the minimum value between a range [start,stop]
int findMinimum(int *array, int start, int stop)
{
    int min = start; 
   
    for (int i = start + 1; i < stop; i++){
        if (array[i] < array[min])
        {
            min = i;
        }
    }

    return min;
}



// =============== Sort Function ===============
// Provided below is a sort function. I have also
// provided a template for how to document functions
// to help organize your code.
// Name: sort
// Input(s):
//  - 'array' is a pointer to an integer address.
//     This is the start of some 'contiguous block of memory' that we will sort.
//  - 'size' tells us how big the array of data is we are sorting.
//  -  'print' tells it to print out after each interation
// Output: No value is returned, but 'array' should be modified to store a sorted array of numbers.
void selectionSortIntegers(int *array, unsigned int size, int print)
{ 
      if (size <= 1) return; 
    for (unsigned int i = 0; i < size - 1; i++) {
    
    // Find the index of the minimum value so we can start sorting
    int min = findMinimum(array, i, size);  


// If the smallest element isn’t already here, swap it into place
        if (min != i)
        {
            swap(&array[i], &array[min]);
        }

// Print the array after every iteration if the print flag is set
    if (print)
        {
            printf("Pass %u: ", i + 1);  // Autograder expects "Pass X: "
            printIntArray(array, size);
        }
    }
}

/***  Code for Insertion Sort ***/

// =============== Sort Function ===============
// Provided below is a sort function. I have also
// provided a template for how to document functions
// to help organize your code.
// Name: sort
// Input(s):
//  - 'array' is a pointer to an integer address.
//     This is the start of some 'contiguous block of memory' that we will sort.
//  - 'size' tells us how big the array of data is we are sorting.
//  - 'print' tells it to print out after each iteration 
// Output: No value is returned, but 'array' should be modified to store a sorted array of numbers.
void insertionSortIntegers(int *array, unsigned int size, int print)
{
  // Start at the second element because the first one is already sorted
    for (unsigned int i = 1; i < size; i++)
    {
        // The value we’re trying to put in the right spot then compare with the element to the left

        int current = array[i];  
        int j = i - 1;           
        
        // Shift everything bigger than current to the right 
        // Move the element one spot to the right then check the next element to the left
        while (j >= 0 && array[j] > current)
        {
            array[j + 1] = array[j]; 
            j--;                     
        }

        // Put current where it belongs
        array[j + 1] = current;

        // Print the array after every iteration if print is on
       if (print)
        {
            printf("Pass %u: ", i);
            printIntArray(array, size);
        }
    } 

}

/** Code for Bubble Sort (from Lab -if not compiling, comment out the internals, but leave the function definition) ***/

// =============== Sort Function ===============
// Name: bubblesort
// Desc: O(n^2) comparison sort
// param(1): 'array' is a pointer to an integer address.
//           This is the start of some 'contiguous block of memory'
//           that we will sort.
// param(2)  'size' tells us how big the array of
//           data is we are sorting.
// param(3) 'print' tells it to print out after each iteration.
// Output:   No value is returned, but 'array' should
//           be modified to store a sorted array of size.
void bubbleSortIntegers(int *array, unsigned int size, int print){

    bool swapped;

    for (unsigned int i = 0; i < size - 1; i++) {
        swapped = false;

        // Compare each pair and swap if needed
        for (unsigned int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                swap(&array[j], &array[j + 1]);
                swapped = true;
            }
        }

        // Print the array after each pass if print is on
        if (print) {
            printf("Pass %u: ", i + 1);
            printIntArray(array, size);
        }

        // If nothing was swapped, the array is sorted
        if (!swapped) {
            break;
        }
    }

}

// ** You will work on merge sort during the lab on Module 06 ** //

// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int temp[], int l, int m, int r)
{
  // make sure arrays exist, otherwise quit
    if (arr == NULL || temp == NULL)
    {
        exit(1);
    }

    // check if the ranges are valid, if not just stop
    if (l > m || m + 1 > r)
        return;

    int i = l;     // start of left part
    int j = m + 1; // start of right part
    int k = l;     // position to put next smallest element in temp

    // go through both subarrays and put the smaller one in temp
    while (i <= m && j <= r)
    {
        if (arr[i] <= arr[j])
            temp[k++] = arr[i++]; // left smaller, put it and move
        else
            temp[k++] = arr[j++]; // right smaller, put it and move
    }

    // copy leftover elements from left part
    while (i <= m)
        temp[k++] = arr[i++];

    // copy leftover elements from right part
    while (j <= r)
        temp[k++] = arr[j++];

    // copy sorted stuff back into original array
    for (i = l; i <= r; i++)
        arr[i] = temp[i];
}

// To be built during week 6 lab
// Name: mergeSort
// Input(s):
//          (1) 'arr' is a pointer to an integer address.
//              This is the start of some 'contiguous block of memory' that we will sort.
//          (2) 'temp' is a pointer to an integer address.
//          	This helps temporarily store the sorted subarray.
//          (3) 'l' and 'r' are integers, which are the first index and the last index of 'arr' respectively.
// Output: No value is returned, but 'array' should be modified to store a sorted array of numbers.
void merge_sort(int arr[], int temp[], int l, int r)
{
    // make sure the arrays exist, if not just quit
    if (arr == NULL || temp == NULL) {
        exit(1);
    }

    // if there's 1 or 0 elements, it's already sorted
    if (l >= r) {
        return;
    }

    int m = (l + r) / 2; // find the middle

    // sort the left half
    merge_sort(arr, temp, l, m);

    // sort the right half
    merge_sort(arr, temp, m + 1, r);

    // merge the two halves together
    merge(arr, temp, l, m, r);
}

// lab build, merge sort

void mergeSortIntegers(int *array, unsigned int size, int print)
{ // print is ignored for this one
    if (array == NULL)
    {
        exit(1);
    }
    if (size <= 1)
        return;

    int *temp = (int *)malloc(sizeof(int) * size);
    merge_sort(array, temp, 0, size - 1);
    free(temp);
}

// provided code 

// =============== Helper Functions ===============
// Name:    compare
// Desc:    A compare function which returns
//          a value (positive,negative, or 0)
//          to show if the result is >,<, or =.
//
// Input:   a and b here are generic types,
//          that is why they are 'void'
int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

void quickSortIntegers(int* array, unsigned int size, int print) 
{   // print is ignored as qsort doesn't use it
    qsort(array, size, sizeof(int), compare);
}

#endif
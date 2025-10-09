// Compile with: gcc -Wall insertion_test.c -o insertion_test.out
// Windows: change .out to .exe
// Run with: ./insertion_test.out

#include <stdio.h>  // Include file for standard input/output
#include <stdlib.h> // so we can use atoi()
#include <time.h>   // so we can use time_t and clock_gettime()

#include "sorts.h"


// =============== Main Functions ===============
int main(int argc, char *argv[])
{

    // Some test data sets.
    int dataset1[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int dataset2[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int dataset3[] = {0, 3, 2, 1, 4, 7, 6, 5, 8, 9, 10};
    int dataset4[] = {2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int dataset5[] = {100, 201, 52, 3223, 24, 55, 623, 75, 8523, -9, 150};
    int dataset6[] = {-1, 1, 2, -3, 4, 5, -6, 7, 8, -9, 10};

    int print = 1;

    // Sort our integer array
    insertionSortIntegers(dataset1, 11, print);
    printf("\n");
    insertionSortIntegers(dataset2, 11, print);
    printf("\n");
    insertionSortIntegers(dataset3, 11, print);
    printf("\n");
    insertionSortIntegers(dataset4, 11, print);
    printf("\n");
    insertionSortIntegers(dataset5, 11, print);
    printf("\n");
    insertionSortIntegers(dataset6, 11, print);

    // make sure to add your own tests, such what happens when the dataset is {}?

// Test an empty array

int empty_dataset[1] = {1};
unsigned int empty_size = 0;
insertionSortIntegers(empty_dataset, empty_size, print);
printf("\n");

// Test a single-element array

int single_dataset[] = {82};
insertionSortIntegers(single_dataset, 1, print);
printf("\n");

// Test an array with all duplicates

int duplicates[] = {7, 7, 7, 7, 7};
insertionSortIntegers(duplicates, 5, print);
printf("\n");


    return 0;
}
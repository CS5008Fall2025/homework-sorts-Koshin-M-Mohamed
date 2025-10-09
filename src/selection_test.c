// Compile with: gcc -Wall selection_test.c -o selection_test.out
// Windows: change .out to .exe
// Run with: ./selection_test.out

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
    unsigned int size = 11;
    // Sort our integer array
    selectionSortIntegers(dataset1, size, print);
    printf("\n");
    selectionSortIntegers(dataset2, size, print);
    printf("\n");
    selectionSortIntegers(dataset3, size, print);
    printf("\n");
    selectionSortIntegers(dataset4, size, print);
    printf("\n");
    selectionSortIntegers(dataset5, size, print);
    printf("\n");
    selectionSortIntegers(dataset6, size, print);

    // make sure to add your own tests, such what happens when the dataset is {}?

int empty_dataset[1] = {1};
unsigned int empty_size = 0;
if (empty_size > 0) {
    selectionSortIntegers(empty_dataset, empty_size, print);
}
printf("\n");

    // Single-element array
    int single_dataset[] = {42};
    selectionSortIntegers(single_dataset, 1, print);
    printf("\n");

    // Array with all duplicates
    int duplicates[] = {7, 7, 7, 7, 7};
    selectionSortIntegers(duplicates, 5, print);
    printf("\n");


    return 0;
}
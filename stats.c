/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author Mark Schlining
 * @date 06/01/2023
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  print_array(test, SIZE);
  print_statistics(test);
}

/* Add other Implementation File Code Here */
void print_statistics(unsigned char *arr) {
  unsigned char median = find_median(arr, SIZE);
  unsigned char mean = find_mean(arr, SIZE);
  unsigned char max = find_maximum(arr, SIZE);
  unsigned char min = find_minimum(arr, SIZE);

  printf("Array statistics\n");
  printf("Min: %hhu\n", min);
  printf("Max: %hhu\n", max);
  printf("Mean: %hhu\n", mean);
  printf("Median: %hhu\n", median);
}

void print_array(unsigned char *arr, unsigned int size) {
  printf("Array: ");
    for (int i = 0; i < size; ++i) {
        printf("%hhu ", arr[i]);
    }
    printf("\n");
}

unsigned char find_median(unsigned char *arr, unsigned int size) {
  sort_array(arr, size);

  if (size % 2 != 0) {
    return arr[size / 2];
  } else {
    unsigned char middle1 = arr[(size / 2) - 1];
    unsigned char middle2 = arr[size / 2];
    return (middle1 + middle2) / 2;
  }
}

unsigned char find_mean(unsigned char *arr, unsigned int size) {
  if (size == 0) {
        return 0.0;  
    }

    unsigned int sum = 0;
    for (size_t i = 0; i < size; ++i) {
        sum += arr[i];
    }

    return sum / size;
}

unsigned char find_maximum(unsigned char *arr, unsigned int size) {
  if (size == 0) {
        return 0;
    }

    unsigned char max = arr[0];
    for (size_t i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

unsigned char find_minimum(unsigned char *arr, unsigned int size) {
  if (size == 0) {
        return 0;
    }

    unsigned char min = arr[0];
    for (size_t i = 1; i < size; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    return min;
}

void sort_array(unsigned char *arr, unsigned int size) {
  for (size_t i = 0; i < size - 1; ++i) {
        for (size_t j = 0; j < size - i - 1; ++j) {
            if (arr[j] < arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                unsigned char temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

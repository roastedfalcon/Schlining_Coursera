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
 * @file stats.h
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author Mark Schlining
 * @date 06/01/2023
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Print statistics of array
 *
 * This function takes an array of unsigned chars and prints
 * its statistics including the min and max values and the mean
 * and median values.
 *
 * @param arr Array of unsigned chars
 */
void print_statistics(unsigned char *arr);

/**
 * @brief Print array
 *
 * This function takes an array of unsigned chars and prints
 * the array to the screen
 *
 * @param arr Unsigned char array
 * @param size Integer size of array
 */
void print_array(unsigned char *arr, unsigned int size);

/**
 * @brief Find median value of array
 *
 * This function, given an array of unsigned chars and its size
 * will return the median float value of the array.
 *
 * @param arr Unsigned char array
 * @param size Integer size of array
 *
 * @return Median value of array as a float
 */
float find_median(unsigned char *arr, unsigned int size);

/**
 * @brief Find mean value of array
 *
 * This function, given an array of unsigned chars and its size
 * will return the mean float value of the array.
 *
 * @param arr Unsigned char array
 * @param size Integer size of array
 *
 * @return Mean value of array as a float
 */
float find_mean(unsigned char *arr, unsigned int size);

/**
 * @brief Find maximum value in array
 *
 * This function, given an array of unsigned chars and 
 * unsigned int for its size, will return an unsigned char 
 * corresponding to the maximum element.
 *
 * @param arr Unsigned char array
 * @param size Integer size of array
 *
 * @return Maximum value unsigned char
 */
unsigned char find_maximum(unsigned char *arr, unsigned int size);

/**
 * @brief Find minimum value in array
 *
 * This function, given an array of unsigned chars and 
 * unsigned int for its size, will return an unsigned char 
 * corresponding to the minimum element.
 *
 * @param arr Unsigned char array
 * @param size Integer size of array
 *
 * @return Minimum value unsigned char
 */
unsigned char find_minimum(unsigned char *arr, unsigned int size);

/**
 * @brief Sort array from largest to smallest
 *
 * This function will sort an array of unsigned chars from 
 * largest to smallest. It will mutate the original array
 * passed in.
 *
 * @param arr Unsigned char array
 * @param size Integer size of array
 */
void sort_array(unsigned char *arr, unsigned int size);

#endif /* __STATS_H__ */

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
 * @file <stats.h> 
 * @brief <Report Analysis on given data set>
 *
 * <To find maximum, minimum, median and mean of data set. Print the data in screen after sorting is done>
 *
 * @author <R Subha>
 * @date <27 May 2019 >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

void print_statistics();
/**
 * @brief Print the expected result of program.
 *
 * This function prints what operations needs to be executed in a particular order.
 *
 * @param There is no input parameter in this function
*/

void print_array(unsigned char*, int);
/**
 * @brief Print the contents of given array 'test'
 *
 * This function takes array and size of array as input parameter and display the contents of 
 * array and its length.
 *
 * @param Takes 1 byte character data.
 * @param Takes 4 bytes integer data.
*/

void sort_array(unsigned char*, int);
/**
 * @brief Print array in ascending order.
 *
 * This function takes array and size of array as input parameter and sort the unsorted array 
 * contents and display it on screen.
 *
 * @param Takes 1 byte character data.
 * @param Takes 4 bytes integer data.
*/

int find_median(unsigned char*, int);
/**
 * @brief Finds median of array.
 *
 * This function takes array and size of array as input parameter and find median value by  
 * calculating   
 * 1) If SIZE is even, calaculate average of middle two elements of array.
 * 2) If SIZE is odd, middle element is a median value. 
 *
 * @param Takes 1 byte character data.
 * @param Takes 4 bytes integer data.
 *
 * @return Returns 4 byte integer Median data.
*/

int find_mean(unsigned char*, int);
/**
 * @brief Finds mean of array.
 *
 * This function takes array and size of array as input parameter and find mean value by  
 * calculating average of contents of array. 
 *
 * @param Takes 1 byte character data.
 * @param Takes 4 bytes integer data.
 *
 * @return Returns 4 byte integer Mean data.
*/

int find_maximum(unsigned char*, int);
/**
 * @brief Finds the largest element in array.
 *
 * This function takes array and size of array as input parameter and find the largest element in array by comparing each and every element with other elements.
 *
 * @param Takes 1 byte character data.
 * @param Takes 4 bytes integer data.
 *
 * @return Returns 4 byte integer biggest data.
*/

int find_minimum(unsigned char*, int);
/**
 * @brief Finds the smallest element in array.
 *
 * This function takes array and size of array as input parameter and find the smallest element in array by comparing each and every element with other elements.
 *
 * @param Takes 1 byte character data.
 * @param Takes 4 bytes integer data.
 *
 * @return Returns 4 byte integer smallest data.
*/
#endif /* __STATS_H__ */

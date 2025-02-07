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
 * @brief Header file wih function declarations of statistics functions
 *
 * This file includes declarations of functions used in the stats.c file
 * The functions are used to print statistics of an array, print an array,
 * find median, mean, maximum, minimum and sort an array.
 * 
 * @author Luis Castillo
 * @date 07/02/2025
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief prints statistics of the array
 *
 * This function takes an array and calls other functions to show
 * the median, maximum, minimum and mean of the array.
 *
 * @param array Is the array to be processed
 * @param size Is the size of the array
 *
 * @return none
 */
void print_statistics(unsigned char array[], int size);

/**
 * @brief prints the array
 *
 * This function takes as an input an array of integers and prints
 * it on the console.
 *
 * @param array Is the array to be printed
 * @param size Is the size of the array
 *
 * @return none
 */
void print_array(unsigned char array[], int size);

/**
 * @brief Finds the median of the array
 *
 * The function takes an array and size, then it sorts the array
 * and finds the median.
 *
 * @param array Is the array to be printed
 * @param size Is the size of the array
 *
 * @return Return the median as a float value
 */
float find_median(unsigned char array[], int size);

/**
 * @brief Finds the mean of the array
 *
 * The function takes an array and it size, to calculate the mean
 * of the array.
 *
 * @param array Is the array to be printed
 * @param size Is the size of the array
 *
 * @return Return the mean as a float value
 */
float find_mean(unsigned char array[], int size);

/**
 * @brief Finds the maximum of the array
 *
 * The function takes an array and it size, then it
 * find the maximum value of the array
 *
 * @param array Is the array to be printed
 * @param size Is the size of the array
 *
 * @return Return the maximum as an unsigned char
 */
unsigned char find_maximum(unsigned char array[], int size);

/**
 * @brief Finds the minimum of the array
 *
 * The function takes an array and it size, then it
 * find the minimum value of the array
 *
 * @param array Is the array to be printed
 * @param size Is the size of the array
 *
 * @return Return the minimum as a unsigned char
 */
unsigned char find_minimum(unsigned char array[], int size);

/**
 * @brief Sorts the given array
 *
 * The function takes an array and its size and sorts it
 *
 * @param array Is the array to be printed
 * @param size Is the size of the array
 *
 * @return None
 */
void sort_array(unsigned char array[], int size);

#endif /* __STATS_H__ */

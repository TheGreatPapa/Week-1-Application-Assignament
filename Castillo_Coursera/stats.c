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
 * @brief File used to implement the functions declared in stats.h
 * 
 * This file contains the main function of the application and definition
 * of the functions declared in stats.h. The functions are used to calculate
 * statistics of an array of unsigned char.
 *
 * @author Luis Castillo
 * @date 07/02/2025
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
 
 
   print_statistics(test, SIZE);
 
 }
 
 void print_statistics(unsigned char array[], int size){
   printf("Median:  %.2f\n",find_median(array, size));
   printf("Mean:    %.2f\n",find_mean(array, size));
   printf("Maximum: %u\n", find_maximum(array, size));
   printf("Minimum: %u\n", find_minimum(array,size));
 }
 
 void print_array(unsigned char array[], int size){
   for(int i = 0; i < size; i++){
     printf("%u ",array[i]); 
   }
   printf("\n");
 }
 
 
 float find_median(unsigned char array[], int size){
   sort_array(array,size);
   float median;
   if(size % 2 == 0){
     int half = size / 2;
     median = (array[half] + array[half + 1]) / 2;
   } else {
     int half = (size / 2) + 1;
     median = array[half];
   }
 
   return(median);
 }
 
 float find_mean(unsigned char array[], int size){
   float mean = 0;
   for(int i = 0; i < size; i++){
     mean += array[i];
   }
   mean = mean / size;
   return mean;
 }
 
 unsigned char find_maximum(unsigned char array[], int size){
   unsigned char max = array[0];
   for(int i = 0; i < size; i++){
     if(array[i] > max){
       max = array[i];
     } 
   }
   return max;
 }
 
 unsigned char find_minimum(unsigned char array[], int size){
   unsigned char min = array[0];
   for(int i = 0; i < size; i++){
     if(array[i] < min){
       min = array[i];
     } 
   }
   return min;
 }
 
 void sort_array(unsigned char array[], int size){
   for(int i = 0; i < size - 1; i ++){
     int min_idx = i;
 
     for(int j = i + 1; j < size; j++){
       if(array[j] < array[min_idx]){
         min_idx = j;
       }
     }
     int temp = array[i];
     array[i] = array[min_idx];
     array[min_idx] = temp;
   }
 }
 
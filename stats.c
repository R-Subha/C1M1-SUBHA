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
 * @file <stats.c> 
 * @brief <Report Analysis on given data set>
 *
 * <To find maximum, minimum, median and mean of data set. Print the data in screen after sorting is done  >
 *
 * @author <R Subha>
 * @date <27 May 2019 >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

int main() 
{
  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

  print_statistics();
  print_array(test, SIZE);
  int median = find_median(test, SIZE);
  printf("\n2. Median... %d",median);
  int mean = find_mean(test, SIZE);
  printf("\n3. Mean... %d",mean);
  int large = find_maximum(test, SIZE);
  printf("\n4. Maximum Element... %d",large);
  int small = find_minimum(test, SIZE);
  printf("\n5. Minimum Element... %d",small);
  sort_array(test, SIZE);

}

/* Add other Implementation File Code Here */
void print_statistics()
{
printf("\n Analysis of");
printf("\n1. Given Array");
printf("\n2. Median");
printf("\n3. Mean");
printf("\n4. Maximum");
printf("\n5. Minimum");
printf("\n6. Sorted Array");
printf("\n********************************************************************");
}


void print_array(unsigned char *test, int x)
{
 printf("\n1. Given Array...\n");
 for(int i=0; i<SIZE; i++)
 {
  printf("\n%d",(int)*test);
  test++;
 }
 printf("\nLength of array... %d\n",x);
 
}

int find_median(unsigned char *test, int x)
{
  int median = 0;
  if(x%2 == 0)
     median = (test[(x-1)/2] + test[x/2])/2;
  else  
     median = test[x/2];
  return median;
}

int find_mean(unsigned char *test, int x)
{
  int mean = 0;
  int sum = 0; 
  for (int i=0; i<x; i++)
     sum = sum + test[i];
  mean = sum/x;
  return mean;
}

int find_maximum(unsigned char *test, int x)
{
  int large = test[0];
  for(int i=0; i<x; i++)
  {
    if(test[i] >= large)
    {
      large = test[i];
    }
  } 
  return large;
}

int find_minimum(unsigned char *test, int x)
{
  int small = test[0];
  for(int i=0; i<x; i++)
  {
    if(test[i] <= small)
      {   
        small = test[i];
      }
  } 
  return small;
}

void sort_array(unsigned char *test, int x)
{
  int i=0 , j=0 , temp=0;
  for(i=0 ; i<x ; i++)
  {
    for(j=0 ; j<x-1 ; j++)
    {
      if(test[j]>test[j+1])
      {
        temp        = test[j];
        test[j]    = test[j+1];
        test[j+1]  = temp;
      }
    }
  }
  printf("\n6. Sorted Array...\n\n");
  for(i=0 ; i<x ; i++)
  {
    printf("%d\n",(int)*test);
    test++;
  }
}



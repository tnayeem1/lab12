#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

// Defining comparator function as per the requirement 
 static int myCompare(const void* a, const void* b) 
 { 

  // setting up rules for comparison
  return strcmp(*(const char**)a, *(const char**)b); 
  } 

  // Function to sort the array 
  void sort_alphabetic(const char* arr[], int n) 
  { 
  // calling qsort function to sort the array 
  // with the help of Comparator
  qsort(arr, n, sizeof(const char*), myCompare); 
  } 

  int main() 
  { 
  // Get the array of names to be sorted 
  const char* arr[] = { "Sysytems", "Programming", "Deep", "Learning", "Internet", "Things", "Robotics", "Course"}; 
  int n = sizeof(arr) / sizeof(arr[0]);
  int i; 

  // Sort the given names
  sort_alphabetic(arr, n); 

  // Print the sorted names
  printf("Sorted array is\n"); 
  for (i = 0; i < n; i++) 
  printf("%d: %s \n", i, arr[i]); 
  return 0; 
  }


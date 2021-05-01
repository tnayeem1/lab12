#include <stdio.h> 

// Function to sort the numbers using pointers 
 void sort_numeric_ascending(int n, int* ptr) 
 { 
 int i, j, t; 
// Sort the numbers using pointers 
 for (i = 0; i < n; i++) { 
 for (j = i + 1; j < n; j++) { 
 if (*(ptr + j) > *(ptr + i)) { 
 t = *(ptr + i); 
 *(ptr + i) = *(ptr + j); 
 *(ptr + j) = t; 
 } 
 }
 } 
 // print the numbers 
 for (i = 0; i < n; i++) 
 printf("%d ", *(ptr + i)); 
 } 

 void sort_numeric_descending(int n, int* ptr) 
 { 
 int i, j, t; 
// Sort the numbers using pointers
 for (i = 0; i < n; i++) { 
 for (j = i + 1; j < n; j++) { 
 if (*(ptr + j) < *(ptr + i)) { 
 t = *(ptr + i); 
 *(ptr + i) = *(ptr + j); 
 *(ptr + j) = t; 
   } 
  } 
 } 
  // print the numbers 
  for (i = 0; i < n; i++) 
  printf("%d ", *(ptr + i)); 
  } 
  int main() 
    { 
    int n = 11; 
    int arr[] = { 10, 0.25, -2342, 12123, 3.145435, 6, 6, 5.999, -2, -5, -109.56}; 
    char operation; printf("Enter A or a to sort in Ascending Order");
    printf("\nEnter D or d to sort in Descending Order\n");
    scanf("%c",&operation);
    if(operation=='A'||'a'){
    sort_numeric_ascending(n, arr); 
    } 
    else if(operation=='D'||'d'){
    sort_numeric_descending(n,arr); } 
    return 0; 
    }


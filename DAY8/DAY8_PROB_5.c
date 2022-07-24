/*5.Write a program in C to sort an array using Pointer.
steps:
1.initialize an array variable.
2.sort the numbers using pointer with for loop and
3.If *(ptr+j) greater than *(ptr+i) then again start looping for small number.   
4.If *(ptr+j) less than *(ptr+i) then check the conditions which is about swapping logic using third variable.
5.After checking the statements of if condition then print the sorted elements in ascending order.

*/
#include <stdio.h> 
// Function to sort the numbers using pointers 
void sort(int n, int* ptr) 
{ 
    int i, j, t; 
// Sort the numbers using pointers 
for (i = 0; i < n; i++) { 
for (j = i + 1; j < n; j++) { 
if (*(ptr + j) < *(ptr + i)) { 
//Do swap for sorting the variables.
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
// Driver code 
int main() 
{ 
//Declare the array variable.
int n = 5; 
int arr[] = { 25, 45, 89, 15, 82 }; 
   //function calling.
sort(n, arr);
return 0; 
} 

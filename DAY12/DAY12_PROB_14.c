/*14.Find common elements in three sorted arrays, 3 array values are given as input to program.

steps:
1]Initialize 3 arrays as array1,array2,array3.
2]sizeof array/2 for 3 arrays
3]let us assume array1 is i,array2 is j,array3 is k.
4]if i < j then increment i.
5]if j < k then increment j.
6]if i=j=k,then print that equal value otherwise it will check next index.
7]if found one value then again checked till reach end to find the another common value 
8]if the value found it will print otherwise it print already founded value.
9]if common values are found it prints that values otherwise it will print no common values found.

*/

// C program to print common elements in three arrays

#include <stdio.h>
 
// This function prints common elements in ar1
void findCommon(int ar1[], int ar2[], int ar3[], int n1,
                int n2, int n3)
{
    // Initialize starting indexes for ar1[], ar2[] and
    // ar3[]
    int i = 0, j = 0, k = 0;
 
    // Iterate through three arrays while all arrays have
    // elements
    while (i < n1 && j < n2 && k < n3) {
        // If x = y and y = z, print any of them and move
        // ahead in all arrays
        if (ar1[i] == ar2[j] && ar2[j] == ar3[k]) {
            printf("%d ", ar1[i]);
            i++;
            j++;
            k++;
        }
 
        // x < y
        else if (ar1[i] < ar2[j])
            i++;
 
        // y < z
        else if (ar2[j] < ar3[k])
            j++;
 
        // We reach here when x > y and z < y, i.e., z is
        // smallest
        else
            k++;
    }
}
 
// Driver code
int main()
{
    int ar1[] = { 4, 5, 10, 20, 40, 80 };
    int ar2[] = { 1,3,4,6, 7, 20, 80, 100 };
    int ar3[] = { 3, 4, 15, 20, 30, 70, 80, 120 };
    int n1 = sizeof(ar1) / sizeof(ar1[0]);
    int n2 = sizeof(ar2) / sizeof(ar2[0]);
    int n3 = sizeof(ar3) / sizeof(ar3[0]);
 
    printf("Common Elements are ");
    findCommon(ar1, ar2, ar3, n1, n2, n3);
    return 0;
}

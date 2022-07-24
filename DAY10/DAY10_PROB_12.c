/*12.Write a program to Implement ”Selection Sort” using Recursion for given elements (Number elements will vary, so make it as configurable item)

How Selection sort works is explained below.

steps:
1. Declaring the array with size and other variable and taking the input from user
2. Call a one function with recursion method with sorting the numbers.
3. By comparing the Loops compare the index by index and swap them.
4. Call again the function for repeating process
*/
#include <stdio.h>
 
void selection(int [], int, int, int, int);                                 //declaring the function prototype
 
int main()
{
    int list[50], size, temp, i, j;                                         //declaring the array with size and other variable
 
    printf("Enter the size of the list: ");                                 //reading the size from the user 
    scanf("%d", &size);
    printf("Enter the elements in list:\n");                                //reading the elements and storing in the array
    for (i = 0; i < size; i++)
    {
        scanf("%d", &list[i]);
    }
    selection(list, 0, 0, size, 1);                                       //calling the function 
    printf("The sorted list in ascending order is\n");                    //printing the elements after sorting the elements
    for (i = 0; i < size; i++)
    {
        printf("%d  ", list[i]);
    }
 
    return 0;
}
 
void selection(int list[], int i, int j, int size, int flag)        //defining the function 
{
    int temp;                                                     //declaring the variable
 
    if (i < size - 1)                                             //reading till list of elements
    {
        if (flag)                                                 //if flag is yes then it increments the value by 1
        {
            j = i + 1;
        }
        if (j < size)                                           //it will till the size of elements
        {
            if (list[i] > list[j])                                //it will the elements are greater then it will swap the elememts
            {
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
            selection(list, i, j + 1, size, 0);                      //calling the function again and again
        }
        selection(list, i + 1, 0, size, 1);                         //calling the function agaian
    }
  return 0;
}

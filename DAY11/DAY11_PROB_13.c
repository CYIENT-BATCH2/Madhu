/*13.Write a program to do binary search in a sorted array. Program should take input of sorted values and search value. (Make number of elements as configurable value)

How binary search works is explained below.

steps:
1]take the sorted data.
2]take search value.
3]middle value is is equal to addition of low index and high index and divide by 2.
4]after getting the mid value check whether the input(search value) is equal to the mid value.
5]if mid value of index is less than input it prints the mid value + 1 otherwise mid value - 1.
6]if cond is false Repeatedly check from the second point until the value is found.

*/
int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
  
        // Check if x is present at mid
        if (arr[m] == x)
            return m;
  
        // If x greater, ignore left half
        if (arr[m] < x)
            l = m + 1;
  
        // If x is smaller, ignore right half
        else
            r = m - 1;
    }
  
    // if we reach here, then element was
    // not present
    return -1;
}
  
int main(void)
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;
    printf("enter value to be searched\n");
    scanf("%d",&x);
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1) ? printf("Element is not present"
                            " in array")
                   : printf("Element is present at "
                            "index %d",
                            result);
    return 0;
}

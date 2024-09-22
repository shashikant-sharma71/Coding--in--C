#include <stdio.h>

int linear_search(int arr[], int n, int t)
{
    for (int i = 0; i < n; i++)
        if (arr[i] == t)
            return i;
    return -1;
}

int main()
{
    int arr[] = {4, 5, 6, 7, 8, 9};
    int t = 9;
    int n = sizeof(arr) / sizeof(int);
    int indexsearch = linear_search(arr, n, t);
    (indexsearch == -1)
        ? printf("Element Not Found")

        : printf("Element was found in index %d", indexsearch);
}

